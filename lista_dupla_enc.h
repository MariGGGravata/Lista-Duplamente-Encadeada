typedef struct NoDe TNoDe;

TNoDe* criar(int v);
int tamanho(TNoDe *l);
void inserir(TNoDe *l, int v);
void remover(TNoDe *l, int v);
TNoDe* buscar(TNoDe *l, int v);
void exibir(TNoDe *l);
void exibeno(TNoDe *l);

//Exercícios

void inserirnoini(TNoDe *l, int v);
TNoDe* removerdoini(TNoDe *l);
void exibirinvertido(TNoDe *l);
void concatenar(TNoDe *l1, TNoDe *l2);
void remover_pos(TNoDe *l, int p);
int comparar_listas(TNoDe *l1, TNoDe*l2);
void tornar_circular(TNoDe *l);


