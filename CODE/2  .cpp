#include <iostream>
#include <cmath > 

int main ()
{
	int l,m ;
	float rate ,low,g;

	scanf("%d %d",&l,&m); 
	
	if (l==1)
	 { rate=0.03  ; 
       low= 50000.0 ;
	     if(m <= low){
	     	g = 0;
		 }
	     else {
	     	g=(m-low)*rate;
		 }              
	}
	
    if (l==2)
	 { rate= 0.02 ; 
       low=  35000.0;
	     if(m <= low){
	     	g = 0;
		 }
	     else {
	     	g=(m-low)*rate;
		 }              
	}
	
    if (l==3)
	 { rate= 0.02 ; 
       low= 20000.0 ;
	     if(m <= low){
	     	g = 0;
		 }
	     else {
	     	g=(m-low)*rate;
		 }              
	}
	
	if (l==4)
	 { rate=  0.025; 
       low=  5000.0;
	     if(m <= low){
	     	g = 0;
		 }
	     else {
	     	g=(m-low)*rate ;
		 }              
	}
   printf("%d %.1f %.1f", l, low, g);
    return 0 ;
}
