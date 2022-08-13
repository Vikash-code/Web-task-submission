#include <stdio.h>
int main(){
	int n,sum,rem,as;
	scanf("%d",&n);
	printf("The armstrong number between 0 and %d are----\n",n);
	for(int i=0;i<=n;i++){
	sum=0,rem=0;
	for(as=i;as!=0;as/=10){
		sum=as%10;
		rem+=sum*sum*sum;
	}
	if(i==rem)
	printf("%d ",i);
	}
}
