#include <stdio.h>

int main(){
	int q=13;
	int d=5;
	int n=2;
	int p=1;
	int prob=0;
	
	float c=0;
	printf("how much is the cost?");
    scanf("%f", &c);
    int cost= c * 100;
    int a;
    if(25<= cost){
    	a = cost%25;
    	prob = prob + (cost-a)/25 * q;
    	cost =a;
    }
    if(10<= cost){
    	a = cost%10;
    	prob = prob + (cost-a)/10 * d;
    	cost = a;
    }
    if(5<= cost){
    	a = cost%5;
    	prob = prob + (cost-a)/5 * n;
    	cost=a;
    }
    if(1<= cost){
    	//a = c%1;
    	prob = prob + 1;
    }
    
    printf("%d", prob);
    return 0;
}