#include <stdio.h>

void bubble_sort (int a[], int size);

int main (void) {
    int array[10] = {1000,5000, 2000, 20000, 100000, 50000};
    int i = 0;

    printf ("sebelum:\n");
    for (i = 0; i < 6; i++) printf ("%d ", array[i]);
    printf("\n");

    bubble_sort(array, 6);

    printf ("sesudah:\n");
    for (i = 0; i < 6; i++) printf ("%d ", array[i]);
    printf("\n");

    return 0;
}

void bubble_sort (int a[], int size){
    int switched = 1;
    int hold = 0;
    int i = 0;
    int j = 0;

    size -= 1;

    for (i = 0; i < size && switched; i++){
        switched = 0;
        for (j = 0; j < size - i; j++)
            if (a[j] > a[j+1]){
                switched = 1;
                hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
    }
}