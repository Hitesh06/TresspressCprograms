#include<stdio.h>
#include<conio.h>
int main(){
	int inputNum,n,countLoop = 0,countZero = 0;
	int i = 0;
	while(true){
		countLoop++;
		// first time input
		if(countLoop == 1){
			printf("Enter a number: ");
			scanf("%d",&inputNum);
		}
		// if first time input is wrong ask again for input
		if(countLoop != 1){
			printf("Number outside range please Enter a number again: ");
			scanf("%d",&inputNum);
		}
		// if input umber within range as specified then find the reverse
		if(inputNum >= 1 && inputNum <=10000){
			countLoop = 0;
			break;
		}
	}
	// logic for reverse of a number and removing leading 0's
	printf("The reverses number is: ");
	while(inputNum>0){
		countLoop ++ ;
		n = inputNum % 10;
		if(n == 0){
			countZero++;
		}
		inputNum = inputNum / 10;
		if(countLoop != countZero){
			printf("%d",n);	
		}
	}
	//successful exit with value 0	
	return 0;
}
