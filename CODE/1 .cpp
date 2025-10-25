#include <iostream>
#include <cmath > 
using namespace std ;
int main ()
{  int d, p;
	float m ,  r;
scanf ("%d %d %f",&d,&p,&r) ;
m =(float) log(p / (p - d * r)) / log(1 + r); 
	
	float i = m + 0.05 ; 
	printf ("%.1f",i);
	return 0 ; 
	
	
}
