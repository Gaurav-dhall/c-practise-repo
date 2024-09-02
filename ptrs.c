#include <stdio.h>
typedef struct adress{
    int hno;
    int block;
    char *city;
    char *state;

}ad;

void show(struct adress p_i,int i);
int main(){

    printf("enter house no,block,city,state of 5 people one by one\n");
    for(int i=1;i <= 5;i++){
    ad p_i;
    printf("person %d\n",i);
    scanf("%d %d %s %s",&p_i.hno,&p_i.block,&p_i.city,&p_i.state);
    show(p_i,i);
    }
 
   
    return 0;
}
void show(struct adress p_i,int i){
    
    printf("person %d\n",i);
    printf("%d %d %s %s",p_i.hno,p_i.block,p_i.city,p_i.state);

}