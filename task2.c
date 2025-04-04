#include <stdio.h>

int main(){
	int arr[10] =  {};
	printf("enter your number of numbers:  ");
	int num = 0;
	scanf("%d",&num);
	int l = 0;
	printf("enter %d int numbers:  ",num);
	for(int i = 0; i < num; ++i){
		scanf("%d",arr + i);}
	for(int i = 0; i < num; ++i){
		if(arr[i] % 2){
		       ++l;}
	}
       printf("num of kent tver is %d\n",l);
	return 0;
}		
