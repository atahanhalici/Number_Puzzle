#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int j, k,l,m,n;
    printf("Merhaba! Sayi Bulmaca Oyununa Hosgeldin.\nOyun Kurallari geregi bize bir sayi soylemen gerekir.\nBiz de sana daha kucuk veya daha buyuk gibi ipuclari vererek senin dogru sonuca ulasmani saglamaya calisiriz.\n");
    printf("1. Seviye Kolay Mod -----> 0 ile 5  arasindaki rastgele tuttugumuz bir sayiyi bulmak icin 3 hakkin var\n2. Seviye Orta Mod ------> 0 ile 8  arasindaki rastgele tuttugumuz bir sayiyi bulmak icin 3 hakkin var\n3. Seviye Zor Mod -------> 0 ile 10 arasindaki rastgele tuttugumuz bir sayiyi bulmak icin 3 hakkin var\n ");
    printf("----------------------------------------------------------------------------\n");
      baslangic:
    system("COLOR 7");
        printf("\n\n\nMod seciniz (1 - Kolay, 2- Orta, 3-Zor):  ");
        scanf_s("%d", &m);
        if (m<1 || m>3)
        {
            printf("Yanlis deger girdiniz. Lutfen tekrar giriniz: ");
            printf("\n\n\nMod seciniz (1 - Kolay, 2- Orta, 3-Zor):  ");
            scanf_s("%d", &m);
        }
    if (m == 1)
    {
    seviye1:
        printf("-LEVEL 1-\n");
        srand(time(NULL));
        int i = rand() % 5;
        for (k = 1; k <= 3; k++)
        {
            printf("Bir sayi giriniz: ");
            scanf_s("%d", &j);
            if (k < 3)
            {
                if (j > i)
                {
                    printf("Sayiyi kucult\n");
                }
                else if (j < i)
                {
                    printf("Sayiyi buyult\n");
                }
                else if (j == i)
                {
                    printf("Tebrikler dogru bildin!\n\n\n");
                    system("COLOR A");
                    n = 1;
                    break;
                }
            }
            if (k == 3)
            {
                if (j > i)
                {
                    printf("Maalesef hakkin doldu. Sayimiz %d idi.\n\n\n", i);
                    system("COLOR C");
                    n = 0;
                }
                else if (j < i)
                {
                    printf("Maalesef hakkin doldu. Sayimiz %d idi.\n\n\n", i);
                    system("COLOR C");
                    n = 0;
                }
                else if (j = i)
                {
                    printf("Tebrikler dogru bildin!\n\n\n");
                    system("COLOR A");
                    n = 1;
                    break;
                }
            }
        }
    }
    if (m == 2)
    {
    seviye2:
        printf("-LEVEL 2-\n");
        m = 2;
        srand(time(NULL));
        int i = rand() % 8;
        for (k = 1; k <= 3; k++)
        {
            printf("Bir sayi giriniz: ");
            scanf_s("%d", &j);
            if (k < 3)
            {
                if (j > i)
                {
                    printf("Sayiyi kucult\n");
                }
                else if (j < i)
                {
                    printf("Sayiyi buyult\n");
                }
                else if (j = i)
                {
                    printf("Tebrikler dogru bildin!\n\n\n");
                    system("COLOR A");
                    n = 1;
                    break;
                }
            }
            if (k == 3)
            {
                if (j > i)
                {
                    printf("Maalesef hakkin doldu. Sayimiz %d idi.\n\n\n", i);
                    system("COLOR C");
                    n = 0;
                }
                else if (j < i)
                {
                    printf("Maalesef hakkin doldu. Sayimiz %d idi.\n\n\n", i);
                    system("COLOR C");
                    n = 0;
                }
                else if (j = i)
                {
                    printf("Tebrikler dogru bildin!\n\n\n");
                    system("COLOR A");
                    n = 1;
                    break;
                }
            }
        }
    }
    if (m == 3)
    {
    seviye3:
        printf("-LEVEL 3-\n");
        m = 3;
        srand(time(NULL));
        int i = rand() % 10;
        for (k = 1; k <= 3; k++)
        {
            printf("Bir sayi giriniz: ");
            scanf_s("%d", &j);
            if (k < 3)
            {
                if (j > i)
                {
                    printf("Sayiyi kucult\n");
                }
                else if (j < i)
                {
                    printf("Sayiyi buyult\n");
                }
                else if (j = i)
                {
                    printf("Tebrikler dogru bildin!\n\n\n");
                    system("COLOR A");
                    n = 1;
                    break;
                }
            }
            if (k == 3)
            {
                if (j > i)
                {
                    printf("Maalesef hakkin doldu. Sayimiz %d idi.\n\n\n", i);
                    system("COLOR C");
                    n = 0;
                }
                else if (j < i)
                {
                    printf("Maalesef hakkin doldu. Sayimiz %d idi.\n\n\n", i);
                    system("COLOR C");
                    n = 0;
                }
                else if (j = i)
                {
                    printf("Tebrikler dogru bildin!\n\n\n");
                    system("COLOR A");
                    n = 1;
                    break;
                }
            }
        }
    }
    if (n == 1)
    {
        printf("Sonraki levele gecmek icin 1'e\nTekrar Oynamak icin 2'ye\nSistemden cikis yapmak icin 1 ve 2 haric istedigin bir tusa basabilirsin\n");
        scanf_s("%d", &l);
        system("COLOR 7");
        if (l == 1)
        {
            if (m == 1)
            {
                goto seviye2;
            }
            if (m == 2)
            {
                goto seviye3;
            }
            if (m == 3)
            {
                printf("Zaten son seviyeyi oynadiniz. Baslangica giderek yeniden baslayabilirsiniz.");
                goto baslangic;
            }
            if (l == 2)
            {
                goto baslangic;
            }
        }
    }
    if (n == 0)
    {
        printf("Tekrar Oynamak icin 1'e\nSistemden cikis yapmak icin 1 haric istedigin bir tusa basabilirsin\n");
        scanf_s("%d", &l);
        if (l == 1)
        {
            goto baslangic;
        }
    }
}

