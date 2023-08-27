//การเขียนโปรแกรมแบบกำหนดจำนวนรอบทำซ้ำ for ด้วยการรับค่าข้อมูลผ่านตัวแปร
#include <stdio.h>
void main()
{
    int i;
    int max;
    printf("ป้อนจำนวนรอบ ? ");
    scanf("%d",&max);
    for (i=1;i<=max;i++){
        printf("%d\n",i);
    }
}