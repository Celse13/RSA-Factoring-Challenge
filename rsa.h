#ifndef RSA_FACTOR_H
#define RSA_FACTOR_H
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

typedef long int rsa_num;
rsa_num greatest_divisor(rsa_num a, rsa_num b);
rsa_num rsa_factorizer(rsa_num num);

#endif
