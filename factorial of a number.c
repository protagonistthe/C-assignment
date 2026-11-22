# include <stdio.h>
int main() {
    int num, i;
    long factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
     } 
    else 
    {
        for(i = 1; i <= num; i++) 
        {
            factorial *= i;
        }
    }
    printf("Factorial of %d = %ld\n", num, factorial);
    return 0;   
}