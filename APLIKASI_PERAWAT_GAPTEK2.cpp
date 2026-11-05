#include <iostream>
#include <string>

using namespace std;

int main() {
    string namaPerawat;
    int skor = 0;
    int pilihan;

    cout << "===================================================\n";
    cout << "       SIMULASI EDUKASI: PERAWAT MELEK DIGITAL     \n";
    cout << "===================================================\n";
    cout << "Masukkan Nama Perawat: ";
    getline(cin, namaPerawat);

    cout << "\nHalo, Ners " << namaPerawat << "! Selamat datang di pelatihan literasi digital rumah sakit.\n";
    cout << "Jawablah 10 pertanyaan simulasi alur kerja sistem digital berikut (pilih 1-3):\n\n";

    cout << "A. Menyalakan Komputer\n";
    cout << "Apa tindakan pertama yang benar untuk menyalakan komputer kerja di ruang perawat?\n";
    cout << "1. Membiarkan komputer tetap mati\n";
    cout << "2. Mencabut kabel listrik\n";
    cout << "3. Menekan tombol power pada CPU/monitor\n";
    cout << "Pilihan Anda (1-3): ";
    cin >> pilihan;
    if (pilihan == 3) { skor += 10; cout << "[BENAR!]\n\n"; } else { cout << "[SALAH!]\n\n"; }

    cout << "B. Penggunaan Perangkat Input\n";
    cout << "Perangkat keras apa yang digunakan untuk mengetik data pasien ke dalam sistem komputer?\n";
    cout << "1. Printer\n";
    cout << "2. Keyboard dan Mouse\n";
    cout << "3. Speaker\n";
    cout << "Pilihan Anda (1-3): ";
    cin >> pilihan;
    if (pilihan == 2) { skor += 10; cout << "[BENAR!]\n\n"; } else { cout << "[SALAH!]\n\n"; }

    cout << "C. Memilih Aplikasi\n";
    cout << "Setelah komputer menyala, aplikasi apa yang harus dipilih untuk mulai mengelola rekam medis?\n";
    cout << "1. Aplikasi Rekam Medis Rumah Sakit (RME)\n";
    cout << "2. Aplikasi Game\n";
    cout << "3. Pemutar Musik\n";
    cout << "Pilihan Anda (1-3): ";
    cin >> pilihan;
    if (pilihan == 1) { skor += 10; cout << "[BENAR!]\n\n"; } else { cout << "[SALAH!]\n\n"; }

    cout << "D. Masuk / Login\n";
    cout << "Bagaimana cara masuk ke dalam sistem aplikasi rumah sakit menggunakan akun Anda?\n";
    cout << "1. Menekan tombol enter tanpa akun\n";
    cout << "2. Mematikan aplikasi\n";
    cout << "3. Mengetik Username dan Password yang valid\n";
    cout << "Pilihan Anda (1-3): ";
    cin >> pilihan;
    if (pilihan == 3) { skor += 10; cout << "[BENAR!]\n\n"; } else { cout << "[SALAH!]\n\n"; }

    cout << "E. Keamanan Kata Sandi\n";
    cout << "Bagaimana cara terbaik menjaga kerahasiaan kata sandi (password) akun Anda agar aman?\n";
    cout << "1. Menuliskannya di kertas tempel di atas meja monitor\n";
    cout << "2. Menjaganya tetap rahasia dan tidak memberikannya ke orang lain\n";
    cout << "3. Membagikannya ke semua teman shift\n";
    cout << "Pilihan Anda (1-3): ";
    cin >> pilihan;
    if (pilihan == 2) { skor += 10; cout << "[BENAR!]\n\n"; } else { cout << "[SALAH!]\n\n"; }

    cout << "F. Isi Data Pasien\n";
    cout << "Saat melakukan input data pasien baru ke dalam sistem, apa yang harus Anda lakukan?\n";
    cout << "1. Mengisi data sesuai identitas rekam medis pasien dengan teliti\n";
    cout << "2. Mengosongkan semua kolom\n";
    cout << "3. Mengetik data asal-asalan\n";
    cout << "Pilihan Anda (1-3): ";
    cin >> pilihan;
    if (pilihan == 1) { skor += 10; cout << "[BENAR!]\n\n"; } else { cout << "[SALAH!]\n\n"; }

    cout << "G. Penanganan Kesalahan Ketik\n";
    cout << "Jika tidak sengaja salah mengetik dosis obat pada sistem, apa yang harus segera dilakukan?\n";
    cout << "1. Membiarkannya salah\n";
    cout << "2. Memperbaiki/mengedit ulang sesuai data yang benar\n";
    cout << "3. Menghancurkan komputer\n";
    cout << "Pilihan Anda (1-3): ";
    cin >> pilihan;
    if (pilihan == 2) { skor += 10; cout << "[BENAR!]\n\n"; } else { cout << "[SALAH!]\n\n"; }

    cout << "H. Mengatasi Komputer Frozen / Membeku\n";
    cout << "Apa tindakan pertama jika layar komputer tiba-tiba membeku (frozen) saat digunakan?\n";
    cout << "1. Memukul layar sampai nyala\n";
    cout << "2. Melaporkan ke IT atau melakukan restart sesuai SOP\n";
    cout << "3. Meninggalkan rumah sakit\n";
    cout << "Pilihan Anda (1-3): ";
    cin >> pilihan;
    if (pilihan == 2) { skor += 10; cout << "[BENAR!]\n\n"; } else { cout << "[SALAH!]\n\n"; }

    cout << "I. Pelaporan Kendala Teknis\n";
    cout << "Kepada siapa Anda harus melaporkan jika terjadi kerusakan sistem yang tidak bisa diatasi?\n";
    cout << "1. Tim IT Support / Instalasi Sistem Rumah Sakit\n";
    cout << "2. Pasien di ruang rawat\n";
    cout << "3. Menyimpan masalah sendiri\n";
    cout << "Pilihan Anda (1-3): ";
    cin >> pilihan;
    if (pilihan == 1) { skor += 10; cout << "[BENAR!]\n\n"; } else { cout << "[SALAH!]\n\n"; }

    cout << "J. Keamanan Akun (Logout)\n";
    cout << "Apa yang wajib dilakukan pada akun Anda setelah selesai bekerja dan meninggalkan meja komputer?\n";
    cout << "1. Melakukan logout (keluar akun)\n";
    cout << "2. Membiarkan akun tetap aktif terbuka\n";
    cout << "3. Membuka media sosial\n";
    cout << "Pilihan Anda (1-3): ";
    cin >> pilihan;
    if (pilihan == 1) { skor += 10; cout << "[BENAR!]\n\n"; } else { cout << "[SALAH!]\n\n"; }

    cout << "===================================================\n";
    cout << "               HASIL EVALUASI LITERASI             \n";
    cout << "===================================================\n";
    cout << "Nama Perawat  : " << namaPerawat << endl;
    cout << "Total Skor    : " << skor << " dari 100\n";

    if (skor >= 75) {
        cout << "Status        : LULUS (Siap Menggunakan Sistem Digital RS)\n";
    } else {
        cout << "Status        : PERLU PELATIHAN LANJUTAN (Masih Gagap Teknologi)\n";
    }
    cout << "===================================================\n";

    return 0;
}
