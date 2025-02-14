#include <stdio.h>
int main()
{
    int unit, bill = 0;
    char type;

    printf("For Domestic users enter D \nFor Commercial users enter C\n");
    printf("Please enter your type:");
    scanf(" %c", &type);

    switch (type)
    {
    case 'D':
        printf("Please enter unit value :");
        scanf("%d", &unit);
        switch (unit)
        {
        case 0 ... 100:
            bill = unit * 4;
            break;

        case 101 ... 300:
            bill = unit * 5;
            break;

        case 301 ... 500:
            bill = unit * 6;
            break;

        default:
            bill = unit * 7;
        }
        break;

    case 'C':
        printf("Please enter unit value :");
        scanf("%d", &unit);
        switch (unit)
        {
        case 0 ... 100:
            bill = unit * 5;
            break;

        case 101 ... 300:
            bill = unit * 7;
            break;

        case 301 ... 500:
            bill = unit * 8;
            break;

        default:
            bill = unit * 9;
        }
        break;

    default:
        printf("\nInvalid!");
        return 1;
    }

    printf("\nTotal Bill= %d BDT", bill);
    return 0;
}