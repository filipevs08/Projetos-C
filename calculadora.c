#include <stdio.h>

float sum(float a, float b);
float min(float a, float b);
float div(float a, float b);
float mult(float a, float b);

int main(void)
{
    float n1;
    float n2;
    char op;
    //scanf("%[^1-10]s", &n1");
    printf("numero 1:\n");
    scanf("%f", &n1);

    printf("numero 2:\n");
    scanf("%f,", &n2);

    printf("operacao(+,-,/,*)\n");
    scanf(" %c", &op);


    switch(op)
    {
        case '+':
            printf("%.2f", sum(n1,n2));
            break;
        case '-':
            printf("%.2f", min(n1,n2));
            break;
        case '/':
            printf("%.2f", div(n1,n2));
            break;
        case '*':
            printf("%.2f", mult(n1,n2));
            break;
        default:
            printf("digite uma opcao valida");
        
    }
}
float sum(float a, float b)
{
    float c = a + b;
    return c;
}
float min(float a, float b)
{
    float c = a - b;
    return c;
}
float div(float a, float b)
{
    float c = a / b;
    return c;
}
float mult(float a, float b)
{
    float c = a * b;
    return c;
}

