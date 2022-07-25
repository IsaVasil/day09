#include <stdio.h>
#include <stdlib.h>

int c=0;
void fun(){


}
void f3(int d){
int e =d+200;
printf("f3\n");
}
void f2(int c){
    f3(c+200);
printf("f2\n");
}
void f1(int a,int b){
    f2(100);
    printf("f1\n");
}
void recur(){
    recur();
}
int main(){
//f1(1,2);
/*void *p=malloc(sizeof(short));
printf("%p\n",p);
short *short_pointer =(short*)p;
*short_pointer=100;
printf("%d",*short_pointer);
free(p);*/
int *arr=malloc(sizeof(int*)*1000);
srand(100);
realloc(arr,500*sizeof(*int));
for(int i=0;i<1000;i++){
    arr[i]=250 + rand()%501;
}
int res=0;
for(int *p=arr;p<arr+100;p++){
if(*p==500){
    res++;
}

}
printf("%d",res);
free(arr);
    return 0;
}