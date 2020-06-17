/*
Implementation based on http://www-igm.univ-mlv.fr/~lecroq/string/node8.html
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#define PATTERN_SIZE 4
#define STRING_SIZE (128*1024*1024)
#define CACHE_SIZE (256*1024)
//#define STRING_SIZE (1363568/3)
//#define STRING_SIZE (32411)

////////////////////////////////////////////////////////////////////////////////
// Test harness interface code.

struct bench_args_t {
  char pattern[PATTERN_SIZE];
  char input[STRING_SIZE];
  int32_t kmpNext[PATTERN_SIZE];
  int32_t n_matches[1];
};
