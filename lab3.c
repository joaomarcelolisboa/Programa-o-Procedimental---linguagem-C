#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*int main()
{

    return 0;
}
*/

/* ex 1
int main()
{
    int a, b;

    printf("Digite 2 numero: \n");
    scanf("%d %d", &a, &b);

    if(a > b){
        printf("o numero %d e o maior", a);
    }else{
        printf("o numero %d e o maior", b);
    }

    return 0;
}
*/
/* ex 2
int main()
{
    int a, b;
    printf("Digite um numero: \n");
    scanf("%d", &a);

    if(a > 0){
        b = sqrt(a);
        printf("%d", b);
    }else{
        printf("Esse numero e invalido");
    }

    return 0;
}
*/
/* ex 3
int main()
{
    float a;

    printf("Digite um numero: \n");
    scanf("%f", &a);

    if(a > 0){
        printf("%.2f", sqrt(a));
    }else{
        printf("%.2f", pow(a,2));
    }

    return 0;
}
*/

/* ex 4
int main()
{
    float a, b, c;
    printf("Digite um numero: \n");
    scanf("%f", &a);

    if(a > 0){
        b = sqrt(a);
        printf("%.2f \n", b);

        c = pow(a,2);
        printf("%.2f \n", c);
    }

    return 0;
}
*/
/* ex 6
int main()
{
    int a;
    printf("Digite um numero: \n");
    scanf("%d", &a);

    if(a > 0){
        printf("o numero digitado e PAR");
    }else{
        printf("o numero digitado e IMPAR");
    }


    return 0;
}
*/
/*
int main()
{
    int a, b;

    printf("Digite 2 numero: \n");
    scanf("%d %d", &a, &b);

    if(a > b){
        printf("o numero %d e o maior", a);
    }else if(b > a){
        printf("o numero %d e o maior", b);
    }else{
        printf("os numeros sao iguais", b);
    }

    return 0;
}
*/
/* ex 8
int main()
{
    float n1, n2, media;

    printf("digite o valor da primeira nota: \n");
    scanf("%f", &n1);

    if(n1 < 0.0 && n1 > 10.0){
        printf("nota invalida");
        exit(0);
    }
    printf("digite o valor da segunda nota: \n");
    scanf("%f", &n2);

    if(n2 < 0.0 && n2 > 10.0){
        printf("nota invalida");
        exit(0);
    }
    media = (n1 + n2)/2;

    printf("%f", media);





    return 0;
}
*/
/* ex 9
int main()
{
    float salario, emprestimo, validador;

    printf("Qual valor de emprestimo voce deseja? \n");
    scanf("%f", &emprestimo);

    printf("Qual e o valor do seu salario? \n");
    scanf("%f", &salario);

    validador = salario - (salario * 0.8);

    if(emprestimo > validador){
        printf("Emprestimo nao concedido");
    }else{
        printf("Emprestimo concedido");
    }

    return 0;
}
*/
/* ex 10
int main()
{
    float h, PesoIdeal;
    char s;

    printf("qual e seu sexo? responda com F para (feminino) ou M (para masculino) \n");
    scanf("%c", &s);
    printf("Qual e sua altura? \n");
    scanf("%f", &h);


    if(s == 'M'){ // usar aspas simples para declarar variavel char
        PesoIdeal = (72.7 * h) - 58.0;
    }else if(s == 'F'){
        PesoIdeal = (62.1 * h) - 44,7;
    }
    printf("Seu peso ideal e: %.2f\n", PesoIdeal);


    return 0;
}
*/
/* ex 11
int main()
{
    int n;

    printf("Digite um numero: \n");

    if (n>0){

    }


    return 0;
}
*/
/* ex 12
int main()
{
    float n, logaritimo;

    printf("Digite um numero: \n");
    scanf("%f", &n);

    if (n>0){

    logaritimo = log(n);
        printf("O logaritimo do numero digitado e: %f", logaritimo);
    }else{
        printf("Numero invalido!\n");
    }

    return 0;
}
*/
/* ex 13
int main()
{
    float n1, n2, n3, media;

    printf("Digite os valores das 3 notas: \n");
    scanf("%f%f%f", &n1, &n2, &n3);

    media = (n1 + n2 + (n3*2))/3;

    if (media>60){

        printf("Aluno aprovado com a nota final: %f", media);
    }else{
        printf("Aluno reprovado com a nota final: %f", media);
    }
    return 0;
}
*/
/* ex 14
int main()
{
    float lab, avs, ef, media;

    printf("Digite os valores das 3 notas: \n");
    scanf("%f%f%f", &lab, &avs, &ef);

    media = (lab*2 + avs*3 + ef*5)/10;

    if (media<2.9){
        printf("Aluno reprovado com a nota final: %f", media);
    }else if (media >= 3.0 && media <= 4.9){
        printf("Aluno de recuperacao com a nota final: %f", media);
    }else if (media > 5.0){
        printf("Aluno aprovado com a nota final: %f", media);
    }
    return 0;
}
*/
/* ex 15
int main()
{
    int dia;

    printf("digite um numero: \n");
    scanf("%d", &dia);

    switch (dia)

    {

    case 1:

    printf("\n hoje e domingo \n");

    break;

    case 2:

    printf("\n hoje e segunda \n");

    break;

    case 3:

    printf("\n hoje e terca \n");

    break;

    case 4:

    printf("\n hoje e quarta \n");

    break;

    case 5:

    printf("\n hoje e quinta \n");

    break;

    case 6:

    printf("\n hoje e sexta \n");

    break;

    case 7:

    printf("\n hoje e sabado \n");

    break;

    return 0;
}
}
*/
/* ex 16
int main()
{
    int mes;

    printf("digite um numero: \n");
    scanf("%d", &mes);
switch (mes)

{

case 1:

printf("\nO mes de janeiro \n");

break;

case 2:

printf("\nO mes de Fevereito \n");

break;

case 3:

printf("\nO mes de Março \n");

break;

case 4:

printf("\nO mes de Abril \n");

break;

case 5:

printf("\nO mês de Maio \n");

break;

case 6:

printf("\nO mes de Junho \n");

break;

case 7:

printf("\nO mes de Julho \n");

break;

case 8:

printf("\nO mes de Agosto \n");

break;

case 9:

printf("\nO mes de Setembro \n");

break;

case 10:

printf("\n O mês de Outubro \n");

break;

case 11:

printf("\n O mes de Novembro \n");

break;

case 12:

printf("\n O mês de Dezembro \n");

break;
}

return 0;
}
*/
/* ex 17
int main()
{
    double A, B, C, area_triangulo,area_circulo, area_trapezio, area_quadrado, area_retangulo;
    scanf("%lf", &A);
    //o b tem que ser menor que a
    scanf("%lf", &B);
    scanf("%lf", &C);

    area_trapezio = (A + B)*C/2;

    printf("TRAPEZIO: %.3lf\n", area_trapezio);


   return 0;
}
*/
/* ex 18
int main()
{
    float a,b, soma, multi, diferenca, divisao;
    int n;

    printf("Digite 2 numeros: \n");
    scanf("%f %f", &a, &b);
    printf("O que voce deseja fazer com esses numeros?\n 1-somar,\n 2-subtrair,\n 3-multiplicar,\n 4-dividir\n");
    scanf("%d", &n);

    switch (n)

    {

    case 1:

    printf("A soma de %.2f + %.2f e: %.2f", a, b, a+b);

    break;

    case 2:

    printf("A subtracao de %.2f - %.2f e: %.2f", a, b, a-b);

    break;

    case 3:

    printf("A multiplicacao de %.2f * %.2f e: %.2f", a, b, a*b);

    break;

    case 4:

    printf("A divisao de %.2f / %.2f e: %.2f", a, b, a/b);

    break;


   return 0;
}
}
*/
/* ex 19
int main(){


    int valor;

    printf("Digite um valor: ");

    scanf("%d" ,&valor);

    if(valor%5 == 0 || valor%5 == 5 && valor%3 == 0){

        printf("Divisivel por 3 e 5");

    }

    else if(valor%5 == 0 || valor%5 == 5){

        printf("Divisivel por 5 mas nao por 3");

    }

    else if(valor%3 == 0){

        printf("Divisivel por 3 mas nao por 5");

    }

    else{
        printf("Nao e divisivel por 3 ou 5");
    }

 return 0;
}
*/
/* ex 20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A, B, C, troca;

    scanf("%lf%lf%lf", &A,&B,&C);



    if (A < B){
        troca = A;
        A = B;
        B = troca;

    }if (A < C){
        troca = A;
        A = C;
        C = troca;

    }if (B < C){
        troca = B;
        B = C;
        C = troca;
    }
     if (A >= (B+C))
        printf("NAO FORMA TRIANGULO\n");
    else{
         if ((A * A) == (B*B) + (C*C))
            printf("TRIANGULO RETANGULO\n");
         if ((A*A) > (B*B) + (C*C))
            printf("TRIANGULO OBTUSANGULO\n");
         if ((A*A) < (B*B) + (C*C))
            printf("TRIANGULO ACUTANGULO\n");
         if ((A == B) && (B == C) && (A == C))
            printf("TRIANGULO EQUILATERO\n");
    else{
         if ((A == B) || (B == C) || (A == C))
            printf("TRIANGULO ISOSCELES\n");
        }
    }




    return 0;
}
*/
/* ex 22
int main()
{
    float idade, tempo;

    printf("Quantos anos voce tem?\n");
    scanf("%f", &idade);

    printf("Quantos tempo de servico voce tem?\n");
    scanf("%f", &tempo);

    if(idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25)){
        printf("voce esta apto a aposentar");
    }else{
        printf("voce nao esta apto a aposentar");
    }

   return 0;
}
*/

