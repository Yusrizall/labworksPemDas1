#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main() {
    //inisialisasi
    int     tarik       {};
    double  tot_tarik   {};
    double  saldo       {};
    double  admin       {.5};
    char    tanya       {'T'};
    bool    ulang       {false};
    string  nama        {"Pooja"};
    
    system("cls");

    //input saldo awal
    cout    << "Masukkan saldo awal " << nama << " : $";
    cin     >> saldo;
    cout    << "\n";
    system("cls");
    
    //loop penarikan
    do{
        cout    << "Selamat datang nasabah "<< nama <<" di Bank GT-B" << "\n";
        cout    << "Saldo anda saat ini adalah : [$" << setprecision(2) << fixed << saldo << "] \n\n";

        //input penarikan
        cout    << "[INFORMASI] Mesin hanya bisa melakukan penarikan saldo nominal kelipatan 5." << "\n";
        cout    << "[INFORMASI] Biaya admin per penarikan saldo = $"<< setprecision(2) << fixed << admin << "." << "\n\n";
        cout    << "Masukkan nominal yang ingin ditarik : $";
        cin     >> tarik;
        cout    << "\n";

        //logika penarikan
        tot_tarik  = tarik + admin;
        if (tot_tarik > saldo)
        {
            cout    << "[GAGAL] Penarikan tidak boleh melebihi saldo !" << "\n";
            cout    << "[GAGAL] Saldo anda saat ini adalah : $" << setprecision(2) << fixed << saldo << "\n\n";
        }else if (tarik <= 0)
        {
            cout    << "[GAGAL] Penarikan tidak boleh 0 atau kurang dari 0." << "\n\n";
        }else if (tarik % 5 != 0.0)
        {
            cout    << "[GAGAL] Mesin hanya bisa melakukan penarikan saldo nominal kelipatan 5." << "\n\n";
        }else{
            saldo   = saldo - tot_tarik;
            cout    << "[SUKSES] Penarikan berhasil, saldo terpotong $" << setprecision(2) << fixed << tot_tarik << "\n";
            cout    << "[SUKSES] Saldo anda saat ini adalah : [$" << setprecision(2) << fixed << saldo << "]\n\n";
        }        
        
        //pertanyaan pengulangan
        cout    << "Apakah anda ingin menarik uang lagi ? y / t" << "\n";
        cin     >> tanya;
        if (tanya == 'y')
        {
            ulang = true;
            system("cls");
        }else if (tanya == 't')
        {
            ulang = false;
            system("cls");
        }
    } while (ulang == true);

    cout    <<  "\n --------------------------------------------"
            <<  "\n Terimakasih sudah menggunakan Bank GT-B !!!" 
            <<  "\n --------------------------------------------"
            <<  "\n\n\n";
}