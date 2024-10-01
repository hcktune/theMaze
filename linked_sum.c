#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int data;
    struct Node* next;
}Node;

typedef struct Date{
    int jour;
    int mois;
    int annees;
} Date;

typedef struct Personne{
    char nom[50];
    char prenom[50];
    Date date;
}Personne;



void getAnnees();
Personne* readFile();

Personne* readFile(){
    Personne *tablePersonnes = malloc(sizeof(Personne) * 100);
    FILE *file_personnes;
    char buffer[256]; // lenght buffer temp memory
    int nbr = 0;

    file_personnes = fopen("personnes.txt", "r");
    if (!file_personnes){ // file is null
        printf("Error opening the file");
        
    }

    
    while(fscanf(file_personnes, "%s %s", 
         (tablePersonnes)->nom, 
         (tablePersonnes)->prenom 
        //  tablePersonnes,
        //  (tablePersonnes + nbr)->date.mois,
        /*  (tablePersonnes + nbr)->date.annees*/)   != 0 || !feof(file_personnes)){

        printf("nom: %s\n", *(tablePersonnes + nbr)->nom);
        printf("prenom: %s\n", *(tablePersonnes + nbr)->prenom);
        nbr++;
        // printf("jour: %d\n", tablePersonnes[nbr].date.jour);
        // printf("mois: %d\n", tablePersonnes[nbr].date.mois);
        // printf("annees: %d\n", tablePersonnes[nbr++].date.annees);
     
    }

    fclose(file_personnes);
        
    return tablePersonnes;

}




void getAnnees(){
    Personne p;
    printf("jour: \n");
    scanf("%d", &p.date.jour);
    printf("mois: \n");
    scanf("%d", &p.date.jour);
    printf("annees: \n");
    scanf("%d", &p.date.annees);
    
    printf("ton age : %d", 2024 - p.date.annees);
}
int main(){
    //getAnnees();

    //Personne *pe = readFile();
    Personne *p = malloc(sizeof(Personne) * 2);
    FILE *file = fopen("personnes.txt", "r");
    
    if (file == NULL){
        printf("error");
        return (0);
    }
    int i;
    fscanf(file, "%s", &p->nom);
    fscanf(file, "%s", &p->prenom);
    fscanf(file, "%d", &p->date.jour);
    fscanf(file, "%d", &p->date.mois);
    fscanf(file, "%d", &p->date.annees);
    fscanf(file, "%s", &p->nom);

    printf("%d", *(p + 1)->nom);



    // scanf("%d", i);
    // printf("nom de %d line est %s", i, *(p + i)->nom);
    //------------
    // int *x = malloc(sizeof(int) * 3);

    // *x = 1;
    // x[1] = 14;
    // printf("%d\n", *x);
    // printf("%p\n", &*x);  

    // printf("%d\n", *(x + 1));
    // printf("%p\n", &*(x + 1)); //next address
    //------------

    // // -- test 1 : init a node -- + 
    // Node* n1 = NULL;

    // n1 =  malloc(sizeof(Node));

    // n1->data = 1;
    // printf("%p\n", n1);
    // printf("%d\n", n1->data);
    // printf("%d\n", n1->data);
    // printf("%p\n", n1->next);
  

    // // -- test 2 : pointing to next node -- ++

    // Node* n2 = malloc(sizeof(Node));
    // printf("adddress of n2 : %p\n", n2);
    // printf("%d\n", n2->data);
    // printf("%p\n", n2->next);




    // n2->data = 2;
  
    // n1->next = n2;

   
    // printf("%p\n", n2);
    // printf("address of data after %d\n", n2->data);
    // printf("address of n1->next :  %p\n", n1->next);

    // -- test 3 : node contains a list of node -- ++

    // int i;
    // Node* head = malloc(sizeof(Node)); 
    // head->next = NULL;
    // head->data = 0;
    // Node* node_1 = malloc(sizeof(Node));
    // head->next = node_1;
    // node_1->data = 1;
    // node_1->next = NULL;

    // printf("head data : %d\n", head->data);
    // printf("node_1 data : %d\n", head->next->data);

    // Node* node_2 = malloc(sizeof(Node));

    // node_2->data = 2;

    // head->next->next = node_2;

    // printf("head data : %d\n", head->data);
    // printf("node_2 data : %d\n", head->next->data);

    // node_2->next = NULL;

    // while (head != NULL)
    // {
    //     printf("%d", head->data);
    //     head = head->next;
    // }

    //------------------------------
    // int i = 0;
    // // Create the head node
    // Node *head = malloc(sizeof(Node));

    // head->data = i++;  // Initialize the first node
    // head->next = NULL;

    // Node *current = head;

    // while (i < 5) {
    //     Node *newNode = malloc(sizeof(Node));

    //     newNode->data = i++;
    //     newNode->next = NULL;
    //     current->next = newNode;  // Link the new node
    //     current = newNode;        // Move to the new node
    // }

    // current = head;
    // while (current != NULL) {
    //     printf("%d\n", current->data);
    //     current = current->next;
    // }
    //------------------------------
    

    return (0);
}




