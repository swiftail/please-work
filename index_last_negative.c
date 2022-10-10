#include <stdio.h>

#include "arr_data.h"
#include "get_arr_data.h"
#include "index_last_negative.h"

void index_last_negative(int *arr, int size) {
    struct arr_data result = get_arr_data(arr, size);
    printf("%d\n", result.last_negative_idx);
}