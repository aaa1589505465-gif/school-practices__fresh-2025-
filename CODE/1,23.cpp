
#include <iostream>


int main (){
	
	int y,s;
	float c,d,h;
	scanf("%d %d",&y,&s);
	
    float k ;
//	#总金 s 
//	#折 c
//	# 优惠后 d 
//	#youhui  h
//	
//	# hui? y
//	"""
	if ( y==1){
		if(s>=500)
		{
			c = 8.0;
			
		}
	    else if(s<500 && s>=350)
	    {	
	    	c = 8.5;
	    	
		}
		else if(s<350 && s>=200) 
		{
			c = 9.0;
		}
		else { 
    	c=1;
		}
    	k =s*c;
		
	 d=k /10.0 ; 
	 h = s - d ;
	printf("yes %.1f %.1f %.1f",float(s),d,h);
}
    else {
    	
		if(s>=500)
		{
			c = 9.0;
			
		}
		
	
	    else if(s<500 && s>=350)
	    {
	    	
	    	c = 9.5;
		}
    	else
		{ 
    	    c=1;
		}
    	
    k =s*c;
	d=k /10.0 ;
    	printf("no %.1f %.1f %.1f",float(s),d,h);
	} 

	return 0;
} 
