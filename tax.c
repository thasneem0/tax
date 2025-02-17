#include<stdio.h>
void main()
{
    int dt;
    char vt[100];
    float base_charge,discount;
    printf("enter the vehicle type\n");
    scanf("%s",vt);
    printf("enter the distance travelled in km\n");
    scanf("%d",dt);
    if(bus)
    {
        base_charge=dt*5;
        printf("the tax for car is %f");
    }
    if(truck)
    {
        base_charge=dt*10;
        printf("the tax for the truck is %f");
        if(truck>500)
        {
            discount=base_charge*0.1;
            printf("the discount amount is %f");
        }
    }
    if(bus)
    {
        base_charge=dt*8;
        printf("the tax is %f");
        if(bus>300)
        {
            discount=base_charge*0.5;
            printf("the discount amount is %f")
        }
    }
    
}

