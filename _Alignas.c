//C11 introduced _Alignas.
//Dynamically allocated memory from malloc is required to be sufficiently aaligned for all standard types.
//On rare occasions, you might need to override the compiler's default choices.
//Exempli gratia, to align data on the boundries of the memory cache lines that must start at power-of-two address boundries or meet other system-specific requirements/
//This saves a couple of clock cycles by allowing to access those objects from cache.
//Alignments are represented as values of the type size_t. _Alignas as stricter alignment can be requested.
//Alignment specifier can be used during the declaration specifiers of a declaration.
#include<stdio.h>
#include<stdlib.h>
struct S
{
    int i; double d; char c;
};
int main(void)
{
    unsigned char bad_buff[sizeof(struct S)];
    _Alignas(struct S) unsigned char good_buff[sizeof(struct S)];

    struct S *bad_s_ptr = (struct S*)bad_buff; //wrong pointer alignment
    struct S *good_s_ptr = (struct S*)good_buff; //correct pointer alignment
}
