#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    char firstName[] = "Yehor";
    char lastName[] = "Sorochinskiy";
    char faculty[] = "RTF";
    char group[] = "RS-z51";


    float grade1 = 95.0, grade2 = 82.0, grade3 = 88.5, grade4 = 74.0, grade5 = 91.0;
    float admissionScore = 185.75;


    float averageGrade = (grade1 + grade2 + grade3 + grade4 + grade5) / 5.0;


    system("cls");


    printf("***************\n");
    printf("===============\n");


    printf("Студент: %s %s\n", firstName, lastName);
    printf("Факультет: %s, Група: %s\n", faculty, group);


    printf("Вступний бал: %.1f\n", admissionScore);
    printf("Середній бал за 5 предметів: %.2f\n", averageGrade);

    return 0;
}
