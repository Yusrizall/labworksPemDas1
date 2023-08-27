#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    
    //inisialisasi
    int     ulang           {};
    int     cari            {4};
    int     max             {100};
    int     Soal[max]  =    {};
    int     Jawab[max] =    {};
    
    system("cls");
    
    //input nomor & angka yang dicari
    cout    << "Berapa banyak nomor yang ingin anda input? \n";
    cin     >> ulang;
    cout    << "\n";
    cout    << "Apa angka yang ingin anda cari? \n";
    cin     >> cari;
    cout    << "\n";
    
    //loop input 
    for (int i = 0; i < ulang; i++)
    {
        int j = i + 1;
        cout    << j << ". Input nomor ke-"<< j << " : ";
        cin     >> Soal[i];
    }
    
    cout    << "\n";

    //loop output
    for (int i = 0; i < ulang; i++)
    {
        int j = i + 1;
        int hitung {};
        Jawab[i] = Soal[i];
        while (Soal[i])
        {
            int carian = Soal[i] % 10;
            if (carian == cari)
            {
                hitung++;
            }
            Soal[i] = Soal[i] / 10;
        }
        cout    << j << ". Terdapat "<< hitung << " angka " << cari << " dalam bilangan " << Jawab[i] << "\n";
    }
    cout    << "\n";

    return 0;
}