#include <stdio.h>

#include "arr_data.h"
#include "get_arr_data.h"
#include "get_product.h"
#include "multi_before_and_after_negative.h"

void workload_multi_before_and_after_negative(int *arr, int size) {
    struct arr_data ad = get_arr_data(arr, size);
    int prod_before_first_ng = get_product(arr, 0, ad.first_negative_idx);
    int prod_after_last_ng = get_product(arr, ad.last_negative_idx, size);
    int result = prod_before_first_ng * prod_after_last_ng;
    printf("%d\n", result);
}
