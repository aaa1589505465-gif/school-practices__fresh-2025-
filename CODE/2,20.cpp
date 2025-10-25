#include  <iostream>




int main ()
{
 int n , i ,sum  ;
 int a, b ;
 

 
 
 scanf("%d %d",&a,&b);
 
 for (n=a ;n <=b ; n++)
 {  
 sum = 1;
 	for (i=2 ; i<n ; i++)
 	{
 		if(n%i==0 )
 		{
 			sum+=i;
 			 ;
		 }
		 
	 }
	 if (sum == n&& n!=1)
	 {
	 	printf("%d\n",n);

	 }
 
 
 } 

return 0 ;	
}




