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
    printf("%d %f\n", b, a); // 출력 형식 잘못 맞추면 이상하게 나오니 조심

    float f;
    f = 3/2;
    printf("%f\n", f); // 1.5가 아니라 1이 나옴! 조심하자
    f = -3/2;
    printf("%f\n", f); // 부호 따로 빼준다음 나머지 연산 --> -2가 아니라 -1 나옴
    f = (float)3/2; // 이러면 3에 대해 형변환 한 것으로 인식 --> 1.5 출력
    printf("%f\n", f);

    printf("short : %d byte \n", sizeof((short)2));
    printf("int : %d byte \n", sizeof(2));
    printf("long : %d byte \n", sizeof(2L));
    printf("float : %d byte \n", sizeof(3.0f));
    printf("double : %d byte \n", sizeof(3.0));
    printf("char : %d byte \n", sizeof('3'));

    long long lnum = 12345;
    printf("long long : %%lld %lld\n", lnum); // long은 ld, long long은 lld 사용
    double ln2 = 1.234;
    printf("double : %lf\n", ln2);
    return 0;
}
