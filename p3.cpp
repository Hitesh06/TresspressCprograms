#include<stdio.h>
#include<conio.h>
#include<math.h>
int power(int,int);
int main(){
	int size, array[1000],i,m,max=0,digit=0,elementDigit=0,number,temp,j,carray[1000],count=0;
	// taking inputs from user
	printf("Enter the size: ");
	scanf("%d",&size);
	printf("enter elements : ");
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	//copying original array for reference of later use
	for(i=0;i<size;i++){
		carray[i] = array[i];
	}
	// code to find the maximum digit
	for(i=0;i<size;i++){
		if(max<array[i]){
			max= array[i];
		}
	}
	while(max>0){
		m = max%10;
		max=max/10;
		digit++;
	}
	// code to make all elements same as maximum digit by appending zero to it
	for(i=0;i<size;i++){
		temp = array[i];
		while(temp>0){
			m = temp % 10;
			temp = temp/10;
			elementDigit++;	
		}
		if(digit != elementDigit){
			number = power(digit,elementDigit);	
			array[i] = array[i] * number;
		}
		elementDigit = 0;			
	}
	// code to sort array in descending order
	for (i = 0; i < size; ++i)
    {
        for (j = i + 1; j < size; ++j)
        {
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
	printf("\n\n maximum number is \n");	
	i = 0;
	while(array[i]>0){
		count = 0;
		for(j=0;j<size;j++){
			if(array[i]==carray[j]){
				printf("%d",array[i]);
				count = 1;
				carray[j] = 0;           // this line of code made all the difference along with break
				break;
			}
		}
		if(count == 0){
			array[i] = array[i]/10;
		}
		else{
			i++;
		}
	}
	
}

int power(int digit,int elementDigit){
	int base = 10,power = 1,i;
	for(i=1;i<=(digit-elementDigit) ;i++){
		power = power * base;
	}
	return power;
}
