#include <stdio.h>
#include <stdlib.h>
int main (){
    int*ptr;
    ptr=(int*)malloc(5*sizeof(int));
    for (int i=0;i<5;i++){
        printf("%d\n",ptr[i]);

    }
    realloc(ptr,3);
        for (int i=0;i<8;i++){
        printf("%d\n",ptr[i]);

    }
 return 0;

}