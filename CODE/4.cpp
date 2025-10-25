







#include <iostream>
using namespace std ;

int main (){
    int sum ,last,n;
	char a[100];
	gets(a);
	for(int i = 0; a[i]!= '\0'; i++ )
	{
		sum+=a[i];
		  }  	
   printf ("%d",sum %256);
   return 0;
}

