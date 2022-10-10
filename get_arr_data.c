#include "get_arr_data.h"

struct arr_data get_arr_data(int *arr, int size) {
    int first_idx = -1;
    int last_idx = -1;
    for (int i = 0; i < size; i++) {
        int e = arr[i];
        if (e < 0) {
            if (first_idx == -1) {
                first_idx = i;
            }
            last_idx = i;
        }
    }
    struct arr_data r;
    r.first_negative_idx = first_idx;
    r.last_negative_idx = last_idx;
    return r;
}