#include <stdio.h>
#include <stdbool.h>

bool primo(int n)
{
    int i = 2;
    int div = 0;
    bool p;

    while(i <= n/2)
    {
        if(n % i == 0)
        {
            div += 1;
        }
        i++;
    }
    if(div > 0)
    {
        p = false;
    }
    else
    {
        p = true;
    }

    return p;
}

int ex03()
{
    printf("%s", primo(17) ? "True" : "False");
}
