#include <stdio.h>
main()
{
    FILE *pFile = fopen("mega_todos.csv", "r");
    int i[3] = {0, 0, 0}, n[7], m[6], c;
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
            else if (n[1] == m[0] && n[2] == m[1] && n[3] == m[2] && n[4] == m[3] && n[5] == m[4])
                i[1]++;
            else if (n[0] == m[0] && n[1] == m[1] && n[2] == m[2] && n[3] == m[3])
                i[2]++;
            else if (n[1] == m[0] && n[2] == m[1] && n[3] == m[2] && n[4] == m[3])
                i[2]++;
            else if (n[2] == m[0] && n[3] == m[1] && n[4] == m[2] && n[5] == m[3])
                i[2]++;
        } while (c != EOF);
        if (i[0] != 0 || i[1] != 0 || i[2] != 0)
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
        else
            printf("\n Voce nao ganhou nenhum jogo\n");
        fclose(pFile);
    }
}