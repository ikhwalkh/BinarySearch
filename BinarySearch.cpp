//library
#include <iostream>
using namespace std;

//Deklarasi
int element[10];
int npanjang;
int x;

//void
void input()
{
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array (maksimal 10) : ";
        cin >> npanjang;

        if (npanjang <= 10)
        {
            break;
        }
        else
        {
            cout << "\n[i] Jumlah elemen tidak boleh lebih dari 10. Silakan coba lagi.\n";
        }
    }


    cout << "\n======================================\n";
    cout << "        Masukkan Elemen array         \n";
    cout << "======================================\n";

    for (int i = 0; i < npanjang; i++)
    {
        cout << "Data ke-" << (i + 1) << " = ";
        cin >> element[i];
    }
}


void bubbleSortArray()
{
    int pass = 1;
    do
    {
        for (int j = 0; j < npanjang - 1 - pass; j++)
        {
            if (element[j] > element[j + 1])
            {
                int temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
        pass++;
    } while (pass <= npanjang - 1);
}

void display()
{
    cout << "\n======================================\n";
    cout << "   Elemen Array Setelah Diurutkan (Asc)\n";
    cout << "=====================================\n";

    for (int j = 0; j < npanjang; j++)
    {
        cout << element[j];
        if (j < npanjang - 1)
        {
            cout << " -> ";
        }
    }
    cout << endl;
    
}

void binarySearch()
{
    char ulang;
    do
    {
        cout << "\n==============================================\n";
        cout << "                Pencarian Binary Search        \n";
        cout << "==============================================\n";

        cout << "Masukkan elemen yang ingin dicari: ";
        cin >> x;

        int low = 0;
        int high = npanjang - 1;

        do
        {
            int mid = (low + high) / 2;

            if (element[mid] == x)
            {
                cout << "\n[✔️] Elemen " << x << " ditemukan pada indeks " << mid << "\n";
                return;
            }

            if (x < element[mid])
            {
                high = mid - 1;
            }

            if (x > element[mid])
            {
                low = mid + 1;
            }
        } while (low <= high);

        if (low > high)
        {
            cout << "\n[x] Elemen " << x << " tidak ditemukan dalam array.\n";
        }

        cout << "\nIngin mencari lagi? (y/n): ";
        cin >> ulang;
        
    } while (ulang == 'y' || ulang == 'Y'); 
}