#include <stdio.h>
#include "GetMin.h"
int main() {
    int n,len;
    printf("stop num=");
    scanf("%i",&n);
    printf("min=%i\n", ReadAndGetMin(n,&len));
    printf("length=%i",len);

}
