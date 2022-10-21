#include<stdio.h>
int main()
{
    int array[4],
        v, sum=0, even, odd, addeven, addodd, max, min;
    float avg;
    printf("inpute four value:\n");
    for(v=1;v<=4;v++){
        scanf("%d", &array[v]);
        sum= sum+array[v];
    }
    // sum= sum+array[v];
    printf("Sum is: %d", sum);
    return 0;
}
