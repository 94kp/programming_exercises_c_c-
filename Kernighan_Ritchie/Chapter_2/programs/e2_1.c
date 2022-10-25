#include <stdio.h>
#include <limits.h>
#include <float.h>


main()
{
    /* char */
    printf("CHAR_MAX :: %d\n", CHAR_MAX);
    printf("CHAR_MIN :: %d\n", CHAR_MIN);
    printf("CHAR_BIT :: %d\n", CHAR_BIT);

    /* short */
    printf("INT_MAX :: %d\n", INT_MAX);
    printf("INT_MIN :: %d\n", INT_MIN);

    /* int */
    printf("SHORT_MIN :: %d\n", SHRT_MIN);
    printf("SHORT_MAX :: %d\n", SHRT_MAX);

    /* long */
    printf("LONG_MIN :: %ld\n", LONG_MIN);
    printf("LONG_MAX :: %ld\n", LONG_MAX);

    /* float */
    printf("FLT_MIN :: %f\n", FLT_MIN);
    printf("FLT_MAX :: %f\n", FLT_MAX);

    /* unsigned int */
    printf("UINT_MAX :: %u\n", UINT_MAX);

}

