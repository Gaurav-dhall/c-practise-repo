#include <stdio.h>
int binaryseach(int arr[],int start,int end,int key);


int binaryseach(int arr[],int start,int end,int key){

int mid=(start + end )/2;
if(arr[mid]==key){
    return mid;
}
else if(arr[mid]<key){
binaryseach(arr,mid,end,key);
}
else{
    binaryseach(arr,start,mid,key);
}
}

int main(){
    int xyz[]={2,6,8,32,45,96,108};
          //   0 1 2 3  4  5    6 
    int key;
    printf("Enter the number you want to search ");
    scanf("%d",&key);
   printf("The number is at index no %d", binaryseach(xyz,0,6,key));
    return 0;
}