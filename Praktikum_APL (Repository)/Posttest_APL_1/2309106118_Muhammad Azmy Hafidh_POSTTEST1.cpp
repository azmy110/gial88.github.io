#include <iostream>
using namespace std;

int main() {
    string NAMA;
    string NIM;
    int trylogin = 0;

    while (trylogin < 3) {
        cout << "Silahkan masukan nama anda : ";
        cin >> NAMA;
        cout << "Silakan masukan nim anda : ";
        cin >> NIM;

        if (NAMA == "Azmy" && NIM == "2309106118") {
            cout << "Anda berhasil login" << endl;
            cout << "Selamat Datang, " << NAMA << "!" << endl;

            while (true) { 
                string pilihan;
                double Celcius, Reamur, Fahrenheit, Kelvin;

                cout << "Pilihlah suhu yang ingin di konverensikan" << endl;
                cout << "1.Celcius" << endl;
                cout << "2.Kelvin" << endl;
                cout << "3.Reamur" << endl;
                cout << "4.Fahrenheit" << endl;
                cout << "5.Log Out" << endl;
                cout << "Silahkan masukan no pilihanan anda :" << endl;
                cin >> pilihan;

                if (pilihan == "1") {
                    cout << "Masukkan suhu Celcius yang akan dikonversikan : ";
                    cin >> Celcius;
                    Kelvin = Celcius + 273;
                    Reamur = Celcius * 4 / 5;
                    Fahrenheit = (Celcius * 9 / 5) + 32;
                    cout << Celcius << " Celcius = " << Kelvin << " Derajat Kelvin" << endl;
                    cout << Celcius << " Celcius = " << Reamur << " Derajat Reamur" << endl;
                    cout << Celcius << " Celcius = " << Fahrenheit << " Derajat Fahrenheit" << endl;
                } else if (pilihan == "2") {
                    cout << "Masukkan suhu Kelvin yang akan dikonversikan : ";
                    cin >> Kelvin;
                    Celcius = Kelvin - 273;
                    Reamur = (Kelvin - 273) * 4 / 5;
                    Fahrenheit = (Kelvin - 273) * 9 / 5 + 32;
                    cout << Kelvin << " Kelvin = " << Celcius << " Derajat Celcius" << endl;
                    cout << Kelvin << " Kelvin = " << Reamur << " Derajat Reamur" << endl;
                    cout << Kelvin << " Kelvin = " << Fahrenheit << " Derajat Fahrenheit" << endl;
                } else if (pilihan == "3") {
                    cout << "Masukkan suhu Reamur yang akan dikonversikan : ";
                    cin >> Reamur;
                    Celcius = Reamur * 5 / 4;
                    Kelvin = Reamur * 5 / 4 + 273;
                    Fahrenheit = (Reamur * 9 / 4) + 32;
                    cout << Reamur << " Reamur = " << Celcius << " Derajat Celcius" << endl;
                    cout << Reamur << " Reamur = " << Kelvin << " Derajat Kelvin" << endl;
                    cout << Reamur << " Reamur = " << Fahrenheit << " Derajat Fahrenheit" << endl;
                } else if (pilihan == "4") {
                    cout << "Masukkan suhu Fahrenheit yang akan dikonversikan : ";
                    cin >> Fahrenheit;
                    Celcius = (Fahrenheit - 32) * 5 / 9;
                    Reamur = (Fahrenheit - 32) * 4 / 9;
                    Kelvin = (Fahrenheit - 32) * 5 / 9 + 273;
                    cout << Fahrenheit << " Fahrenheit = " << Celcius << " Derajat Celcius" << endl;
                    cout << Fahrenheit << " Fahrenheit = " << Reamur << " Derajat Reamur" << endl;
                    cout << Fahrenheit << " Fahrenheit = " << Kelvin << " Derajat Kelvin" << endl;
                } else if (pilihan == "5") {
                    cout << "Terima kasih telah menggunakan program ini." << endl;
                    break; 
                } else {
                    cout << "Pilihan tidak tersedia" << endl;
                    cout << "Silahkan coba lagi" << endl;
                    cout <<"________________________"<< endl;
                    cout <<" "<< endl;
                }
            }
            break; 
        } else {
            cout << "Login gagal. Silakan coba lagi." << endl;
            trylogin++;
        }
    }

    if (trylogin >= 3) {
        cout << "Anda sudah mencoba login sebanyak 3 kali. Program Berhenti." << endl;
    }

    return 0;
}
