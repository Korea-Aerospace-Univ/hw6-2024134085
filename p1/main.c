#include <stdio.h>

int main(void)
{
    char arr[11];
    char mostCh = 0, currentCh = 0;
    int maxCnt = 0, currentCnt = 0;
    
    scanf("%10s", &arr);
    
    for(char *p = arr; p < arr+10; p++){
        currentCnt = 0;
        currentCh = *p; 
        
        for(char *q = arr; q < arr+10; q++){
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
