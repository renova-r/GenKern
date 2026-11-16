/*
init.c - registration of the native routines called via .C() from GenKern
*/

#include <R.h>
#include <Rinternals.h>
#include <R_ext/Rdynload.h>

void GenKernSec(double *x, int *lenx, double *xvals, double *hx,
                double *estimate, int *lenestimate, int *flag);

void GenKernSur(double *estimate, int *lenxest, int *lenyest,
                double *x, double *y, double *xvals, double *yvals,
                double *hx, double *hy, double *rho, double *rhosq,
                int *lenx);

void getlims(double *vals, double *limits, int *bins);

static R_NativePrimitiveArgType GenKernSec_t[] = {
    REALSXP, INTSXP, REALSXP, REALSXP, REALSXP, INTSXP, INTSXP
};

static R_NativePrimitiveArgType GenKernSur_t[] = {
    REALSXP, INTSXP, INTSXP, REALSXP, REALSXP, REALSXP, REALSXP,
    REALSXP, REALSXP, REALSXP, REALSXP, INTSXP
};

static R_NativePrimitiveArgType getlims_t[] = {
    REALSXP, REALSXP, INTSXP
};

static const R_CMethodDef CEntries[] = {
    {"GenKernSec", (DL_FUNC) &GenKernSec, 7, GenKernSec_t},
    {"GenKernSur", (DL_FUNC) &GenKernSur, 12, GenKernSur_t},
    {"getlims", (DL_FUNC) &getlims, 3, getlims_t},
    {NULL, NULL, 0, NULL}
};

void R_init_GenKern(DllInfo *dll)
{
    R_registerRoutines(dll, CEntries, NULL, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
