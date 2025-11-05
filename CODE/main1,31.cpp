#include <stdlib.h>
#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n ;
	 
	scanf("%d",&n);
	
	int *p = (int*)malloc(sizeof(int)*n);
	
	int old = 0; 
	int j = 0;
	int a ;
for (int i = 0 ; i< n;i++)
{   
	scanf("%d",&a); 
	
	if( a == old)
	{
		*(p+j)+= a ;
		
	}
	else
	{
		j++ ;
		
		*(p+j)+=a ;
		
	}
	
	old = a ;
	}
	
	int max =  0 ;
for (int i = 0 ; i< n;i++)

{
    max = max > *(p+ i)	? max : *(p+i) ;
	
}
printf("%d",max);

	return 0;
}
