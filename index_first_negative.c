#include <stdio.h>

#include "arr_data.h"
#include "get_arr_data.h"
#include "index_first_negative.h"

void index_first_negative(int *arr, int size) {
    struct arr_data result = get_arr_data(arr, size);
    printf("%d\n", result.first_negative_idx);
}
