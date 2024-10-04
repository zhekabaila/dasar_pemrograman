#include <stdio.h>
#include <string.h>

int main() {
    // for (int i = 1; i <= 10; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf(" * ");
    //     }
    //     printf("\n");
    // }

    for (int i = 2020; i <= 2035; i+=5)
    {
        for (int j = 2020; j <= i; j+=5)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    // for(int i = 1; i <= 8; i++){
    //     for(int j = 1; j <= 8; j++){
    //         printf("%d ", j);
    //     }
    //     printf("%d ", i);
    //     printf("\n");
    // }

    // for (int i = 2; i >= 1; i--) {
    //     for (int j = 1; j <= i; j++) {
    //         printf("UNSIL %d ", j);
    //     }
    //     printf("\n");
    // }

}