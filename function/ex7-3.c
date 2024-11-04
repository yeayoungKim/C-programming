/* 187cm를 미터 단위로 환산하여 출력하는 프로그램을 작성하세요. 
단, cm를 m로 환산하여 반환하는 함수를 만들고 함수 호출을 통해 구현합니다.*/
float sum(int x);
#include <stdio.h>
int main(void){

    int a;
    //float b;
    a = 187;
    //b = 100;

    printf("당신의 키를 m로 변환하면:%lf 입니다.",sum(a));
    
}

float sum(int x){
    float temp;
    temp = x / 100.0;
    return temp;
}