#include <stdio.h>
#include<string.h>
int input();

int main()
{
	printf("PLEASE LOGIN HERE\n\n");
	char id[50];

User:
    printf("                               ______________________________________________________________________________________________\n");
    printf("                              |                                     Ganpat University                                        |\n");
    printf("                              |----------------------------------------------------------------------------------------------|\n");
    printf("                              |                                         PID: 760                                             |\n");
    printf("                              |               Project Name:             Smart Helmet                                         |\n");
    printf("                              |                                     Subject: ESFP-1                                          |\n");
    printf("                              |                                        Batch: 12                                             |\n");
    printf("                              |                                  Enrollment No.: CS20                                        |\n");
    printf("                              |                                       Designed by                                            |\n");
    printf("                              |                                          Trishla                                             |\n");
    printf("                              |______________________________________________________________________________________________|\n");
printf("Enter your id:");

scanf("%s", &id);

if (strcmp(id,"Trishla")==0)

{

printf("Id is correct\n");

}

else

{

printf("You have enetred an invalid user id\nPlease enter id again\n");

goto User;

}

char pass[50];

pass:

printf("Enter your password: ");

scanf("%s", &pass);

if(strcmp(pass,"1234")==0)

{

printf("You have successfully logged in \n\n");

}

else

{

printf("You have entered a wrong password\nEnter your password again\n");

}



	printf("1.About Us\n");
	printf("2.Features\n");
	printf("3.Contact Us \n");
	int choice, num;
	choice:
	printf("ENTER YOUR CHOICE :");
	
	
	choice = input();
	
	switch (choice) {
	char hlo,hii,z;
	hlo:
	printf("IF YOU WANT TO CONTINUE TYPE Y 0r y :");
	scanf("%s",&hii);
	if(hii=='y' || hii=='Y')
	{
		goto choice1;
	}
	else
	{
	    goto choice;	
	}
	  char a,b;
	a:
	printf("IF YOU WANT TO CONTINUE TYPE Y 0r y :");
	scanf("%s",&b);
	if(b=='y' || b=='Y')
	{
		goto choice2;
	}
	else
	{
	    goto choice;	
	}
	case3:
	printf("IF YOU WANT TO CONTINUE TYPE Y 0r y :");
	scanf("%s",&z);
	if(z=='y' || z=='Y')
	{
		goto choice3;
	}
	else
	{
	    goto choice;	
	}
		
		
	case 1: {
				printf("\nPLEASE SELECT \n\n");
			printf("1.SAFETY\n");
			printf("2.DESIGN\n");
			
		
		
		    int choice1;
		    choice1:
		    printf("ENTER CHOICE:");
		    scanf("%d",&choice1);
			if(choice1==1)
			{
				printf("\nWe prioritize our clients safety as our foremost concern. We have built many features like SOS Emergency and Helmet Detection which helps our clients.\n");
				goto hlo;
			 } 
			 else if(choice1==2)
			 {
			 	printf("\nDesigning our Helmets is a very crucial step but it has always been a secondary concern. We have tried to include many special features other than safety related to please our audience.\n");
				goto hlo;
			 }
			 
		    else
		    {
		    	printf("SORRY WRONG CHOICE");
			}
		    
		
	}
	case 2: {
            	printf("PLEASE SELECT A FEATURE \n\n");
				printf("1.Touch Enabled Features\n");
				printf("2.Audio Navigation\n");
				printf("3.Bluetooth Connectivity\n");
				printf("4.Emergency SOS\n");
				printf("5.Accident Detection\n");
				
				int choice2;
				choice2:
		        printf("ENTER YOUR CHOICE :");
                scanf("%d",&choice2);
  
                
                if(choice2==1)
                {
                	
					printf("\nWe provide Touch Enabled Features so provide Convenience. \n\n");
					goto a;
				 }
				else if(choice2==2)
                {
                	
					printf("\nAudio Navigation so you can command Hands-free. \n\n");
					goto a;
				 }
				 else if(choice2==3)
                {
                	
					printf("\nBluetooth Connectivity to link your mobile and call if any emergency. \n\n");
					goto a;
				 }
				 else if(choice2==4)
                {
                	
					printf("\nEmergency SOS Feature calls any emergency number in case of any accident.\n\n");
					goto a;
				 }
				 else if(choice2==5)
                {
                	
					printf("\nAccident Detection sends a notification to your mobile in case of any crash\n");
					goto a;
				 }
				  else
		    {
		    	printf("SORRY WRONG CHOICE");
			}
				 
				 break;
		
		
	}
	case 3: {
				printf("\nPLEASE SELECT \n\n");
			printf("1.Name\n");
			printf("2.Phone Number\n");
			printf("3.Email\n");
		
		
		    int choice3;
		    choice3:
		    printf("ENTER CHOICE:");
		    scanf("%d",&choice3);
			if(choice3==1)
			{
				printf("\nTrishla Shah\n");
				goto choice3;
			 } 
			 else if(choice3==2)
			 {
			 	printf("\n1234567890\n");
				goto choice3;
			 }
			 else if(choice3==3)
			 {
			 	printf("\nsomeone@gmail.com\n");
				goto choice3;
			 }
		    else
		    {
		    	printf("SORRY WRONG CHOICE");
			}
		    
		
	}
	
	default:
		printf("wrong Input\n");
	}





return 0;
}


int input(){

    int number;
    scanf("%d", &number);
    return(number);
}
