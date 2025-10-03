#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Tugas {
    string nama;
    string deadline;
    string deskripsi;
    bool selesai;
};

int main() {
    vector<Tugas> daftar;
    int pilihan;
    Tugas t;
    int idx;
    do {
        cout << "\n=== Tracking Tugas Semester 3 (Vector) ===\n";
        cout << "1. Tambah Tugas\n";
        cout << "2. Lihat Semua Tugas\n";
        cout << "3. Tandai Tugas Selesai\n";
        cout << "4. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();

        if (pilihan == 1) {
            cout << "Nama Tugas     : ";
            getline(cin, t.nama);
            cout << "Deadline       : ";
            getline(cin, t.deadline);
            cout << "Deskripsi Tugas: ";
            getline(cin, t.deskripsi);
            t.selesai = false;
            daftar.push_back(t);
            cout << ">> Tugas berhasil ditambahkan!\n";
        } 
        else if (pilihan == 2) {
            if (daftar.empty()) {
                cout << "Belum ada tugas yang ditambahkan.\n";
            } else {
                cout << "\n--- Daftar Tugas ---\n";
                for (int i = 0; i < daftar.size(); i++) {
                    cout << i+1 << ". " << daftar[i].nama 
                         << "\n   Deadline   : " << daftar[i].deadline
                         << "\n   Deskripsi  : " << daftar[i].deskripsi
                         << "\n   Status     : " << (daftar[i].selesai ? "Selesai" : "Belum") 
                         << "\n\n";
                }
            }
        } 
        else if (pilihan == 3) {

            cout << "Tugas ke-berapa yang selesai? ";
            cin >> idx;
            if (idx > 0 && idx <= daftar.size()) {
                daftar[idx-1].selesai = true;
                cout << ">> Tugas \"" << daftar[idx-1].nama << "\" sudah ditandai selesai!\n";
            } else {
                cout << ">> Indeks tidak valid!\n";
            }
        }
        else if (pilihan != 4) {
            cout << ">> Pilihan tidak valid! Coba lagi.\n";
        }

    } while (pilihan != 4);

    cout << "Program selesai. Semangat kerjain tugasnya ya!\n";
    return 0;
}
