#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int maxnum(int x, ...);

int main(void)
{
    int value;
    value = maxnum(9, 1,4,5,6,7,8, 14, 102,76);
    printf("%d", value);
    return 0;

}

int maxnum(int x, ...)
{
    va_list lists;
    int max_check = 0;
    int sums = 0;

    va_start(lists, x);

    for (int i = 0; i < x; i++)
    {
        sums = va_arg(lists, int);
        if (sums >= max_check)
        {
            max_check = sums;
        }
        else
        {
            continue;
        }

    }
    return max_check;
}
