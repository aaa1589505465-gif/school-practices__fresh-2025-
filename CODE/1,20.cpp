#include  <iostream>

 int main (){
 	
 	int h , m;
 	
 	scanf ("%d %d",&h,&m); 
 	float t = h + m/60.0 ;
 	float T =4.0*t*t/(t+2)-20.0;
 	printf("%.2f",T);
    return 0; 
 } 
