#include <stdio.h>
#include <stdlib.h>







char* merge(char* a, char* b, int len) {
    char* ret = malloc(len + 1);
    int i = 0, ai = 0, bi=0;
    while (1) {
        if (a[ai] != '\0') {
           ret[i] = a[ai];
           i++;
           ai++;
        }

        if (b[bi] != '\0') {
           ret[i] = b[ai];
           i++;
           bi++;
        }

        if (b[bi] == '\0' && a[ai] == '\0') {
            i++;
            ret[i] = '\0';
            break;
        }
    }
    return ret;
}


int main() {
    char a[1024];
    char b[1024];

    scanf("%[^\n]%*c",a);
    scanf("%[^\n]%*c",b);

    char* merged = merge(a,b,sizeof(a) + sizeof(b));
    printf("%s\n",merged);
    free(merged);
}

