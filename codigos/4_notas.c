#include <stdio.h>

int main(){
    int x;
    float n, calc = 0;

    printf("Insira as notas do Aluno (0.0 - 10.0)\n");
    for(x = 0; x < 4; x++){
        printf("Insira a %i nota: ", x + 1);
        scanf("%f", &n);

        calc = calc + n;
    }

    calc = calc / 4;

    if(calc >= 6){
        printf("Média Final: %1.1f\n", calc);
        printf("Aluno Aprovado");
    }else{
        printf("Média Final: %1.1f\n", calc);
        printf("Aluno Reprovado");
    }
}
