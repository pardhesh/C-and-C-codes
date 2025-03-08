#include<stdio.h>

void login();
void destination();
void trains();
void teir();
void seats();
void booked();


int main(){
login();
destination();
trains();
teir();
seats();
booked();

}



void login()
{
	int x=0,i=0;
    char uname[10],z;
    char pword[10];
    do
{
	
    printf("\n  **************** WELCOME TO NAGPUR TRAIN TICKETS PLATFORM ****************");
	printf("\n\n\n ENTER YOUR LOGIN CREDENTIALS:\n");
    printf("\n\n   ENTER USERNAME: ");
	scanf("%s", &uname);
	printf(" \n   ENTER PASSWORD: ");
	while(i<10)
	{
	    pword[i]=getch();
	    z=pword[i];
	    if(z==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	i=0;
		if(strcmp(uname,"user")==0 && strcmp(pword,"password")==0)
	{
    printf("\n\n _______________________________________________________________________________________________________");
	printf("  \n\n   WELCOME !!!!");
	printf("\n\n   	BOOK TRAIN TICKETS FROM NAGPUR TO THE MEGA CITIES");
	printf("\n\n\n   Press enter key to continue...");
	getch();
	break;
	}
	else
	{
	    printf("\n\n ____________________________________________________________________________________________________");
		printf("\n\n   LOGIN UNSUCESSFUL...PLEASE TRY AGAIN...");
		x++;
		getch();
	}
}
 while(x<=2);
	if (x>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");

		getch();

		}
	
}

void destination()
{
	int a;
	printf("\n___________________________________________________________________________________________________________");
	printf("\nSelect your destination number from below options:");
	printf("\n 1.MUMBAI");
	printf("\n 2.NEW DELHI");
	printf("\n 3.HYDERABAD");
	printf("\n 4.CHENNAI");
	printf("\n 5.BENGALURE\n");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
			printf("\nSelected: MUMBAI\n");
			break;
		
		case 2:
			printf("\nSelected: NEW DELHI\n");
			break;
		
		case 3:
			printf("\nSelected: HYDERABAD\n");
			break;
			
		case 4:
			printf("\nSelected: CHENNAI\n");
			break;
			
		case 5:
			printf("\nSelected: BENGALURU\n");
			break;
		
		default:
			printf("\nInvalid.\nEnter corret number:");
		scanf("%d",&a);
			break;			
	}
    printf("\n___________________________________________________________________________________________________________________");
};
	void trains()
	{int a;
		int b;
		if(a==1)
		 {
			
			printf("\n The trains avilable to MUMBAI:");
			printf("\n Train Name		  Train No	    Arrival Time      Destination Time	");
			printf("\n 1.VIDARBHA SF EXP         19834                01:50           15:00");
			printf("\n 2.GITANJALI EXP 	   13028                04:20           17:30");
			printf("\n 3.SEWAGRAM SF EXP         23294                09:30           20:40");
			printf("\n 4.MUMBAI CSMP SF          26492                12:50           03:00");
			printf("\n 5.MUMBAI LLT SF EXP       12038                15:00           03:10");
			printf("\n Choose the train by entering its number.\n");
			scanf("%d",&b);
		switch(b)
		{
		case 1:
			printf("\nSelected: VIDARBHA SF EXP\n");
			break;
		
		case 2:
			printf("\nSelected: GITANJALI EXP\n");
			break;
		
		case 3:
			printf("\nSelected:  SF EXP\n");
			break;
			
		case 4:
			printf("\nSelected: MUMBAI CSMP SF\n");
			break;
			
		case 5:
			printf("\nSelected: MUMBAI LLT SF EXP\n");
			break;
		
		default:
		printf("\nInvalid.\nEnter corret number:");
			scanf("%d",&b);
			break;		
		}
		printf("\n___________________________________________________________________________________________________________________");
	 }
		else if(a==2)
		{
			
			printf("\n The trains avilable to NEW DELHI:");
			printf("\n   Train Name 		    	  Train No.            Arrival Time        Destination Time");
			printf("\n 1.DAKSHIN SF EXP                  74387                05:20                19:30");
			printf("\n 2.KERALA EXP                      12875                09:15                23:20");
			printf("\n 3.TELANGANA EXP                   67346                12:20                02:30");
			printf("\n 4.ANDHRA PRADESH SF EXP           23412                16:40                06:20");
			printf("\n 5.GRAND TRUNK EXP                 13664                17:20                07:30");
		    printf("\n Choose the train by entering its number.\n");
			scanf("%d",&b);
		switch(b)
	{
		case 1:
			printf("\nSelected: DAKSHIN SF EXP\n");
			break;
		
		case 2:
			printf("\nSelected: KERALA EXP\n");
			break;
		
		case 3:
			printf("\nTELANGANA EXP\n");
			break;
			
		case 4:
			printf("\nSelected: ANDHRA PRADESH SF EXP\n");
			break;
			
		case 5:
			printf("\nSelected: GRAND TRUNK EXP\n");
			break;
		
		default:
			printf("\nInvalid.\nEnter corret number:");
			scanf("%d",&b);
			break;		
		}
	printf("\n___________________________________________________________________________________________________________________");
	}
		else if(a==3)
		{
			int d;
			printf("\n The trains avilable to HYDERABAD:");
			printf("\n   Train Name 		   	 Train No.            Arrival Time        Destination Time");
			printf("\n 1.DURONTO EXP                     12345                03:45                13:20");
			printf("\n 2.HUMSAFAR EXP                    67348                05:50                16:30");
			printf("\n 3.SECUNDERABAD SF EXP             12783                12:20                22:50");
			printf("\n 4.YESVSANTPUR SF                  64637                16:00                02:50");
			printf("\n 5.SAMPARK KRANTI EXP              12287                18:30                05:15");
			printf("\n Choose the train by entering its number. \n");
			scanf("%d",&b);
				switch(b)
	{
		case 1:
			printf("\nSelected: DURONTO EXP\n");
			break;
		
		case 2:
			printf("\nSelected: HUMSAFAR EXP\n");
			break;
		
		case 3:
			printf("\nSelected: SECUNDERABAD SF EXP\n");
			break;
			
		case 4:
			printf("\nSelected: YESVSANTPUR SF\n");
			break;
			
		case 5:
			printf("\nSelected: SAMPAK KRANTI EXP\n");
			break;
		
		default:
			printf("\nInvalid.\nEnter corret number:");
			scanf("%d",&b);
			break;		
		}
	printf("\n___________________________________________________________________________________________________________________");
	}
		else if(a==4)
		{
		
			printf("\n The trains avilable to CHENNAI:");
			printf("\n   Train Name 		 	  Train No.            Arrival Time        Destination Time");
			printf("\n 1.RAJDHANI EXP                   16734                 06:00                22:20");
			printf("\n 2.SMVT EXP                       12356                 11:00                03:20");
			printf("\n 3.RAPTISAGAR SF EXP              12451                 12:30                04:50");
			printf("\n 4.MGR CENTRAL EXP                23412                 17:50                10:20");
			printf("\n 5.MADURAI SF EXP                 12734                 21:00                13:20");
			printf("\n Choose the train by entering its number.\n");
			scanf("%d",&b);	
				switch(b)
	{
		case 1:
			printf("\nSelected: RAJDHANI EXP\n");
			break;
		
		case 2:
			printf("\nSelected: SMVT EXP\n");
			break;
		
		case 3:
			printf("\nSelected: RAPTISAGAR SF EXP\n");
			break;
			
		case 4:
			printf("\nSelected: MGR CENTRAL EXP\n");
			break;
			
		case 5:
			printf("\nSelected: MADURAI SF EXP\n");
			break;
		
		default:
			printf("\nInvalid.\nEnter corret number:");
		scanf("%d",&b);
			break;		
		}
	printf("\n___________________________________________________________________________________________________________________");
	}
		else if(a==5)
		{
		
			printf("\n The trains avilable to BENGALURU:");
			printf("\n   Train Name 		          Train No.            Arrival Time        Destination Time");
			printf("\n 1.SANGAMITRA SF EXP               25344                06:00                05:10");
			printf("\n 2.KONGU EXP                       24538                11:00                10:20");
			printf("\n 3.BAGMATI SF EXP                  43546                13:00                11:40");
			printf("\n 4.KSR SF EXP                      53263                18:00                16:50");
			printf("\n 5.CLONE SPL                       54634                23:00                22:00");
			printf("\n Choose the train by entering its number.\n");
			scanf("%d",&b);	
				switch(b)
	{
		case 1:
			printf("\nSelected: SANGAMITRA SF EXP\n");
			break;
		
		case 2:
			printf("\nSelected: KONGU EXP\n");
			break;
		
		case 3:
			printf("\nSelected: BAGMATI SF EXP\n");
			break;
			
		case 4:
			printf("\nSelected: KSR SF EXP\n");
			break;
			
		case 5:
			printf("\nSelected: CLONE SPL\n");
			break;
		
		default:
		printf("\nInvalid.\nEnter corret number:");
			scanf("%d",&a);
			break;		
		}
	printf("\n___________________________________________________________________________________________________________________");
	}
};
	void  teir()
	{
		int a;
		int n;
		int p;
		printf("\nEnter the number of tickets you want to book.\n");
		scanf("%d",&n);
	printf("\n___________________________________________________________________________________________________________________");
		int c;
		if(a==1)
		{    
			printf("\nPrice for AC coach = Rs.1800/- ");
			printf("\nPrice for NON-AC coach = Rs.700/-");
			
			printf("\nEnter 1 for AC coach (or else) 2 for NON-AC coach.\n");
			scanf("%d",&c);
			switch(c)
			{
				case 1:
					printf("\nSelected: AC coach\n");
					p=n*1800;
					printf("\n The total price is Rs.%d/-.\n",p);
					break;
					
				case 2:
				    printf("\nSelected: NON-AC coach\n");	
				    	p=n*700;
					printf("\n The total price is Rs.%d/-.\n",p);
				    break;
		      default:
						printf("\nInvalid.\nEnter corret number");
						scanf("%d",&c);
						break;	
			}
	printf("\n___________________________________________________________________________________________________________________");
	    }
		if(a==2)
		{    
			printf("\nPrice for AC coach = Rs.2500/- ");
			printf("\nPrice for NON-AC coach = Rs.1100/-");
			
			printf("\nEnter 1 for AC coach or else 2 for NON-AC coach.\n");
			scanf("%d",&c);
			switch(c)
			{
				case 1:
					printf("\nSelected: AC coach\n");
						p=n*2500;
					printf("\n The total price is Rs.%d/-.\n",p);
					break;
					
				case 2:
				    printf("\nSelected: NON-AC coach\n");
				    	p=n*1100;
					printf("\n The total price is Rs.%d/-.\n",p);
					break;
	    		default:
					printf("\nInvalid.\nEnter corret number");
					scanf("%d",&c);
					break;		
			}
	printf("\n___________________________________________________________________________________________________________________");
		}
		
		if(a==3)
		{   
			printf("\nPrice for AC coach = Rs./-1900 ");
			printf("\nPrice for NON-AC coach = Rs.800/-");
			
			printf("\nEnter 1 for AC coach or else 2 for NON-AC coach.\n");
			scanf("%d",&c);
			switch(c)
			{
				case 1:
					printf("\nSelected: AC coach\n");
						p=n*1900;
					printf("\n The total price is Rs.%d/-.\n",p);
					break;
				case 2:
				    printf("\nSelected: NON-AC coach\n");
				    	p=n*800;
					printf("\n The total price is Rs.%d/-.\n",p);
					break;	
				default:
					printf("\nInvalid.\nEnter corret number");
				scanf("%d",&c);
					break;	
			}
		printf("\n___________________________________________________________________________________________________________________");
     	}
	
		if(a==4)
		{    
			printf("\nPrice for AC coach = Rs.2700/- ");
			printf("\nPrice for NON-AC coach = Rs.1300/-");
			
			printf("\nEnter 1 for AC coach or else 2 for NON-AC coach.\n");
			scanf("%d",&c);
			switch(c)
			{
				case 1:
					printf("\nSelected: AC coach\n");
						p=n*2700;
					printf("\n The total price is Rs.%d/-.\n",p);
					break;
				case 2:
				    printf("\nSelected: NON-AC coach\n");
						p=n*1300;
					printf("\n The total price is Rs.%d/-.\n",p);	
				    break;
			    default:
					printf("\nInvalid.\nEnter corret number");
					scanf("%d",&c);
					break;
			}
	printf("\n___________________________________________________________________________________________________________________");
	    }
	    
	    
		if(a==5)
		{    
			printf("\nPrice for AC coach = Rs.2900/- ");
			printf("\nPrice for NON-AC coach = Rs.1400/-");
			
			printf("\nEnter 1 for AC coach or else 2 for NON-AC coach.\n");
			scanf("%d",&c);
			switch(c)
			{
				case 1:
					printf("\nSelected: AC coach\n");
						p=n*2900;
					printf("\n The total price is Rs.%d/-.\n",p);
					break;
				case 2:
				    printf("\nSelected: NON-AC coach\n");	
				    	p=n*1400;
					printf("\n The total price is Rs.%d/-.\n",p);
				    break;
			    default:
					printf("\nInvalid.\nEnter corret number");
				scanf("%d",&c);
					break;
			}
		printf("\n___________________________________________________________________________________________________________________");
	    } 

};

	void seats()
{	int n;
	int j=0;
	printf("\nRenter the number of tickets you want to book.\n");
		scanf("%d",&n);
	for (j=0;j<n;j++){
	int d;
	printf("\nEnter your seat preference for the person %d from the given options below:",j+1,n);
	printf("\n1.Upper");
	printf("\n2.Middle");
	printf("\n3.Lower");
	printf("\n4.Side Lower");
	printf("\n5.Side Upper\n");
	scanf("%d",&d);
	
	switch(d)
	{
		case 1:
			printf("\nSelected Preference:Upper\n");
			break;
		case 2:
		    printf("\nSelected Preference:Middle\n");
			break;
		case 3:
			printf("\nSelected Preference:Lower\n");
			break;
		case 4:
			printf("\nSelected Preference:Side Lower\n");
			break;
		case 5:
			printf("\nSelected Preference:Side Upper\n");	
			break;
		default:
			printf("\nInvalid.\nEnter corret number:");
			scanf("%d",&d);
			break;				
	}
}
	printf("\n___________________________________________________________________________________________________________________");
}


void booked()
{
	int a,b,n,c,d;
	printf("\n\nYour tickets are successfully booked.");
	printf("\nYour confirmation code is : %d%d%d%d%d",a,b,n,c,d);
	printf("\n\nThank for using our platform.\n\nVist again.!!!");
}
;

	
