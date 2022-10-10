#include "options.h"

#include <stdio.h>
#include "mode.h"

#include "index_first_negative.h"
#include "index_last_negative.h"
#include "multi_before_and_after_negative.h"
#include "multi_between_negative.h"

int main() {
    enum MODE mode;
    scanf("%d ", (int *) &mode);
    int arr_size = 0;
    int arr[OPTION_ARR_SIZE];

    while (1) {
        char maybe_newline;
        scanf("%d%c", &arr[arr_size], &maybe_newline);
        arr_size += 1;
        if (maybe_newline == '\n') {
            break;
        }
    }

    int result;
    switch (mode) {
        case MODE_IDX_FIRST_NG:
            result = workload_idx_first_ng(arr, arr_size);
            printf("%d", result);
            break;
        case MODE_IDX_LAST_NG:
            result = workload_idx_last_ng(arr, arr_size);
            printf("%d", result);
            break;
        case MODE_MULTI_BETWEEN_NEGATIVE:
            result = workload_multi_between_negative(arr, arr_size);
            printf("%d", result);
            break;
        case MODE_MULTI_BEFORE_AND_AFTER_NEGATIVE:
            result = workload_multi_before_and_after_negative(arr, arr_size);
            printf("%d", result);
            break;
        default:
            puts("Данные некорректны\n");
            break;
    }
}