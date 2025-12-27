//Name : Chnadramani Patel
//Erp : 10426
//Project Topic : Digital Root Calculator
//Topic Name : Reduce number
//QUE : Use a loop to extract digits and sum them. If sum is greater than 9, repeat the process. Continue until a single digit remains.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int sum;
    while(n>9){
        sum=0;
        while(n!=0){
        int a=n%10;
        sum=sum+a;
        n=n/10;
        }
        n=sum;
    }
    printf("Reduced sum : %d",sum);
    return 0;
}

//output:
//Enter a number:696988
//Reduced sum : 1