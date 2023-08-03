#include <stdio.h>
 #include <string.h>
  #include <math.h>
   #define PI=3.1415;  // a calculator in c.
		       // this is a scientiic calculator.
  int main(void){
    int num1, num2, x, choice;
      double num result;
      printf("Enter first number:");
         scanf("%d"&num1);
	 printf("Enter second number:");
	     scanf("%d"&num2);
	     // to select an option to peorm operations.
	     // this is the section to choose any operator.
	    printf("Select an Operator!");
	      printf("1.sum");
	        printf("2.difference");
		  printf("3.product");
		    printf("4.division");
		    printf("5.square root");
		     printf("6.cube root");
		      printf("7.Exponential");
		       printf("8.Natur8.al Log");
		        printf("9.sine");
			printf("10.cosine");
			printf("11.Tangent");
			printf("Enter your choice:");
			scanf("%d"&choice);
			// now you can now choose any operation.
			// as seen below.
			switch(choice){
				case 1:
				sum = num1 + num2;	
				printf("the sum is: %d",sum);
				break;
				case 2:
				diff = num1 - num2;
				printf("the ans: is %d", diff);
				break;
				case 3:
				pro = num1 * num2;
				printf("the ans: is %d", pro);
				break;
				case 4:
				div = num1/num2;
				printf("the ans: %lf",div);
				break;
				case 5:
				result = sqrt(num)
				printf("the ans: %lf",result);
				break;
				case 6:
				result = cbrt(num)
				printf("The ans: %lf",result);
				break;
				case 7:
				result = exp(num)
				printf("the ans: %.2lf\n",result);
				break;
				case 8:
				result = log(num)
				printf("the ans: %.2lf\n"result);
				break;
				case 9:
				result = sin(num)
				printf("The ans: %.2lf\n"result);
				break;
				case 10:
				result = cos(num)
				printf("the ans: %.2lf\n"result);
				break;
				case 11:
				result = tan(num)
				printf("the ans: %.2lf\n"result);
				break;
				default:
				printf("Invalid Option");
			}
			// The end of the switch statemnet.
			// this is where we return 0;
			return (0);
  }












