#include<stdio.h>
#define VARIABLE 30

#define A 3+7
#define B (3+7)

int main(void) {
    int x = 10;
    printf("%d\n", x*VARIABLE);
    printf("%d\n", 3*A); // 3*10이 아니라 3*3+7이 들어감
    printf("%d\n", 3*B); // 따라서 매크로 상수에 괄호 꼭 넣어주기
    return 0;
}
