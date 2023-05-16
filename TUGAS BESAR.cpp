#include <stdio.h>

int main() {
    int pin = 121505; // PIN ATM
    double saldo = 100000.0; // Saldo awal

    int inputPin;
    double tarik, setor, topUp;
    int pilihan;

    printf("Selamat datang KYWI di ATM Mobile\n");

    // Meminta input PIN
    printf("Masukkan PIN Anda: ");
    scanf("%d", &inputPin);

    // Memeriksa kebenaran PIN
    if (inputPin != pin) {
        printf("PIN salah. Program berhenti.\n");
        return 0;
    }

    do {
        // Menampilkan menu
        printf("\nMenu Utama:\n");
        printf("1. Cek Saldo\n");
        printf("2. Tarik Tunai\n");
        printf("3. Setor Tunai\n");
        printf("4. Top Up\n");
        printf("5. Logout\n");

        // Meminta input pilihan menu
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        // Melakukan aksi sesuai pilihan menu
        switch (pilihan) {
            case 1:
                printf("\nSaldo Anda: %.2f\n", saldo);
                break;
            case 2:
                printf("Masukkan jumlah uang yang akan ditarik: ");
                scanf("%lf", &tarik);
                if (tarik > saldo) {
                    printf("Saldo tidak mencukupi.\n");
                } else {
                    saldo -= tarik;
                    printf("Penarikan berhasil. Saldo Anda sekarang: %.2f\n", saldo);
                }
                break;
            case 3:
                printf("Masukkan jumlah uang yang akan disetor: ");
                scanf("%lf", &setor);
                saldo += setor;
                printf("Setor tunai berhasil. Saldo Anda sekarang: %.2f\n", saldo);
                break;
            case 4:
                printf("\nMenu Top Up:\n");
                printf("1. Top Up Dana\n");
                printf("2. Top Up Gopay\n");
                printf("3. Top Up Shopee\n");
                printf("Pilih menu: ");
                scanf("%d", &pilihan);
                switch (pilihan) {
                    case 1:
                        printf("Masukkan jumlah uang yang akan di-top up Dana: ");
                        scanf("%lf", &topUp);
                        saldo += topUp;
                        printf("Top Up Dana berhasil. Saldo Anda sekarang: %.2f\n", saldo);
                        break;
                    case 2:
                        printf("Masukkan jumlah uang yang akan di-top up Gopay: ");
                        scanf("%lf", &topUp);
                        saldo += topUp;
                        printf("Top Up Gopay berhasil. Saldo Anda sekarang: %.2f\n", saldo);
                        break;
                    case 3:
                        printf("Masukkan jumlah uang yang akan di-top up Shopee: ");
                        scanf("%lf", &topUp);
                        saldo += topUp;
                        printf("Top Up Shopee berhasil. Saldo Anda sekarang: %.2f\n", saldo);
                        break;
                    default:
                        printf("Pilihan tidak valid.\n");
                        return 0;
                }
                break;
            case 5:
                printf("Terima kasih. Anda telah logout.\n");
                break;
            default:
                printf("Pilihan tidak valid.\n");
                break;
        }
    } while (pilihan != 5);

    return 0;
}

