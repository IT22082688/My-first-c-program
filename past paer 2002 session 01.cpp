#include<stdio.h>

int main(void){
	char emp[10];
	char name[20];
	int a[7];
	int i,j;
	 
	FILE *fp;
	fp=fopen("attendance.dat","w");
	
	for(i=1;i<=2;i++){
		printf("Employee No : ");
		scanf("%s",&emp);
		
		printf("Name : ");
		scanf("%s",&name);
		fprintf(fp,"%s %s ",emp,name);
		
		for(j=0;j<7;j++){
			printf("Enter attendance of day %d : ",j+1);
			scanf("%d",&a[j]);
			
			fprintf(fp,"%d ",a[j]);
		}
		printf("\n");
	}
	fclose(fp);
	return 0;

	
}
