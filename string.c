#include <stdio.h>
 
 int main()
 {  int m;
    int n;

    printf("Number of letters in your first name and last name \n");
    scanf ("%d %d",&m,&n);
    char firstname[m];
    char lastname[n];
    printf("Enter your first name letter by letter:- \n");
    for(int i=0;i<=m;i++){
        if(i<m){
            scanf("%c",&firstname[i]);
          
        }
       else{  firstname[i]='\0';}
    }
    printf("Enter your last name letter by letter:- \n");
    for(int j=0;j<=n;j++){
        if(j<n){
            scanf("%c",&lastname[j]);
           
        }
       else{ lastname[j]='\0';}
    }

  
    return 0;

 }

