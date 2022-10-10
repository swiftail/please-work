#include <stdio.h>

#include "arr_data.h"
#include "get_arr_data.h"
#include "get_product.h"
#include "multi_between_negative.h"

void workload_multi_between_negative(int *arr, int size) {
    struct arr_data ad = get_arr_data(arr, size);
    int result = get_product(arr, ad.first_negative_idx, ad.last_negative_idx);
    printf("%d\n", result);
}