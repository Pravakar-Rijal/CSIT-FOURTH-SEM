#include<stdio.h>
#include<stdlib.h>
int main(){
    int start_add, length;
    int status[50];

    printf("Enter start address : ");
    scanf("%d",&start_add);
    printf("Enter the length:");
    scanf("%d",&length);

    //constructing bitmaps, assuming memory address exactly divisible by 3 and 4 is already allocated
    for(int i=0;i<length;i++){
        if((start_add+i)%3==0 || (start_add+i)%4==0){
            status[i] = 0;
        }else{
            status[i] = 1;
        }
    }

    printf("Bitmap [ Assuming memory address exactly divisible by 3 and 4 is already allocated] \n");
    //printing bitmap
    for(int i=0;i<length;i++){
        printf("%d",status[i]);
    }
    printf("\n");
    return 0;
}
