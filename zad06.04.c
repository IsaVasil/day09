#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>
unsigned bitsNCount(unsigned count, unsigned bitscnt, ...){
va_list ptr;
int mask[count];
va_start(ptr,count);
for(int i =0;i<count;i++){
mask[i] +=va_arg(ptr,int);

}
va_end(ptr);
return

}
int main(){
    int mask[]={0,0};
    int count=0;
   /* for(int i =sizeof(*mask)*__CHAR_BIT__-1;i>=0;i--){
        printf("%d",!!(mask[i]));
        if(!!(mask[i])==1){
        count++;
        }
    }
    printf("%d",count);
    */
    printf("%d",bitsNCount(4,2));
    return 0;}