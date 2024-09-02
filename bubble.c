#include<stdio.h>

int main(){
    int arrs[]={56,62,12,10};
            //  0 1 2 3 4 
    for(int i=0;i<4;i++){
        int min=i;

        for(int j=i+1;j<4;j++){
            if(arrs[min]>arrs[j]){
                min=j;
            }
        }
        int temp=arrs[i];
        arrs[i]=arrs[min];
        arrs[min]=temp;
    }
    for(int i=0;i<5;i++){
        printf("%d  ",arrs[i]);
    }
    return 0;
}