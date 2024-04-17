#include<stdio.h>
#include<locale.h>

int main (){
setlocale(LC_ALL, "portuguese");
int n;
printf("Informe o número: ");
scanf("%i", &n);
printf("O triplo desse número é: %i", n * 3);
return(0);
}