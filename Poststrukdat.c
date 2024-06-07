#include<stdio.h>
#define MAXQUEUE

typedef struct{
    int count;
    int rear;
    int front;
    int item[MAXQUEUE];
}queue;
queue antrian;

void inisialisasi (queue *q){
    q->count=0;
    q->front=0;
    q->rear=0;
}

int isEmpty (queue *q){
    int hasil=0;
    if (q->count==0){
        hasil=1;
    }
    return hasil;
}

int isFull (queue *q){
    int hasil=0;
    if(q->count==MAXQUEUE){
        hasil=1;
    }
    return hasil;
}

void insert (queue *q, int data){
    if(isfull (&antrian)==1){
        printf("sudah penuh");
    } else{
        q->item[q->rear]=data;
        q->rear=(q->rear+1) % MAXQUEUE;
        ++(q->count);
    }

}

void hapus (queue *q){

}

void printqueue (queue *q){
    inisialisasi (&antrian);
    printf("isi array: \n");
    for(int i=(q->front);i<MAXQUEUE;i++){
        printf("%d \n", q->item[i]);
    return 0;
    }
}

int main (){
    inisialisasi(&antrian);
    printf("masukan 108\n");
    insert(&antrian, 108);
    printf("masukan 109\n");
    insert(&antrian, 109);
    printf("masukan 110\n");
    insert(&antrian, 110);
    printf("masukan 111\n");
    insert(&antrian, 111);
    printf("menghapus 108\n");
    insert(&hapus, 108);
    printf("menghapus 112\n");
    insert(&antrian, 112);
    print(&antrian);
}
