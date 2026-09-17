#include <iostream>

int hitungPanjangString(const char* teks) {
    int panjang = 0;
    while (teks[panjang] != '\0') {
        panjang++;
    }
    return panjang;
}

char keHurufKapital(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}

int main() {
    char pesan_asli[1000];
    char pesan_sandi[1000];

    std::cout << "Masukkan pesan: ";
    
    std::cin.getline(pesan_asli, 1000);

    int panjang = hitungPanjangString(pesan_asli);

    if (panjang > 0) {
        pesan_sandi[0] = keHurufKapital(pesan_asli[0]);

        for (int i = 1; i < panjang; i++) {
            if (pesan_asli[i] == ' ' || pesan_asli[i - 1] == ' ') {
                pesan_sandi[i] = pesan_asli[i]; 
            } 
            else {
                char char_sekarang = keHurufKapital(pesan_asli[i]);
                char char_sebelum = keHurufKapital(pesan_asli[i - 1]);

                int nilai_sekarang = char_sekarang - 'A' + 1;
                int nilai_sebelum = char_sebelum - 'A' + 1;

                int nilai_baru = nilai_sekarang + nilai_sebelum;

                if (nilai_baru > 26) {
                    nilai_baru = nilai_baru - 26;
                }

                pesan_sandi[i] = (char)(nilai_baru + 'A' - 1);
            }
        }
        
        pesan_sandi[panjang] = '\0';
    }

    std::cout << "Pesan hasil sandi: " << pesan_sandi << std::endl;

    return 0;
}
