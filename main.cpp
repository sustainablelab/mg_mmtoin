#include <cstdio>
#include <cstdlib>

////////
// USAGE
////////
// $ mg_mmtoin 0.127 0.254 0.508
// mm: 0.127000    mm: 0.005000
// mm: 0.254000    mm: 0.010000
// mm: 0.508000    mm: 0.020000

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        puts("Expecting one or more args for millimeters");
        puts("Example: mg_mmtoin 0.127 0.254 0.508");
    }
    if (argc > 1)
    {
        for(int i=1; i<argc; i++)
        {
            char* end;
            auto inches = strtof(argv[i], &end);
            if (inches == 0)
            {
                printf("Error: <*.*> \"%s\" is INVALID input <*.*> Expecting a NON-ZERO NUMBER.\n", argv[i]);
            }
            else
            {
                printf("mm: %8.6f\tmm: %8.6f\n", strtof(argv[i], &end), strtof(argv[i], &end)/25.4);
            }
        }
    }
    return 0;
}
