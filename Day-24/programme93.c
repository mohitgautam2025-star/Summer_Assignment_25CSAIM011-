//wap to check string rotation.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int len1, len2, i, j, flag = 0;

    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2) {
        printf("Strings are not rotations of each other.\n");
        return 0;
    }

    // Concatenate str1 with itself
    strcat(str1, str1);

    // Check if str2 is a substring of the concatenated string
    for (i = 0; i < len1; i++) {
        flag = 1;
        for (j = 0; j < len2; j++) {
            if (str1[i + j] != str2[j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            printf("Strings are rotations of each other.\n");
            return 0;
        }
    }

    printf("Strings are not rotations of each other.\n");
    return 0;
}