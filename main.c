#include <stdio.h>
int main () {

double n1,n2,med,cont;


    printf("Digite a primeira nota: ");
    scanf("%lf",&n1);





    while(n1<0 || n1>10.0){

        printf ("Valor invalido! Tente novamente:");
        scanf("%lf",&n1);
    }


     printf("Digite a segunda nota: ");
    scanf("%lf",&n2);



     while( n2<0 || n2>10.0){

        printf ("Valor invalido! Tente novamente:");
        scanf("%lf",&n2);

    }

    med = (n1 + n2)/2;

    printf("MEDIA = %.2lf",med);











return 0;
}
