#include <iostream>
using namespace std;
int main()
{
    int x_size, y_size, z_size;
    cout << "Masukkan ukuran array dalam tiga dimensi:" << endl;
    cout << "Ukuran dimensi x: ";
    cin >> x_size;
    cout << "Ukuran dimensi y: ";
    cin >> y_size;
    cout << "Ukuran dimensi z: ";
    cin >> z_size;
    // Deklarasi array
    int arr[x_size][y_size][z_size];
    // Input elemen
    for (int x = 0; x < x_size; x++)
    {
        for (int y = 0; y < y_size; y++)
        {
            for (int z = 0; z < z_size; z++)
            {
                cout << "Input Array[" << x << "][" << y << "]["
                     << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output Array (dengan indeks)
    cout << "Data Array:" << endl;
    for (int x = 0; x < x_size; x++)
    {
        for (int y = 0; y < y_size; y++)
        {
            for (int z = 0; z < z_size; z++)
            {
                cout << "Array[" << x << "][" << y << "][" << z
                     << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilan array (format matriks)
    cout << "Array dalam bentuk matriks:" << endl;
    for (int x = 0; x < x_size; x++)
    {
        for (int y = 0; y < y_size; y++)
        {
            for (int z = 0; z < z_size; z++)
            {
                cout << arr[x][y][z] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
