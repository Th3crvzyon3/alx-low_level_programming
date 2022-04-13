#include "3-calc.h"
/**
 * the function returns a pointer to the function that corresponds to the operator given as a parameter.
 * get_op_func("+") should return a pointer to the function op_add
 */
typedef struct op
{
op_t ops[] = {
    {"+", op_add},
    {"-", op_sub},
    {"*", op_mul},
    {"/", op_div},
    {"%", op_mod},
    {NULL, NULL}
};
int (*get_op_func(char *s))(int, int);
int i;
};

