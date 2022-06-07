#include <stdio.h>
main()
{
    FILE *pFile = fopen("mega_todos.csv", "r");
    int m0, m[6] = {0, 0, 0, 0, 0, 0}, i = 0, count, n0, n1, n2, n3, n4, n5, c;
    printf("Digite seus valores, preencha espacos vazios com 0:");
    scanf("%i %i %i %i %i %i", &m[0], &m[1], &m[2], &m[3], &m[4], &m[5]);
    if (pFile == '\0')
        printf(" \nErro fatal!");
    else
    {
        if (n5 != 0)
        {
            do
            {
                c = fscanf(pFile, "%i %i %i %i %i %i %i", &count, &n0, &n1, &n2, &n3, &n4, &n5);
                if (n0 == m[0] && n1 == m[1] && n2 == m[2] && n3 == m[3] && n4 == m[4] && n5 == m[5])
                    i++;
            } while (c != EOF);
            if (i > 0)
                printf("\n Voce ganhou a mega sena %i vezes!\n", i);
            else
                printf("\n Voce nao ganhou nenhum jogo");
        }
        else if (n5 = 0 && n4 != 0)
        {
            do
            {
                c = fscanf(pFile, "%i %i %i %i %i %i %i", &count, &n0, &n1, &n2, &n3, &n4, &n5);
                if (n0 == m[0] && n1 == m[1] && n2 == m[2] && n3 == m[3] && n4 == m[4])
                    i++;
                else if (n1 == m[0] && n2 == m[1] && n3 == m[2] && n4 == m[3] && n5 == m[4])
                    i++;
            } while (c != EOF);
            if (i > 0)
                printf("\n Voce ganhou a quina %i vezes!\n", i);
            else
                printf("\n Voce nao ganhou nenhum jogo");
        }
        else
        {
            do
            {
                c = fscanf(pFile, "%i %i %i %i %i %i %i", &count, &n0, &n1, &n2, &n3, &n4, &n5);
                if (n0 == m[0] && n1 == m[1] && n2 == m[2] && n3 == m[3])
                    i++;
                else if (n1 == m[0] && n2 == m[1] && n3 == m[2] && n4 == m[3])
                    i++;
                else if (n2 == m[0] && n3 == m[1] && n4 == m[2] && n5 == m[3])
                    i++;
            } while (c != EOF);
            if (i > 0)
                printf("\n Voce ganhou a quarta %i vezes!\n", i);
            else
                printf("\n Voce nao ganhou nenhum jogo");
        }
    }
    fclose(pFile);
}
