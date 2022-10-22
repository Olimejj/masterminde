#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main(){
char guess[5];
int nums[5];
int tests[5];
int gueses =0;
srand(time(0));
FILE * f = fopen("scores.txt", "a+");
for(int x=0; x<5; x++)
{
 int c = rand();
 nums[x]= (c % 5)+1;
} int tru =0;
int order=0;
 printf("Can you guess my secret code?\n");
 printf("To play enter a 5 digit code using numbers 1-5\n");

while(tru <5){
	tru=0;
	order=0;
	scanf("%s",guess);
	gueses++;
for(int i=0;i<5;i++)
{
	if(nums[i]== guess[i]-'0')
	{
		tru++;
	}
	tests[i]=
	nums[i];
}
if(tru !=5){
for(int j =0;j <5;j++){
	for(int k=0; k<5; k++){
		
	
		if(tests[k]==guess[j]-'0' && guess[j] !='9'){
			guess[j]='9';
			tests[k]=8;
		     order++;
		}
	}
}}
printf("number correct:%d\n",tru);
if(tru !=5){printf("numbers in the code:%d\n",order);}
}
printf("You Broke The CODE!\n");
printf("it only took you: %d guesses to crack\n", gueses);
char name[30];
printf("enter your name");
scanf("%s", name);
fprintf(f,"%s %s %d %s","it took", name, gueses,"to crack the code");
fclose(f);
return 0;
}

