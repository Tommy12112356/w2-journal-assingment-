// author : Tommy Olanrewaju
// Date: 12-09-23
// Change log: W2 ASSIGNMENT 




#include<stdio.h>




#include<conio.h>

int main()
{
	// The key is to define the character given
	char key;
	int ascii=0;
	

	// print f is printing and displaying the statement below 
	printf("input 1 for up\n");
	printf("input 2 for down\n");
	printf("input 3 for right\n");
	printf("input 4 for left\n");
	printf("input 5 to get an extra message\n");
	printf("input 6 to exit the program\n");
	
	printf(" Enter A single character: %c\n", key);
	
	// while is beign used to loop the program
	while(1){
		if (_kbhit())
		// _kbhit is used to tell and check which key is pressed
		{
			
			key = _getch();
			// this is used to read the key beign pressed and compare it to the other given keys go give out desired output
			
			ascii= (int)(key);
			printf("ascii: %d\n", ascii);
			
			if (key == 'w')
			{printf("up\n");
			} 
			// this is telling us that there is an altenative output if one of the previous output is pressed
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
			}
		
			
		
			
	
	
	

	
	return 0;
	
		
}