#include <iostream>
using namespace std;

struct orang{
    string nama;
    string alamat;
    int umur;
};

int main ()
{
    //Deklarasi obyek dari struct orang
    orang mhs;
    //isi obyek
    cout << "Nama Mahasiswa:";
    cin >> mhs.nama;
    cout << "Alamat Asal:";
    cin >> mhs.alamat;
    cout << "umur:";
    cin >> mhs.umur;
    cout << endl;
    
}