#include <stdio.h>

int main(){
	printf("enter number of chars:  ");
	int num = 0;
	char arr[12] = {};
	scanf("%d",&num);
	printf("enter %d chars\n", num);
	for (int i = 0; i < num; ++i){
		scanf(" %c", arr + i);
	}
	int ind = num;
	char narr[12] = {};
	for(int i = 0; i <= num; ++i){
		*(narr + i) = arr[ind];
		--ind;
	printf("%c",*(narr + i));
	}
return 0;}
