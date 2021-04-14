#include <iostream>
using namespace std;

int main() {
  int angka;
  cout << "Masukan Case(1-3) yang Anda Inginkan: ";
  cin >> angka;
  switch (angka)
  {
  case 1:
      cout << "Ini Case 1 dan Anda mendapat uang $1,000,000" << endl;
      break;
  case 2:
      cout << "Ini Case 2 dan Anda mendapat motor ferrari" << endl;
      break;
  default:
      cout << "Ini Case 2 dan Anda mendapat motor ferrari" << endl;
      break;
  }
  return 0;
}
