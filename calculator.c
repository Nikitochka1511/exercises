#include <stdio.h>


float sum(float a, float b) {
    float c = a + b;
    return c;
}

float sub(float a, float b) {
    float c = a - b;
    return c;
}

float mult(float a, float b) {
    float c = a * b;
    return c;
}

float div(float a, float b) {
    float c = a / b;
    return c;
}

float solve(float a, float b, char oper){
    float result = 0;
    
    if (oper == '+') { 
        result = sum(a, b);
    }
    else if (oper == '-') {
        result = sub(a, b);
    }
    else if (oper == '*') {
        result = mult(a, b);
    }
    else if (oper == '/') {
        result = div(a, b);
    }
    
    return result;
}

int main() {
    while (true) {
        char oper = ' ';
        float a = 0;
        float b = 0;
        
        scanf("%f %c %f", &a, &oper, &b);
        
        float result = solve(a, b, oper);
        
        printf("%.2f %c %.2f = %.2f \n", a, oper, b, result);
    }
    printf("finish:)");
    return 0;
}
