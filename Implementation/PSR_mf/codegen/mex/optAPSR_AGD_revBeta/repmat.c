/*
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_AGD_revBeta.h"
#include "repmat.h"
#include "eye.h"
#include "optAPSR_AGD_revBeta_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "optAPSR_AGD_revBeta_mexutil.h"
#include "optAPSR_AGD_revBeta_data.h"

/* Variable Definitions */
static emlrtRSInfo jb_emlrtRSI = { 12, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo kb_emlrtRSI = { 40, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo lb_emlrtRSI = { 47, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo ub_emlrtRSI = { 42, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo vb_emlrtRSI = { 45, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRTEInfo d_emlrtRTEI = { 24, 5, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtMCInfo j_emlrtMCI = { 24, 5, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRTEInfo y_emlrtRTEI = { 30, 1, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo pd_emlrtRSI = { 24, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

/* Function Definitions */
void b_repmat(const emlrtStack *sp, const emxArray_real_T *a, real_T varargin_1,
              emxArray_real_T *b)
{
  boolean_T b_varargin_1;
  const mxArray *y;
  static const int32_T iv21[2] = { 1, 28 };

  const mxArray *m5;
  char_T cv16[28];
  int32_T i;
  static const char_T cv17[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  real_T c_varargin_1;
  const mxArray *d_y;
  static const int32_T iv22[2] = { 1, 21 };

  char_T cv18[21];
  static const char_T cv19[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  const mxArray *e_y;
  static const int32_T iv23[2] = { 1, 15 };

  char_T cv20[15];
  static const char_T cv21[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
    'a', 'x', 's', 'i', 'z', 'e' };

  boolean_T overflow;
  int32_T ibmat;
  boolean_T b5;
  int32_T itilerow;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &jb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  if (varargin_1 != varargin_1) {
    b_varargin_1 = false;
  } else {
    b_varargin_1 = true;
  }

  if (b_varargin_1) {
  } else {
    emlrtAssertMATLABThread(&st, &e_emlrtRTEI);
    y = NULL;
    m5 = emlrtCreateCharArray(2, iv21);
    for (i = 0; i < 28; i++) {
      cv16[i] = cv17[i];
    }

    emlrtInitCharArrayR2013a(&st, 28, m5, cv16);
    emlrtAssign(&y, m5);
    b_y = NULL;
    m5 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m5) = MIN_int32_T;
    emlrtAssign(&b_y, m5);
    c_y = NULL;
    m5 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m5) = MAX_int32_T;
    emlrtAssign(&c_y, m5);
    b_st.site = &nd_emlrtRSI;
    c_st.site = &be_emlrtRSI;
    error(&b_st, c_message(&c_st, y, b_y, c_y, &k_emlrtMCI), &l_emlrtMCI);
  }

  if (varargin_1 <= 0.0) {
    c_varargin_1 = 0.0;
  } else {
    c_varargin_1 = varargin_1;
  }

  if (2.147483647E+9 >= c_varargin_1) {
  } else {
    emlrtAssertMATLABThread(&st, &g_emlrtRTEI);
    d_y = NULL;
    m5 = emlrtCreateCharArray(2, iv22);
    for (i = 0; i < 21; i++) {
      cv18[i] = cv19[i];
    }

    emlrtInitCharArrayR2013a(&st, 21, m5, cv18);
    emlrtAssign(&d_y, m5);
    b_st.site = &jd_emlrtRSI;
    c_st.site = &ud_emlrtRSI;
    error(&b_st, b_message(&c_st, d_y, &n_emlrtMCI), &o_emlrtMCI);
  }

  i = a->size[1];
  if (i == a->size[1]) {
  } else {
    emlrtAssertMATLABThread(sp, &d_emlrtRTEI);
    e_y = NULL;
    m5 = emlrtCreateCharArray(2, iv23);
    for (i = 0; i < 15; i++) {
      cv20[i] = cv21[i];
    }

    emlrtInitCharArrayR2013a(sp, 15, m5, cv20);
    emlrtAssign(&e_y, m5);
    st.site = &pd_emlrtRSI;
    error(&st, e_y, &j_emlrtMCI);
  }

  i = b->size[0] * b->size[1];
  b->size[0] = (int32_T)varargin_1;
  b->size[1] = a->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b, i, (int32_T)sizeof(real_T),
                    &y_emlrtRTEI);
  i = a->size[1];
  if (((int32_T)varargin_1 == 0) || (i == 0)) {
  } else {
    st.site = &ub_emlrtRSI;
    if (1 > a->size[1]) {
      overflow = false;
    } else {
      overflow = (a->size[1] > 2147483646);
    }

    if (overflow) {
      b_st.site = &n_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (i = 0; i + 1 <= a->size[1]; i++) {
      ibmat = i * (int32_T)varargin_1;
      st.site = &vb_emlrtRSI;
      if (1 > (int32_T)varargin_1) {
        b5 = false;
      } else {
        b5 = ((int32_T)varargin_1 > 2147483646);
      }

      if (b5) {
        b_st.site = &n_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (itilerow = 1; itilerow <= (int32_T)varargin_1; itilerow++) {
        b->data[(ibmat + itilerow) - 1] = a->data[i];
      }
    }
  }
}

void repmat(const emlrtStack *sp, const emxArray_real_T *a, real_T varargin_2,
            emxArray_real_T *b)
{
  boolean_T b_varargin_2;
  const mxArray *y;
  static const int32_T iv19[2] = { 1, 28 };

  const mxArray *m3;
  char_T cv12[28];
  int32_T i;
  static const char_T cv13[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  static const int32_T iv20[2] = { 1, 15 };

  char_T cv14[15];
  static const char_T cv15[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
    'a', 'x', 's', 'i', 'z', 'e' };

  boolean_T b2;
  int32_T jtilecol;
  int32_T ibtile;
  boolean_T b3;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &jb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  if (varargin_2 != varargin_2) {
    b_varargin_2 = false;
  } else {
    b_varargin_2 = true;
  }

  if (b_varargin_2) {
  } else {
    emlrtAssertMATLABThread(&st, &e_emlrtRTEI);
    y = NULL;
    m3 = emlrtCreateCharArray(2, iv19);
    for (i = 0; i < 28; i++) {
      cv12[i] = cv13[i];
    }

    emlrtInitCharArrayR2013a(&st, 28, m3, cv12);
    emlrtAssign(&y, m3);
    b_y = NULL;
    m3 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m3) = MIN_int32_T;
    emlrtAssign(&b_y, m3);
    c_y = NULL;
    m3 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m3) = MAX_int32_T;
    emlrtAssign(&c_y, m3);
    b_st.site = &nd_emlrtRSI;
    c_st.site = &be_emlrtRSI;
    error(&b_st, c_message(&c_st, y, b_y, c_y, &k_emlrtMCI), &l_emlrtMCI);
  }

  i = a->size[0];
  if (i == a->size[0]) {
  } else {
    emlrtAssertMATLABThread(sp, &d_emlrtRTEI);
    d_y = NULL;
    m3 = emlrtCreateCharArray(2, iv20);
    for (i = 0; i < 15; i++) {
      cv14[i] = cv15[i];
    }

    emlrtInitCharArrayR2013a(sp, 15, m3, cv14);
    emlrtAssign(&d_y, m3);
    st.site = &pd_emlrtRSI;
    error(&st, d_y, &j_emlrtMCI);
  }

  i = b->size[0] * b->size[1];
  b->size[0] = a->size[0];
  b->size[1] = (int32_T)varargin_2;
  emxEnsureCapacity(sp, (emxArray__common *)b, i, (int32_T)sizeof(real_T),
                    &y_emlrtRTEI);
  i = a->size[0];
  if ((i == 0) || ((int32_T)varargin_2 == 0)) {
  } else {
    i = a->size[0];
    st.site = &kb_emlrtRSI;
    if (1 > (int32_T)varargin_2) {
      b2 = false;
    } else {
      b2 = ((int32_T)varargin_2 > 2147483646);
    }

    if (b2) {
      b_st.site = &n_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (jtilecol = 1; jtilecol <= (int32_T)varargin_2; jtilecol++) {
      ibtile = (jtilecol - 1) * i;
      st.site = &lb_emlrtRSI;
      if (1 > i) {
        b3 = false;
      } else {
        b3 = (i > 2147483646);
      }

      if (b3) {
        b_st.site = &n_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (k = 0; k + 1 <= i; k++) {
        b->data[ibtile + k] = a->data[k];
      }
    }
  }
}

/* End of code generation (repmat.c) */
