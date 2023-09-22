#include<stdio.h> 
#include<stdlib.h>
#include<time.h>

int main(){
    int number;
    int guess;
    int ngusses=1;
    srand(time(0));
    number =rand()%100+1; 
    // printf("the random number is %d \n",number);
    do
    {
        printf("guess the number between 1to100 \n");
        scanf("%d",&guess);
        if(guess>number){
            printf("lower number please \n");
        }
        else if(guess<number){
            printf("higher number please \n");
        }
        else{
            printf("you gussed in %d attempts \n",ngusses);
        }
        ngusses++;
    } while (guess!=number);
    //code by keshav kumar
    return 0;
}
