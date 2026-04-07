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
    orang mhs[3];
    //isi obyek
    for(int i = 0; i <=2; i++)
    {
    cout << "Nama Mahasiswa:";
    getline(cin, mhs[i].nama);
    cout << "Alamat Desa:";
    getline(cin, mhs[i].Alamat.desa);
    cout << "Alamat Kota:";
    getline(cin, mhs[i].Alamat.kota);
    cout << "umur:";
    cin >> mhs[i].umur;
    cin.ignore();
    }
    cout << endl;
    //Menampilkan isi obyek
    for(int i = 0; i <=2; i++)
    {
    cout << "Nama: "<< mhs[i].nama<<endl;
    cout << "Desa: "<< mhs[i].Alamat.desa<<endl;
    cout << "Kota: "<< mhs[i].Alamat.kota<<endl;
    cout << "Umur: "<< mhs[i].umur<<endl;
    }
}