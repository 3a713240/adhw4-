#include<stdio.h>
#include<stdlib.h>

int add(void);

int main(void){
	
    printf("2+4+6+~+100�[�`:%d\n", add());  //���add()�^�Ǫ��Ʀr 
    

    system("pause");

    return 0;
}
int add(void){

    static int sum_num=0;
    
    int x;

    for(x=2;x<=100;x+=2){
        sum_num+=x;
    }
    return sum_num;
}
