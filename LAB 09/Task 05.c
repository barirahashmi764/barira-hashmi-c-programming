#include <stdio.h>
void printSensorData(void *ptr, char type){
    if (type == 'f')
    {
        printf("Temperature: %.2f Celsius\n", *(float*)ptr);
    }

    else if (type == 'i')
    {
        if (*(int*)ptr == 1)
            printf("Motion Detected\n");
        else
            printf("No Motion\n");
    }

    else if (type == 'c')
    {
        if (*(char*)ptr == 'O')
            printf("Door Open\n");
        else
            printf("Door Closed\n");
    }
}

int main()
{
    float temperature ;
    int motion ;
    char door;
    printf("enter temperature :\n");
    scanf("%f",&temperature);
    printf("enter motion (0/1) :\n");
    scanf("%d",&motion);
    printf("enter door status (O/C) :\n");
    scanf(" %c",&door);

    printSensorData(&temperature, 'f');
    printSensorData(&motion, 'i');
    printSensorData(&door, 'c');
    
    
    return 0;
}
