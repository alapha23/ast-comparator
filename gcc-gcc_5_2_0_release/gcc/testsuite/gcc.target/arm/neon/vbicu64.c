/* Test the `vbicu64' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O2" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

uint64x1_t out_uint64x1_t;
uint64x1_t arg0_uint64x1_t;
uint64x1_t arg1_uint64x1_t;
void test_vbicu64 (void)
{

  out_uint64x1_t = vbic_u64 (arg0_uint64x1_t, arg1_uint64x1_t);
}

/* { dg-final { cleanup-saved-temps } } */
