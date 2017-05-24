#ifndef FIXED_POINT_H
#define FIXED_POINT_H
/*
用32位int表示浮点数,格式为
正负符号位-15位整数-16位小数
*/
//15.16 q.p
//let x,y be fixed-ponit numbers
//n be integer
typedef int fixed_t;
#define FP_SHIFT_AMOUNT 16
#define FP_TO_INT(x) (( x + 2 << (FP_SHIFT_AMOUNT - 1) ) >> FP_SHIFT_AMOUNT)
//最近取整
#define INT_TO_FP(n) (n << FP_SHIFT_AMOUNT)
//#define FP_ADD(x,y) (x + y)
//#define FP_ADD_INT(x,n) (x + (n << FP_SHIFT_AMOUNT))
//#define FP_SUB(x,y) (x - y)
#define FP_SUB_INT(x,n) (x - (n << FP_SHIFT_AMOUNT))
#define FP_MUL(x,y) ( (((int64_t)x) * y) << FP_SHIFT_AMOUNT )
//#define FP_MUL_INT(x,n) (x * n)
#define FP_DIV(x,y) ( (((int64_t)x) >> FP_SHIFT_AMOUNT ) / y )
//#define FP_DIV_INT(x,n) (x / n)

#define DIV_TO_FP(x,y) ( (x << FP_SHIFT_AMOUNT ) / y )
//分数转15.16. 如 DIV_TO_FP(59,60)为59/60的以15.16格式存储的值.即59/60* 2**16

#endif