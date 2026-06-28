#include <stdio.h>

struct Ticket
{
    char name[50];
    int age;
    int seatNo;
};

int main()
{
    struct Ticket t[10];
    int booked[10] = {0};
    int choice, seat, i;

    do
    {
        printf("\n----- Ticket Booking System -----\n");
        printf("1. Book Ticket\n");
        printf("2. View Booked Tickets\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Available Seats: ");
                for(i = 0; i < 10; i++)
                {
                    if(booked[i] == 0)
                    {
                        printf("%d ", i + 1);
                    }
                }

                printf("\nEnter seat number to book: ");
                scanf("%d", &seat);

                if(seat < 1 || seat > 10)
                {
                    printf("Invalid seat number.\n");
                }
                else if(booked[seat - 1] == 1)
                {
                    printf("Seat already booked.\n");
                }
                else
                {
                    printf("Enter Passenger Name: ");
                    scanf("%s", t[seat - 1].name);

                    printf("Enter Age: ");
                    scanf("%d", &t[seat - 1].age);

                    t[seat - 1].seatNo = seat;
                    booked[seat - 1] = 1;

                    printf("Ticket Booked Successfully.\n");
                }
                break;

            case 2:
                printf("\nBooked Tickets:\n");

                for(i = 0; i < 10; i++)
                {
                    if(booked[i] == 1)
                    {
                        printf("\nSeat No : %d\n", t[i].seatNo);
                        printf("Name    : %s\n", t[i].name);
                        printf("Age     : %d\n", t[i].age);
                    }
                }
                break;

            case 3:
                printf("Thank you for using the Ticket Booking System.\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 3);

    return 0;
}