 /*Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² + (y2-y1)²)).*/
#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;

    // Solicita ao usuário para inserir as coordenadas dos pontos
    printf("Digite as coordenadas do primeiro ponto (x1 y1):\n");
    scanf("%f %f", &x1, &y1);
    printf("Digite as coordenadas do segundo ponto (x2 y2):\n");
    scanf("%f %f", &x2, &y2);

    // Calcula a distância entre os dois pontos
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Exibe o resultado
    printf("A distancia entre os pontos (%.2f, %.2f) e (%.2f, %.2f) eh: %.2f\n", x1, y1, x2, y2, distancia);

    return 0;
}
