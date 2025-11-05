#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int sum = 0;
	int time = 1 ;
	int n;
	
	while(true  ) 
	{scanf("%d",&n);
		if (n == 1)
		{
			time = 1;
			
			sum+=1 ;
		 } 
      
		else if(n==2) 
		{
			sum += n*time ;
			time++ ;
			
			
		}
		else
		{
			break ;
		}
		
		
	}
	printf("%d",sum);
	
	
	return 0;
}
