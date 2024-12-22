#include <stdio.h>

int main() {
    int array[] = {1, 3, 5, 7, 9, 11};
    int size = sizeof(array) / sizeof(array[0]);
    int input, found = 0;

    printf("Nhập một số để kiểm tra: ");
    scanf("%d", &input);

    for (int i = 0; i < size; i++) {
        if (array[i] == input) {
            printf("Phần tử %d tồn tại tại vị trí %d.\n", input, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Phần tử %d không tồn tại trong mảng.\n", input);
    }

    return 0;
}
