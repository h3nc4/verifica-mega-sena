#include <stdio.h>
main()
{
    FILE *pFile = fopen("mega_sena.csv", "r");
    int m[6], n[7], a, count = 0, mega = 0, quina = 0, quadra = 0;
    if (pFile == '\0')
        printf("\n Erro fatal, o arquivo nao pode ser aberto.\n");
    else
    {
        printf("\n Digite sua jogada:");
        scanf("%i %i %i %i %i %i", &m[0], &m[1], &m[2], &m[3], &m[4], &m[5]);
        a = fscanf(pFile, "%i %i %i %i %i %i %i", &n[6], &n[0], &n[1], &n[2], &n[3], &n[4], &n[5]);
        while (a != EOF)
        {
            for (int i = 0; i < 6; i++)
                for (int j = 0; j < 6; j++)
                    if (n[i] == m[j])
                        count++;
            if (count == 6)
            {
                mega++;
                printf("deu mega no concurso %i", n[6]);
            }
            if (count == 5)
            {
                quina++;
                printf("deu quina no concurso %i", n[6]);
            }
            if (count == 4)
            {
                quadra++;
                printf("deu quadra no concurso %i", n[6]);
            }
            a = fscanf(pFile, "%i %i %i %i %i %i %i", &n[6], &n[0], &n[1], &n[2], &n[3], &n[4], &n[5]);
            count = 0;
        }
        fclose(pFile);
    }
}