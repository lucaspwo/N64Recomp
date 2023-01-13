#include "../portultra/multilibultra.hpp"
#include "recomp.h"


extern "C" void __udivdi3_recomp(uint8_t * restrict rdram, recomp_context * restrict ctx) {
    uint64_t a = (ctx->r4 << 32) | (ctx->r5 << 0);
    uint64_t b = (ctx->r6 << 32) | (ctx->r7 << 0);
    uint64_t ret = a / b;

    ctx->r2 = (int32_t)(ret >> 32);
    ctx->r3 = (int32_t)(ret >> 0);
}

extern "C" void __divdi3_recomp(uint8_t * restrict rdram, recomp_context * restrict ctx) {
    int64_t a = (ctx->r4 << 32) | (ctx->r5 << 0);
    int64_t b = (ctx->r6 << 32) | (ctx->r7 << 0);
    int64_t ret = a / b;

    ctx->r2 = (int32_t)(ret >> 32);
    ctx->r3 = (int32_t)(ret >> 0);
}

extern "C" void __umoddi3_recomp(uint8_t * restrict rdram, recomp_context * restrict ctx) {
    uint64_t a = (ctx->r4 << 32) | (ctx->r5 << 0);
    uint64_t b = (ctx->r6 << 32) | (ctx->r7 << 0);
    uint64_t ret = a % b;

    ctx->r2 = (int32_t)(ret >> 32);
    ctx->r3 = (int32_t)(ret >> 0);
}

extern "C" void __ull_div_recomp(uint8_t * restrict rdram, recomp_context * restrict ctx) {
    uint64_t a = (ctx->r4 << 32) | (ctx->r5 << 0);
    uint64_t b = (ctx->r6 << 32) | (ctx->r7 << 0);
    uint64_t ret = a / b;

    ctx->r2 = (int32_t)(ret >> 32);
    ctx->r3 = (int32_t)(ret >> 0);
}

extern "C" void __ll_div_recomp(uint8_t * restrict rdram, recomp_context * restrict ctx) {
    int64_t a = (ctx->r4 << 32) | (ctx->r5 << 0);
    int64_t b = (ctx->r6 << 32) | (ctx->r7 << 0);
    int64_t ret = a / b;

    ctx->r2 = (int32_t)(ret >> 32);
    ctx->r3 = (int32_t)(ret >> 0);
}

extern "C" void __ll_mul_recomp(uint8_t * restrict rdram, recomp_context * restrict ctx) {
    uint64_t a = (ctx->r4 << 32) | (ctx->r5 << 0);
    uint64_t b = (ctx->r6 << 32) | (ctx->r7 << 0);
    uint64_t ret = a * b;

    ctx->r2 = (int32_t)(ret >> 32);
    ctx->r3 = (int32_t)(ret >> 0);
}

extern "C" void __ull_rem_recomp(uint8_t * restrict rdram, recomp_context * restrict ctx) {
    uint64_t a = (ctx->r4 << 32) | (ctx->r5 << 0);
    uint64_t b = (ctx->r6 << 32) | (ctx->r7 << 0);
    uint64_t ret = a % b;

    ctx->r2 = (int32_t)(ret >> 32);
    ctx->r3 = (int32_t)(ret >> 0);
}

extern "C" void __ull_to_d_recomp(uint8_t * restrict rdram, recomp_context * restrict ctx) {
    uint64_t a = (ctx->r4 << 32) | (ctx->r5 << 0);
    double ret = (double)a;

    ctx->f0.d = ret;
}

extern "C" void __ull_to_f_recomp(uint8_t * restrict rdram, recomp_context * restrict ctx) {
    uint64_t a = (ctx->r4 << 32) | (ctx->r5 << 0);
    float ret = (float)a;

    ctx->f0.fl = ret;
}