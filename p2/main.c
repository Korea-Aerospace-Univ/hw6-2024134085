#include <stdio.h>

int main(void)
{
    int N;
    int arr1[20], arr2[20];
    
    scanf("%d", &N);
    
    for(int *p = arr1; p < arr1+N; p++){
        scanf("%d", p);
    }
    
    for(int *p = arr2; p < arr2+N; p++){
        scanf("%d", p);
    }
    
    for(int *p1 = arr1, *p2 = arr2+N-1; p1 < arr1+N; p1++, p2--){
        printf(" %d", *p1 + *p2);
    }

    return 0;
}
