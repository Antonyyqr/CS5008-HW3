#include <stdio.h>

int convertToBinary(int num) {
    int binary = 0, base = 1;
    while (num > 0) {
        binary += (num % 2) * base;
        num /= 2;
        base *= 10;
    }
    return binary;
}

int convertToDecimal(int binary) {
    int decimal = 0, base = 1;
    while (binary > 0) {
        decimal += (binary % 10) * base;
        binary /= 10;
        base *= 2;
    }
    return decimal;
}

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;

    printf("Input array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;

    printf("Input target: ");
    scanf("%d", &target);

    printf("The array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("The target:\n");
    printf("%d\n", target);

    printf("Converted array:\n");
    for (int i = 0; i < n; i++) {
        int converted = convertToBinary(arr[i]);
        printf("%d ", converted);
        arr[i] = converted;
    }
    printf("\n");

    int convertedTarget = convertToBinary(target);
    printf("Converted target:\n%d\n", convertedTarget);

    int position = linearSearch(arr, n, convertedTarget);

    printf("Search result:\n%d\n", position);

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        int original = convertToDecimal(arr[i]);
        printf("%d ", original);
        arr[i] = original;
    }
    printf("\n");

    int originalTarget = convertToDecimal(convertedTarget);
    printf("Original target:\n%d\n", originalTarget);

    return 0;
}
