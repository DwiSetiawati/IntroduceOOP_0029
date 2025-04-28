#include <iostream>
using namespace std;

class Persegi_panjang
{
private:
    int panjang;
    int lebar;
    int luas;

public:
    void input_data()
    {
        cout << "Masukkan panjangnya: ";
        cin >> panjang;
        cout << "Masukkan lebarnya: ";
        cin >> lebar;
    }
};