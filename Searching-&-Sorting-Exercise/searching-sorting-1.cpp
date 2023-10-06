#include <iostream>
using namespace std;

// Definisi struktur dengan nama mahasiswa untuk menyimpan data mahasiswa
struct mahasiswa{
    // Member dari struct mahasiswa
    int nim;
    char nama[100];
    float ipk;
};

int main() {
    // Deklarasi variabel dari struct mahasiswa
    mahasiswa mhs[8] = {{19006,"Matthew",3.15},{19004,"Brad",2.94},{19003,"Anthony",2.78},{19007,"Gillian",3.37},{19005,"Susan",2.93},{19001,"Miya",3.01},{19008,"Alice",3.56},{19002,"Raif",3.44}};

    // Deklarasi variabel search
    int search, index = 0;

    // Menampilkan informasi data mahasiswa
    cout << "NIM\tNama\tIPK" << endl;
    for(int i = 0; i < 8; i++) {
        cout << mhs[i].nim << "\t" << mhs[i].nama << "\t" << mhs[i].ipk << endl;
    }

    // Linear Searching
    for(int i = 0; i < 8; i++) {
        if (mhs[i].nim == search) {
            index = i;
            break;
        }
    }

    // Menampilkan data yang dicari
    if(index == 1) {
        cout << "Data ditemukan:" << endl;
        cout << "NIM\t: " << mhs[index].nim << endl;
        cout << "Nama\t: " << mhs[index].nama << endl;
        cout << "IPK\t: " << mhs[index].ipk << endl;
    }

    return 0;
}