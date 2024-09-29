#include<stdio.h>
#define CANDIDATE_COUNT

#define CANDIDATE1 "Candidate A"
#define CANDIDATE2 "Candidate B"
#define CANDIDATE3 "Candidate C"
#define CANDIDATE4 "Candidate D"
int votescount1=0 , votescount2=0 , votescount3=0 , votescount4=0 , spoiledvotes=0;
void castevote()
{
	int choice;
	printf("\n\n ### Please Choose Your Candidate ###\n\n");
	printf("\n 1.%s",CANDIDATE1);
	printf("\n 2.%s",CANDIDATE2);
	printf("\n 3.%s",CANDIDATE3);
	printf("\n 4.%s",CANDIDATE4);
	printf("\n 5.%s""None Of These");
	printf("\n\n Input Your Choice(1-4)\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: votescount1++; break;
		case 2: votescount2++; break;
		case 3: votescount3++; break;
		case 4: votescount4++; break;
		case 5: spoiledvotes++; break;
		default:printf("Warning !! Wrong Choice");
		getchar();
	}
	printf("\n Thanks For Vote\n");
}
void votescount()
{
	printf("\n\n ### Voting Statics ###");
	printf("\n %s-%d",CANDIDATE1,votescount1);
		printf("\n %s-%d",CANDIDATE2,votescount2);
			printf("\n %s-%d",CANDIDATE3,votescount3);
				printf("\n %s-%d",CANDIDATE4,votescount4);
				printf("\n %s-%d","Spoiled Votes ",spoiledvotes);
			}
	void getleadingcandidates()
	{
		printf("\n\n ### Leading Candidate ###");
		if(votescount1>votescount2 && votescount1>votescount3 && votescount1>votescount4)
		printf("[%s]",CANDIDATE1);
		else if(votescount2>votescount1 && votescount2>votescount3 && votescount2>votescount4)
		printf("[%s]",CANDIDATE2);
		else if(votescount3>votescount1 && votescount3>votescount2 && votescount3>votescount4)
		printf("[%s]",CANDIDATE3);
		else if(votescount4>votescount1 && votescount4>votescount2 && votescount4>votescount3)
		printf("[%s]",CANDIDATE4);
		else
		printf("----- Warning!!! No-Win Situation---");
	}
	int main()
	{
		int i;
		int choice;
		do
		{
			printf("\n### Welcome To Voting 2023 ###");
			printf("\n\n 1. Caste Vote");
			printf("\n\n 2. Find Vote Count");
			printf("\n\n 3. Find Leading Candidate");
			printf("\n\n 4. Exit");
			printf("\n\nEnter Your Choice:\n");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1: castevote();break;
				case 2: votescount();break;
				case 3: getleadingcandidates();break;
				default: printf("\n Error:Invalid Choice");
			}
		}
		while(choice!=0);
		getchar();
		return 0;
	}
