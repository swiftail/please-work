#include "index_first_negative.h"

int workload_idx_first_ng(int *arr, int size) {
    int first_idx = -1;
    for (int i = 0; i < size; i++) {
        int e = arr[i];
        if (e < 0) {
            if (first_idx == -1) {
                return i;
            }
        }
    }
    return 0;
}
