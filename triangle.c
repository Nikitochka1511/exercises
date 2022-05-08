#include <stdio.h>

int main() {
    int n = 0;
    
    scanf("%i", &n);
    
    int width = 2 * n - 1;
    int center = n - 1;
    
    for(int i = 0; i < n; i++){
    
        for(int j = 0;j < width; j++) {
    
            if(j > center + i || j < center - i)
              printf("  ");
            else
                printf("* ");
        }
    
        printf("\n");
    }
    return 0;
}
