#include<stdio.h>
#define VARIABLE 30

#define A 3+7
#define B (3+7)

int main(void) {
    int x = 10;
    printf("%d\n", x*VARIABLE);
    printf("%d\n", 3*A); // 3*10�� �ƴ϶� 3*3+7�� ��
    printf("%d\n", 3*B); // ���� ��ũ�� ����� ��ȣ �� �־��ֱ�
    return 0;
}
