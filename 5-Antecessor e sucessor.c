#include<stdio.h>
#include<locale.h>

int main (){
setlocale(LC_ALL, "portuguese");
int n;
printf("Informe um número: ");
scanf("%i", &n);
printf("O antecessor é: %i\n", n-1);
printf("O sucessor é: %i", n+1);
return(0);
}