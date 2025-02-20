// Assignment - 2 ; Topic - 4 (Lab Exercise)....



#include <stdio.h>  

int main() {
    int a, b;  

    // user input
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Arithmetic Operations
    printf("\n----> Arithmetic Operations\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    
    if (b != 0) {
        printf("%d / %d = %d\n", a, b, a / b);
        printf("%d %% %d = %d\n", a, b, a % b);  
    } else {
        printf("Division and modulus by zero are not allowed.\n");
    }

    // Performing Relational Operations
    printf("\n----> Relational Operations \n");
    printf("%d == %d : %d\n", a, b, a == b);
    printf("%d != %d : %d\n", a, b, a != b);
    printf("%d > %d : %d\n", a, b, a > b);
    printf("%d < %d : %d\n", a, b, a < b);
    printf("%d >= %d : %d\n", a, b, a >= b);
    printf("%d <= %d : %d\n", a, b, a <= b);

    // Performing Logical Operations
    printf("\n----> Logical Operations \n");
    printf("(%d && %d) : %d\n", a, b, (a && b));  // Logical AND
    printf("(%d || %d) : %d\n", a, b, (a || b));  // Logical OR
    printf("!(%d) : %d\n", a, !a);  // Logical NOT for 'a'
    printf("!(%d) : %d\n", b, !b);  // Logical NOT for 'b'

    return 0;  
}

