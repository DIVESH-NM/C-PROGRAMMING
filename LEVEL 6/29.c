#include <stdio.h>


int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int find_lcm(int a, int b) {
    
    return (a / find_gcd(a, b)) * b; 
}

int main() {
    int num1, num2, num3, lcm;

    printf("Enter three positive integers: ");
    if (scanf("%d %d %d", &num1, &num2, &num3) != 3) {
        printf("Invalid input. Please enter numbers only.\n");
        return 1;
    }

    
    if (num1 <= 0 || num2 <= 0 || num3 <= 0) {
        printf("Please enter positive integers greater than zero.\n");
        return 1;
    }

    
    int lcm_first_two = find_lcm(num1, num2);

    
    lcm = find_lcm(lcm_first_two, num3);

    printf("The LCM of %d, %d, and %d is: %d\n", num1, num2, num3, lcm);

    return 0;
}
