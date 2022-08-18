#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define f(x) (pow(x,2)+ 4*x -9)
#define g(x) (2*x+4)
int main()
{
	float x0, x1, f0, f1, g0, error;
	int s = 1, n;
	printf("\nEnter the initial guess(x0) : ");
	scanf("%f", &x0);
	printf("Enter the tolerable error amount : ");
	scanf("%f", &error);
	printf("Enter maximum number of iteration : ");
	scanf("%d", &n);
	printf("\nStep \t \t x0 \t \t f(x0) \t \t x1 \t \t f(x1)");
	do{
		f0 = f(x0);
		g0 = g(x0);
		if(g0 == 0.00)
		  {
			printf("\n Invalid!! Division by Zero");
		  }
		x1 = x0 - f0/g0;
		printf("\n %d \t \t %f \t %f \t %f \t %f \n",s,x0,f0,x1,f1);
		x0 = x1;
		s=s+1;
		if(s>n){
			   exit(0);
		  }
		f1 = f(x1);
	 }while(f1 > error);
	 printf("\nRoot is: %f", x1);
	 return 0;
}
