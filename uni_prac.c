#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int prime(int num) {
    int f = 0;
if (num <= 1)
        return -1;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            f = 1;
            break;
        }
    }
    if (f == 1)
        return -1;
    else
        return num;
}

void s_array(int a[], int x) {
    for (int i = 0; i < x - 1; i++) {
        for (int j = 0; j < x - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    printf("Sorted array: ");
    for (int i = 0; i < x; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void s_f(int y) {
    char a[100];
    int k;
    for (k = 1; k <= y; k++) {
        printf("Enter string %d: ", k);
        fgets(a, 100, stdin);
        a[strlen(a) - 1] = '\0';
        int d = strlen(a);
        int b[d];
        int i, j, c;
        for (i = 0; i < d; i++) {
            b[i] = 0;
        }
        for (i = 0; i < strlen(a); i++) {
            c = 1;
            if (b[i] != -1) {
                for (j = i + 1; j < strlen(a); j++) {
                    if (a[i] == a[j]) {
                        c++;
                        b[j] = -1;
                    }
                }
                b[i] = c;
            }
        }
        printf("\nUnique elements:\n");
        for (i = 0; i < strlen(a); i++) {
            if (b[i] == 1) {
                printf(" %c ", a[i]);
            }
        }
        printf("\nDuplicate elements:\n");
        for (i = 0; i < strlen(a); i++) {
            if (b[i] > 1) {
                printf(" %c ", a[i]);
            }
        }
        printf("\nFrequency of each character:\n");
        for (i = 0; i < strlen(a); i++) {
            if (b[i] != -1) {
                printf("%c found %d times\n", a[i], b[i]);
            }
        }
    }
}

int main() {
    int choice, n, low, high;

    while (1) {
        printf("Menu:\n");
        printf("1. Find Prime Numbers in a Given Range\n");
        printf("2. Sort an Array of Random Numbers\n");
        printf("3. Analyze Strings for Character Properties\n");
        printf("4. Exit the Program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 4) {
            printf("Exiting program!\n");
            break;
        }

        switch (choice) {
            case 1: {
                printf("Enter the lowest value : ");
                scanf("%d", &low);
                printf("Enter the highest value : ");
                scanf("%d", &high);
                for (int i = low; i <= high; i++) {
                    int x = prime(i);
                    if (x == i)
                        printf(" %d", i);
                }
                printf("\n");
                break;
            }

            case 2: {
                printf("Enter the number of elements: ");
                scanf("%d", &n);
                int a[n];
                srand(time(0));
                for (int i = 0; i < n; i++) {
                    a[i] = rand() % 101;
                }
                printf("Array : ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");

                int x = sizeof(a) / sizeof(a[0]);
                s_array(a, x);
                break;
            }

            case 3: {
                printf("Enter the number of strings: ");
                scanf("%d", &n);
                getchar();
                s_f(n);
                break;
            }

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}


