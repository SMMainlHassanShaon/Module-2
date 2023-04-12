#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=5000){
        printf("cox's bazar\n");
        if(tk>=10000){
            printf("saint martin");
        }
        else{
            printf("return home");
        }
    }
    else{
        printf("stay home");
    }
    return 0;
}