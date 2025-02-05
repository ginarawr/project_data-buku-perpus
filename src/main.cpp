#include <iostream>
using namespace std;

struct databuku{
    string  judul, nama;
    int id, tahunterbit;
};
const int maximal=100;
databuku buku[maximal];
int jumlahbuku=0;

bool validasiIdBuku(int idBaru){
    for (int i = 0; i < jumlahbuku; i++){
    if (buku[i].id == idBaru){
    return false;
    }

}
return true;
}

void tambahdatabuku(){
databuku bukubaru;
cout<<"\n\n----------------------------------------------\n";
        cout<<"Masukkan ID Buku: ";
        cin>>bukubaru.id;
        cin.ignore();
        if(!validasiIdBuku(bukubaru.id)){
            cout<<"ID Buku sudah ada. Silakan masukkan ID yang Unik.\n";
        return;
        }


    }

void tampilkanDaftarBuku(){
    cout<<"\n\n-----------------------------------------\n";
    cout<<"\n\n---Daftar Buku yang Telah di Data---\n\n";
    for(int i=0; i<jumlahbuku; i++){
    cout<<"ID : "<<buku[i].id<<"\n";
    cout<<"Judul : "<<buku[i].judul<<"\n";
    cout<<"Nama : "<<buku[i].nama<<"\n";
    cout<<"Tahun Terbit : "<<buku[i].tahunterbit<<"\n\n";
    }

}


void cariBuku(){
    cout<<"\n\n----------------------------------------------\n";
    int cariId;
    cout<<"\n\n Masukkan ID buku untuk informasi detail: ";
    cin>>cariId;

    cout<<"\n\n---Data Buku yang dicari---\n\n";
    for(int i=0; i<jumlahbuku; i++){
             if (cariId==buku[i].id){
    cout<<"\n ID : "<<buku[i].id<<"\n";
    cout<<"Judul : "<<buku[i].judul<<"\n";
    cout<<"Nama : "<<buku[i].nama<<"\n";
    cout<<"Tahun Terbit : "<<buku[i].tahunterbit<<"\n";

             }else if(cariId!=buku[i].id ) {
             cout<<"\n\ Data tidak ditemukan \n\n";

             }
    }
    }

void hapusdata(){
    cout<<"\n\n----------------------------------------------\n";
    int hapusid;
     cout<<"\n\n Masukkan ID buku yang ingin dihapus: ";
    cin>>hapusid;

    for(int i=0; i<jumlahbuku; i++){
        if (hapusid==buku[i].id){
        buku[i]=buku[i+1];
        jumlahbuku--;

        cout<<"\n ID buku berhasil dihapus! \n";
        }
    }

}


int main(){

 int pilihan;
    int id;

    do {
        cout<<"\n\n----------------------------------------------\n";
        cout << "\nSistem Pengelolaan Data Perpustakaan Mini" << endl;
        cout << "1. Tambah Buku" << endl;
        cout << "2. Tampilkan Daftar Buku" << endl;
        cout << "3. Cari Buku" << endl;
        cout << "4. Hapus Buku" << endl;
        cout << "5. Keluar \n" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1:
                tambahdatabuku();
                break;
            case 2:
                tampilkanDaftarBuku();
                break;
            case 3:
                cariBuku();
                break;
            case 4:
                hapusdata();
                break;
            case 5:
                cout << "Terima kasih telah menggunakan program ini." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n\n" << endl;
        }
    } while (pilihan != 5);

}
