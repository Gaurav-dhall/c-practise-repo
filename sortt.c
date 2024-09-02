#include <stdio.h>

void bubble(int arr[],int n);
void printarray(int arr[],int n);
void selectsort(int arr[],int n);
void insertionsort(int arr[],int n);

int main(){
    int arr1[]={10,7,15,3,100};
   // bubble(arr1,5);
   // selectsort(arr1,5);
    insertionsort(arr1,5);

    printarray(arr1,5);


    return 0;

}
void bubble(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;

            }
        }
    }
    
}

void selectsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n-1;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}

void insertionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>0;j--){
            int key=j;
            if(arr[key]<arr[j-1]){
                int temp=arr[key];
                arr[key]=arr[j-1];
                arr[j-1]=temp;
            }
        }

    }
}

void printarray(int arr[],int n){
    printf("SORTED ARRAY IS ");

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}