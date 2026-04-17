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
            cout << "\n[i] Jumlah elemen tidak boleh lebih dari 10 Silakan coba lagi. \n";
        }
    }
}