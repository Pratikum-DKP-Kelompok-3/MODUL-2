#include <iostream>
#include <cmath>

using namespace std;

//decalre fungsi
void menu();
void menu2();
void menu3();
double pangkat();
double akar();
double sin1();
double cos1();

int main() {
    cout <<"Kelompok: kelompok 3" << endl;
    cout << "Shift: shift 1" << endl;
    cout << "Nama anggota 1: Ananda Muhammad Zahir (21120120140115)" << endl;
    cout << "Nama anggota 2: Didan Hasan Murtaqi (21120120140103)" << endl;
    cout << "Nama anggota 3: Juliant Raffa (21120120130127)" << endl;
    cout << "Nama anggota 4: Sachiko Fitria Ramandanti (21120120140103)" << endl << endl;

    menu();
    int x;
    cin >> x; 
    if (x == 1)
    {
     menu2();
     int y;
     cin >> y;
        if (y == 1 )
        {
            pangkat();   
        }else if (y == 2){
            akar();
        }else {
            cout << "ERRORR" << endl;
        }      
    }else if (x == 2) {
        menu3();
        int a;
        cin >> a;
        if (a == 1 )
        {
            sin1();
        }else if (a == 2){
            cos1();
        }else {
            cout << "ERRORR" << endl;
        }      
    }else if (x !=1 || x !=2)
    {
        cout << "ERROR" << endl;
    }
    cin.get();
    return 0;
}    

//fungsi
void menu() {
    cout << "============================" << endl;
    cout << "    Program Kalkulator" << endl;
    cout << " 1. Kalkulator Eksponen" << endl;
    cout << " 2. Kalkulator Trigonometri" << endl;
    cout << "============================" << endl;
    cout << "Pilih Opsi: ";  
} 

void menu2() {
    cout << "================================" << endl;
    cout << "    Program Kalkulator Eksponen" << endl;
    cout << " 1. Kalkulator Pangkat" << endl;
    cout << " 2. Kalkulator Akar" << endl;
    cout << "================================" << endl;
    cout << "Pilih Opsi: ";
}

void menu3() {
    cout << "===================================" << endl;
    cout << "    Program Kalkulator Trigonometri" << endl;
    cout << " 1. Kalkulator Sin" << endl;
    cout << " 2. Kalkulator Cos" << endl;
    cout << "===================================" << endl;
    cout << "Pilih Opsi: ";
}

double pangkat(){
    char a;
    double x,b,hasil;
    bool con;
    do
    {  
     cout << "Masukan angka: ";
     cin >> x;
     cout << "Masukan pangkat: ";
     cin >> b;
     hasil = pow(x, b);
     cout << "Hasil pangkat adalah: " << hasil << endl << endl;
     cout << "Ingin Lanjut?(y/n) ";
     cin >> a;
     if (a == 'y' || a == 'Y')
     {
         con = true;
     }else {
         con = false;
     }
    } while (con);
    return hasil ;
}
double akar(){
    char a;
    double x,b,hasil,c;
    bool con;
    do
    {
        cout << "Masukan angka: ";
        cin >> x;
        cout << "Masukan akar: ";
        cin >> b;
        c = 1/b;
        hasil = pow(x, c);
        cout << "Hasil akar adalah: " << hasil << endl << endl;
        cout << "Ingin Lanjut?(y/n) ";
        cin >> a;
        if (a == 'Y' || a == 'y')
        {
            con = true;
        }else{
            con = false;
        }
    } while (con);
    return hasil;
}

double sin1(){
    char a; 
    double x,hasil;
    bool con;
    do
    { 
     cout << "Masukan sudut: ";
     cin >> x;
     hasil = x*3.14/180;
     cout << "Hasil akar adalah: " << sin(hasil) << endl << endl;
     cout << "Ingin Lanjut?(y/n) ";
     cin >> a;
      if (a == 'Y' || a == 'y')
        {
            con = true;
        }else{
            con = false;
        }
    } while (con);
    return sin(hasil) ;
}

double cos1(){
    char a;
    double x,hasil;
    bool con;
    do
    { 
     cout << "Masukan sudut: ";
     cin >> x;
     hasil = x*3.14/180;
     cout << "Hasil akar adalah: " << cos(hasil) << endl << endl;
     cout << "Ingin Lanjut?(y/n) ";
     cin >> a;
      if (a == 'Y' || a == 'y')
        {
            con = true;
        }else{
            con = false;
        }
    } while (con);
    return cos(hasil) ;
}

