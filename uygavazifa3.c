#include <stdio.h>
int mian () {
    int kun;
    printf("kun raqamini kiriting: ");
    scanf("%d", &kun);
    switch (kun)
    {
    case 1:
    printf("dushanba");
        break;
    case 2:
        printf("seshanba");
        break;
    case 3:
        printf("chorshanba");
        break;
    case 4:
        printf("payshanba");
        break;
    case 5:
        printf("juma");
        break;
    case 6:
        printf("shanba");
        break;
    case 7:
        printf("yakshanba");
        break;
    
    default:
      printf("bunday kun yoq");
        break;
    }
    return 0;

}
