#include <stdio.h>

int main() {
    char str[100];
    int i, j, length = 0;
    int freq[256] = {0};  

    printf("Enter any string: ");
    scanf("%s", str);

  
    while (str[length] != '\0') {
        freq[(int)str[length]]++;  
        length++;
    }

    printf("Character Frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c' = %d\n", i, freq[i]);
        }
    }

}