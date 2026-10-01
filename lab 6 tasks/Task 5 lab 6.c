#include<stdio.h>
int factorial(int x) {
    int fact = 1;
    for (int i = 1; i <= x; i++) {
        fact = fact * i;
    }
    return fact;
}
int main() {
	int n, catalan;

    printf("Enter n: ");
    scanf("%d", &n);

    catalan = factorial(2 * n) / (factorial(n + 1) * factorial(n));

    printf("Catalan number = %d", catalan);

    return 0;
	
}
