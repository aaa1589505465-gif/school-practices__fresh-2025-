#include <iostream>
#include <cmath > 
using namespace std ;
int main ()
{  int n , i ; 
scanf("%d",&n);
    float sum ;
   sum = 0 ;
	for (i=1 ; i<= n ; ++i)
	{
		sum+=sin(1.0/i); 
	}
	printf("%.2f",sum);
	return 0;
	} 
