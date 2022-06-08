#include <stdio.h>
main()
{
    FILE *pFile = fopen("mega_todos.csv", "r");
    int m[6], i[3] = {0, 0, 0}, n[7], c, mod, k = 0;
    if (pFile == '\0')
        printf("\n Erro fatal, o arquivo não pode ser aberto!\n");
    else
    {
        printf("\n Digite sua jogada:");
        scanf("%i %i %i %i %i %i", &m[0], &m[1], &m[2], &m[3], &m[4], &m[5]);
        do
        {
            c = fscanf(pFile, "%i %i %i %i %i %i %i", &n[6], &n[0], &n[1], &n[2], &n[3], &n[4], &n[5]);
            if (n[0] == m[0] && n[1] == m[1] && n[2] == m[2] && n[3] == m[3] && n[4] == m[4] && n[5] == m[5])
                i[0]++;
            else if (n[0] == m[0] && n[1] == m[1] && n[2] == m[2] && n[3] == m[3] && n[4] == m[4])
               i[1]++;
            else if (n[0] == m[1] && n[1] == m[2] && n[2] == m[3] && n[3] == m[4] && n[4] == m[5])
               i[1]++;
            else if (n[1] == m[0] && n[2] == m[1] && n[3] == m[2] && n[4] == m[3] && n[5] == m[4])
               i[1]++;
            else if (n[1] == m[1] && n[2] == m[2] && n[3] == m[3] && n[4] == m[4] && n[5] == m[5])
               i[1]++;
            else if (n[0] == m[0] && n[1] == m[1] && n[2] == m[2] && n[3] == m[3])
                i[2]++;
            else if (n[0] == m[1] && n[1] == m[2] && n[2] == m[3] && n[3] == m[4])
                i[2]++;
            else if (n[0] == m[2] && n[1] == m[3] && n[2] == m[4] && n[3] == m[5])
                i[2]++;
            else if (n[1] == m[0] && n[2] == m[1] && n[3] == m[2] && n[4] == m[3])
                i[2]++;
            else if (n[1] == m[1] && n[2] == m[2] && n[3] == m[3] && n[4] == m[4])
                i[2]++;
            else if (n[1] == m[2] && n[2] == m[3] && n[3] == m[4] && n[4] == m[5])
                i[2]++;
            else if (n[2] == m[0] && n[3] == m[1] && n[4] == m[2] && n[5] == m[3])
                i[2]++;
            else if (n[2] == m[1] && n[3] == m[2] && n[4] == m[3] && n[5] == m[4])
                i[2]++;
            else if (n[2] == m[2] && n[3] == m[3] && n[4] == m[4] && n[5] == m[5])
                i[2]++;
            /*if (n[0] == m[0] && n[1] == m[1] && n[2] == m[2] && n[3] == m[3] && n[4] == m[4] && n[5] == m[5])
            {
                i[0]++;
                k++;
            }
            else
                for (int j = 0; j < 4; j++)
                    if (n[j / 2] == m[j % 2] && n[j / 2 + 1] == m[j % 2] && n[j / 2 + 2] == m[j % 2] && n[j / 2 + 3] == m[j % 2] && n[j / 2 + 4] == m[j % 2])
                    {
                        i[1]++;
                        k++;
                    }
            if (k == 0)
                for (int j = 0; j < 9; j++)
                    if (n[j / 3] == m[j % 3] && n[j / 3 + 1] == m[j % 3] && n[j / 3 + 2] == m[j % 3] && n[j / 3 + 3] == m[j % 3])
                        i[2]++;
            k = 0;*/
        } while (c != EOF);
        if (i[0] == 0 && i[1] == 0 && i[2] == 0)
            printf("\n Voce nao ganhou nenhum jogo\n");
        else
        {
            if (i[0] > 0)
                printf("\n Voce ganhou a mega sena %i vezes!\n", i[0]);
            else
                printf("\n Voce nao ganhou a mega sena\n");
            if (i[1] > 0)
                printf("\n Voce ganhou a quina %i vezes!\n", i[1]);
            else
                printf("\n Voce nao ganhou a quina\n");
            if (i[2] > 0)
                printf("\n Voce ganhou a quadra %i vezes!\n", i[2]);
            else
                printf("\n Voce nao ganhou a quadra\n");
        }
        fclose(pFile);
    }
}
