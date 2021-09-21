    #include <stdio.h>
   int main(int argc, char** argv)
   {
	   float m,d,a;
	   printf("Informe o salario: ");
	   scanf("%f",&m);
	   d=m*25  /100;
	   a=m+d;
	   printf("Novo salario %f",a);
   }