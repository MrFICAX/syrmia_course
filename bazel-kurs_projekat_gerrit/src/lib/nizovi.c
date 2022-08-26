#include "nizovi.h"

int nadji_medijanu(int niz[], int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (niz[i] > niz[j])
            {
                temp = niz[i];
                niz[i] = niz[j];
                niz[j] = temp;
            }
        }
    }

    if (n % 2 == 0)
    {
        return (float)(niz[n / 2 - 1] + niz[n / 2]) / 2;
    }
    else
    {
        return niz[n / 2];
    }
}

int suma(int niz[], int n)
{
    int suma = 0;

    for (int j = 0; j < n; j++)
    {
        suma += niz[j];
    }

    return suma;
}
