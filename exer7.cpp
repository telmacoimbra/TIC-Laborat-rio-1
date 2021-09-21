#include <stdio.h>
#include <stdlib.h>
main(){
float fab,lucro,i,rl,ri,pf;
system("color e4");
printf("digite o preco da fab");
scanf("%f",&fab);
printf("digite o percentual de lucro do distribuidor");
scanf("%f",&lucro);
printf("digite o percentual de impostos");
scanf("%f",&i);
rl=lucro*fab/100;
printf("percentual de lucro = %f ",rl);
ri=i*fab/100;
printf("^percentual de imposto = %f ",ri);
pf=fab+rl+ri;
printf("o valor final e = %f ",pf);
}