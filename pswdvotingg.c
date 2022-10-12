//WAp for online voting..

#include<stdio.h>
#include<conio.h>
#include<string.h>
int valid();
int votecount1=0,votecount2=0,votecount3=0,votecount4=0,votecount5=0,votecount6=0,votecount7=0,votecount8=0;
void castvote()
{
    int party;
    printf("\nEnter the no. from(1-7) for vote to the respective party you want *******and having  no any intrest in the above party then press no.{8} for  (NOTA)------->\n");
    scanf("%d",&party);
    switch(party)
	{
		case 1:
			printf("Apna Dal(Sonelal)");
			votecount1++;
			break;
		case 2:
			printf("BJP");
			votecount2++;
			break;
		case 3:
			printf("BSP");
			votecount3++;
			break;
		case 4:
			printf("INC");
			votecount4++;
			break;
		case 5:
			printf("PSP");
			votecount5++;
			break;
		case 6:
			printf("RLD");
			votecount6++;
			break;
		case 7:
			printf("SP\n");
			votecount7++;
			break;
		case 8:
			printf("NOTA\n");
			votecount8++;
			break;
		default:
			printf("NO....INVALID PARTY CHOOSEN IN THIS ELECTION.......>");
	}
	
	printf("\nTHanks for the vote  buddy\n\n");
	printf("<--------------------NEXT VOTER PLEASE------------------>\n\n");
}
void votecount()
{
	int total;
	printf("\n\n######## Voting statics ######");
	printf("\n Apna dal= %d",votecount1);
	printf("\n BJP= %d",votecount2);
	printf("\n BSP= %d",votecount3);
	printf("\n INC= %d",votecount4);
	printf("\n PSP= %d",votecount5);
	printf("\n RLD= %d",votecount6);
	printf("\n SP= %d",votecount7);
	printf("\n NOTA= %d\n\n",votecount8);
	total=votecount1+votecount2+votecount3+votecount4+votecount5+votecount6+votecount7+votecount8;
	printf("TOTAL %d person given vote \n",total);
}
void getLeadingparty()
{
    printf("\n\n  #### LEADING PARTY is >>>>>>>");
    if(votecount1>votecount2 && votecount1>votecount3 && votecount1>votecount4 && votecount1>votecount5 && votecount1>votecount6 && votecount1>votecount7)
    printf("APNA DAL\n\n");
    else if(votecount2>votecount1 && votecount2>votecount3 && votecount2>votecount4 && votecount2>votecount5 && votecount2>votecount6 && votecount2>votecount7)
    printf("BJP\n\n");
    else if(votecount3>votecount1 && votecount3>votecount2 && votecount3>votecount4 && votecount3>votecount5 && votecount3>votecount6 && votecount3>votecount7)
    printf("BSP\n\n");
    else if(votecount4>votecount1 && votecount4>votecount2 && votecount4>votecount3 && votecount4>votecount5 && votecount4>votecount6 && votecount4>votecount7)
    printf("INC\n\n");
    else if(votecount5>votecount1 && votecount5>votecount2 && votecount5>votecount3 && votecount5>votecount4 && votecount5>votecount6 && votecount5>votecount7)
    printf("PSP\n\n");
    else if(votecount6>votecount1 && votecount6>votecount2 && votecount6>votecount3 && votecount6>votecount4 && votecount6>votecount5 && votecount6>votecount7)
    printf("RLD\n\n");
    else if(votecount7>votecount1 && votecount7>votecount2 && votecount7>votecount3 && votecount7>votecount4 && votecount7>votecount5 && votecount7>votecount6)
    printf("SP\n\n");
    else
    printf("----- Warning !!! equal vote situation for all party----");  
}
int valid()
{
	int choice;
    do
	{
	printf("------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("<<*********WELCOME TO ELECTION/VOTING 2022********>>\n\n");
	printf("There are several parties in INDIA choose wisely for your valuable vote in the election....\n\n");
	printf("Namely there are 7 most valuable parties in UTTAR PRADESH ELECTION 2022 ---------> \n\n");
	printf("1. Apna Dal(Sonelal)\n2. BJP(Bhartiya Janta Party)\n3. BSP(Bahujan samaj party)\n4. INC(Indian National Congress)\n5. PSP(Pragatishell Samajwadi Party)\n6. RLD(Rashtriya Lok Dal)\n7. SP(Samajwadi Party)\n\n");
	printf("Enter the choice (1. TO CAST THE VOTE ,, 2. TO COUNT TOTAL VOTE & 3. FIND THE LEADING PARTY)------> & ( PRESS 0 TO EXIT FROM THE ELECTION.....)\n");
    scanf("%d",&choice);
	switch(choice)
	{
	    case 1: castvote(); break;
		case 2: votecount(); break;
		case 3: getLeadingparty(); break;
		default: printf("ERROR IN SELECTION of CHOICE....\n\n");
	}
}
    while(choice!=0);
    printf("EXIT TATA BYE BYE....");
    return 0;
}

int main()
{
	printf("<<<<-------PLEASE VALIDATE YOUR AUTHENTICITY------->>\n");
    char pwd[5];
	char uname[10];
	int i;
	puts("Enter username-");
	gets(uname);
	puts("Enter password-");
	for(i=0;i<5;i++)
	{
		pwd[i]=getch();
		printf("*");
    }
    pwd[i]='\0';
	if(strcmp(uname,"arvind")==0 && strcmp(pwd,"kumar")==0)
	{
    printf("\n----GO AHEAD FOR ELECTION--!!!\n\n");
	valid();
	}
    else
	printf("\nSorry !! buddy Invalid Username / Password !!");
	return 0;
}




