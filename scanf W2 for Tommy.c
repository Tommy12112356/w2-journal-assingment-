// author : Tommy Olanrewaju
// Date: 12-09-23
// Change log: W2 ASSIGNMEN



#include<stdio.h>

int main()
{
	 // this is the character definition 
	 char key;
	 
	 
	 
	 
	 while(1){
	 	printf("press a key (w for up, s for down, d for right, a for left, q for extra message, e to exit program):");
	 	scanf(" %c", &key);
	 	// scanf is to read instead of print f which is to display scanf is used here to read a character input from the user
	 	
	 	
	 		if (key == 'w')
			{printf("up\n");
			}
			// this is giving us an alternatie so we can have multiple commands giving us different ouputs in the same way  
			else if (key =='s'){
				printf("down\n");
			}
			else if (key =='d')
			{
			printf("left\n");
			}
			
			else if (key =='a'){
				printf("right\n");
			} 
			else if (key =='q')
			{printf("extra message\n");
			}
			
			else if (key =='e')
			{
			  printf("exiting the program...\n");
			  break;	
		 }
	 
	 	
	 	
		
			}
	 
	 
   
   
    return 0;
}

