#include <stdio.h>

int main(void) {
    int a = 15; // C������ ���� ����Ǿ�� �ڿ��� �� �� ����
    // d: ����, f: �Ǽ�, c: ����, s: ���ڿ�, u:unsigned int, o,x:8/16����
    printf("%d\n", a);
    printf("%4.3d\n", a); // 4ĭ �� 3��° ĭ���� 0���� ä���ֱ�
    float b = 2.3;
    printf("%f\n", b);
    printf("%.3f\n",b);
    printf("%6.3f\n", b); // �����ʿ� ���̱�
    printf("%-6.3f\n", b); // ���ʿ� ���̱�
    printf("%e\n",b); // e+001�� ǥ���ϱ�
    return 0;
}
