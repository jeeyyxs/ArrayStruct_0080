#include <iostream>
using namespace std;

struct DetailAlamat{
    string desa;
    string kota;
};
struct orang{
    string nama;
    DetailAlamat Alamat;
    int umur;
};

int main()
{
    //Deklarasi obyek dari struct orang
    orang mhs;
    //isi obyek
    cout << "Nama Mahasiswa:";
    getline (cin >> mhs.nama);
    cout << "Alamat Desa:";
    getline (cin >> mhs.Alamat.desa);
    cout << "Alamat Kota:";
    getline (cin >> mhs.Alamat.kota);
    cout << "umur:";
    getline (cin >> mhs.umur);
    cout << endl;
    //Menampilkan isi obyek
    cout << "Nama: "<< mhs.nama<<endl;
    cout << "Desa: "<< mhs.Alamat.desa<<endl;
    cout << "Kota: "<< mhs.Alamat.kota<<endl;
    cout << "Umur: "<< mhs.umur<<endl;
}