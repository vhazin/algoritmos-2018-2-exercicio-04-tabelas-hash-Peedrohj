#include <stdio.h>

int main(){
    int n, m, c, chaves, vezes, testes, posic;
    testes = 0;
    vezes = 0;
    scanf("%d", &n);

    while(testes < n){
        testes += 1;
        scanf("%d %d", &m, &c);
        int tabela[m][c];

        for(int i = 0; i<m; i++){
            for(int j = 0; j<c; j++){
                tabela[i][j]=0;
            }
        }

        while(vezes < c){
            vezes += 1;
            scanf("%d", &chaves);

            posic = chaves % m;

            for(int i = 0; i<c; i++){
                if(tabela[posic][i] == 0){
                    tabela[posic][i] = chaves;
                    break;
                }
            }
        }
        
        for(int i = 0; i<m; i++){
            printf("\n%d -> ", i);
            for(int j = 0; j<=c; j++){
                if(tabela[i][j] == 0){
                    printf("\\");
                    break;
                }else{
                    printf("%d -> ", tabela[i][j]);
                }
            }
        }
        printf("\n");
        vezes = 0;
    }
}