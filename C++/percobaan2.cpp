#include <iostream>

using namespace std;

int main(){
    string nama;
    cout << "Masukan Nama Anda: ";
    cin >> nama;
    if (nama == "nadia"){
        cout << "namaku " << nama << endl;
    }else {
        cout << "Namaku bukan nadia, aku " << nama << endl;
    } 
    return 0;
}