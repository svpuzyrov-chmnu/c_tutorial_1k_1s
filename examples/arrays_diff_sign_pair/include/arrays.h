#pragma once

#define SIGN(x) ((x) < 0 ? -1 : (x) > 0 ? 1 : 0)

int count_diff_sign_pair(int a[], int size);

void print_array(int a[], int size);