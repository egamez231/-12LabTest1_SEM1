#include <stdio.h>
#include <stdlib.h>
float calculate_basicPrice (char,int, float *);

void calculate_serviceCharge (float ,float *);

void print_totalPrice(float ,float);


int main ()
{

    char room;
    int iNight;
    float price, service;

    printf ("\t\tWelcome to the ASR \n\t\t Menu of the Room Pricing Inquiry.\n");
    printf("Room Type \t\t Price per Night \t\t Room Size \t\t Room Privilege\n");
    printf("Standard (S) \t\t RM230.00 \t\t 30m2 \t\t Room Facing Sea /1 Queen Bed/2 Single Bed\n");
    printf("Deluxe (D) \t\t RM300.00 \t\t 40m2 \t\t Room Facing Sea /1 King Bed/2 Queen Bed\n");
    printf("Family Suite (F) \t RM420.00 \t\t 60m2 \t\t Room Facing Sea /1 King Bed,1 Queen Bed and 1 Single Bed\n");

    printf("Enter Your Room Type : ");
    scanf ("%c",&room);
    printf("Enter Number of night : ");
    scanf("%d",&iNight);

    calculate_basicPrice (room, iNight, &price);
    calculate_serviceCharge (price, &service);


    printf("Pricing Detail");
    print_totalPrice(price, service);

    return 0;
}


float calculate_basicPrice (char R_Type, int n, float *price)
{
    switch (R_Type)
    {
    case 'S' :
      *price = (230 * n);
       break;
    case 'D' :
        *price = (300 * n);
        break;
    case 'F':
        *price = (420 * n);
        break;
    default:
        printf ("Invalid Input");
        exit (-1);
    }
}



void calculate_serviceCharge (float price, float *iServe)
{

    *iServe = (price * 0.1);

}

void print_totalPrice(float price,float service_c)
{
    float  tot;

    printf ("Basic Price : %.2f\n", price);
    printf("Service Charge : %.2f\n", service_c);

    tot = price + service_c;

    printf("Total Price : %.2f\n" , tot);
}
