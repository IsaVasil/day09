#include <stdio.h>
#include<stdlib.h>
typedef struct mystack{
int *stack_arr;
int elements;
int max_elem_count;
}mystack;
void push(mystack *stack_p,int new_element){
    if(stack_p->elements==stack_p->max_elem_count){
    perror("stack is full");
    return;
}
stack_p->stack_arr[stack_p->elements++]=new_element;

}
void print_stack(mystack *stack_p){
for(int i=0;i<stack_p->elements;i++){
    printf("%d\n",stack_p->stack_arr[i]);
}

}
void pop(mystack *stack_p){
 if(stack_p->elements==0){
    perror("stack is empty");
    return;
}
//stack_p->stack_arr[stack_p->elements--]=prev_el;
stack_p->elements--;
}
mystack create_stack(int max_elem_count){
mystack stack1;
stack1.elements=0;
stack1.max_elem_count=max_elem_count;
stack1.stack_arr=malloc(max_elem_count*(sizeof(int)));
if(stack1.stack_arr==NULL){
    perror("no stack created");
    exit [-1];
}
return stack1;
}
mystack* create_stack_dynamic(int max_elem_count){
    mystack*stack1=malloc(sizeof(mystack));
    if(!stack1){
        perror("no stack created");
    exit (-1);
    }
    stack1.elements=0;
stack1.max_elem_count=max_elem_count;
stack1.stack_arr=malloc(max_elem_count*(sizeof(int)));
if(!stack1->stack_arr){
    perror("no stack created");
    exit (-1);
}
return stack1;

}


int main(){
    int arr1[250];
mystack stack1;
stack1.elements=0;
stack1.max_elem_count=250;
stack1.stack_arr=arr1;
push(&stack1,100);
push(&stack1,200);
push(&stack1,300);
push(&stack1,400);
print_stack(&tack1);

    
    return 0;
}