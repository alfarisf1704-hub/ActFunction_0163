#include <iostream>
using namespace std;
// deklarasi variabel global
float Phi, r;
// Implementasi fungsi dan prosedur
void input()
{
    cout << "Masukan nilai Phi : ";
    cin >> Phi;
    cout << "Masukan nilai r : ";
    cin >> r;
}
float LuasLingkaran(float a, float b, )
{
    return a * b * b;
}
void output()
{
    cout << "Hasilnya : " << LuasLingkaran(Phi, r) << endl;
}
// Program Utama
int main()
{
    input();
    output();
}