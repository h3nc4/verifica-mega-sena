#include <stdio.h>
main()
{
    FILE *pFile = fopen("mega_todos.csv", "r");
    int m[6], i = 0, n[7], c, mod;
    printf("\nDigite sua modalidade |0 mega| |1 quina| |2 quadra|: ");
    scanf("%i", &mod);
    if (pFile == '\0')
        printf(" \nErro fatal, o arquivo não pode ser aberto!");
    else
    {
        if (mod == 0)
        {
            printf("Digite sua jogada:");
            scanf("%i %i %i %i %i %i", &m[0], &m[1], &m[2], &m[3], &m[4], &m[5]);
            do
            {
                c = fscanf(pFile, "%i %i %i %i %i %i %i", &n[6], &n[0], &n[1], &n[2], &n[3], &n[4], &n[5]);
                if (n[0] == m[0] && n[1] == m[1] && n[2] == m[2] && n[3] == m[3] && n[4] == m[4] && n[5] == m[5])
                    i++;
            } while (c != EOF);
            if (i > 0)
                printf("\n Voce ganhou a mega sena %i vezes!\n", i);
            else
                printf("\n Voce nao ganhou nenhum jogo");
        }
        else if (mod == 1)
        {
            printf("Digite sua jogada:");
            scanf("%i %i %i %i %i", &m[0], &m[1], &m[2], &m[3], &m[4]);
            do
            {
                c = fscanf(pFile, "%i %i %i %i %i %i %i", &n[6], &n[0], &n[1], &n[2], &n[3], &n[4], &n[5]);
                if (n[0] == m[0] && n[1] == m[1] && n[2] == m[2] && n[3] == m[3] && n[4] == m[4])
                    i++;
                else if (n[1] == m[0] && n[2] == m[1] && n[3] == m[2] && n[4] == m[3] && n[5] == m[4])
                    i++;
            } while (c != EOF);
            if (i > 0)
                printf("\n Voce ganhou a quina %i vezes!\n", i);
            else
                printf("\n Voce nao ganhou nenhum jogo");
        }
        else
        {
            printf("Digite sua jogada:");
            scanf("%i %i %i %i", &m[0], &m[1], &m[2], &m[3]);
            do
            {
                c = fscanf(pFile, "%i %i %i %i %i %i %i", &n[6], &n[0], &n[1], &n[2], &n[3], &n[4], &n[5]);
                if (n[0] == m[0] && n[1] == m[1] && n[2] == m[2] && n[3] == m[3])
                    i++;
                else if (n[1] == m[0] && n[2] == m[1] && n[3] == m[2] && n[4] == m[3])
                    i++;
                else if (n[2] == m[0] && n[3] == m[1] && n[4] == m[2] && n[5] == m[3])
                    i++;
            } while (c != EOF);
            if (i > 0)
                printf("\n Voce ganhou a quadra %i vezes!\n", i);
            else
                printf("\n Voce nao ganhou nenhum jogo");
        }
        fclose(pFile);
    }
}
