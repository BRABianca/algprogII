#include <stdio.h>

int main() {
    int i = 5, j = 12;
    float k = 2.3;
    int *p, *q;
    float *r;
    p = &i;
    q = &j;
    r = &k;

    printf("valor de i = %d, endereço de i = %p \n", i, &i);
    printf("valor de j = %d, endereço de j = %p \n", j, &j);
    printf("valor de k = %f, endereço de k = %p \n", k, &k);
    printf("valor de p = %p, valor apontado por p = %d\n", p, *p);
    printf("valor de q = %p, valor apontado por q = %d\n", q, *q);
    printf("valor de r = %p, valor apontado por r = %f\n", r, *r);

    // Atribuições corrigidas
    *p = 3220; // Correto: Atribui o valor 3220 à variável apontada por p (i).
    p = q; // Correto: Atribui o endereço apontado por q à variável p.

    // Atribuições incorretas (mantidas como comentários)
    // &i = 3220; // Não é possível atribuir um valor a um endereço.
    // &p = &i; // Não é possível atribuir um endereço a outro endereço.
    // r = &j; // r é ponteiro para float e j é int.
    // p = i; // p só pode armazenar o endereço de uma variável int.
    // *p = &i; // *p é um apelido para a variável i, não pode armazenar um endereço.
    // &p = q; // Não é possível atribuir um endereço a outro endereço.
    // p = &q; // p só pode receber o endereço de memória de um inteiro.
    // p = &k; // p só pode receber o endereço de memória de um int.
    // p = *&r; // p só pode receber o endereço de memória de um int e r aponta para um float.
    // p = *q; // p não pode receber um inteiro.
    // *p = q; // O conteúdo de p (*p) só pode ser do tipo int, não do tipo ponteiro.

    printf("valor de i = %d\n", i);

    return 0;
}
