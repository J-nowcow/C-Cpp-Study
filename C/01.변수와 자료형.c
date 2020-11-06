#include <stdio.h>

int main(void) {
    int a = 15; // C에서는 먼저 선언되어야 뒤에서 쓸 수 있음
    // d: 정수, f: 실수, c: 문자, s: 문자열, u:unsigned int, o,x:8/16진수
    printf("%d\n", a);
    printf("%4.3d\n", a); // 4칸 중 3번째 칸까지 0으로 채워넣기
    float b = 2.3;
    printf("%f\n", b);
    printf("%.3f\n",b);
    printf("%6.3f\n", b); // 오른쪽에 붙이기
    printf("%-6.3f\n", b); // 왼쪽에 붙이기
    printf("%e\n",b); // e+001로 표시하기
    return 0;
}
