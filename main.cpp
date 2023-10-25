//230030011
//I Wayan Krisna Yasa
//Praktikum Algoritma dan Struktur Data
//BA233
#include <iostream>

using namespace std;

int main()
{
    float panjang, lebar, tinggi, volume, luas_permukaan; //tipe data untuk menghitung balok menggunakan tipe data float
    int pilihan; //memberi tipe data berupa int pada variabel pilihan saat memilih menu
    cout << "Program Menghitung Volume dan Luas Permukaan Balok" << endl; //informasi judul program
    cout << "==================================================" << endl;//garis pembatas
    cout << "Menu :" << endl; //memberi informasi menu
    cout << "1. Volume Balok" << endl; //menu untuk menghitung volume balok
    cout << "2. Luas Permukaan Balok" << endl; //menu untuk menghitung luas permukaan balok
    cout << "3. Hitung Keduanya" << endl; //menu untuk menghitung volume dan luas permukaan balok
    cout << "==================================================" << endl;//garis pembatas
    cout << "Pilih Menu [1 / 2 / 3] : "; //user diminta untuk memasukkan angka 1 atau 2 atau 3 untuk memilih menu
    cin >> pilihan; //menerima masukan dari pilih menu dengan variabel pilihan
    cout << endl; //memberi spasi (enter) atau membuat line baru agar rapi
    if (pilihan == 1) { //kondisi (percabangan) jika user memilih menu 1
        cout << "Masukkan Panjang Balok : "; //user diminta memasukkan panjang balok
        cin >> panjang; //menerima masukan dari panjang balok degan variabel panjang
        cout << "Masukkan Lebar Balok : "; //user diminta memasukkan lebar balok
        cin >> lebar; //menerima masukan dari panjang balok degan variabel lebar
        cout << "Masukkan Tinggi Balok : "; //user diminta memasukkan tinggi balok
        cin >> tinggi; //menerima masukan dari panjang balok degan variabel tinggi
        volume=panjang*lebar*tinggi; //sebuah proses perhitungan volume balok
        cout << "Volume Balok = " <<volume; //memberi keluaran berupa hasil perhitungan volume balok
    }
    else if (pilihan == 2) { //kondisi (percabangan) jika user memilih menu 2
        cout << "Masukkan Panjang Balok : "; //user diminta memasukkan panjang balok
        cin >> panjang; //menerima masukan dari panjang balok degan variabel panjang
        cout << "Masukkan Lebar Balok : "; //user diminta memasukkan lebar balok
        cin >> lebar; //menerima masukan dari panjang balok degan variabel lebar
        cout << "Masukkan Tinggi Balok : "; //user diminta memasukkan tinggi balok
        cin >> tinggi; //menerima masukan dari panjang balok degan variabel tinggi
        luas_permukaan=2*(panjang*lebar)+2*(panjang*tinggi)+2*(lebar*tinggi); //sebuah proses perhitungan luas permukaan balok
        cout << "Luas Permukaan Balok = " <<luas_permukaan; //memberi keluaran berupa hasil perhitungan luas permukaan balok

    }
    else if (pilihan == 3) { //kondisi (percabangan) jika user memilih menu 3
        cout << "Masukkan Panjang Balok : "; //user diminta memasukkan panjang balok
        cin >> panjang; //menerima masukan dari panjang balok degan variabel panjang
        cout << "Masukkan Lebar Balok : "; //user diminta memasukkan lebar balok
        cin >> lebar; //menerima masukan dari panjang balok degan variabel lebar
        cout << "Masukkan Tinggi Balok : "; //user diminta memasukkan tinggi balok
        cin >> tinggi; //menerima masukan dari panjang balok degan variabel tinggi
        volume=panjang*lebar*tinggi; //sebuah proses perhitungan volume balok
        luas_permukaan=2*(panjang*lebar)+2*(panjang*tinggi)+2*(lebar*tinggi); //sebuah proses perhitungan luas permukaan balok
        cout << "Volume Balok = " <<volume << endl;//memberi keluaran berupa hasil perhitungan volume balok
        cout << "Luas Permukaan Balok = " <<luas_permukaan; //memberi keluaran berupa hasil perhitungan luas permukaan balok

    }
    else { //kondisi percabangan jika user menginput hal diluar menu yang tersedia
        cout << "Maaf Menu yang Anda Pilih Tidak Tersedia"; //informasi output atau keluaran kepada user bahwa menu yang dipilih tidak ada
    }

    return 0;
}
//catatan :
//alasan saya menggunakan float sebagai tipe data dari variabel panjang, lebar, tinggi, volume, luas_permukaan adalah agar user dapat menghtung bilangan desimal
//alasan saya menggunakan int sebagai tipe data dari variabel pilihan adalah agar user hanya bisa memasukkan bilangan asli atau bukan desimal
//alasan saya tidak menggunakan switch case adalah karena belum terlalu memahami atau masih dalam proses belajar, jadi saya menggunakan percabangan if else
