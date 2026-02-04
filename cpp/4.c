#include <stdio.h>

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    // Base case: only one disk
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    // Step 1: Move n-1 disks from source to auxiliary
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Step 2: Move the largest disk from source to destination
    printf("Move disk %d from %c to %c\n", n, source, destination);

    // Step 3: Move n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}

#include <stdio.h>
int fact(int n) {
 if (n == 0) return 1;
 return n * fact(n - 1);
}
int main() {
 int n;
 printf("Enter a number: ");
 scanf("%d", &n);
 printf("Factorial = %d\n", fact(n));
 return 0;
}

#include <stdio.h>
int fib(int n) {
 if (n == 0) return 0;
 if (n == 1) return 1;
 return fib(n - 1) + fib(n - 2);
}
int main() {
 int n, i;
 printf("Enter number of terms: ");
 scanf("%d", &n);
 printf("Fibonacci Series: ");
 for (i = 0; i < n; i++)
 printf("%d ", fib(i));
 printf("\n");
 return 0;
}