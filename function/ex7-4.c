#include <stdio.h>

int get_num(void);

int main(void)
{
	int result;
	
	result = get_num();/* void는 함수 정의나 선언에서 사용하며 호출할때는 쓰지 않는다.괄호 조차 없으면 함수로 인식함(괄호 필수)*/
	printf("반환값: %d\n",result);
	return 0;
}

int get_num(void) //매개변수가 없음 표시, 괄호만 사용해도 됨(명시적으로 표현하기 위해서 void쓰기)
{
	int num; //키보드로 입력받은 값을 호출한 함수로 반환하므로 반환형은 있어야함 
	
	printf("양수 입력: ");
	scanf("%d",&num);
    while(num<0) //음수가 입력되면 과정 반복 
    {
        printf("양수를 입력하세요!\n");
        printf("양수입력: ");
        scanf("%d",&num);
    }

	return num; //필요한 반환하는 문장 
}