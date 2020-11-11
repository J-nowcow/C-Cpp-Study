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
    printf("%d %f\n", b, a); // ��� ���� �߸� ���߸� �̻��ϰ� ������ ����

    float f;
    f = 3/2;
    printf("%f\n", f); // 1.5�� �ƴ϶� 1�� ����! ��������
    f = -3/2;
    printf("%f\n", f); // ��ȣ ���� ���ش��� ������ ���� --> -2�� �ƴ϶� -1 ����
    f = (float)3/2; // �̷��� 3�� ���� ����ȯ �� ������ �ν� --> 1.5 ���
    printf("%f\n", f);

    printf("short : %d byte \n", sizeof((short)2));
    printf("int : %d byte \n", sizeof(2));
    printf("long : %d byte \n", sizeof(2L));
    printf("float : %d byte \n", sizeof(3.0f));
    printf("double : %d byte \n", sizeof(3.0));
    printf("char : %d byte \n", sizeof('3'));

    long long lnum = 12345;
    printf("long long : %%lld %lld\n", lnum); // long�� ld, long long�� lld ���
    double ln2 = 1.234;
    printf("double : %lf\n", ln2);
    return 0;
}
