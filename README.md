<div align="center">

# 🗡️ A CORTE DO REI CARMESIM

### *Um RPG de Texto em C Inspirado na King Crimson*

**Um jogo de escolhas, onde cada decisão molda seu destino.**

[![C](https://img.shields.io/badge/Linguagem-C-03599C?style=for-the-badge&logo=c&logoColor=white)](#)
[![RPG](https://img.shields.io/badge/Gênero-RPG%20de%20Texto-8B0000?style=for-the-badge)](#)
[![Finais](https://img.shields.io/badge/Finais-5-FFD700?style=for-the-badge)](#finais)

---

</div>

## 📖 Sobre o Jogo

Você desperta sem memórias no meio de trincheiras cobertas de lama e sangue. O mundo ao redor é regido pelo **Rei Carmesim**, uma entidade que mantém o reino sob um véu de paranoia e decadência. Ao longo de **4 atos**, você coleta **4 artefatos místicos**, toma decisões que afetam sua **sanidade** e **moralidade**, e enfrenta o confronto final — que definirá qual dos **5 finais** você alcançará.

### ⚙️ Mecânicas do Jogo

| Mecânica | Descrição |
|----------|-----------|
| **❤️ HP** | Começa com **100 HP**. Chegar a 0 significa morte. |
| **🗡️ Assassinatos** | Conta quantas pessoas você matou. Afeta o final. |
| **🎒 Inventário** | Lista duplamente encadeada. Cada item desbloqueia possibilidades. |
| **📜 Escolhas** | Cada opção tem consequências reais — HP, itens ou moralidade. |

---

## 🔧 Como Compilar e Rodar

```bash
gcc rpg.c -o rpg
./rpg
```

> **Requisitos:** Um compilador C (GCC, Clang ou MSVC) instalado no seu sistema.

---

## 🎭 A História

### ATO I — As Trincheiras do Século XXI

Você desperta no meio da lama fria, encharcado de sangue e cercado pelo som retorcido de engrenagens e marchas militares. O ar cheira a enxofre e os céus ostentam uma fuligem cinzenta permanente. Ao seu redor, marcham os soldados da patrulha insana conhecida como os **Homens Esquizóides**. Sem memórias de quem você é ou de como chegou até aqui, sua prioridade imediata é sobreviver.

---

#### Escolha 1.1 — O Despertar na Valeta

> **Opção A: Vasculhar a área de guerra**
>
> Você decide rastejar entre os cadáveres recém-caídos na lama, tateando bolsos e cinto de munição em busca de qualquer arma ou utilitário antes de fugir.
>
> Suas mãos encontram o **[Anel de Neurose]** no dedo de um oficial morto. Porém, ao puxá-lo, você dispara um cabo de aço de uma armadilha militar enterrada, ferindo severamente seu corpo com estripalhos.
>
> | 🎁 Item | 💔 HP |
> |---------|-------|
> | **Anel de Neurose** | **-20 HP** (restante: 80) |

> **Opção B: Fugir em silêncio**
>
> Você ignora os despojos de guerra e prefere arrastar-se suavemente pela fumaça densa, usando o relevo das trincheiras para se mover em direção a uma caverna distante.
>
> Movendo-se como uma sombra, você evita o radar dos patrulheiros e consegue se abrigar sem infligir nenhum dano ao seu corpo exausto.
>
> | 🎁 Item | 💔 HP |
> |---------|-------|
> | Nenhum | **100 HP** (mantido) |

---

#### Escolha 1.2 — A Travessia da Ponte de Ferro

Diante da saída do campo de batalha, uma antiga ponte de ferro serve como o único ponto de travessia sobre um abismo. Ela está bloqueada por uma guarda de elite enlouquecida pela guerra.

> **Opção A: Enfrentar a guarda de frente**
>
> Você empunha uma barra de ferro retorcida e corre em direção aos guardas, canalizando toda a sua raiva para abrir caminho através da força e da brutalidade.
>
> Em uma investida violenta e desesperada, você consegue romper o bloqueio e massacrar os soldados, mas paga o preço recebendo cortes profundos e disparos superficiais.
>
> | 🗡️ Assassinatos | 💔 HP |
> |------------------|-------|
> | **+1** | **-30 HP** |

> **Opção B: Cruzar por baixo da ponte**
>
> Você decide esperar o cair da noite e desce cuidadosamente pelas vigas de ferro, atravessando a correnteza do rio gelado que corre abaixo.
>
> Você se esquiva completamente do confronto com os guardas, mantendo suas mãos limpas de sangue, embora a hipotermia da água congelante desgaste seu vigor físico.
>
> | 🗡️ Assassinatos | 💔 HP |
> |------------------|-------|
> | **Nenhum** | **-10 HP** |

---

### ATO II — O Vale do Vento Queto

Ao deixar a ponte de ferro para trás, os sons de tiros e explosões vão desaparecendo. A fumaça dá lugar a uma brisa quente e poeirenta. A terra batida gradualmente se transforma em dunas douradas e desérticas: você entrou nas terras esquecidas do reino.

Nesta imensidão árida, o perigo não é o aço, mas o isolamento e o desespero. O vento constante sopra através das formações rochosas criando sons que lembram vozes sussurrantes. Enquanto caminha sob o sol escaldante, você avista no topo de uma duna um **eremita cego** tocando uma melodia melancólica e serena em uma flauta de madeira.

---

#### Escolha 2.1 — O Encontro com o Eremita

> **Opção A: Ouvir a melodia em silêncio**
>
> Você aproxima-se com calma, senta-se na areia ao lado do eremita e fecha os olhos, escutando atentamente a música e permitindo que ela acalme sua mente atribulada.
>
> O eremita sorri ao perceber a paz em suas intenções. Ele encerra a canção e presenteia você com sua flauta mística, dizendo que a música guiará seus passos na escuridão.
>
> | 🎁 Item | 💔 HP |
> |---------|-------|
> | **Instrumento do Vento** | **+10 HP** |

> **Opção B: Exigir os pertences do eremita**
>
> Você avança com postura ameaçadora e exige que o eremita entregue seus suprimentos e sua flauta imediatamente sob ameaça de morte.
>
> O eremita recusa-se a ceder ao seu terrorismo. Tomado pela corrupção (se possuir o Anel de Neurose, você o executa na hora), você toma o objeto à força, mas uma maldição mística derivada do ato maligno consome suas forças.
>
> | 🎁 Item | 💔 HP | 🗡️ Assassinatos |
> |---------|-------|------------------|
> | **Instrumento do Vento** | **-20 HP** | **+1** |

---

### ATO III — A Cripta dos Profetas

Orientado pelos sopros do vento, você avança até que a areia desértica dê lugar a ruínas de pedra negra fundida. Uma enorme fissura no solo revela a entrada para antigas catacumbas subterrâneas, o único caminho seguro para evitar a guarda de patrulha aérea da cidadela.

Você descende às profundezas da terra, onde o calor do deserto é substituído pelo frio sepulcral de antigas tumbas e bibliotecas esquecidas. Aqui repousam os ossos e os registros dos profetas que tentaram alertar o mundo sobre o Rei Carmesim.

---

#### Escolha 3.1 — Os Manuscritos nos Sarcófagos

> **Opção A: Estudar os escritos antigos**
>
> Você aproxima-se com respeito dos sarcófagos de pedra e gasta um tempo valioso analisando e decifrando as inscrições em alto-relevo gravadas na pedra.
>
> Sua paciência compensa: você decodifica o idioma dos antigos e encontra um papiro preservado contendo profecias sobre o destino do reino e os segredos do Rei Carmesim.
>
> | 🎁 Item | 💔 HP |
> |---------|-------|
> | **Pergaminho dos Epitáfios** | **Nenhum dano** |

> **Opção B: Saquear o altar central**
>
> Impaciente com as leituras, você usa um pedaço de rocha para arrombar o baú trancado que repousa sobre o altar da cripta.
>
> O impacto do golpe ativa uma armadilha secreta de glifos mágicos, incendiando a câmara com um fogo purificador que queima a sua pele intensamente.
>
> | 🎁 Item | 💔 HP |
> |---------|-------|
> | Nenhum | **-40 HP** |

---

#### Escolha 3.2 — O Santuário do Luar

Mais fundo na cripta, você encontra um jardim subterrâneo banhado pela luz de flores prateadas que flutuam na penumbra. No centro, há um altar reluzente.

> **Opção A: Fazer uma prece no altar**
>
> Você ajoelha-se diante do altar prateado e faz uma prece sincera, buscando purificar suas intenções e pedindo proteção para o caminho à frente.
>
> ⚠️ **Condição especial:** Se você **não cometeu nenhum assassinato**, as flores luminosas soltam fiapos de luz que se tecem ao redor do seu corpo, formando um manto translúcido e místico.
>
> | 🎁 Item | 💔 HP |
> |---------|-------|
> | **Manto do Luar** *(apenas sem mortes)* | **+20 HP** |

> **Opção B: Consumir as plantas luminosas**
>
> Acreditando que as plantas contêm propriedades curativas mágicas, você arranca um punhado de pétalas brilhantes e as mastiga rapidamente.
>
> As pétalas puras contêm toxinas defensivas quando ingeridas sem preparo, causando uma reação alérgica violenta e dores lancinantes no seu estômago.
>
> | 🎁 Item | 💔 HP |
> |---------|-------|
> | Nenhum | **-25 HP** |

---

### ATO IV — A Cidadela Carmesim

Ao cruzar a última câmara da cripta, você encontra uma escadaria de pedra espiralada. Subindo centenas de degraus, você emerge diretamente no pátio interno da imponente cidadela púrpura, onde o cheiro de incenso, vinho e a opulência sufocante anunciam o palácio real.

Diante de você ergue-se a entrada principal do salão do trono, guardada pela guarda de elite vestida em **armaduras espelhadas**.

---

#### Escolha 4.1 — A Passagem pelos Portões

> **Opção A: Utilizar artefato sutil**
>
> Você decide não derramar sangue na entrada do palácio e utiliza o poder da sua **Flauta** para adormecer os guardas com uma canção suave ou o **Manto** para caminhar invisível como um fantasma.
>
> Graças à utilidade do seu item místico, você atravessa os grandes portões de bronze sem disparar alarmes ou sofrer qualquer tipo de arranhão.
>
> | 🎁 Item necessário | 💔 HP |
> |--------------------|-------|
> | **Instrumento do Vento** ou **Manto do Luar** | **Nenhum dano** |

> **Opção B: Avançar no combate**
>
> Você desembainha sua lâmina, solta um grito de guerra e investe diretamente contra os cavaleiros de elite do Rei Carmesim.
>
> Segue-se um combate brutal e caótico no saguão de mármore. Você derrota os guardas, mas sofre ferimentos corporais graves e exaustão extrema antes de abrir a porta final.
>
> | 🗡️ Assassinatos | 💔 HP |
> |------------------|-------|
> | **+1** | **-45 HP** |

---

### 🏰 Câmara do Trono — O Confronto Final

As grandes portas de bronze se abrem. No fundo do salão iluminado por chamas púrpuras, o **Rei Carmesim** repousa em seu trono de espelhos, aguardando sua decisão final.

---

#### Escolha 4.2 — A Decisão do Destino

> **Opção A: Enfrentar o Rei Carmesim**
>
> Você caminha firmemente até os degraus do trono e confronta a entidade. Escolha uma técnica:
>
> | # | Técnica | Efeito |
> |---|---------|--------|
> | 1 | **Atacar com sua arma** | Rei perde 30 HP |
> | 2 | **Usar os artefatos** | Rei perde 30 HP |
> | 3 | **Ler o Pergaminho** | Rei perde 30 HP, mas **você também** *(requer Pergaminho dos Epitáfios)* |

> **Opção B: Dar as costas ao trono**
>
> Você olha para a coroa, para o trono e para a decadência da cidadela, decide que nada daquilo vale a sua alma e dá as costas ao Rei, caminhando para fora do palácio.

---

## 🏆 Finais

<div id="finais"></div>

<table>
<tr>
<td width="50%" valign="top">

### 1. 21st Century Schizoid Man
*O Homem Esquizóide*

> A corrupção do Anel e os traumas da guerra destroem a sua sanidade. Você mata o Rei Carmesim, veste a coroa e estabelece um regime de paranoia e terror militarizado, tornando-se o novo Homem Esquizóide.

**Como obter:**
- Pegue o **Anel de Neurose** (1.1A)
- **Mate** os guardas da ponte (1.2A)
- **Mata** o eremita (2.1B)
- Enfrente o Rei (4.2A)
- **Condições:** HP < 30 e ≥ 2 assassinatos

</td>
<td width="50%" valign="top">

### 2. I Talk to the Wind
*Eu Falo com o Vento*

> Percebendo a inutilidade do poder e da salvação de um reino destruído, você abandona a cidadela. Vai morar no topo das montanhas desérticas tocando sua flauta. As pessoas dizem que você enlouqueceu por falar apenas com o vento, mas você encontrou a paz interior.

**Como obter:**
- Fuja em silêncio (1.1B)
- Pegue apenas a **Flauta** (2.1A)
- Ignore todos os outros itens
- **Caminhe para fora** do palácio (4.2B)
- **Condições:** Somente 1 item no inventário e 0 assassinatos

</td>
</tr>
<tr>
<td width="50%" valign="top">

### 3. Epitaph
*Epitáfio*

> Você recita a profecia do pergaminho enquanto desfere o golpe final no Rei. O esforço mágico destrói a entidade e a cidadela, mas consome o resto da sua vida. Suas últimas palavras ficam gravadas nas ruínas como um aviso epitáfio para as gerações futuras.

**Como obter:**
- Obtenha o **Pergaminho dos Epitáfios** (3.1A)
- Enfrente o Rei (4.2A)
- Escolha **Ler o Pergaminho** (técnica 3)
- **Condições:** Ter o Pergaminho no inventário

</td>
<td width="50%" valign="top">

### 4. Moonchild
*A Criança da Lua*

> Envolto no Manto do Luar, você recusa a violência contra o Rei. A ilusão da Corte se desfaz e uma criança de luz prateada surge para guiar seu espírito para um mundo eterno de sonhos e estrelas.

**Como obter:**
- Siga apenas caminhos **pacifistas**
- Obtenha o **Manto do Luar** (3.2A)
- Enfrente o Rei (4.2A)
- **Condições:** 0 assassinatos e HP > 70

</td>
</tr>
<tr>
<td colspan="2" align="center">

### 5. The Court of the Crimson King ⭐
*A Corte do Rei Carmesim — Final Verdadeiro*

> Combinando o poder de todos os quatro artefatos, você desmascara a farsa do Rei Carmesim, que revela ser apenas um espelho do caos humano. Você dissolve o trono ilusório, encerra a era de trevas e assume a liderança do conselho para reconstruir o reino com sabedoria.

**Como obter:**
- Colete **os 4 itens**: Anel (1.1A), Flauta (2.1A), Pergaminho (3.1A), Manto (3.2A)
- Enfrente o Rei (4.2A)
- **Condições:** HP > 80

</td>
</tr>
</table>

---

## 🗺️ Mapa de Escolhas

```
ATO I                           ATO II              ATO III             ATO IV
─────────────────────────────   ───────────────     ───────────────     ───────────────
1.1A → Anel de Neurose (-20HP)  2.1A → Flauta       3.1A → Pergaminho   4.1A → Passagem
1.1B → Fugir (sem dano)         2.1B → Flauta       3.1B → Armadilha    4.1B → Combate
                                (-20HP, +1 kill)    (-40HP)             (-45HP, +1 kill)
1.2A → Combate (-30HP, +1 kill)                                           
1.2B → Rio (-10HP)                                                        

                                3.2A → Manto (se 0 kills)  → 4.2A ou 4.2B
                                3.2B → Toxinas (-25HP)
```

---

<div align="center">

### 🎵 Inspirado pela discografia da King Crimson

*21st Century Schizoid Man* · *I Talk to the Wind* · *Epitaph* · *Moonchild* · *The Court of the Crimson King*

---

**Feito com ❤️ e C**

</div>
