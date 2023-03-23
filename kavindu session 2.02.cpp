#include<stdio.h>
#define SIZE 5
int main(void)
{
	int userRating[SIZE] = {0};
	int num,i,j;
	
	printf("Enter the user ratings(1-5)(-99 to terminate)");
	scanf("%d",&num);
	
	while(num!=-99){
		if(num>0&&num<6){
			userRating[num-1]++;
		}
		scanf("%d",&num);
		
		
		
	}
	printf("\nrating Histogram");
	
	for(i=0;i<5;i++){
		printf("%  ",i+1);
		
		for(j=1;j<=userRating[i];++j){
			printf("*");
		}
	}
	
	return 0;
	
	
	
	
	
	
	
	
	
}
