# Pemrograman Dasar - Luminous Quest (TLS 2026)

Repositori ini dibuat untuk memenuhi tugas pemrograman dasar TLS 2026. Di dalamnya terdapat dokumen perancangan logika algoritma (Fase 1) serta implementasi kode program asli menggunakan bahasa C++ (Fase 2).

## 👤 ID
* **Nama Lengkap:** Abyan Rasyid Ababil
* **Kelompok:** Opal
* **Angkatan:** 2026

---

## 📁 Isi Repositori
Repositori ini mengelola 3 file utama yang saling berkaitan:
1. `Pseudocode dan Logika.pdf` : Dokumen perancangan alur logika berupa *pseudocode* dan penjelasan logika berpikir.
2. `Problem1.cpp` : Kode program C++ untuk simulasi eliminasi lingkaran astronot.
3. `Problem2.cpp` : Kode program C++ untuk sistem enkripsi pesan rahasia.

---

## 📝 Penjelasan Ringkas Program

### 🚀 Problem 1: The Last Astronaut
Program simulasi permainan eliminasi melingkar berjumlah N astronot menggunakan hitungan langkah dinamis K. Variabel K akan berubah otomatis setelah setiap ada astronot yang gugur:
* **Nomor Genap:** Nilai K bertambah 2 langkah (hitungan berikutnya semakin panjang).
* **Nomor Ganjil:** Nilai K berkurang 1 langkah (hitungan berikutnya semakin pendek).
* *Catatan:* Program dibuat murni menggunakan library `<iostream>` dasar dengan fungsi sisa bagi (*modulus*) buatan sendiri tanpa fungsi bawaan.

### 👾 Problem 2: Alien-In-The-Middle
Program enkripsi sandi rahasia untuk mengamankan pesan manusia dari ancaman alien menggunakan metode pergeseran huruf melingkar (A=1 sampai Z=26):
* Karakter pertama pesan dibiarkan asli, sedangkan huruf berikutnya digeser maju berdasarkan nilai alfabet huruf tepat di kirinya.
* Jika hasil pergeseran melewati batas huruf Z, hitungan otomatis berputar kembali secara siklis ke huruf A.
* Program sudah mendukung input kalimat panjang ber-spasi secara utuh tanpa merusak format kata.
* *Catatan:* Seluruh fungsi kapitalisasi dan hitung panjang teks dibuat manual tanpa pustaka `<string>`.
