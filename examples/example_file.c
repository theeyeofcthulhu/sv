#define SV_IMPLEMENTATION
#include "../sv.h"

#include <stdio.h>

int main(void)
{
    const char *file = "line 1\n"
                       "this is line 2\n"
                       "3\n";
    sv file_view, buf;
    
    file_view = sv_from_cstr(file);
    for (int i = 1; sv_chop_delim('\n', &file_view, &buf); i++) {
        printf("%d: "SV_Fmt"\n", i, SV_Arg(buf));
    }

    return 0;
}
