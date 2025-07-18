#include <stdio.h>
#include <string.h>

int main()
{
    // Apabila variabel tidak diinisialisasi, maka nilainya tidak terdefinisi
    int age = 0;
    float ipk = 0.0f;
    char grade = '/0';
    char nama[30] = "";

    printf("Ketikkan Umur Anda: ");
    // &age adalah alamat dari variabel age
    // scanf akan membaca input dari user dan menyimpannya di alamat tersebut
    // scanf tidak seperti print dan console.log, scanf tidak menampilkan apa-apa
    scanf("%d", &age);

    printf("Ketikkan IPK Anda: ");
    scanf("%f", &ipk);

    printf("Ketikkan Grade Anda: ");
    scanf(" %c", &grade); // Spasi sebelum %c untuk mengabaikan karakter newline

    // Scanf tidak membaca string dengan baik, karena scanf berhenti membaca ketika menemukan spasi atau newline

    getchar(); // Menghapus newline yang tersisa di buffer input setelah scanf dari grade
    printf("Ketikkan Nama Anda: ");

    // menggunakan file get strings (fgets) harus menyertakan ukuran buffer yang sama pada variabel, untuk itu agar efektif dapat menggunakan sizeof agar langsung menentukan ukuran buffer berdasarkan variabel yang digunakan
    // stdin pada fgets berfungsi untuk membaca input dari keyboard dan menyimpannya di variabel yang ditentukan
    fgets(nama, sizeof(nama), stdin);

    // Setelah mengetikkan nama dan menekan enter, fgets akan menyimpan karakter newline ('\n') di akhir string. Kita perlu menghapusnya.
    // strlen(nama) mengembalikan panjang string, dan kita mengurangi 1 untuk menghapus karakter newline
    // Misalnya saya mengetik "Shafwan", itu merupakan 7 karakter, jadi strlen(nama) akan mengembalikan 7, dan kita menghapus karakter terakhir dengan mengubahnya menjadi '\0' (null terminator)
    // Dengan cara ini, nama akan menjadi "Shafwan" tanpa karakter newline di akhir
    // null terminator ('\0') adalah karakter khusus yang menandai akhir dari string dalam bahasa C
    nama[strlen(nama) - 1] = '\0';

    printf("%s\n", nama);
    printf("%d\n", age);
    printf("%.2f\n", ipk);
    printf("%c\n", grade);

    return 0;
}