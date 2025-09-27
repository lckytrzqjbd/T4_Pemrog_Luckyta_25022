#include <iostream>
#include <string>
using namespace std;

int main() {
    string namaBarang, namaPelanggan1, namaPelanggan2;
    int beli;
    double harga = 0; 
    cout << "==================================================\n";
    cout << "Program membandingkan jumlah belanja 2 pelanggan\n";
    cout << "==================================================\n";
    cout << "  " << endl;
    cout << "=== Daftar Harga di Waroeng ===\n";
    cout << "minumanBersoda : Rp 5000\n";
    cout << "kacangPilus    : Rp 1000\n";
    cout << "tahuBulat      : Rp 500\n";
    cout << "susuUHT        : Rp 7000\n";
    cout << "tehCelup       : Rp 1000\n";
    cout << "kopiSusu       : Rp 3000\n";
    
    cout << " " << endl;

    cout << "=== Waroeng Kita Bersama ===\n";
    cout << "Masukkan Nama Pelanggan Ke-1: ";
    cin >> namaPelanggan1;
    cout << "Masukkan Nama Barang  : ";
    cin >> namaBarang;  

    cout << "Masukkan jumlah membeli : ";
    cin >> beli;

    
    if (namaBarang == "minumanBersoda") {
        harga = 5000;
    } else if (namaBarang == "kacangPilus") {
        harga = 1000;
    } else if (namaBarang == "tahuBulat") {
        harga = 500;
    } else if (namaBarang == "susuUHT") {
        harga = 7000;
    } else if (namaBarang == "tehCelup") {
        harga = 1000;
    } else if (namaBarang == "kopiSusu") {
        harga = 3000;
    } else {
        cout << "\n⚠️ Maaf,\"" << namaBarang << "\" tidak ada di warung." << endl;
        return 0;
    }

    double total1 = beli * harga;

    cout << "\n=== RECEIPT "<< namaPelanggan1 << " ===" << endl;
    cout << "Nama Barang   : " << namaBarang << endl;
    cout << "Jumlah Beli   : " << beli << endl;
    cout << "Harga Per Pcs : Rp " << harga << endl;
    cout << "Total         : Rp " << total1 << endl;
    
    cout << "  " << endl;
    
    cout << "Masukkan nama pelanggan ke-2: ";
    cin >> namaPelanggan2;
    
    cout << "Masukkan Nama Barang: ";
    cin >> namaBarang;
    
    cout << "Masukkan Jumlah Membeli: ";
    cin >> beli;
    
    if (namaBarang == "minumanBersoda") {
        harga = 5000;
    } else if (namaBarang == "kacangPilus") {
        harga = 1000;
    } else if (namaBarang == "tahuBulat") {
        harga = 500;
    } else if (namaBarang == "susuUHT") {
        harga = 7000;
    } else if (namaBarang == "tehCelup") {
        harga = 1000;
    } else if (namaBarang == "kopiSusu") {
        harga = 3000;
    } else {
        cout << "\n⚠️ Maaf,\"" << namaBarang << "\" tidak ada di warung." << endl;
        return 0;
    }
    
    double total2 = beli * harga;
    
    cout << "\n=== RECEIPT " << namaPelanggan2 << "===" << endl;
    cout << "Nama Barang   : " << namaBarang << endl;
    cout << "Jumlah Beli   : " << beli << endl;
    cout << "Harga Per Pcs : Rp " << harga << endl;
    cout << "Total         : Rp " << total2 << endl;
    
    cout << "  " << endl;
    
    cout << "========================================\n";
    cout << "               PEMBANDINGAN             \n";
    cout << "========================================\n";
    
    cout << "  " << endl;
    
    if (total1 > total2){
        cout << "Total Belanja " << namaPelanggan1 << " Lebih Banyak Dari " << namaPelanggan2;
    }else if (total1 == total2){
        cout << "Total Belanja " << namaPelanggan1 << " Sama Dengan Total Belanja " << namaPelanggan2;
    }else if (total1 < total2){
        cout << "Total Belanja " << namaPelanggan1 << " Lebih Sedikit Dari " << namaPelanggan2;
    }else {
        cout << "Total Belanja Tidak Dapat Dibandingkan" << endl;
    }

    return 0;
}
