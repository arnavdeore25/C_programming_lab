#include <stdio.h>

void generate_bill(int amt)
{
    int dis = 0, gst, f_amt;

    printf("\n===== FINAL BILL =====\n");
    printf("Total Amount = %d\n", amt);

    if (amt >= 500 && amt < 1000)
    {
        dis = (5 * amt) / 100;
    }
    else if (amt >= 1000)
    {
        dis = (10 * amt) / 100;
    }
    f_amt = amt - dis;
    gst = (18 * f_amt) / 100;
    f_amt += gst;
    printf("Discount = %d\n", dis);
    printf("GST = %d\n", gst);
    printf("Final Bill = %d\n", f_amt);
}

int main()
{
    int ch;
    int burger = 120, pizza = 250, pasta = 180, coke = 50, ice_cream = 90, pepsi = 20;
    int amt = 0, qty;

    do
    {
        printf("\n\n===== MENU =====\n");
        printf("1. Burger = 120 Rs\n");
        printf("2. Pizza = 250 Rs\n");
        printf("3. Pasta = 180 Rs\n");
        printf("4. Coke = 50 Rs\n");
        printf("5. Ice Cream = 90 Rs\n");
        printf("6. Pepsi = 20\n");
        printf("7. Generate Bill\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter quantity: ");
            scanf("%d", &qty);
            amt += qty * burger;
            break;

        case 2:
            printf("Enter quantity: ");
            scanf("%d", &qty);
            amt += qty * pizza;
            break;
        case 3:
            printf("Enter quantity: ");
            scanf("%d", &qty);
            amt += qty * pasta;
            break;

        case 4:
            printf("Enter quantity: ");
            scanf("%d", &qty);
            amt += qty * coke;
            break;

        case 5:
            printf("Enter quantity: ");
            scanf("%d", &qty);
            amt += qty * ice_cream;
            break;
        
        case 6:
            printf("Enter quantity: ");
            scanf("%d", &qty);
            amt += qty * pepsi;
            break;

        case 7:
            generate_bill(amt);
            exit(0);
            break;

        case 8:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");

        }
    } while (ch != 7);

    return 0;
}