#include <stdio.h>
#include <math.h>
#include <errno.h>

int main(void)
{
    double param, result;

    errno = 0;

    for (param = 1; ; param=param+1){
        result = exp (param);
        if (errno == ERANGE) {
            printf("exp(%f) overflows\n", param);
            break;
        }
    }

    errno = 0;

    for (param = -1; ; param=param-1){
        result = exp (param);
        if (errno == ERANGE) {
            printf("exp(%f) overflows\n", param);
            break;
        }
    }


    return 0;
}
