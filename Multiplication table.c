# include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int i =1;
    do{
        // Code for multiplication table
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    } while(i <= 10);
    return 0;
}