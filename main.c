#include <stdio.h>

int main(void)
{
int input;
// 整数を入力する
scanf("%d", &input);

// 条件に当てはまる場合はOKと判定する
int isValid = !(input < 0 ||
                (input >= 10 && input < 12) ||
                input >= 15);

// 判定結果を表示する
if (isValid == 1)
{
    printf("OK");
}
else
{
    printf("NG");
}

return 0;
}