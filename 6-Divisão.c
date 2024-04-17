#include<stdio.h>
#include<locale.h>

int main (){
setlocale(LC_ALL, "portuguese");
float n1, n2;
printf("Informe o dividendo: ");
scanf("%f", &n1);
printf("Informe o divisor: ");
scanf("%f", &n2);
if (n2 == 0){
    printf ("Divisão indefinida");
}else{
printf("O resultado da divisão é: %.1f", n1/n2);

}
return(0);
}