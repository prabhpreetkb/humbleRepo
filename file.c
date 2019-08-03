#include<stdio.h>
#include<conio.h>

int main(){
	int i;
	printf("Enter a  number:");
	scanf("%d",&i);
	for(int j =0;j<=i;j++){
		if(i%2==0){
			printf("%d",i);
		}
	}
return 0;
}
