#include <stdio.h>

int balance = 45000000;  // Saldo awal

void login() {
     int pin = 011102;
    int inputPin;
	printf("Selamat Datang di ATM Bambang");
	printf("\nSilahkan login dahulu\n");
	printf("==========*****==========\n");
    for (int i = 0; i < 3; i++) {
        printf("\nMasukkan PIN Anda: ");
        scanf("%i", &inputPin);

        if (inputPin == pin) {
            printf("PIN Benar\n");
            menu();
            return 0;
        }
        else {
            printf("PIN Salah\n");
        }
    }

    printf("\nAnda telah memasukkan PIN yang salah sebanyak 3 kali.\n");
    printf("Anda tidak bisa login kembali. Silahkan Hubungi Admin\n");
    return 0;
}

void cek_saldo() {
    printf("Saldo Anda: %d\n", balance);
}

void penarikan() {
    int amount;
    printf("Masukkan jumlah penarikan: ");
    scanf("%d", &amount);

    if (amount > balance) {
        printf("Saldo tidak mencukupi.\n");
    } else {
        balance -= amount;
        printf("Penarikan sebesar %d berhasil.\n", amount);
        printf("Saldo Anda saat ini: %d\n", balance);
    }
}

void transfer() {
    int amount;
    printf("Masukkan jumlah transfer: ");
    scanf("%d", &amount);

    if (amount > balance) {
        printf("Saldo tidak mencukupi.\n");
    } else {
        balance -= amount;
        printf("Transfer sebesar %d berhasil.\n", amount);
        printf("Saldo Anda saat ini: %d\n", balance);
    }
}

void logout() {
    printf("Logout berhasil.\n");
}

void menu() {
    int choice;
    while (1) {
        printf("\n=== Menu ATM ===\n");
        printf("1. Cek Saldo\n");
        printf("2. Penarikan\n");
        printf("3. Transfer\n");
        printf("4. Logout\n");
        printf("Pilih menu (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                cek_saldo();
                break;
            case 2:
                penarikan();
                break;
            case 3:
                transfer();
                break;
            case 4:
                logout();
                return;
            default:
                printf("Pilihan tidak valid.\n");
        }
    }
}

int main() {
    login();
    return 0;
}
