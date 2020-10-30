# include<stdio.h>
# include<stdlib.h>
# include<string.h>
void main(void){
 	int i; char arr[5];
	memset(arr, 'a', 5);
	for (i=0;i<5;i++){
		arr[i] += i;
	}
	for (i=0;i<5;i++)
	{
		printf("%c",arr[i]);
	}
}

