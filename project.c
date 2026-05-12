include<stdio.h>
#include<conio.h>
int main()
{
    int a, b;
    char op;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the operator: ");
    scanf(" %c", &op);
    printf("Enter the second number: ");
    scanf("%d", &b);
    switch (op)
    {
    case '+':
        printf("Result: %d", a + b);
        break;
    case '-':
        printf("Result: %d", a - b);
        break;
    case '*':
        printf("Result: %d", a * b);
        break;
    case '/':
        if (b != 0)
            printf("Result: %.2f", (float)a / b);
        else
            printf("Error: Division by zero");
        break;
    default:
        printf("Invalid operator");
    }
    getch();
}