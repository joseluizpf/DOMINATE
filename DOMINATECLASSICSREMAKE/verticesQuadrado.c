#include <stdio.h>
#include <stdlib.h>

//Esta fun��o guarda em um vetor as coordenadas dos v�rtices dos quadrados de um tabuleiro de tamanho "numeroDeQuadrados"
void verticesQuadrado(int COORDQuadrado[9], int ladoQuadrado, int espacoEntreQuadrado)
{
    int i;

    for(i = 0; i < 9; i++)
    {
        COORDQuadrado[i] = (i*ladoQuadrado)+espacoEntreQuadrado;
    }

}
