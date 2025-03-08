#include<stdio.h>
int welcome();
int tickets();
int destination();
int trains();
int teir();
int seats();
int booked();


int main(){
welcome();
tickets();
destination();
trains();
teir();
seats();
booked();

}

int welcome()
{
	printf("Welcome to NAGPUR  TRAIN TICKETS");
}

int tickets()
{
	printf("\nBook  train tickets today from nagpur to mega cities");
}

int destination()
{
	int a;
	printf("\nSelect your destination number from below options ");
	printf("\n 1.MUMBAI");
	printf("\n 2.DELHI");
	printf("\n 3.HYDERABAD");
	printf("\n 4.CHENNAI");
	printf("\n 5.BENGALURE\n");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
			printf("\nSelected: MUMBAI");
			break;
		
		case 2:
			printf("\nSelected: DELHI");
			break;
		
		case 3:
			printf("\nSelected: HYDERABAD");
			break;
			
		case 4:
			printf("\nSelected: CHENNAI");
			break;
			
		case 5:
			printf("\nSelected: BENGALURU");
			break;
		
		default:
			printf("\nEnter corret number");
			destination();
			break;			
	}
    
}
	int trains()
	{int a;
		if(a==1)
		 {
			int b;
			printf("\n The trains avilable to MUMBAI:");
			printf("\n Train Name		Train No		Arrival        Depature	");
			printf("\n 1.VIDARBHA SF EXP         19834                1:50           2:00");
			printf("\n 2.GITANJALI EXP 	   13028                4:20           4:30");
			printf("\n 3.SEWAGRAM SF EXP         23294                9:30           9:40");
			printf("\n 4.MUMBAI CSMP SF          26492                12:50          13:00");
			printf("\n 5.MUMBAI LLT SF EXP       12038                15:00          15:10");
			printf("\n Choose the train by entering its number.\n");
			scanf("%d",&b);
		switch(b)
		{
		case 1:
			printf("\nSelected: VIDARBHA SF EXP");
			break;
		
		case 2:
			printf("\nSelected: GITANJALI EXP");
			break;
		
		case 3:
			printf("\nSelected:  SF EXP");
			break;
			
		case 4:
			printf("\nSelected: MUMBAI CSMP SF");
			break;
			
		case 5:
			printf("\nSelected: MUMBAI LLT SF EXP");
			break;
		
		default:
		printf("\nEnter corret number");
			trains();
			break;		
		}
	 }
		else if(a==2)
		{
			int c;
			printf("\n The trains avilable to DELHI:");
			printf("\n   Train Name 		    	  Train No.            Arrival         Depature");
			printf("\n 1.DAKSHIN SF EXP                  74387                5:20            5:30");
			printf("\n 2.KERALA EXP                      12875                9:15            9:20");
			printf("\n 3.TELANGANA EXP                   67346                12:20           12:30");
			printf("\n 4.ANDHRA PRADESH SF EXP           23412                16:40           16");
			printf("\n 5.GRAND TRUNK EXP");
		    printf("\n Choose the train by entering its number.\n");
			scanf("%d",&c);
		switch(c)
	{
		case 1:
			printf("\nSelected: DAKSHIN SF EXP");
			break;
		
		case 2:
			printf("\nSelected: KERALA EXP");
			break;
		
		case 3:
			printf("\nTELANGANA EXP");
			break;
			
		case 4:
			printf("\nSelected: ANDHRA PRADESH SF EXP");
			break;
			
		case 5:
			printf("\nSelected: GRAND TRUNK EXP");
			break;
		
		default:
			printf("\nEnter corret number");
			trains();
			break;		
		}
	}
		else if(a==3)
		{
			int d;
			printf("\n The trains avilable to HYDERABAD:");
			printf("\n   Train Name 		   	 Train No.            Arrival         Depature");
			printf("\n 1.DURONTO EXP                     12345                3:45            3:50");
			printf("\n 2.HUMSAFAR EXP                    67348                5:50            6:00");
			printf("\n 3.SECUNDERABAD SF EXP             12783                12:20           12:30");
			printf("\n 4.YESVSANTPUR SF                  64637                16:00           16:20");
			printf("\n 5.SAMPARK KRANTI EXP              12287                18:30           18:40");
			printf("\n Choose the train by entering its number. \n");
			scanf("%d",&d);
				switch(d)
	{
		case 1:
			printf("\nSelected: DURONTO EXP");
			break;
		
		case 2:
			printf("\nSelected: HUMSAFAR EXP");
			break;
		
		case 3:
			printf("\nSelected: SECUNDERABAD SF EXP");
			break;
			
		case 4:
			printf("\nSelected: YESVSANTPUR SF");
			break;
			
		case 5:
			printf("\nSelected: SAMPAK KRANTI EXP");
			break;
		
		default:
			printf("\nEnter corret number");
			trains();
			break;		
		}
	}
		else if(a==4)
		{
			int e;
			printf("\n The trains avilable to CHENNAI:");
			printf("\n   Train Name 		 	  Train No.            Arrival         Depature");
			printf("\n 1.RAJDHANI EXP                   16734                 6:00            6:20");
			printf("\n 2.SMVT EXP                       12356                 11:00           11:20");
			printf("\n 3.RAPTISAGAR SF EXP              12451                 12:30           12:50");
			printf("\n 4.MGR CENTRAL EXP                23412                 17:50           18:00");
			printf("\n 5.MADURAI SF EXP                 12734                 21:00           21:20");
			printf("\n Choose the train by entering its number.\n");
			scanf("%d",&e);	
				switch(e)
	{
		case 1:
			printf("\nSelected: RAJDHANI EXP");
			break;
		
		case 2:
			printf("\nSelected: SMVT EXP");
			break;
		
		case 3:
			printf("\nSelected: RAPTISAGAR SF EXP");
			break;
			
		case 4:
			printf("\nSelected: MGR CENTRAL EXP");
			break;
			
		case 5:
			printf("\nSelected: MADURAI SF EXP");
			break;
		
		default:
			printf("\nEnter corret number");
			trains();
			break;		
		}
	}
		else if(a==5)
		{
			int f;
			printf("\n The trains avilable to BENGALURU:");
			printf("\n   Train Name 			    Train No.            Arrival         Depature");
			printf("\n 1.SANGAMITRA SF EXP               25344                6:00            6:10");
			printf("\n 2.KONGU EXP                       24538                11:00           11:20");
			printf("\n 3.BAGMATI SF EXP                  43546                13:00           13:20");
			printf("\n 4.KSR SF EXP                      53263                18:00           18:20");
			printf("\n 5.CLONE SPL                       54634                23:00           23:20");
			printf("\n Choose the train by entering its number.\n");
			scanf("%d",&f);	
				switch(f)
	{
		case 1:
			printf("\nSelected: SANGAMITRA SF EXP");
			break;
		
		case 2:
			printf("\nSelected: KONGU EXP");
			break;
		
		case 3:
			printf("\nSelected: BAGMATI SF EXP");
			break;
			
		case 4:
			printf("\nSelected: KSR SF EXP");
			break;
			
		case 5:
			printf("\nSelected: CLONE SPL");
			break;
		
		default:
		printf("\nEnter corret number");
			trains();
			break;		
		}
	}
}
	int teir()
	{
		int a;
		int n;
		int p;
		printf("\nEnter the number of tickets you want to book.\n");
		scanf("%d",&n);
		if(a==1)
		{    int g;
			printf("\nPrice for AC coach = Rs.1800/- ");
			printf("\nPrice for NON-AC coach = Rs.700/-");
			
			printf("\nEnter 1 for AC coach or else 2 for NON-AC coach.\n");
			scanf("%d",&g);
			switch(g)
			{
				case 1:
					printf("\nSelected: AC coach");
					p=n*1800;
					printf("\n The total price is %d",p);
					break;
					
				case 2:
				    printf("\nSelected: NON-AC coach");	
				    	p=n*700;
					printf("\n The total price is %d",p);
				    break;
		      default:
						printf("\nEnter corret number");
						teir();
						break;	
			}
	    }
		if(a==2)
		{    int h;
			printf("\nPrice for AC coach = Rs.2500/- ");
			printf("\nPrice for NON-AC coach = Rs.1100/-");
			
			printf("\nEnter 1 for AC coach or else 2 for NON-AC coach.\n");
			scanf("%d",&h);
			switch(h)
			{
				case 1:
					printf("\nSelected: AC coach");
						p=n*2500;
					printf("\n The total price is %d",p);
					break;
					
				case 2:
				    printf("\nSelected: NON-AC coach");
				    	p=n*1100;
					printf("\n The total price is %d",p);
					break;
	    		default:
					printf("\nEnter corret number");
					teir();
					break;		
			}
		}
		
		if(a==3)
		{    int i;
			printf("\nPrice for AC coach = Rs./-1900 ");
			printf("\nPrice for NON-AC coach = Rs.800/-");
			
			printf("\nEnter 1 for AC coach or else 2 for NON-AC coach.\n");
			scanf("%d",&i);
			switch(i)
			{
				case 1:
					printf("\nSelected: AC coach");
						p=n*1900;
					printf("\n The total price is %d",p);
					break;
				case 2:
				    printf("\nSelected: NON-AC coach");
				    	p=n*800;
					printf("\n The total price is %d",p);
					break;	
				default:
					printf("\nEnter corret number");
					teir();
					break;	
			}
		
     	}
	
		if(a==4)
		{    int j;
			printf("\nPrice for AC coach = Rs.2700/- ");
			printf("\nPrice for NON-AC coach = Rs.1300/-");
			
			printf("\nEnter 1 for AC coach or else 2 for NON-AC coach.\n");
			scanf("%d",&j);
			switch(j)
			{
				case 1:
					printf("\nSelected: AC coach");
						p=n*2700;
					printf("\n The total price is %d",p);
					break;
				case 2:
				    printf("\nSelected: NON-AC coach");
						p=n*1300;
					printf("\n The total price is %d",p);	
				    break;
			    default:
					printf("\nEnter corret number");
					teir();
					break;
			}
	    }
	    
	    
		if(a==5)
		{    int k;
			printf("\nPrice for AC coach = Rs.2900/- ");
			printf("\nPrice for NON-AC coach = Rs.1400/-");
			
			printf("\nEnter 1 for AC coach or else 2 for NON-AC coach.\n");
			scanf("%d",&k);
			switch(k)
			{
				case 1:
					printf("\nSelected: AC coach");
						p=n*2900;
					printf("\n The total price is %d",p);
					break;
				case 2:
				    printf("\nSelected: NON-AC coach");	
				    	p=n*1400;
					printf("\n The total price is %d",p);
				    break;
			    default:
					printf("\nEnter corret number");
					teir();
					break;
			}
	    } 

}

int seats()
{	int w;
	printf("\nEnter your seat preferencefrom the given options below:");
	printf("\n1.Upper");
	printf("\n2.Middle");
	printf("\n3.Lower");
	printf("\n4.Side Lower");
	printf("\n5.Side Upper");
	scanf("%d",&w);
	
	switch(w)
	{
		case 1:
			printf("\nSelected:Upper");
			break;
		case 2:
		    printf("\nSelected:Middle");
			break;
		case 3:
			printf("\nSelected:Lower");
			break;
		case 4:
			printf("\nSelected:Side Lower");
			break;
		case 5:
			printf("\nSelected:Side Upper");	
			break;
		default:
			printf("\nEnter corret number");
			seats();
			break;				
	}
}
	
int booked()
{
	printf("\nYour tickets are successfully booked.");
	printf("\nThank for using our platform.Vist again.");
}

	






