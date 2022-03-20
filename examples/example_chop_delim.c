#define SV_IMPLEMENTATION
#include "../sv.h"

#include <stdio.h>

int main(void)
{
    sv my_sv = SV_Lit("My   wonderful string   ");
    sv buf;

    while (sv_chop_delim(' ', &my_sv, &buf)) {
        printf("\""SV_Fmt"\"\n", SV_Arg(buf));
    }

    return 0;
}
