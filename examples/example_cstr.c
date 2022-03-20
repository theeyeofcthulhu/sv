#define SV_IMPLEMENTATION
#include "../sv.h"

#include <stdio.h>

int main(void)
{
    sv my_sv = sv_from_cstr("abcde");
    SV_Puts(my_sv);

    char buf[6];
    puts(sv_to_cstr(my_sv, buf, sizeof(buf)));

    SV_Puts(SV_Lit("Hello!"));

    return 0;
}
