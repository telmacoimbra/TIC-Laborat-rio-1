#include <stdio.h>
     int main(int argc, char** argv)
	 {
		 float t,p,d,a;
		 printf("Informe o t: ");
		 scanf("%f",&t);
		 printf("Informe o percentual do aumento: ");
         scanf("%f",&p);	
		 d=(t*p)/100;
		 a=t+d;
		 printf("Salario novo %f",a);
	 }