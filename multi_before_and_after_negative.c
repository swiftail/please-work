#include "index_first_negative.h"
#include "index_last_negative.h"
#include "get_product.h"
#include "multi_before_and_after_negative.h"

int workload_multi_before_and_after_negative(int *arr, int size) {
    int first_negative_idx = workload_idx_first_ng(arr, size);
    int last_negative_idx = workload_idx_last_ng(arr, size);
    int prod_before_first_ng = get_product(arr, 0, first_negative_idx);
    int prod_after_last_ng = get_product(arr, last_negative_idx, size);
    int result = prod_before_first_ng * prod_after_last_ng;
    return result;
}
