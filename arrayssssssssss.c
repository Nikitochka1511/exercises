#include <stdio.h>

#define arrayLen 12

void print(int array[arrayLen]){
    for(int i = 0; i < arrayLen; i++){
        
       printf("array[%i] = %i \n", i, array[i]) ;
    }
}

int find(int numberToFind, int array[arrayLen]){
    for(int i = 0; i < arrayLen; i++){
    
        if(numberToFind == array[i]) {
           return i;
        }
    }
    return -1;
}


void swap(int* a, int* b)
{
    int c = 0;
    c = *a;
    *a = *b;
    *b = c;
}

void sort(int array[arrayLen]){
    for (int i = 0; i < arrayLen - 1; i++) {
        if(array[i] > array[i+1]){
            
            swap(&array[i], &array[i+1]);
            i = 0;   
        }
    }

    
}









int main()
{
    int array[arrayLen] = {100, 3, 6, 4, 10, 9, 9, 13, 9, 8, 7, 165};
    
    printf("Array before:\n");    
    print(array);
    
    // print(array);
    
    // int numberToFind = 0;
    // scanf("%i", &numberToFind);

    sort(array);
    
    
    printf("Array after:\n");
    print(array);




    // int index = find(numberToFind, array);

    // if(index == -1)
    //     printf("Error!!!!!!!");    
    // else
    //     printf("array[%i] = %i \n", index, numberToFind);
     
   
    return 0;
}
