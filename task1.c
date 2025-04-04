#include <stdio.h>

int main(){
	char arr[100] = {};
	printf("enter number of chars:  ");
	int num = 0;
	scanf("%d",&num);
if(num >= 100){
	printf("please enter number above 100"\n);
	return 0;
	}
	for(int i = 0; i < num; ++i){
		scanf("%c",arr + i);
	}
	for(int i = 0; i <= num; ++i){
		if(arr[i] > 96){
			arr[i] -= 32;
		printf("%c",*(arr + i)) ;}	
	}
	return 0;
	}


