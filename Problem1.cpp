#include <iostream>

int hitungModulus(int angka, int pembagi) {
    return angka % pembagi;
}

int main() {
    int N, K;
    std::cout << "Masukkan jumlah astronot (N): ";
    std::cin >> N;
    std::cout << "Masukkan nilai (K): ";
    std::cin >> K;

    int astronot[1001];
    for (int i = 1; i <= N; i++) {
        astronot[i] = i;
    }

    int posisi_sekarang = 1;
    int total_tereliminasi = 0;

    std::cout << "\nUrutan astronot yang dieliminasi: ";

    while (total_tereliminasi < N - 1) {
        int hitungan = 1;

        while (hitungan < K) {
            posisi_sekarang++;
            if (posisi_sekarang > N) {
                posisi_sekarang = 1;
            }
            if (astronot[posisi_sekarang] != 0) {
                hitungan++;
            }
        }

        int nomor_dieliminasi = astronot[posisi_sekarang];
        std::cout << nomor_dieliminasi << " ";
        astronot[posisi_sekarang] = 0;
        total_tereliminasi++;

        if (hitungModulus(nomor_dieliminasi, 2) == 0) {
            K = K + 2;
        } else {
            K = K - 1;
        }

        if (K < 2) {
            K = 2;
        }

        if (total_tereliminasi < N - 1) {
            do {
                posisi_sekarang++;
                if (posisi_sekarang > N) {
                    posisi_sekarang = 1;
                }
            } while (astronot[posisi_sekarang] == 0);
        }
    }

    std::cout << "\n\n";
    for (int i = 1; i <= N; i++) {
        if (astronot[i] != 0) {
            std::cout << "Astronot terakhir yang bertahan: " << astronot[i] << std::endl;
            break;
        }
    }

    return 0;
}
