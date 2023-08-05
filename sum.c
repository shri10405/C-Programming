#include<stdio.h>
int sum(int a, int b) {
    return a + b;
}

int product(int a, int b) {
    return a * b;
}

int main() {
    int total = sum(10, 50);
    printf("%d", sum);

    int multiplication = product(10, 50);
    printf("%d", multiplication);
    return 0;
}