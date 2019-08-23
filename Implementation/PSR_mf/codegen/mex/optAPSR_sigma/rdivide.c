/*
 * rdivide.c
 *
 * Code generation for function 'rdivide'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_sigma.h"
#include "rdivide.h"
#include "optAPSR_sigma_emxutil.h"
#include "optAPSR_sigma_mexutil.h"

/* Variable Definitions */
static emlrtRTEInfo h_emlrtRTEI = { 14, 5, "rdivide",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtMCInfo q_emlrtMCI = { 14, 5, "rdivide",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtMCInfo r_emlrtMCI = { 13, 15, "rdivide",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtRTEInfo mb_emlrtRTEI = { 1, 14, "rdivide",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtRSInfo nd_emlrtRSI = { 13, "rdivide",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtRSInfo xd_emlrtRSI = { 14, "rdivide",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/rdivide.m" };

/* Function Definitions */
void rdivide(const emlrtStack *sp, const emxArray_real_T *x, const
             emxArray_real_T *y, emxArray_real_T *z)
{
  uint32_T varargin_1[2];
  int32_T i;
  uint32_T varargin_2[2];
  boolean_T p;
  boolean_T b_p;
  boolean_T exitg1;
  const mxArray *b_y;
  static const int32_T iv35[2] = { 1, 15 };

  const mxArray *m7;
  char_T cv34[15];
  static const char_T cv35[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i',
    'm', 'a', 'g', 'r', 'e', 'e' };

  int32_T loop_ub;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  for (i = 0; i < 2; i++) {
    varargin_1[i] = (uint32_T)x->size[i];
  }

  for (i = 0; i < 2; i++) {
    varargin_2[i] = (uint32_T)y->size[i];
  }

  p = false;
  b_p = true;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 2)) {
    if (!(varargin_1[i] == varargin_2[i])) {
      b_p = false;
      exitg1 = true;
    } else {
      i++;
    }
  }

  if (!b_p) {
  } else {
    p = true;
  }

  if (p) {
  } else {
    emlrtAssertMATLABThread(sp, &h_emlrtRTEI);
    b_y = NULL;
    m7 = emlrtCreateCharArray(2, iv35);
    for (i = 0; i < 15; i++) {
      cv34[i] = cv35[i];
    }

    emlrtInitCharArrayR2013a(sp, 15, m7, cv34);
    emlrtAssign(&b_y, m7);
    st.site = &nd_emlrtRSI;
    b_st.site = &xd_emlrtRSI;
    error(&st, b_message(&b_st, b_y, &q_emlrtMCI), &r_emlrtMCI);
  }

  i = z->size[0] * z->size[1];
  z->size[0] = x->size[0];
  z->size[1] = x->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)z, i, (int32_T)sizeof(real_T),
                    &mb_emlrtRTEI);
  loop_ub = x->size[0] * x->size[1];
  for (i = 0; i < loop_ub; i++) {
    z->data[i] = x->data[i] / y->data[i];
  }
}

/* End of code generation (rdivide.c) */
