//funções de arvore binaria de busca

typedef struct arvore{
int info;
struct *arvore DIR;
struct *arvore ESQ;

}ARVORE;

//ABAIXO FUNÇÕES DE CRIAÇÃO DA ARVORE.

ARVORE *CRIA_VAZIA(){
return NULL;
}

//FUNÇÃO DE INSERÇÃO NA ARVORE.

ARVORE *INSERE(int info, ARVORE *esq, ARVORE *dir){
ARVORE *NOVA = (ARVORE *) malloc(sizeof(ARVORE));

NOVA->info = info;
NOVA->ESQ = esq;
NOVA->DIR = dir;

return NOVA;
}


