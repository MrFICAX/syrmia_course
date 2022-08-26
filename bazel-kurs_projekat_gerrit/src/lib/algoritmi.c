#include "algoritmi.h"

int nadji_max(int niz[], int n){
    int i=0;
    int max=niz[0];
    for(i=0;i<n;i++)
    {
        if(niz[i]>max)
            max=niz[i];
    }
    return max;
}

int nadji_min(int niz[], int n){
    int i=0;
    int min=niz[0];
    for(i=0;i<n;i++)
    {
        if(niz[i]<min)
            min=niz[i];
    }
    return min;
}

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
        return (float) (niz[n / 2 - 1] + niz[n / 2]) / 2;
    }
    else
    {
        return niz[n / 2];
    }
}