#include <stdio.h>
#include <string.h>

int main()
{
    char inputUsername[18], username[18] = "zhekabaila";
    long long inputPassword, password = 247006111152LL;
    
    printf("Masukan Username anda: ");
    scanf("%s", inputUsername);
    getchar();
    
    printf("Masukan Password anda: ");
    scanf("%lld", &inputPassword);
    getchar();
    
    if ((strcmp(inputUsername, username) == 0) && (inputPassword == password)) {
        printf("\nSelamat datang %s\n", inputUsername);
    } else {
        printf("\nMaaf, anda tidak dapat masuk\n");
    }

    return 0;
}
