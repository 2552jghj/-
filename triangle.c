#include <math.h>
#include <stdio.h>

int main(void)
{
    double a, b, c;
    printf("请输入三角形三边长：");

    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("输入无效。\n");
        return 1;
    }

    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a) {
        printf("这三条边不能组成三角形。\n");
        return 1;
    }

    double p = (a + b + c) / 2.0;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("三角形面积为：%.3f\n", area);
    return 0;
}