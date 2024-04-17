#include<stdio.h>
#include<locale.h>

int main (){
setlocale(LC_ALL, "portuguese");
float c;
printf("Informe a circunferência: ");
scanf ("%f", &c);
printf("A área dessa circunferência é: %.2f", 3.14159*c*c );
return(0);
}