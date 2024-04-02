#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Masukkan jumlah bilangan: ";
    cin >> n;
    int bilangan[n];
    cout << "Masukkan " << n << " bilangan:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << "Bilangan ke-" << i + 1 << ": ";
        cin >> bilangan[i];
    }
    int maksimum = bilangan[0];
    int minimum = bilangan[0];
    double total = 0;
    for (int i = 0; i < n; ++i)
    {
        if (bilangan[i] > maksimum)
        {
            maksimum = bilangan[i];
        }
        if (bilangan[i] < minimum)
        {
            minimum = bilangan[i];
        }
        total += bilangan[i];
    }
    double rata_rata = total / n;
    cout << "Nilai maksimum: " << maksimum << endl;
    cout << "Nilai minimum: " << minimum << endl;
    cout << "Nilai rata-rata: " << rata_rata << endl;
    return 0;
}
