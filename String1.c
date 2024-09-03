#include <ctype.h> // usanod isalpha
#include <stdio.h>
#include <string.h> // usando strlen
	
int main(){
	char palavra [19];
	int qtdLetras = 0;
    int i = 0;
	
    printf("Digite um texto: ");
    scanf("%s", palavra);
	    while ( i< strlen(palavra)){
        if (isalpha(palavra[i]))
            qtdLetras++;
        i++;
    }
	printf("%d", qtdLetras);

    return 0;
}