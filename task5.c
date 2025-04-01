#include <stdio.h>

int main(){
	printf("enter number of ints for first aarray:  ");
	int num1 = 0;
	int arr1[12] = {};
	scanf("%d",&num1);
	printf("enter %d ints\n", num1);
	for (int i = 0; i < num1; ++i){
		scanf(" %d", arr1 + i);
	}
	printf("enter number of ints for second array:  ");
	int num2 = 0;
	int arr2[12] = {};
	scanf("%d",&num2);
	printf("enter %d ints\n", num2);
	for (int i = 0; i < num2; ++i){
		scanf(" %d", arr2 + i);
	}
	int num = num1;
	int l = 0;
	if(num1 < num2)
		num = num2;
	for( int i = 0; i < num; ++i){
		if(arr1[i] == arr2[i])
			++l;}
	if(l == num){
		printf("they are equal\n");
	}else printf("they are not equal\n");
	return 0;}
