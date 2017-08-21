#include<stdio.h>
#include<conio.h>
int main(){
	//intializing variables
	int tempNum,m,inputNum,i=2,count=0,k=0;
	// taking number as input
	printf("Enter a number: ");
	scanf("%d",&inputNum);
	// code for printing distance
	while(true){
		tempNum = inputNum + k; // take the input number and keep incrementing in values of 1
		m = tempNum / 2;        // take half that value to check if the number is prime or not 
		i = 2;					// smallest prime number is 2
		// code for checking a prime number	
		while(i<=m){
			if(tempNum % i == 0){
				count = count + 1;
				break;
			}
			i++;
			count = 0;
		}
		if(count == 0){
			break;
		}
		// k is the distance between numbers
		k = k + 1;
	}
	// smallest prime number is 2 so coding cases for inputs 0 and 1;
	if(inputNum == 0){
		k = i;
	}
	else if(inputNum == 1){
		k = i-1;
	}
	printf("\n output: ");
	printf("%d",k);		
}
