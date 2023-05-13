#include <stdio.h>

int balance = 45000000;  // Saldo awal

void login() {
     int pin = 011102;
    int inputPin;
	printf("Selamat Datang di ATM Keenan");
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

void topup()
{
	int pilihan;
	printf("\nMenu Top UP");
	printf("\n=====*****=====");
	printf("\n1. Shopee");
	printf("\n2. Dana");
	printf("\n3. Briva");
	printf("\n4. Menu Utama");
	printf("\n Silahkan pilih <1-4> :");
	scanf("%i", &pilihan);
	
	switch (pilihan) 
	{
	
		case 1 :
			shopee();
			break;
		case 2 :
			dana();
			break;
		case 3 :
			briva();
			break;
		case 4 :
			menu();
			break;
	}

}


void shopee()
{
	
	int amount;
	char nomor [14];
	printf("\nTop UP Shopee");
    printf("\nMasukkan besar nominal top up: ");
    scanf("%i", &amount);

	printf("Masukkan nomor tujuan: ");
    scanf("%s", &nomor);
    
    if (amount > balance) {
        printf("Saldo tidak mencukupi.\n");
    } else {
        balance -= amount;
        printf("\nTop up sebesar %d berhasil ke nomor %s.\n", amount,nomor);
        
		printf("Saldo Anda saat ini: %d\n", balance);
    } 
}


void dana()
{
	
	int amount;
	char nomor [14];
	printf("\nTop UP Dana");
    printf("\nMasukkan besar nominal top up: ");
    scanf("%i", &amount);
	
	printf("Masukkan nomor tujuan: ");
    scanf("%s", &nomor);
	
    if (amount > balance) {
        printf("Saldo tidak mencukupi.\n");
    } else {
        balance -= amount;
        printf("\nTop up sebesar %d berhasil ke nomor %s.\n", amount, nomor);
        
		printf("Saldo Anda saat ini: %d\n", balance);
    } 
}


void briva()
{
	
	int amount;
	char nomor [14];
	printf("\nTop UP Briva");
    printf("\nMasukkan besar nominal top up: ");
    scanf("%i", &amount);
    
    printf("\nMasukkan nomor tujuan: ");
    scanf("%s", &nomor);

    if (amount > balance) {
        printf("Saldo tidak mencukupi.\n");
    } else {
        balance -= amount;
        printf("\nTop up sebesar %d berhasil ke nomor %s.\n",amount,nomor);
        
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
        printf("4. Top up Saldo\n");
        printf("5. Logout\n");
        printf("Pilih menu (1-5): ");
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
            	topup();
            	break;
            case 5:
                logout();
                return 0;
            default:
                printf("Pilihan tidak valid.\n");
        }
    }
}

int main() {
    login();
    return 0;
}
