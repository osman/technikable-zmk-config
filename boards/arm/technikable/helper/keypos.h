#pragma once

/*    0  1  2  3  4 | 5   6|  7  8  9 10 11   ||   LT4 LT3 LT2 LT1 LT0 |DLT  DRT| RT0 RT1 RT2 RT3 RT4   */
/*   12 13 14 15 16 |17  18| 19 20 21 22 23   ||   LM4 LM3 LM2 LM1 LM0 |DLM  DRM| RM0 RM1 RM2 RM3 RM4   */
/*   24 25 26 27 28 |29  30| 31 32 33 34 35   ||   LB4 LB3 LB2 LB1 LB0 |DLB  DRB| RB0 RB1 RB2 RB3 RB4   */
/*         36 37 38  __39__  40 41 42         ||           LH2 LH1 LH0  ___BMH___ RH0 RH1 RH2           */

// Top Row
#define LT4  0
#define LT3  1
#define LT2  2
#define LT1  3
#define LT0  4
#define DLT  5
#define DRT  6
#define RT0  7
#define RT1  8
#define RT2  9
#define RT3 10
#define RT4 11

// Middle Row
#define LM4 12
#define LM3 13
#define LM2 14
#define LM1 15
#define LM0 16
#define DLM 17
#define DRM 18
#define RM0 19
#define RM1 20
#define RM2 21
#define RM3 22
#define RM4 23

// Bottom Row
#define LB4 24
#define LB3 25
#define LB2 26
#define LB1 27
#define LB0 28
#define DLB 29
#define DRB 30
#define RB0 31
#define RB1 32
#define RB2 33
#define RB3 34
#define RB4 35

// Thumb Keys
#define LH0 36
#define LH1 37
#define LH2 38
#define BMH 39
#define RH0 40
#define RH1 41
#define RH2 42