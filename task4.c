#include <stdio.h>

int main(){
	printf("enter number of ints:  ");
	int num = 0;
	int arr[12] = {};
	scanf("%d",&num);
	printf("enter %d ints\n", num);
	for (int i = 0; i < num; ++i){
		scanf(" %d", arr + i);}
	int zuyg_ind = 0;
	int kent_ind = num;
	for(int i = 0; i < num; ++i){
		if(arr[i] % 2 == 0){
		arr[zuyg_ind] = *(arr + i);
		++zuyg_ind;
		}else{	arr[kent_ind] = *(arr + i);
		--kent_ind;}
	}
	for(int i = 0; i < num; ++i){
		printf("%d",arr[i]);}
	return 0;}
