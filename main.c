#include <stdio.h>

int main()
{
    unsigned int num=0x7fd00;
    unsigned int i;

    for(i=256;i<512;i++){
        if(i%8==0)
        printf("\n");
        printf("0x%x, ", num/i);
    }
    return 0;
}