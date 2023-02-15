#include <stdio.h>
#include <string.h>

 Aluno {
char nome[120];
char sobrenome[120];
};

 Equipe { Aluno integrantes[4];
};

int main() {
 Equipe equipes[20];
int numeroDeEquipes = 0;


while (numeroDeEquipes < 20) {
    printf("Informe o nome da equipe %d: ", numeroDeEquipes + 1);
    for (int i = 0; i < 4; i++) {
        printf("Informe o nome do integrante %d: ", i + 1);
        scanf("%s", equipes[numeroDeEquipes].integrantes[i].nome);
        printf("Informe o sobrenome do integrante %d: ", i + 1);
        scanf("%s", equipes[numeroDeEquipes].integrantes[i].sobrenome);
    }
    numeroDeEquipes++;
}

char nomeDoAluno[120];
printf("Informe o nome do aluno: ");
scanf("%s", nomeDoAluno);

int equipeEncontrada = -1;
for (int i = 0; i < numeroDeEquipes; i++) {
    for (int j = 0; j < 4; j++) {
        if (strcmp(equipes[i].integrantes[j].nome, nomeDoAluno) == 0) {
            equipeEncontrada = i;
            break;
        }
    }
    if (equipeEncontrada != -1) {
        break;
    }
}

if (equipeEncontrada == -1) {
    printf("Nenhum aluno encontrado com o nome informado.\n");
} else {
    printf("O aluno faz parte da equipe %d.\n", equipeEncontrada + 1);
}

}
