#ifndef __MYlIB_H_
#define __MYlIB_H_

#include <cassert>
#include <cerrno>
#include <cfloat>
#include <climits>
#include <cstdalign>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <exception>
#include <initializer_list>
#include <limits>
#include <new>
#include <stdexcept>
#include <string>
#include <system_error>
#include <typeinfo>

#if __has_include(<string_view>)
#include <string_view>
#endif

#include <algorithm>
#include <array>
#include <cfenv>
#include <cmath>
#include <deque>
#include <forward_list>
#include <fstream>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <list>
#include <map>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <set>
#include <sstream>
#include <stack>
#include <streambuf>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#if __has_include(<filesystem>)
#include <filesystem>
#endif

#include <atomic>
#include <cinttypes>
#include <condition_variable>
#include <cstdio>
#include <filesystem>
#include <future>
#include <mutex>
#include <regex>
#include <shared_mutex>
#include <thread>

#include "cblas.h"
#include "lapacke.h"

// void printmat_d(int n, double* A);
// void printmat_i(int n, int* A);
// void fprintmat_d(FILE* file, int n, double* A);
// void fprintmat_i(FILE* file, int n, int* A);
// void printvec_d(int n, double* B);
// void printvec_i(int n, int* B);
// void printvec_i(int n, std::vector<int> B);
// void fprintvec_d(FILE* file, int n, double* B);
// void fprintvec_i(FILE* file, int n, int* B);
// void print2dvec_d(int n, double** C);
// void fprint2dvec_d(FILE* file, int n, double** C);
// void calc_ab(FILE* file, int n, double* A, double* eigenv);
// void gso(int n, int k, double** u);
// void sdz(int n, double* v);
// void make_mat(int& n, int& N, int* col, int* row, double* val, double* A);
void Initiailize_vec(int n, double* vec);
void Initiailize_vec(int n, int* vec);
void input_data(std::string filename, int elements, int* row, int* col,
                double* val);
void get_matrix_size(std::string filename, int& n, int& elements);
#endif