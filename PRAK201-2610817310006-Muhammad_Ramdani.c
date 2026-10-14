#include <stdio.h>

int main() {
    char Nama[50], NIM[20], Kelas_Paralel[100];
    char TTL[100], Alamat[100];
    char hobby[100], No_Telp[20];

    printf("Nama                 : ");
    fgets(Nama, sizeof(Nama), stdin);
    printf("NIM                  : ");
    fgets(NIM, sizeof(NIM), stdin);
    printf("Kelas Paralel        : ");
    fgets(Kelas_Paralel, sizeof(Kelas_Paralel), stdin);
    printf("Tempat/Tanggal Lahir : ");
    fgets(TTL, sizeof(TTL), stdin);
    printf("Alamat               : ");
    fgets(Alamat, sizeof(Alamat), stdin);
    printf("Hobby                : ");
    fgets(hobby, sizeof(hobby), stdin);
    printf("No. HP               : ");
    fgets(No_Telp, sizeof(No_Telp), stdin);
    
    printf("Output\n");
    printf("Nama                 : %s", Nama);
    printf("NIM                  : %s", NIM);
    printf("Kelas Paralel        : %s", Kelas_Paralel);
    printf("Tempat/Tanggal Lahir : %s", TTL);
    printf("Alamat               : %s", Alamat);
    printf("Hobby                : %s", hobby);
    printf("No. HP               : %s", No_Telp);
}