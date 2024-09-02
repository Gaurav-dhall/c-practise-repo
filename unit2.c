#include <stdio.h>
int main(){
    int marks;
    printf("Enter you marks ");
    scanf("%d",&marks);
    if(marks>=90&&marks<=100){
        printf("A++");
    
    }
    else if(marks>=70){
        printf("A");
    }
     else if(marks>=30){
        printf("B");
    }
     else if(0<=marks&&marks<30){
        printf("c");
    }
    else{
        printf("Invalid marks");
    }
        
    
    
    return 0;
}