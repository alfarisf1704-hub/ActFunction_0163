#include <iostream>
using namespace std;
// deklarasi variabel global
float r;
// Implementasi fungsi dan prosedur
void input()
{
    cout << "Masukan nilai r : ";
    cin >> r;
}
float LuasLingkaran(float b)
{
    return 3.14159 * b * b;
}
void output()
{
    cout << "Hasilnya : " << LuasLingkaran(r) << endl;
}
// Program Utama
int main()
{
    input();
    output();
}