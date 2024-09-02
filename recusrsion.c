#include<stdio.h>

void fibonacci(int n,int a,int b);
for()


int raunak =5;
void main(){
    int n;
    printf(raunak);
    

    printf("Upto what term you want the fibonacci series: ");
    scanf("%d",&n);
    if (n==1){
        printf("0");
    
    }
    else if(n==2){
        printf("0 1");
    }
    else{printf("%d %d ",0,1);
    fibonacci(n,0,1);}

    return 0;
}

void fibonacci(int n,int a,int b){
    if(n<=2){
        return;
    }
    int x = a+b;
    printf("%d ",x);
    fibonacci(n-1,b,x);
    
}


// // 0 1 1 2 3
// //       a b

int raunak=95;


