#include <stdio.h> /* bibliotheque d'entree sortie (printf...)*/
#include <windows.h>/* GetDiskFreeSpace */
#include <espace_libre.h>
void espace_libre()  
{
        /* Declaration des variables */
        BOOL  Result;
        char lecteur[5] = "c:\\";       /* lettre du lecteur a scanner */
        DWORD dwSectPerClust, dwBytesPerSect, dwFreeClusters;
        Result = GetDiskFreeSpace(lecteur,&dwSectPerClust,&dwBytesPerSect,&dwFreeClusters);
        DWORD total = (((dwFreeClusters*dwSectPerClust)/1024)*dwBytesPerSect);
        /* Affichage des resultats */
        printf("lecteur= %c:\\\n",lecteur[0]);
        printf("Secteur par cluster= %ld\n",dwSectPerClust);
        printf("Bytes par secteurs= %ld\n",dwBytesPerSect);
        printf("Cluster libres= %ld\n",dwFreeClusters);
        printf("\nEspace libre : %ld Mo\n",total);

}


