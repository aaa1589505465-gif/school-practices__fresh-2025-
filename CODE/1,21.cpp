#include<iostream>
#define PI 3.1415926 


int main ()
{

double  V ,m , n ;
int D ,H ;
scanf("%d %d",&D,&H); 

V= (D*D*PI*H)/12.0 ;

n=19.3 * V; 
m=7.86* V ;

printf("%d %d",int(m/1000.0),int(n/1000.0)) ;

return 0;
}

