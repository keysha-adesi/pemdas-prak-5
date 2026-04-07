#include <iostream>
using namespace std;

int main()
{
    // Deklarasi array disertai inisialisasi
    int dataku[5] = {10, 20, 30, 40, 50};

    // Deklarasi tanpa inisialisasi
    int datau[5];

    // Cara akses (membaca atau mengambil isi array)
    cout << "Isi data kedua : " << dataku[1] << endl;

    // Mengisi array
    dataku[1] = 200;
    cout << "Isi data kedua setelah diubah : " << dataku[1] << endl;

    // Mengisi data dengan perintah satu persatu
    cout << "Isikan data pertama : ";
    cin >> datau[0];

    cout << "Isikan data kedua : ";
    cin >> datau[1];

    return 0;
}