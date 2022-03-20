#define SV_IMPLEMENTATION
#include "../sv.h"

#include <stdio.h>

int main(void)
{
    sv my_sv = sv_from_cstr("My wonderful string");

    printf("Starts with: %d\n", sv_starts_with(SV_Lit("My"), my_sv));
    printf("Ends with: %d\n", sv_ends_with(SV_Lit("string"), my_sv));

    printf("Ends with: %d\n", sv_ends_with(SV_Lit("My wonderful string"), my_sv));
    printf("Ends with: %d\n", sv_ends_with(SV_Lit("strnig"), my_sv));
    printf("Ends with: %d\n", sv_ends_with(SV_Lit("My wonderful string ..."), my_sv));

    printf("index(wonderful): %zu\n", sv_idx_long(SV_Lit("wonderful"), my_sv));
    printf("index(string): %zu\n", sv_idx_long(SV_Lit("string"), my_sv));
    printf("index(stirng): %zu\n", sv_idx_long(SV_Lit("stirng"), my_sv));
    printf("index(My wonderful string): %zu\n", sv_idx_long(SV_Lit("My wonderful string"), my_sv));
    printf("index(g): %zu\n", sv_idx_long(SV_Lit("g"), my_sv));

    return 0;
}
