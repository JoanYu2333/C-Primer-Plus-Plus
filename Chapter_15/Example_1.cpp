#include "Example_1.h"
void Tv::change_mode(Remote &R)
{
    if (mode == On)
    {
        if (display == R.normal)
        {
            display = R.cross;
        }
        else
        {
            display = R.normal;
        }
    }
}