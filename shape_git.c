#include <stdio.h>
#include <math.h>

void printHeart(int n) {
    int i, j;

    for(i = n/2; i <= n; i += 2) {
        for(j = 1; j < n - i; j += 2) {
            printf(" ");
        }

        for(j = 1; j <= i; j++) {
            printf("*");
        }

        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for(j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    for(i = n; i >= 1; i--) {
        for(j = i; j < n; j++) {
            printf(" ");
        }

        for(j = 1; j <= (i * 2) - 1; j++) {
            printf("*");
        }

        printf("\n");
    }
}

void printTriangle(int n) {
    int i, j;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void printSquare(int n) {
    int i, j;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void printStar(int n) {
    int i, j;
    if (n < 5) n = 5;

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) printf("*");
            else if (i == n / 2 || j == n / 2) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}

void printCircle(int n) {
    int i, j;
    double dist;
    double r = n / 2.0;

    for(i = 0; i <= n; i++) {
        for(j = 0; j <= n; j++) {
            dist = sqrt((i - r) * (i - r) + (j - r) * (j - r));

            if(dist > r - 0.5 && dist < r + 0.5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void printDiamond(int n) {
    int i, j;

    for(i = 1; i <= n; i++) {
        for(j = i; j < n; j++) {
            printf(" ");
        }
        for(j = 1; j <= (2*i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    for(i = n - 1; i >= 1; i--) {
        for(j = n; j > i; j--) {
            printf(" ");
        }
        for(j = 1; j <= (2*i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int choice, n;

    printf("Choose a shape to print:\n");
    printf("1. Heart\n");
    printf("2. Right-angled Triangle\n");
    printf("3. Square\n");
    printf("4. Star\n");
    printf("5. Circle\n");
    printf("6. Diamond\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    printf("Enter the size: ");
    scanf("%d", &n);

    printf("\n");

    switch(choice) {
        case 1:
            printHeart(n);
            break;
        case 2:
            printTriangle(n);
            break;
        case 3:
            printSquare(n);
            break;
        case 4:
            printStar(n);
            break;
        case 5:
            printCircle(n);
            break;
        case 6:
            printDiamond(n);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
