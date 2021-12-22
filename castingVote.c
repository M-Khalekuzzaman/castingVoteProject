#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

#define CANDIDATE_COUNT
#define CANDIDATE1 "Khalekuzzaman"
#define CANDIDATE2 "Kaochar"
#define CANDIDATE3 "Shakib"
#define CANDIDATE4 "Ashik"
#define CANDIDATE5 "Jim"

int votesCount1 = 0,votesCount2 = 0,votesCount3 = 0,votesCount4 = 0,votesCount5 = 0;
castVote()
{
    int choice;
    printf("\n  ***** Please choose your favorite candidate *****\n");
    printf("\n 1. %s",CANDIDATE1);
    printf("\n 2. %s",CANDIDATE2);
    printf("\n 3. %s",CANDIDATE3);
    printf("\n 4. %s",CANDIDATE4);
    printf("\n 5. %s",CANDIDATE5);

    printf("\n\n Input Your choice( 1 - 5 ) : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1 :
        votesCount1 ++;
        break;
    case 2 :
        votesCount2 ++;
        break;
    case 3 :
        votesCount3 ++;
        break;
    case 4 :
        votesCount4 ++;
        break;
    case 5 :
        votesCount5 ++;
        break;
    default :
        printf("Your choice option is not available for vote\n");
        break;
    }
    printf("\n Thanks for Vote......!!\n");
}
votesCount()
{
    printf("\n ***** Voting Statics *****\n");
    printf("\n %s  -  %d ",CANDIDATE1,votesCount1);
    printf("\n %s        -  %d ",CANDIDATE2,votesCount2);
    printf("\n %s         -  %d ",CANDIDATE3,votesCount3);
    printf("\n %s          -  %d ",CANDIDATE4,votesCount4);
    printf("\n %s            -  %d \n",CANDIDATE5,votesCount5);
}
getLeadingCandidates()
{
    printf("\n ***** Leading Candidate *****\n");
    if(votesCount1 > votesCount2 && votesCount1 > votesCount3 && votesCount1 > votesCount4 && votesCount1 > votesCount5)
        printf("\n %s ---- %d ",CANDIDATE1,votesCount1);
    else if(votesCount2 > votesCount1 && votesCount2 > votesCount3 && votesCount2 > votesCount4 && votesCount2 > votesCount5)
        printf("\n %s ---- %d ",CANDIDATE2,votesCount2);
    else if(votesCount3 > votesCount1 && votesCount3 > votesCount2 && votesCount3 > votesCount4 && votesCount3 > votesCount5)
        printf("\n %s ---- %d ",CANDIDATE3,votesCount3);
    else if(votesCount4 > votesCount1 && votesCount4 > votesCount2 && votesCount4 > votesCount3 && votesCount1 > votesCount5)
        printf("\n %s ---- %d ",CANDIDATE4,votesCount4);
    else
        printf("\n %s ---- %d ",CANDIDATE5,votesCount5);

}
int main()
{
    int i,cho;
    time_t currentTime;
    time(&currentTime);
    printf("\n\t\t\t\t\t\t\t\t\t\t Date & Time : %s",ctime(&currentTime));
    do
    {
        printf("\n ########## Welcome To Electric Voting System ###########");
        printf("\n\n 1. Cast the Vote");
        printf("\n 2. Find Vote Count");
        printf("\n 3. Find Leading Candidate");
        printf("\n 0. Exit");

        printf("\n\n Please enter your choice option : ");
        scanf("%d",&cho);

        switch(cho)
        {
        case 1 :
            castVote();
            break;
        case 2 :
            votesCount();
            break;
        case 3 :
            getLeadingCandidates();
            break;
        default :
            printf("\n Error : Invalid Choice option\n");
            break;
        }
    }while(cho != 0);


    return 0;
}
