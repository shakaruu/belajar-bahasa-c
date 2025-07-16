#include <stdio.h>
#include <stdbool.h>

int main()
{
    /*
    Variable adalah sebuah wadah/kontainer/tempat yang dapat digunakan kembali untuk menyimpan data (value).
    Variable berperilaku seperti value atau data yang disimpan.
    */

    // Untuk membuat variable, kita harus menentukan tipe data dari variable tersebut.
    // Tipe data yang umum digunakan adalah int, float, double, char, dan string

    // Contoh penggunaan tipe data int
    int umur = 18;
    int tahun_lahir = 2007;
    // %d adalah format specifier untuk tipe data int
    printf("Saya berumur %d tahun, lahir pada tahun %d.\n", umur, tahun_lahir);

    // Contoh penggunaan tipe data float
    float nilai_ujian = 90.5;
    // %f adalah format specifier untuk tipe data float sementara .2 adalah untuk menentukan jumlah angka di belakang koma. Karena bahasa C memliki aturan bahwa angka di belakang koma harus 6 digit, maka kita perlu menambahkan .2 untuk membatasi hanya 2 digit di belakang koma.
    printf("Nilai ujian saya adalah %.2f.\n", nilai_ujian);

    // Contoh penggunaan tipe data double
    // Tipe data double digunakan untuk menyimpan angka desimal dengan presisi yang lebih tinggi dibandingkan float.
    double pi = 3.141592653589793;
    // %lf adalah format specifier untuk tipe data double
    printf("Nilai pi adalah %.15lf.\n", pi);

    // Contoh penggunaan tipe data char
    char inisial = 'A';
    // %c adalah format specifier untuk tipe data char
    printf("Inisial saya adalah %c.\n", inisial);

    // Contoh penggunaan tipe data string
    // Di C, string sebenarnya adalah array dari karakter
    // [] adalah cara untuk mendeklarasikan array, nilai di dalam tanda kurung siku adalah jumlah elemen yang akan disimpan dalam array
    char nama[] = "Shafwan Khairullah";
    // %s adalah format specifier untuk tipe data string
    printf("Nama saya adalah %s.\n", nama);

    // Contoh penggunaan tipe data boolean
    // Tipe data boolean digunakan untuk menyimpan nilai benar (true) atau salah (false). Namun, kita perlu menyertakan header file stdbool.h untuk menggunakan tipe data boolean.
    bool is_student = true;
    // %d adalah format specifier untuk tipe data boolean, di mana true akan ditampilkan sebagai 1 dan false sebagai 0
    printf("d", is_student);
    // boolean jarang ditampilkan secara langsung, biasanya digunakan dalam kondisi logika

    if (is_student)
    {
        printf("Saya adalah seorang pelajar.\n");
    }
    else
    {
        printf("Saya bukan seorang pelajar.\n");
    }

    // int adalah tipe data yang digunakan untuk menyimpan bilangan bulat. (menyimpan 4 byte)
    // float adalah tipe data yang digunakan untuk menyimpan bilangan desimal. (menyimpan 4 byte)
    // double adalah tipe data yang digunakan untuk menyimpan bilangan desimal dengan presisi yang lebih tinggi. (menyimpan 8 byte)
    // char adalah tipe data yang digunakan untuk menyimpan karakter tunggal. (menyimpan 1 byte)
    // char[] adalah tipe data yang digunakan untuk menyimpan sekumpulan karakter. (menyimpan 1 byte per karakter)
    // bool adalah tipe data yang digunakan untuk menyimpan nilai benar (true) atau salah (false). (menyimpan 1 byte) (memerlukan stdbool.h)

    return 0;
}