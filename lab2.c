#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* ex 01
int main()
{
    int n;
    printf("digite um numero interiro\n");
    scanf("%d", &n);
    printf("O numero digitado foi: %d\n", n);
    return 0;


}
*/

/* ex 02
int main(){

    float n;
    printf("Digite um numero real: \n");
    scanf("%f", &n);
    printf("O numero digitado foi: %.1f\n", n);
    return 0;

}
*/


/* ex 03
int main()
{
    int x,y,z, soma;

    printf("Digite 3 valores inteiros: \n");
    scanf("%d %d %d", &x, &y, &z);

    soma = x + y + z;//efeutando a soma

    printf("A soma dos numeros digitados e: %d\n", soma);

    return 0;
}
*/
/*
int main(){

    float n, quadrado;
    printf("Digite um numero real: \n");
    scanf("%f", &n);
    quadrado = n*n;
    printf("O quadrado deste numero e: %.2f\n", quadrado);

    return 0;

}
*/

/* ex 05
int main(){

    float n;
    printf("Digite um numero real: \n");
    scanf("%f", &n);
    printf("A quinta parte do numero digitado e: %.2f", n/5);


    return 0;
}
*/

/* ex 06
int main(){

    double C, F;

    printf("Qual e a temperatura atual em graus Celsius? \n");
    scanf("%lf", &C);
    F = C*(9.0/5.0)+32.0;
    printf("Entao a temperatura em graus Fahrenheit seria: %.2lf", F);

    return 0;
}
*/

/* ex 07
int main(){

    double C, F;

    printf("Qual e a temperatura atual em Fahrenheit? \n");
    scanf("%lf", &F);
    C = 5.0*(F- 32.0)/9.0;
    printf("Entao a temperatura em graus Celsius seria: %.2lf", C);
L = 1000*M
    return 0;

}
*/
/* ex 08
int main(){

    double C, K;
    printf("Qual e a temperatura atual em graus kelvin? \n");
    scanf("%lf", &K);
    C = K-273.15;
    printf("Entao a temperatura em graus Celsius seria: %.2lf", C);

    return 0;
}
*/

/*  ex 09
int main(){

    double C, K;
    printf("Qual e a temperatura atual em graus Celsius? \n");
    scanf("%lf", &C);
    K = C + 273.15;
    printf("Entao a temperatura em graus kelvin seria: %.2lf", K);

    return 0;
}
*/
/*ex 10
int main(){

    double KM, M;
    printf("Qual e a velocidade atual em km/h? \n");
    scanf("%lf", &KM);
    M = KM/3.6;
    printf("Entao a sua velocidade em m/s e: %.2lf", M);

    return 0;
}
*/
/* ex 11
int main(){

    double KM, M;
    printf("Qual e a velocidade atual em m/s? \n");
    scanf("%lf", &M);
    KM = M*3.6;
    printf("Entao a sua velocidade em km/h e: %.2lf", KM);

    return 0;
}
*/
/* ex 12
int main(){

    double KM, milha;
    printf("Qual e a sua distancia em milhas? \n");
    scanf("%lf", &milha);
    KM = 1.61*milha;
    printf("Entao a sua distancia em km seria: %.2lf", KM);

    return 0;
}
*/
/* ex 13
int main(){

    double KM, milha;
    printf("Qual e a sua distancia em Km? \n");
    scanf("%lf", &KM);
    milha = KM/1.61;
    printf("Entao a sua distancia em km seria: %.2lf", milha);

    return 0;
}
*/
/* ex 14
int main(){

    double R, G, pi = 3.141592;
    printf("Qual e o valor do angulo em graus? \n");
    scanf("%lf", &G);
    R = G*pi/180;
    printf("Entao o valor em radianos e: %.2lf", R);

    return 0;
}
*/
/* ex 15
int main(){

    double R, G, pi = 3.141592;
    printf("Qual e o valor do angulo em radianos? \n");
    scanf("%lf", &R);
    G = R*180/pi;
    printf("Entao o valor em graus e: %.2lf", G);

    return 0;
}
*/
/* ex 16
int main(){

    float P, C;
    printf("Qual e o valor do comprimento em polegadas? \n");
    scanf("%f", &P);
    C = P*2.54;
    printf("Entao o comprimento em centimetros sera: %.2f", C);


    return 0;
}
*/
/* ex 17
int main(){

    float P, C;
    printf("Qual e o valor do comprimento em centimetros? \n");
    scanf("%f", &C);
    P = C/2.54;
    printf("Entao o comprimento em Polegadas sera: %.2f", P);


    return 0;
}
*/
/* ex 18
int main (){
    float M3, L;

    printf("Qual e o volume em metros cubicos? \n");
    scanf("%f", &M3);

    L = 1000*M3;

    printf("Entao o volume em litros sera: %.2f", L);

    return 0;

}
*/
/* ex 19
int main (){
    float M3, L;

    printf("Qual e o volume em metros Litros? \n");
    scanf("%f", &L);

    M3 = L/1000;

    printf("Entao o volume em metros cubicos sera: %.2f", M3);

    return 0;

}
*/
/* ex 20
int main (){
    float Kg, L;

    printf("Qual e o valor da massa em Kg? \n");
    scanf("%f", &Kg);

    L = Kg/0.45;

    printf("Entao o valor da massa em Libras sera: %.2f", L);

    return 0;

}
*/

/* ex 21
int main (){
    float Kg, L;

    printf("Qual e o valor da massa em libras? \n");
    scanf("%f", &L);

    Kg = L*0.45;

    printf("Entao o valor da massa em Quilos sera: %.2f", Kg);

    return 0;

}
*/
/* ex 22
int main()
{
    float jar, m;

    printf("Qual e o valor da distancia em jardas? \n");
    scanf("%f", &jar);

    m = 0.91*jar;

    printf("Entao o valor da distancia em metros sera: %.2f", m);



    return 0;


}
*/
/* ex 23
int main()
{
    float jar, m;

    printf("Qual e o valor da distancia em metros? \n");
    scanf("%f", &m);

    jar = m/0.91;

    printf("Entao o valor da distancia em metros sera: %.2f", jar);

    return 0;


}
*/
/* ex 24
int main()
{
    float m2, a;

    printf("Qual e o valor da area em metros quadrados? \n");
    scanf("%f", &m2);

    a = m2*0.000247;

    printf("Entao o valor da area em acres sera: %.2f", a);

    return 0;
}
*/
/* ex 25
int main()
{
    float m2, a;

    printf("Qual e o valor da area em a? \n");
    scanf("%f", &a);

    m2 = a*4048.58;

    printf("Entao o valor da area em metros acres sera: %.2f", m2);

    return 0;
}
*/
/* ex 26
int main()
{
    float m2, h;

    printf("Qual e o valor da area em metros quadrados? \n");
    scanf("%f", &m2);

    h = m2*0.0001;

    printf("Entao o valor da area em hectares sera: %.2f", h);

    return 0;
}
*/
/* ex 27
int main()
{
    float m2, h;

    printf("Qual e o valor da area em hectares? \n");
    scanf("%f", &h);

    m2 = h*10000;

    printf("Entao o valor da area em metros quadrados sera: %.2f", m2);

    return 0;
}
*/
/* ex 28
int main()
{
    float a, b, c, soma;
    scanf("%f %f %f", &a,&b, &c);

    soma = a+b+c;

    printf("A soma do quadrado dos numeros digitados e: %f", soma*soma);

    return 0;
}
*/
/* ex 29
int main()
{
    float n1, n2, n3, media;
    scanf("%f %f %f", &n1,&n2, &n3);

    media = (n1+n2+n3)/3;

    printf("A media das notas digitadas e: %f", media);

    return 0;
}
*/
/*
int main()
{
    double real, dolar;

    printf("Quanto voce tem em reais? \n");
    scanf("%lf", &real);

    dolar = real/4.82;

    printf("Considerando o valor do dolar a 4.82, voce possui %.2lf dolar(es)", dolar);

    return 0;
}
*/







