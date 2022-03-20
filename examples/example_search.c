#define SV_IMPLEMENTATION
#include "../sv.h"

#include <stdio.h>

int main(void)
{
    sv my_sv = sv_from_cstr("string string");

    printf("First occurance: %zu\n", sv_idx_long(SV_Lit("string"), my_sv));
    printf("Last occurance: %zu\n", sv_last_idx_long(SV_Lit("string"), my_sv));

    sv my_sv2 = sv_from_cstr("abcstring");

    printf("First occurance: %zu\n", sv_idx_long(SV_Lit("string"), my_sv2));
    printf("Last occurance: %zu\n", sv_last_idx_long(SV_Lit("string"), my_sv2));

    printf("Contains: %d\n", SV_Contains(SV_Lit("abc"), my_sv2));
    printf("Contains: %d\n", SV_Contains(SV_Lit("cba"), my_sv2));

    return 0;
}
