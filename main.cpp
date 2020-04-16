#include "sorting.h"

void merge_sort(int *data, int start, int end);

int sorted[10];
int my_data[10];

int main(){
    int i = 0;

    for(i = 1; i < 11; i++){
        cout << "input " << i << " number: ";
        cin >> my_data[i-1];
    }

    merge_sort(my_data, 0, 9);
    
    for(i = 0; i < 10; i++){
        cout <<  sorted[i] << " ";
    }

    return 0;
}