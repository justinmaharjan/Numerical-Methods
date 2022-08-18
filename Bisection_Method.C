#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (pow(x,3)+pow(x,2)+x+7)
int main()
{
	 float a,b,c,f0,f1,f2,error;
	 int s = 1;
	 flag:
	 printf("\n Enter two initial guesses : ");
	 scanf("%f %f",&a,&b);
	 f0 = f(a);
	 f1 = f(b);
	 if( f0 * f1 > 0.0)
	 {
		printf("Invalid Initial Guesses.\n Please Try Again!!! \n");
		goto flag;
	 }
	printf("Enter tolerable error : ");
	scanf("%f",&error);
	printf("\n Step \t \t a \t \t b \t \t c \t \t f(c) \n");
	do
	{
		c = (a + b)/2;
		f2 = f(c);
		printf("%d \t \t %f \t %f \t %f \t %f \n",s, a, b, c, f2);
		if( f0 * f2 < 0)
		  {
			b = c;
			f1 = f2;
		  }
		else
		  {
			a = c;
			f0 = f2;
		  }
		  s = s + 1;
	 }while(fabs(f2) > error);
	 printf("\n The Root of the function f(x) is: %f",c);
	 return 0;
}
