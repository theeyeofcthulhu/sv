#define SV_IMPLEMENTATION
#include "../sv.h"

#include <stdio.h>

int main(void)
{
    sv my_sv = sv_from_cstr("My wonderful string");

    SV_Puts(my_sv);

    sv_chopl(3, &my_sv);
    SV_Puts(my_sv);

    sv_chopr(7, &my_sv);
    SV_Puts(my_sv);

    return 0;
}
