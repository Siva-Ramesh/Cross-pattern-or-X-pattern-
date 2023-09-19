#include<stdio.h>
int main(){
	int i,j,n,temp1,temp2;
	printf("Enter no:");
	scanf("%d",&n);
	temp1=n;temp2=1;
	int m=(n+1)/2;
	printf("Pattern\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if((i==j) && ((i+j)==n-1)){
				printf("%d",m);
				temp1--;
				temp2++;
			}
			else if(i==j){
				printf("%d",temp1);
				temp1--;
			}
			else if((i+j)==n-1){		
				printf("%d",temp2);
				temp2++;
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
