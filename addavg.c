#include <stdio.h>

int main()
{
    int i,n,sum=0;
    printf("Enter 5 integers: \n");

    for( i = 1 ; i<= 5; i++) {
	    printf("NUMBER %d =",i);
    
        scanf("%d",&n);


    
        sum += n;

  }
    float avg= sum/5.0;
  	printf("The sum of 5 numbers is : %d\n", sum);
    printf("Avg is: %f", avg);
    
    return 0;
}
