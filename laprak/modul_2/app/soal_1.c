#include <stdio.h>

int main()
{
    int number;
    
    printf("Masukan nomor: ");
    scanf("%d", &number);
    
    if (number == 0) {
        printf("\n%d Adalah bilangan Nol\n", number);
    } else {
        if (number > 0) {
            printf("\n%d Adalah bilangan positif\n", number);
        } else {
            printf("\n%d Adalah bilangan negatif\n", number);
        } 
    }

    return 0;
}
