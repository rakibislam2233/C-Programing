// aritmetic oparator
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two number : ");
    scanf("%d  %d", &num1, &num2);
    int jogfol = num1 + num2;
    printf(" Total Jog fol :  %d + %d = %d \n", num1, num2, jogfol);
    int biyogfol = num1 - num2;
    printf("%d - %d = %d \n ", num1, num2, biyogfol);
    int gunfol = num1 * num2;
    printf("%d * %d = %d \n", num1, num2, gunfol);
    int vagfol = num1 / num2;
    printf("%d / %d = %d \n", num1, num2, vagfol);

    // only integer ar jonno vagses ber korbo. karon float or dobule ar jonno . amader k real value tai dei. integer hole vag korle only vagfol dei but vagses dei na

    int vagses = num1 % num2;
    printf("%d %% %d = %d\n", num1, num2, vagses);

    int price = 10;
    price += 10;
    printf("Price Increment : %d\n", price);
    price -= 5;
    printf("Price Decrement : %d\n", price);
    price++;
    printf("Price ++ %d\n", price);
    price--;
    printf("Price -- %d\n", price);

    return 0;
}
