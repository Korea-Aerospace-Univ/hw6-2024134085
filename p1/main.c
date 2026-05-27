#include <stdio.h>

int main(void)
{
    char arr[10];
    char mostCh = 0, currentCh = 0;
    int maxCnt = 0, currentCnt = 0;
    int *p = nullptr, *q = nullptr;
    
    scanf("%10s", &arr);
    
    for(p = arr; p < arr+10; p++){
        currentCh = *p; 
        
        for(q = arr; q < arr+10; q++){
            if(*q == currentCh){
                currentCnt++;
            }
        }
        
        if(currentCnt > maxCnt){
            maxCnt = currentCnt;
            mostCh = currentCh;
        }
    }
    
    printf("%c %d", mostCh, maxCnt);

    return 0;
}
