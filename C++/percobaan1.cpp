#include <iostream>
using namespace std;

int main() {
  char a;
  while (a == 'y' || a == 'Y')
  {
    string nama;
    cout << "Masukan Nama Anda: ";
    cin >> nama;
    if (nama == "nadia") {
    cout << "Namaku " << nama;
    }
    cin >> a;
  }   
  return 0; 
}
