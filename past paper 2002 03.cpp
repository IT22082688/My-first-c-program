#include<stdio.h>
#include<assert.h>

float calcRemainingFuel(int vehicleType,float usedFuelQuota);
float calcFuelcost(int vehicleType,float usedFuelQuota);
void displayDetails(int vType,float usedFuelQuota,float remainingQuota,float cost);


int main(void){
	int type;
	float usedquota;
	assert(calcRemainingFuel(1,3.00)==2.00);
	assert(calcRemainingFuel(4,25.00)==5.00);
	
	printf("Enter the vehicle type : ");
	scanf("%d",&type);
	
	while(type!=-1){
	
	
	printf("\nEnter the used quota : ");
	scanf("%f",&usedquota);
	
	calcRemainingFuel(type,usedquota);
	calcFuelcost(type,usedquota);
	
	displayDetails(type,usedquota,calcRemainingFuel(type,usedquota),calcFuelcost(type,usedquota));
	
	printf("\n\nEnter the vehicle type : ");
	scanf("%d",&type);
	}
	return 0;
}

float calcRemainingFuel(int vehicleType,float usedFuelQuota){
	float remainfuel;
	
	if (vehicleType==1){
		remainfuel=5.00-usedFuelQuota;
	}
	else if (vehicleType==2){
		remainfuel=20.00-usedFuelQuota;
	}
	else if (vehicleType==3){
		remainfuel=20.00-usedFuelQuota;
	}
	else if (vehicleType==4){
		remainfuel=30.00-usedFuelQuota;
	}
	else{
		return 0;
	}
	return remainfuel;
}

float calcFuelcost(int vehicleType,float usedFuelQuota){
	float fuelcost;
	
	if (vehicleType==1){
		fuelcost=370.00*usedFuelQuota;
	}
	else if (vehicleType==2){
		fuelcost=370.00*usedFuelQuota;
	}
	else if (vehicleType==3){
		fuelcost=510.00*usedFuelQuota;
	}
	else if (vehicleType==4){
		fuelcost=370.00*usedFuelQuota;
	}
	else{
		return 0;
	}
	return fuelcost;	
}

void displayDetails(int vType,float usedFuelQuota,float remainingQuota,float cost){
	printf("\n%s%20s%20s%15s","Vehicle type","Quota used","Quota Remaining","Fuel Cost\n");
	printf("%d%30.2f%20.2f%18.2f",vType,usedFuelQuota,remainingQuota,cost);

}
