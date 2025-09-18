#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int fire[256] = {0}; 
    int i;

    printf("Enter any string: ");
    scanf("%s",str); 
    for(i = 0; str[i] != '\0'; i++) {
        fire[(char)str[i]]++;
    }

    printf("Frequency of each letter:\n");
    for(i = 0; str[i] != '\0'; i++) {
        if(fire[(char)str[i]] != 0) {
            printf("%c => %d\n", str[i], fire[(char)str[i]]);
            fire[(char)str[i]] = 0; 
        }
    }

    return 0;
}