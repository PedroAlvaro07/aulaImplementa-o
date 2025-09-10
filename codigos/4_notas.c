int main(){
    int x;
    float n, nSoma = 0, media;

    printf("Insira os Valores das notas do Aluno\n");
    for(x = 0; x < 4; x++){
        printf("Insira a %i nota: ", x + 1);
        scanf("%f", &n);

        nSoma = nSoma + n;
    }

    media = nSoma / 4;

    if(media >= 6){
        printf("Média Final: %2.2f\n", media);
        printf("Aluno Aprovado");
    }else{
        printf("Média Final: %2.2f\n", media);
        printf("Aluno Reprovado");
    }
}
