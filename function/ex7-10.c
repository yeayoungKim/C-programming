//1부터 일정 수까지의 합을 구하는 sum함수를 만들고 프로그램을 완성하세요.
#include <stdio.h>
int sum (int x);

int main(void)
{
    sum(10);
    int ten = sum(10);
    printf("%d",ten);
    return 0;
}
int sum (int x)
{
    int add=0;
    for(int i =0; i<=x; i++){
        add += i;
    }
    return add;
}