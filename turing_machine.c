#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

    char palavra[20];
    int acompanhamento = 0;
    printf("Insira a palavra\n");
    scanf("%s", palavra);
    
    if (palavra[0] == 'a') {

        acompanhamento++;
        goto estado1;
    }

    estado1:

        if (palavra[acompanhamento] == 'b') {

            acompanhamento++;
            goto estado2;
        }

        else {

            goto invalido;
        }

    estado2:

        if (palavra[acompanhamento] == '\0') {
            
            goto estadoFinal;
        }

        else if (palavra[acompanhamento] == 'b') {

            acompanhamento++;
            goto estado2;
        }
        else if (palavra[acompanhamento] == 'a') {

            acompanhamento++;
            goto estado3;
        }

        else {

            goto invalido;
        }

    estado3:
        
        if (palavra[acompanhamento] == 'b') {

            acompanhamento++;
            goto estado2;
        }

        else {

            goto invalido;
        }

    invalido:

        printf("\n\nA palavra e invalida");
        goto fim;
    
    estadoFinal:

        printf("\n\nA palavra e valida");
    
    fim:

        return 0;
}
