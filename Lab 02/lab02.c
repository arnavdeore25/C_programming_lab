#include <stdio.h>
int main()
{
    int ch, n, r, sum, temp, rev = 0;

    printf("Enter Digit: ");
    scanf("%d", &n);
    if(n < 0) {
        n  =  n * -1;
    }

    do
    {
        printf("1. Sum of Digits\n2.Sum of Odd number\n3.Sum of even numbers\n4.Reverse of the number\n5. Exit\n");
        scanf("%d", &ch);
        temp = n;
        switch (ch)
        {
        case 1:
            sum = 0;
            while (temp > 0)
            {
                r = temp % 10;
                sum += r;
                temp /= 10;
            }
            printf("Sum = %d\n", sum);
            break;
        case 2:
            sum = 0;
            while (temp > 0)
            {
                r = temp % 10;
                if (r % 2 != 0)
                {
                    sum += r;
                }
                temp /= 10;
            }
            printf("Sum of odd digits = %d\n", sum);
            break;
        case 3:
            sum = 0;
            while (temp > 0)
            {
                r = temp % 10;
                if (r % 2 == 0)
                {
                    sum += r;
                }
                temp /= 10;
            }
            printf("Sum of even digits = %d\n", sum);
            break;
        case 4:
        rev = 0;
            while (temp > 0)
            {
                r = temp % 10;
                rev = rev * 10 + r;
                temp /= 10;
            }
            printf("Reverse = %d\n", rev);
            break;
        case 5:
            break;

        default:
            printf("invalid case");
        }
    } while (ch != 5);
    return 0;
}