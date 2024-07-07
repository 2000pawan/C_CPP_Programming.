#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <limits.h>
int main(void) {
    printf("Size and Range of C data types:\n\n");
    printf("%-20s %-20s %-20s\n", "Type", "Bytes", "Range");
    printf("------------------------------------------------------\n");
    printf("%-20s %lu %-20d to %-20d\n", "char", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("%-20s %lu %-20d to %-20d\n", "int8_t", sizeof(int8_t), INT8_MIN, INT8_MAX);
    printf("%-20s %lu %-20d to %-20d\n", "unsigned char", sizeof(unsigned char), 0, UCHAR_MAX);
    printf("%-20s %lu %-20d to %-20d\n", "uint8_t", sizeof(uint8_t), 0, UINT8_MAX);
    printf("%-20s %lu %-20d to %-20d\n", "short", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("%-20s %lu %-20d to %-20d\n", "int16_t", sizeof(int16_t), INT16_MIN, INT16_MAX);
    printf("%-20s %lu %-20d to %-20d\n", "uint16_t", sizeof(uint16_t), 0, UINT16_MAX);
    printf("%-20s %lu %-20d to %-20d\n", "int", sizeof(int), INT_MIN, INT_MAX);
    printf("%-20s %lu %-20u to %-20u\n", "unsigned", sizeof(unsigned), 0, UINT_MAX);
    printf("%-20s %lu %-20ld to %-20ld\n", "long", sizeof(long), LONG_MIN, LONG_MAX);
    printf("%-20s %lu %-20lu to %-20lu\n", "unsigned long", sizeof(unsigned long), 0, ULONG_MAX);
    printf("%-20s %lu %-20d to %-20d\n", "int32_t", sizeof(int32_t), INT32_MIN, INT32_MAX);
    printf("%-20s %lu %-20u to %-20u\n", "uint32_t", sizeof(uint32_t), 0, UINT32_MAX);
    printf("%-20s %lu %-20lld to %-20lld\n", "long long", sizeof(long long), LLONG_MIN, LLONG_MAX);
    printf("%-20s %lu %-20llu to %-20llu\n", "int64_t", sizeof(int64_t), 0LL, ULLONG_MAX);
    printf("%-20s %lu %-20lld to %-20lld\n", "int64_t", sizeof(int64_t), LLONG_MIN, LLONG_MAX);
    printf("%-20s %lu %-20llu to %-20llu\n", "uint64_t", sizeof(uint64_t), 0ULL, ULLONG_MAX);
    printf("\n");
    return 0;
}
