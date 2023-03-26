#include <utils.h>
#include <ctype.h>

int stoi(const char *str) {
    int num = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-') {
        sign = -1;
        i++;
    }

    for (; isdigit(str[i]); i++) {
        num = num * 10 + (str[i] - '0');
    }

    return sign * num;
}