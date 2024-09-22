#include <stdio.h>

int main()
{
    int number;
    
    printf("Masukan nomor: ");
    scanf("%d", &number);
    
    if (number == 0) {
        printf("%d Adalah bilangan  Nol", number);
    } else {
        if (number > 0) {
            printf("%d Adalah bilangan positif", number);
        } else {
            printf("%d Adalah bilangan negatif", number);
        } 
    }

    return 0;
}
