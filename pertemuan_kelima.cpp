#include <iostream>
using namespace std;

int bilangan1, bilangan2;

void inputData() {
    cout << "Masukan bilangan pertama : " ;
    cin >> bilangan1 ;
    cout << "Masukan bilangan kedua : " ;
    cin >> bilangan2;
}

int penjumlahan(int a, int b) {
    return a + b;
}
int pengurangan(int a, int b) {
    return a - b;
}
int perkalian(int a, int b) {
    return a * b;
}
float pembagian(int a, int b) {
    return a / b;
}



int main() {
    int pilihan;

    do{
        cout << "kalkulator Sederhana" << endl;
        cout << "====================" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. keluar" << endl;
        cout << "====================" << endl;
        cout << "Masukan Pilihan" << endl;
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            inputData();
            cout << "hasil penjumlahan = " << penjumlahan (bilangan1, bilangan2) << endl;
            break;
        case 2:
            inputData();
            cout << "hasil pengurangan = " << pengurangan (bilangan1, bilangan2) << endl;
            break;
        case 3:
            inputData();
            cout << "hasil perkalian = " << perkalian (bilangan1, bilangan2) << endl;
            break;
        case 4:
            inputData();
            cout << "hasil pembagian = " << pembagian (bilangan1, bilangan2) << endl;
            break;
        case 5:
            break;
        
        default:
            cout << "Pilihan Tidak Ada" << endl;
            break;
        }
    } while (pilihan != 5);

}