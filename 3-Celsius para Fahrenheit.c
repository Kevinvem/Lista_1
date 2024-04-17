#include<stdio.h>
#include<locale.h>

int main (){
setlocale(LC_ALL, "portuguese");
float c;
printf("Informe a temperatura em celsius: ");
scanf("%f", &c);
printf("A temperatura em Fahrenheit é: %.1f", c * 1.8 + 32);
return (0);
}