#include <stdio.h>
void printArray(int cherry [][]);

int main(){
    int[2][10]cherry;
    for(int i=0;i<=1;i++){
        for(int j=0;j<=9;j++){
            cherry [i][j]=(i+2)*(j+1);
        }
    }
    printArray(cherry,2,10);

    return 0;
}

void printArray(int cherry [][],int m,int n){
    for(int i = 0;i<m;i++){
        for (int j=0;j<n;j++){
          printf("%d * %d = %d",i+2,j+1,  cherry[i][j]);
        }
    }

}