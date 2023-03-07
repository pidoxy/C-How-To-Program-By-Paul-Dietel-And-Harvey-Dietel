#include<stdio.h>
int main(){
    int i, max_num=0, min_num=0,j,count;
    //since there are only 2 prime numbers,
    //c variable counts the i%j==0 section in the loop
    //Ask user to input the range
    printf("Enter a minimum number:");
    scanf("%d",&min_num);
    printf("Enter a maximum number:");
    scanf("%d",&max_num);
    
    //max num must be greater than min_num
    //max_num>min_num;
    //Write a condition for if either max num is less than or equal to 1
    if(max_num<=1){
        printf("There are no prime numbers");
        }
    //if the min num is negative or 1, start looping from 2
    else if(min_num<=1){
        //write a for loop that checks for the prime number
        for(i=2;i<max_num+1;i++){
            count=0;
            printf("%d\n",i);
            /*for(j=1;j<i+1;j++){
                if(i&j==0){
                    count+=1;
                }
            }
            if(count==2){
                printf("%d\n",j);
            }
        }
    }*/
    /*else{
        //write a for loop that checks for the prime number
        for(i=min_num;i<max_num+1;i++){
            count=0;
            for(j=1;j<i+1;j++){
                if(i&j==0){
                    count+=1;
                }
            }
            if(count==2){
                printf("%d\n",j);
            }
        }
    }*/
 }
    }
        return 0;
 }