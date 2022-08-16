#include<stdio.h>

main()
{
    int a, b;

    printf("Welcome to the TrulyInfinite Support Service!\n");
    printf("NOTE: Please Enter the number of the option you want to select\n\n");

    printf("1. File a complain\n");
    printf("2. Request a Call Back\n");

    printf("\nEnter your selection: ");
    scanf("%d", &a);

    switch(a)
    {
    case 1:
        printf("\n\nPlease select a method to file a complain\n\n");
        printf("1. Fill the form you'll receive on your registered mobile number\n");
        printf("2. Talk to our customer care executive\n\n");
        printf("\nEnter your selection: \n\n");
        scanf("%d",&b);
        switch(b)
            {
            case 1:
                printf("ThankYou for contacting us! You'll soon receive a Link on your registered mobile number.");
                break;
            case 2:
                printf("ThankYou for contacting us! Our customer care executive will get back to you shortly.");
                break;
            }
            break;

            case 2:
                printf("\n\nThankYou for contacting us! We'll reach back to you shortly!");
            break;
    }
}
