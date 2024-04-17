#include<stdio.h>
#include<locale.h>

int main (){
setlocale(LC_ALL, "portuguese");
int n;
printf("Informe um número: ");
scanf("%i", &n);
printf("O quadrado desse número é: %i", n * n);
return (0);
}
