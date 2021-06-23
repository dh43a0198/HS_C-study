#include <stdio.h>

void calculate_print_big(double amount, int div) {
    int num = amount / div;
    switch (num) {
        case 1 : printf("one "); break;
        case 2 : printf("two "); break;
        case 3 : printf("three "); break;
        case 4 : printf("four "); break;
        case 5 : printf("five "); break;
        case 6 : printf("six "); break;
        case 7 : printf("seven "); break;
        case 8 : printf("eight "); break;
        case 9 : printf("nine "); break;
        default: printf("something wrong ");
    }

    printf("$%d bills, ", div);
}
void calculate_print_small(int cent, int div) {
    int num = cent / div;
    switch (num) {
        case 1 : printf("one "); break;
        case 2 : printf("two "); break;
        case 3 : printf("three "); break;
        case 4 : printf("four "); break;
        case 5 : printf("five "); break;
        case 6 : printf("six "); break;
        case 7 : printf("seven "); break;
        case 8 : printf("eight "); break;
        case 9 : printf("nine "); break;
        default: printf("something wrong ");
    }
    switch (div) {
        case 25:
            printf("quarter, ");
            break;
        case 10:
            printf("dime, ");
            break;
        case 1:
            printf("pennies, ");
            break;
        default:
            printf("something wrong");
            break;
    }
}
void calculate(double amount) {
    int dollar, cent;
    dollar = amount;
    cent = (amount - dollar) * 100 + 1;
    int div = 1000;
    while (div > 0)  {
        calculate_print_big(dollar,div);
        dollar %= div;
        div /= 10;
    }
    div = 25;
    calculate_print_small(cent, div);
    cent %= div;
    div = 10;
    calculate_print_small(cent, div);
    cent %= div;
    div = 1;
    calculate_print_small(cent, div);
}

int main() {
    double amount = 2436.37;
    // printf("Enter a dollar amount: ");
    // scanf("%lf", &amount);
    // printf("dollar check %d\n", dollar);
    // printf("cent check %d\n", cent);
    calculate(amount);
}
