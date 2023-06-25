#include <stdio.h>
#define ARR_MAX 1000
void sort_section(int *ptr, int *qtr);
int main() {
  int N, a, b;
  scanf("%d%d%d", &N, &a, &b);
  int arr[ARR_MAX] = {0};
  for (int i = 0; i < N; i++) {
    scanf("%d", arr + i);
  }
  sort_section(&arr[a], &arr[b]);
  for (int i = 0; i < N; i++) {
    printf("%d ", *(arr + i));
  }
}

void sort_section(int *ptr, int *qtr) {

    for(int* a=ptr; a<qtr; a++){
        for(int* b=ptr; b<qtr; b++) {
            if (*b > *(b + 1)) {
                int temp = *b;
                int temp2=*(b+1);
                *b = temp2;
                *(b + 1) = temp;
            }
            printf("%d ",*ptr);
        }
        printf("\n");
    }
}
