#include "index_first_negative.h"
#include "index_last_negative.h"
#include "get_product.h"
#include "multi_between_negative.h"

int workload_multi_between_negative(int *arr, int size) {
    int first_negative_idx = workload_idx_first_ng(arr, size);
    int last_negative_idx = workload_idx_last_ng(arr, size);
    int result = get_product(arr, first_negative_idx, last_negative_idx);
    return result;
}