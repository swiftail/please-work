#include "index_last_negative.h"

int workload_idx_last_ng(int *arr, int size) {
    int last_idx = -1;
    for (int i = 0; i < size; i++) {
        int e = arr[i];
        if (e < 0) {
            last_idx = i;
        }
    }
    return last_idx;
}