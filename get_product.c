#include "get_product.h"

int get_product(int *arr, int start_idx_inc, int end_idx_inc) {
    int result = 1;
    for (int i = start_idx_inc; i < end_idx_inc; i++) {
        int el = arr[i];
        result *= el;
    }
    return result;
}