#include <iostream>
#include <vector>
using namespace std;
int main()
{
    const int JUMLAH_NOMOR = 10;
    int nomor[JUMLAH_NOMOR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Data Array: ";
    for (int i = 0; i < JUMLAH_NOMOR; ++i)
    {
        cout << nomor[i];
        if (i != JUMLAH_NOMOR - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
    vector<int> ganjil, genap;
    for (int i = 0; i < JUMLAH_NOMOR; ++i)
    {
        if (nomor[i] % 2 == 0)
        {
            genap.push_back(nomor[i]);
        }
        else
        {
            ganjil.push_back(nomor[i]);
        }
    }
    cout << "Nomor genap: ";
    for (int i = 0; i < genap.size(); ++i)
    {
        cout << genap[i];
        if (i != genap.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
    cout << "Nomor ganjil: ";
    for (int i = 0; i < ganjil.size(); ++i)
    {
        cout << ganjil[i];
        if (i != ganjil.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
    return 0;
}
