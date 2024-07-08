#include <iostream>
using namespace std;

class MasukUniversitas {
public:
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya;

public:
    MasukUniversitas() {
        uangPendaftaran = 0;
        uangSemesterPertama = 0;
        uangBangunan = 0;
        totalBiaya = 0;
    }

    virtual void namaJalurMasuk() = 0;
    virtual void hitungTotalBiaya() = 0;
    virtual void tampilkanTotalBiaya() = 0;
    virtual void input() = 0;

    void setUangPendaftaran(int nilai) {
        this->uangPendaftaran = nilai;
    }

    int getUangPendaftaran() {
        return uangPendaftaran;
    }

    void setUangSemesterPertama(int nilai) {
        this->uangSemesterPertama = nilai;
    }

    int getUangSemesterPertama() {
        return uangSemesterPertama;
    }

    void setUangBangunan(int nilai) {
        this->uangBangunan = nilai;
    }

    int getUangBangunan() {
        return uangBangunan;
    }

    void setTotalBiaya(int nilai) {
        this->totalBiaya = nilai;
    }

    int getTotalBiaya() {
        return totalBiaya;
    }
};

class SNBT : public MasukUniversitas {
public:
    void namaJalurMasuk() {
        cout << "SNBT" << endl;
    }

    void hitungTotalBiaya() {
        totalBiaya = uangPendaftaran + uangSemesterPertama + uangBangunan;
    }

    void tampilkanTotalBiaya() {
        cout << "Total Biaya: " << totalBiaya << endl;
        if (totalBiaya > 50000000) {
            cout << "Kategori: Mahal" << endl;
            cout << "Rekomendasi: Tidak Direkomendasikan" << endl;
        }
        else if (totalBiaya > 20000000) {
            cout << "Kategori: Sedang" << endl;
            cout << "Rekomendasi: Direkomendasikan" << endl;
        }
        else {
            cout << "Kategori: Murah" << endl;
            cout << "Rekomendasi: Direkomendasikan" << endl;
        }
    }

    void input() {
        cout << "Masukkan Uang Pendaftaran: ";
        cin >> uangPendaftaran;
        cout << "Masukkan Uang Semester Pertama: ";
        cin >> uangSemesterPertama;
        cout << "Masukkan Uang Bangunan: ";
        cin >> uangBangunan;
    }
};

class SNBP : public MasukUniversitas {
public:
    void namaJalurMasuk() {
        cout << "SNBP" << endl;
    }

    void hitungTotalBiaya() {
        totalBiaya = uangPendaftaran + uangSemesterPertama;
    }

    void tampilkanTotalBiaya() {
        cout << "Total Biaya: " << totalBiaya << endl;
        if (totalBiaya > 50000000) {
            cout << "Kategori: Mahal" << endl;
            cout << "Rekomendasi: Tidak Direkomendasikan" << endl;
        }
        else if (totalBiaya > 20000000) {
            cout << "Kategori: Sedang" << endl;
            cout << "Rekomendasi: Direkomendasikan" << endl;
        }
        else {
            cout << "Kategori: Murah" << endl;
            cout << "Rekomendasi: Direkomendasikan" << endl;
        }
    }

    void input() {
        cout << "Masukkan Uang Pendaftaran: ";
        cin >> uangPendaftaran;
        cout << "Masukkan Uang Semester Pertama: ";
        cin >> uangSemesterPertama;
    }
};

int main() {
    int pilihan;
    MasukUniversitas* masukUniversitas;

    while (true) {
        cout << "Pilih Jalur Masuk:" << endl;
        cout << "1. SNBT" << endl;
        cout << "2. SNBP" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih: ";
        cin >> pilihan;

        if (pilihan == 1) {
            masukUniversitas = new SNBT();
            masukUniversitas->namaJalurMasuk();
            masukUniversitas->input();
            masukUniversitas->hitungTotalBiaya();
            masukUniversitas->tampilkanTotalBiaya();
            delete masukUniversitas;
        }
        else if (pilihan == 2) {
            masukUniversitas = new SNBP();
            masukUniversitas->namaJalurMasuk();
            masukUniversitas->input();
            masukUniversitas->hitungTotalBiaya();
            masukUniversitas->tampilkanTotalBiaya();
            delete masukUniversitas;
        }
        else if (pilihan == 3) {
            break;
        }
    }

    return 0;
}