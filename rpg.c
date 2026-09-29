#include <stdio.h>
#include <stdlib.h>

typedef struct NO {
    int codigo;
    char *nome;
    struct NO *prox;
    struct NO *ant;
} NO;

typedef struct JOGADOR {
    char *nome;
    int hp;
    int assassinatos;
} JOGADOR;

NO *inicio = NULL;
NO *fim = NULL;
int tam = 0;

void adicionarItem(int codigo, char *nome) {
    NO *novo = malloc(sizeof(NO));

    novo->codigo = codigo;
    novo->nome = nome;
    novo->prox = NULL;
    novo->ant = NULL;

    if (inicio == NULL) {
        inicio = novo;
        fim = novo;
    } else {
        fim->prox = novo;
        novo->ant = fim;
        fim = novo;
    }
    tam++;

    printf("\n>>> Item obtido: %s\n", nome);
}

int temItem(int codigo) {
    NO *aux = inicio;

    while (aux != NULL) {
        if (aux->codigo == codigo) {
            return 1;
        }
        aux = aux->prox;
    }
    return 0;
}

void imprimirInventario() {
    NO *aux = inicio;

    printf("\n--------- INVENTARIO ---------\n");
    if (inicio == NULL) {
        printf("Nenhum item encontrado.\n");
    } else {
        while (aux != NULL) {
            printf("- %s\n", aux->nome);
            aux = aux->prox;
        }
    }
    printf("------------------------------\n");
}

void liberarInventario() {
    NO *aux = inicio;
    NO *lixo;

    while (aux != NULL) {
        lixo = aux;
        aux = aux->prox;
        free(lixo);
    }
    inicio = NULL;
    fim = NULL;
    tam = 0;
}

void liberarJogador(JOGADOR *jogador) {
    free(jogador->nome);
    jogador->nome = NULL;
}

void mudarHp(JOGADOR *jogador, int valor) {
    jogador->hp = jogador->hp + valor;

    if (valor >= 0) {
        printf("\n>>> Voce recuperou %d HP. HP atual: %d\n", valor, jogador->hp);
    } else {
        printf("\n>>> Voce perdeu %d HP. HP atual: %d\n", -valor, jogador->hp);
    }
}

int jogadorMorreu(JOGADOR jogador) {
    if (jogador.hp <= 0) {
        printf("\nSua vida chegou a zero. A jornada termina nas sombras.\n");
        return 1;
    }
    return 0;
}

void mostrarStatus(JOGADOR jogador) {
    printf("\n[Status de %s] HP: %d | Assassinatos: %d\n",
           jogador.nome, jogador.hp, jogador.assassinatos);
    imprimirInventario();
}

int escolherOpcao() {
    int opcao;

    printf("\nDigite sua escolha: ");
    scanf("%d", &opcao);
    return opcao;
}

void finalEsquizoide() {
    printf("\n===== FINAL: 21st Century Schizoid Man =====\n");
    printf("A corrupcao do Anel e os traumas da guerra destroem sua sanidade.\n");
    printf("Voce derrota o Rei Carmesim, veste a coroa e se torna o novo Homem Esquizoide.\n");
}

void finalVento() {
    printf("\n===== FINAL: I Talk to the Wind =====\n");
    printf("Voce abandona a cidadela e vive no alto das montanhas deserticas.\n");
    printf("Com sua flauta, voce encontra paz conversando apenas com o vento.\n");
}

void finalEpitafio() {
    printf("\n===== FINAL: Epitaph =====\n");
    printf("Voce recita a profecia e desfere o golpe final no Rei Carmesim.\n");
    printf("A cidadela cai, e suas ultimas palavras ficam gravadas nas ruinas.\n");
}

void finalMoonchild() {
    printf("\n===== FINAL: Moonchild =====\n");
    printf("Envolto pelo Manto do Luar, voce recusa a violencia.\n");
    printf("Uma crianca de luz aparece para guia-lo a um mundo de sonhos e estrelas.\n");
}

void finalVerdadeiro() {
    printf("\n===== FINAL: The Court of the Crimson King =====\n");
    printf("Com os quatro artefatos, voce revela que o Rei era um espelho do caos humano.\n");
    printf("O trono ilusorio desaparece e voce ajuda a reconstruir o reino com sabedoria.\n");
}

int main() {
    JOGADOR jogador;
    int escolha;
    int tecnica;
    int vidaRei;

    jogador.hp = 100;
    jogador.assassinatos = 0;
    jogador.nome = malloc(30 * sizeof(char));

    if (jogador.nome == NULL) {
        printf("Nao foi possivel reservar memoria para o nome.\n");
        return 1;
    }

    printf("===============================================\n");
    printf("       A CORTE DO REI CARMESIM - RPG\n");
    printf("===============================================\n");
    printf("Digite o nome do personagem: ");
    if (scanf(" %29[^\n]", jogador.nome) != 1) {
        printf("Nome invalido.\n");
        liberarJogador(&jogador);
        return 1;
    }

    /* ATO I - Escolha 1.1 */
    printf("\nATO I: AS TRINCHEIRAS DO SECULO XXI\n");
    printf("%s acorda na lama, sem memoria e cercado pelos Homens Esquizoides.\n", jogador.nome);
    printf("\n1 - Vasculhar a area de guerra.\n");
    printf("2 - Fugir em silencio para uma caverna.\n");
    escolha = escolherOpcao();

    if (escolha == 1) {
        printf("Voce encontra um Anel de Neurose, mas ativa uma armadilha.\n");
        adicionarItem(1, "Anel de Neurose");
        mudarHp(&jogador, -20);
    } else if (escolha == 2) {
        printf("Voce se move como uma sombra e se abriga sem ferimentos.\n");
    } else {
        printf("Escolha invalida. O medo faz voce fugir em silencio.\n");
    }

    if (jogadorMorreu(jogador)) {
        liberarInventario();
        liberarJogador(&jogador);
        return 0;
    }

    /* ATO I - Escolha 1.2 */
    printf("\nUma ponte de ferro e a unica saida. Guardas bloqueiam a travessia.\n");
    printf("1 - Enfrentar a guarda de frente.\n");
    printf("2 - Cruzar por baixo da ponte.\n");
    escolha = escolherOpcao();

    if (escolha == 1) {
        printf("Voce rompe o bloqueio, mas recebe cortes e disparos.\n");
        mudarHp(&jogador, -30);
        jogador.assassinatos++;
    } else if (escolha == 2) {
        printf("A agua gelada reduz seu vigor, mas voce evita o confronto.\n");
        mudarHp(&jogador, -10);
    } else {
        printf("Escolha invalida. Voce cruza por baixo da ponte.\n");
        mudarHp(&jogador, -10);
    }

    if (jogadorMorreu(jogador)) {
        liberarInventario();
        liberarJogador(&jogador);
        return 0;
    }

    /* ATO II */
    printf("\nATO II: O VALE DO VENTO QUETO\n");
    printf("No deserto, um eremita cego toca uma flauta no alto de uma duna.\n");
    printf("1 - Ouvir a melodia em silencio.\n");
    printf("2 - Exigir os pertences do eremita.\n");
    escolha = escolherOpcao();

    if (escolha == 1) {
        printf("O eremita percebe sua paz e entrega a flauta mistica.\n");
        adicionarItem(2, "Instrumento do Vento");
        mudarHp(&jogador, 10);
    } else if (escolha == 2) {
        printf("Voce toma a flauta a forca e sofre uma maldicao.\n");
        adicionarItem(2, "Instrumento do Vento");
        mudarHp(&jogador, -20);
        jogador.assassinatos++;
    } else {
        printf("Escolha invalida. Voce escuta a melodia em silencio.\n");
        adicionarItem(2, "Instrumento do Vento");
        mudarHp(&jogador, 10);
    }

    if (jogadorMorreu(jogador)) {
        liberarInventario();
        liberarJogador(&jogador);
        return 0;
    }

    /* ATO III - Escolha 3.1 */
    printf("\nATO III: A CRIPTA DOS PROFETAS\n");
    printf("Nos sarcofagos, antigos manuscritos falam sobre o Rei Carmesim.\n");
    printf("1 - Estudar os escritos antigos.\n");
    printf("2 - Saquear o altar central.\n");
    escolha = escolherOpcao();

    if (escolha == 1) {
        printf("Voce decifra uma profecia sobre o destino do reino.\n");
        adicionarItem(3, "Pergaminho dos Epitafios");
    } else if (escolha == 2) {
        printf("Uma armadilha de glifos incendeia a camara.\n");
        mudarHp(&jogador, -40);
    } else {
        printf("Escolha invalida. Voce tenta saquear o altar.\n");
        mudarHp(&jogador, -40);
    }

    if (jogadorMorreu(jogador)) {
        liberarInventario();
        liberarJogador(&jogador);
        return 0;
    }

    /* ATO III - Escolha 3.2 */
    printf("\nNo Santuario do Luar, flores prateadas cercam um altar.\n");
    printf("1 - Fazer uma prece no altar.\n");
    printf("2 - Consumir as plantas luminosas.\n");
    escolha = escolherOpcao();

    if (escolha == 1) {
        printf("A luz do santuario recupera suas forcas.\n");
        mudarHp(&jogador, 20);
        if (jogador.assassinatos == 0) {
            adicionarItem(4, "Manto do Luar");
            printf("As flores reconhecem suas maos limpas e formam um manto.\n");
        } else {
            printf("As flores nao entregam o Manto: seu historico tem violencia.\n");
        }
    } else if (escolha == 2) {
        printf("As petalas possuem toxinas e queimam seu estomago.\n");
        mudarHp(&jogador, -25);
    } else {
        printf("Escolha invalida. Voce consome as plantas luminosas.\n");
        mudarHp(&jogador, -25);
    }

    if (jogadorMorreu(jogador)) {
        liberarInventario();
        liberarJogador(&jogador);
        return 0;
    }

    mostrarStatus(jogador);

    /* ATO IV - Escolha 4.1 */
    printf("\nATO IV: A CIDADELA CARMESIM\n");
    printf("Guardas de armaduras espelhadas vigiam os portoes do salao do trono.\n");
    printf("1 - Usar um artefato sutil para passar pelos portoes.\n");
    printf("2 - Avancar em combate contra os guardas.\n");
    escolha = escolherOpcao();

    if (escolha == 1) {
        if (temItem(2) == 1 || temItem(4) == 1) {
            printf("Seu artefato adormece os guardas ou o torna invisivel.\n");
        } else {
            printf("Sem a flauta ou o manto, o plano falha. Voce precisa lutar.\n");
            mudarHp(&jogador, -45);
            jogador.assassinatos++;
        }
    } else if (escolha == 2) {
        printf("O combate no saguao e brutal, mas voce abre a porta final.\n");
        mudarHp(&jogador, -45);
        jogador.assassinatos++;
    } else {
        printf("Escolha invalida. Os guardas atacam e voce precisa lutar.\n");
        mudarHp(&jogador, -45);
        jogador.assassinatos++;
    }

    if (jogadorMorreu(jogador)) {
        liberarInventario();
        liberarJogador(&jogador);
        return 0;
    }

    /* Escolha 4.2 e combate final usando switch. */
    printf("\nCAMARA DO TRONO\n");
    printf("O Rei Carmesim aguarda em seu trono de espelhos.\n");
    printf("1 - Enfrentar o Rei Carmesim.\n");
    printf("2 - Dar as costas ao trono.\n");
    escolha = escolherOpcao();

    switch (escolha) {
        case 1:
            printf("\nEscolha uma tecnica para o confronto:\n");
            printf("1 - Atacar com sua arma.\n");
            printf("2 - Usar os artefatos obtidos.\n");
            printf("3 - Ler o Pergaminho e gastar toda sua vida.\n");
            tecnica = escolherOpcao();
            vidaRei = 30;

            switch (tecnica) {
                case 1:
                    vidaRei = vidaRei - 30;
                    printf("Voce ataca o Rei. Vida do Rei: %d\n", vidaRei);
                    break;

                case 2:
                    vidaRei = vidaRei - 30;
                    printf("Seus artefatos quebram o espelho do Rei. Vida do Rei: %d\n", vidaRei);
                    break;

                case 3:
                    if (temItem(3) == 1) {
                        vidaRei = 0;
                        jogador.hp = 0;
                        printf("A magia do Pergaminho consome sua vida. Vida do Rei: %d\n", vidaRei);
                    } else {
                        printf("Voce nao possui o Pergaminho dos Epitafios.\n");
                    }
                    break;

                default:
                    printf("Voce hesita e nao consegue ferir o Rei.\n");
                    break;
            }

            if (vidaRei > 0) {
                printf("\n===== FINAL: O TRONO VENCEU =====\n");
                printf("Sem derrotar o Rei, voce fica preso na Corte Carmesim.\n");
            } else if (tecnica == 3 && temItem(3) == 1) {
                jogador.hp = 0;
                finalEpitafio();
            } else if (temItem(1) == 1 && jogador.assassinatos >= 2 && jogador.hp < 30) {
                finalEsquizoide();
            } else if (temItem(1) == 1 && temItem(2) == 1 &&
                       temItem(3) == 1 && temItem(4) == 1 && jogador.hp > 80) {
                finalVerdadeiro();
            } else if (temItem(4) == 1 && jogador.assassinatos == 0 && jogador.hp > 70) {
                finalMoonchild();
            } else {
                printf("\n===== FINAL: O ESPELHO QUEBRADO =====\n");
                printf("A luta termina, mas seus atos nao foram suficientes para revelar a verdade.\n");
                printf("O Rei desaparece no espelho e o reino continua em ruinas.\n");
            }
            break;

        case 2:
            if (temItem(2) == 1 && tam == 1 && jogador.assassinatos == 0) {
                finalVento();
            } else {
                printf("\n===== FINAL: CAMINHO DAS DUNAS =====\n");
                printf("Voce deixa a cidadela, levando apenas as consequencias de suas escolhas.\n");
            }
            break;

        default:
            printf("\nVoce hesita por tempo demais. O Rei Carmesim fecha as portas do salao.\n");
            break;
    }

    printf("\nFim de jogo. Obrigado por jogar, %s!\n", jogador.nome);
    liberarInventario();
    liberarJogador(&jogador);
    return 0;
}
