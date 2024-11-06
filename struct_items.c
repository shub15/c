#include <stdio.h>
struct items{
  char name[100];
  int quantity;
};

void input(struct items item[50], int size){
    for(int i = 0; i < size; i++){
        scanf("%s", item[i].name);
        scanf("%d", &item[i].quantity);
        
    }
}

void sort(struct items n[50], int size){
    int i, j;
    for(i = 0; i < size; i++ ){
       for(j = i + 1; j < size; j++){
            if(n[i].quantity > n[j].quantity){
                struct items temp = n[j];
                n[j] = n[i];
                n[i] = temp;
            }
       }
   }
}

void disp(struct items item[50], int size){
   for(int i = 0; i < size; i++){
        printf("%s\t%d\n", item[i].name, item[i].quantity);
    }
}

int main() {
    struct items item[50];
    int size;
    scanf("%d", &size);
    
    
    input(item, size);
    
    sort(item, size);
    
    disp(item, size);
    

    return 0;
}