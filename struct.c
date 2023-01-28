#include <stdio.h>
 
struct circulo{
 
    double x; // posição x no plano 2d
    double y; // posição y no plano 2d
    double raio; // tamanho do raio
 
};
 
struct circulo cria_circulo(void){
 
    struct circulo temp;
    scanf("%lf %lf %lf",&(temp.x),&(temp.y),&(temp.raio));
    return temp;
}
 
void print_circulo(struct circulo c){
 
    printf("(%.2lf, %.2lf) - %.2lf\n", c.x, c.y, c.raio);
}
 
int main(){
 
 
    struct circulo A = {0}; // Zera todos os elementos
    struct circulo B = {.x = 1, .y=3, .raio = 7};
    struct circulo C = {1, 3, 7};
 
    A = cria_circulo();
    print_circulo(A);
 
    return 0;
 
}