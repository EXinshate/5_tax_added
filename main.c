/* ZhouZheng 创作于2022年11月3日 */
#include <stdio.h>
int main(void)
{
    float RMB, tax_added;
    printf("请输入人民币的金额： ");
    scanf("%f", &RMB);
    tax_added = RMB * 1.05;
    printf("赠加百分之五的税率后的金额为:  ");
    printf("%f\n", tax_added);

    return 0;

}