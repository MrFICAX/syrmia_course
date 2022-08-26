#pragma once
#include "obrada.h"

#define N 10


class Podaci
{
        Obrada *obrada;
        int niz[N];

public:
        Podaci(Obrada *obrada, int niz1[]) //: vision(vision) {}
        {
                this->obrada = obrada;
                // this->niz = niz;
                for (int i = 0; i < N; i++)
                {
                        this->niz[i] = niz1[i];
                }
        }

        Podaci(Obrada *obrad)
        {
                this->obrada = obrad;
                for (int i = 0; i < N; i++)
                {
                        this->niz[i] = i * 10;
                }
        }

        bool primeni_obradu()
        {
                int suma = 0;

                for (int j = 0; j <N; j++)
                {
                        if (niz[j] > 0)
                                this->obrada->Procesiraj(niz[j]);
                }
                return true;
        }

        bool filtriraj_niz()
        {
                this->obrada->IzbaciNegativne(niz);
                this->obrada->IzdvojiParne(niz);
                return true;
        }

        int *dodavanje_vrednosti_niza()
        {
                for (int j = 0; j < N; j++)
                {
                        niz[j] += 100;
                }
                return niz;
        }
};