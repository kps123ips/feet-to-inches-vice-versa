#include<stdio.h>
#include<conio.h>
int main()
{
	while(1)
	{
	int inch,choice;
	float feet;		
	printf("\nPress 1 to display distance in inches");
	printf("\nPress 2 to display distance in feet");
	printf("\nPress 3 to exit");
	printf("\nEnter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
    		printf("Enter distnace in feet");
	    	scanf("%f",&feet);
    		inch=feet*12;
	    	printf("Inch %d ",inch);
	    	break;
		case 2:
		    printf("Enter distance in inch");	
	    	scanf("%d",&inch);
	    	feet=inch/12.0;
		    printf("Feet %f ",feet);
		    break;
		case 3:exit(0);    
		default:
			printf("Wrong Choice");
	}
	getch();
	
}
}
