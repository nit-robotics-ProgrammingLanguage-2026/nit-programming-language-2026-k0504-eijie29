#include <stdio.h>

int main(void)
{
int input;

```
// 整数を入力する
scanf("%d", &input);

// 0～9または12～14ならOKと判定する
int f = !(input < 0 ||
                (input >= 10 && input < 12) ||
                input >= 15);

// 判定結果を表示する
if (f == 1)
{
    printf("OK");
}
else
{
    printf("NG");
}

return 0;
```

}
