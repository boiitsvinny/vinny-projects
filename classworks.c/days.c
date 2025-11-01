#include <stdio.h>
int main()
{
    int day ;
    printf("which day is the day which is the day they day about: ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf(" day 1 : sunday\n");
        break;
    case 2:
        printf(" day 2 : monday\n");
        break;
    case 3:
        printf(" day 3 : tuesday\n");
        break;
    case 4:
        printf(" day 4 : wednusday\n");
        break;
    case 5:
        printf(" day 5 : thursday\n");
        break;
    case 6:
        printf(" day 6 : friday\n");
        break;
    case 7:
        printf(" day 7 : saturday\n");
        break;
    default:
        printf(" invalid choice\n");
    }
    return 0;
}