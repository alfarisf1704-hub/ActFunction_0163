#include <iostream>
using namespace std;
// deklarasi variabel global
float Phi, X, r;
// Implementasi fungsi dan prosedur
void input()
{
    cout << "Masukan nilai Phi : ";
    cin >> Phi;
    cout << "Masukan nilai X : ";
    cin >> X;
    cout << "Masukan nilai r : ";
    cin >> r;
}
float LuasLingkaran(float a, float b, float c)
{
    return a * b * c * c;
}
void output()
{
    cout << "Hasilnya : " << LuasLingkaran(Phi, X, r) << endl;
}
// Program Utama
int main()
{
    input();
    output();
}