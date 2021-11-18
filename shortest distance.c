#include <stdio.h>
int main()
{
    printf("THIS CODE IS MADE BY SHUBHAM AND PARAS\n");
    int n,m,price,tprice,n2;
    printf("DELHI TO SHIMLA RIDES AND COST\n");
    printf("ENTER YOUR CHOICE\n 1 FOR BUS\n 2 FOR TRAIN \n 3 FOR FLIGHT\n 4 FOR RENTED CAR \n 5 FOR OWN VEHICLE\n");
    printf("THE SHORTEST DISTANCE BETWEEN DELHI TO SHIMLA IS 350 KMS\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("THE PRICE FOR BUS FARE IS 1.5 RS PER KM\n");
        price=350*1.5;
        printf("TOTAL PRICE FOR THE FARE IS=%d",price);
        break;
        case 2:
        printf("TRAINS\n");
        printf("THE PRICE FOR FIRST CLASS AC IS 1500RS\n");
        printf("THE PRICE FOR SECOND CLASS IS 1000RS\n");
        printf("THE PRICE FOR THIRD CLASS IS 750RS\n");
        break;
        case 3:
        printf("NO FLIGHTS ARE AVAILABLE IN THIS ROUTE BEACUSE NO AIRPORT FROM SHIMLA\n");
        break;
        case 4:
        printf("THE PRICE FOR CAR RENT IS 1000RS PER DAY\n");
        printf("ENTER THE MILEAGE OF THE RENTED CAR");
        scanf("%d",&m);
        printf("\nCURRENT PETROL PRICE IS 105 RS PER LITRE\n");
        price=(350/m)*105;
        tprice=1000+price;
        printf("TOTAL COST FOR THE FARE IS=%d",tprice);
        break;
        case 5:
        printf("ENTER THE CHOICE\n 1 FOR CAR\n 2 FOR BIKE\n");
        scanf("%d",&n2);
        switch(n2)
        {
            case 1:
            printf("PASSENGER CHOSE CAR\n");
            printf("ENTER THE MILEAGE OF THE CAR");
            scanf("%d",&m);
            printf("\nCURRENT PETROL PRICE IS 105 RS PER LITRE\n");
            price=(350/m)*105;
            printf("TOTAL COST FOR THE FARE IS=%d",price);
            break;
            case 2:
            printf("PASSENGER CHOSE BIKE\n");
            printf("ENTER THE MILEAGE OF THE BIKE");
            scanf("%d",&m);
            printf("\nCURRENT PETROL PRICE IS 105 RS PER LITRE\n");
            price=(350/m)*105;
            printf("TOTAL COST FOR THE FARE IS=%d",price);
            break;
            default:
            printf("PLEASE CHOOSE CORRECT OPTION\n");
            break;
        }
        break;
        default:
        printf("PLEASE ENTER CORRECT OPTION\n");
    }
    return 0;
} 