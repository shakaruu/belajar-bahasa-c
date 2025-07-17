// Format Specifiers adalah sebuah cara untuk menentukan bagaimana data akan ditampilkan dalam output. Merupakan token spesial yang diawali dengan tanda % lalu diikuti dengan karakter yang menentukan tipe data dan modifikasi lainnya seperti lebar, presisi dan flag.
// flags merupakan opsi tambahan yang dapat digunakan untuk mengubah cara data ditampilkan. Contoh flags adalah `-` untuk rata kiri, `+` untuk menampilkan tanda positif, dan `0` untuk mengisi dengan nol.
#include <stdio.h>

int main()
{
    // Berikut beberapa contoh penggunaan format specifiers dalam C
    int umur = 18;
    // d artinya desimal
    printf("%d\n", umur);

    float tinggi = 174.5;
    // f artinya floating point
    printf("%f\n", tinggi);

    double pi = 3.14159;
    // double dapat menggunakan f dan lf, namun disarankan menggunakan lf karena lebih jelas (artinnya long floating point)
    printf("%lf\n", pi);

    char huruf = 'A';
    // c artinya karakter
    printf("%c\n", huruf);

    char nama[] = "Shafwan";
    // s artinya string
    printf("%s\n", nama);

    // Selain itu dengan format specifiers kita bisa memodifikasi bagaimana data ditampilkan

    float harga1 = 10.000;
    float harga2 = 20.000;
    float harga3 = -30.000;
    float harga4 = 40.000;

    printf("/6f%", harga1);   // Menampilak dengan lebar 6 karakter, jika dengan simbol - maka rata kiri
    printf("/.3f%", harga2);  // Menampilkan dengan presisi 3 angka di belakang koma
    printf("/+f%", harga3);   // Menampilkan dengan tanda positif jika angka yang terdapat pada variabel adalah positif
    printf("/0.2f%", harga4); // Mengisi dengan nol jika angka yang terdapat pada variabel adalah kurang dari 2 digit

    // Kita juga bisa menggabungkan beberapa format specifiers dalam satu printf

    float x = 120.000;
    printf("%+0.2f", x);

    return 0;
}