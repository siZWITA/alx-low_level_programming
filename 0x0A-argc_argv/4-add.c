#include <stdio.h>
#include "main.h"

int _atoi(char *s) {
    int n = 0, sign = 1, i = 0, d = 0;
    
    while (s[i]) {
        if (s[i] == '-') {
            d++;
            sign = (d % 2) ? -1 : 1;
        }
        
        if (s[i] >= '0' && s[i] <= '9') {
            n = n * 10 + (s[i] - '0');
            
            if (s[i + 1] < '0' || s[i + 1] > '9') {
                break;
            }
        }
        
        i++;
    }
    
    return n * sign;
}

int main(int argc, char *argv[]) {
    int sum = 0, i = 0, j;

    while (i < argc) {
        j = 0;

        while (argv[i][j]) {
            if (argv[i][j] < '0' || argv[i][j] > '9') {
                puts("Error");
                return 1;
            }

            j++;
        }

        sum += _atoi(argv[i]);
        i++;
    }

    printf("%d\n", sum);
    
    return 0;
}
