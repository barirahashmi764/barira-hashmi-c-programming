#include<stdio.h>
#define toll_rate 50

void processVehicle(char vehicleType[]){
	static int totalRevenue = 0;
    static int totalVehicles = 0; 
    totalVehicles++;
    totalRevenue = totalRevenue + toll_rate;
    printf("Vehicle Type: %s\n", vehicleType);
    printf("Total vehicles processed : %d\n",totalVehicles);
    printf("Total Revenue : %d\n",totalRevenue);
    
}
int main(){
	char vehicletype[]="car";
	processVehicle(vehicletype);
	processVehicle(vehicletype);
	processVehicle(vehicletype);
	processVehicle(vehicletype);
	processVehicle(vehicletype);
	return 0;
}
