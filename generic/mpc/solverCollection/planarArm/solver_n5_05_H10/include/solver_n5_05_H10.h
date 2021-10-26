/*
solver_n5_05_H10 : A fast customized optimization solver.

Copyright (C) 2013-2021 EMBOTECH AG [info@embotech.com]. All rights reserved.


This software is intended for simulation and testing purposes only. 
Use of this software for any commercial purpose is prohibited.

This program is distributed in the hope that it will be useful.
EMBOTECH makes NO WARRANTIES with respect to the use of the software 
without even the implied warranty of MERCHANTABILITY or FITNESS FOR A 
PARTICULAR PURPOSE. 

EMBOTECH shall not have any liability for any damage arising from the use
of the software.

This Agreement shall exclusively be governed by and interpreted in 
accordance with the laws of Switzerland, excluding its principles
of conflict of laws. The Courts of Zurich-City shall have exclusive 
jurisdiction in case of any dispute.

*/

/* Generated by FORCESPRO v5.0.0 on Thursday, October 14, 2021 at 12:00:18 PM */
#ifndef solver_n5_05_H10_H
#define solver_n5_05_H10_H

#ifndef SOLVER_STDIO_H
#define SOLVER_STDIO_H
#include <stdio.h>
#endif


#ifndef SOLVER_STANDARD_TYPES
#define SOLVER_STANDARD_TYPES

typedef signed char solver_int8_signed;
typedef unsigned char solver_int8_unsigned;
typedef char solver_int8_default;
typedef signed short int solver_int16_signed;
typedef unsigned short int solver_int16_unsigned;
typedef short int solver_int16_default;
typedef signed int solver_int32_signed;
typedef unsigned int solver_int32_unsigned;
typedef int solver_int32_default;
typedef signed long long int solver_int64_signed;
typedef unsigned long long int solver_int64_unsigned;
typedef long long int solver_int64_default;

#endif


/* DATA TYPE ------------------------------------------------------------*/
typedef double solver_n5_05_H10_float;
typedef double solver_n5_05_H10_callback_float;

typedef double solver_n5_05_H10interface_float;

/* SOLVER SETTINGS ------------------------------------------------------*/

/* MISRA-C compliance */
#ifndef MISRA_C_solver_n5_05_H10
#define MISRA_C_solver_n5_05_H10 (0)
#endif

/* restrict code */
#ifndef RESTRICT_CODE_solver_n5_05_H10
#define RESTRICT_CODE_solver_n5_05_H10 (0)
#endif

/* print level */
#ifndef SET_PRINTLEVEL_solver_n5_05_H10
#define SET_PRINTLEVEL_solver_n5_05_H10    (0)
#endif

/* timing */
#ifndef SET_TIMING_solver_n5_05_H10
#define SET_TIMING_solver_n5_05_H10    (1)
#endif

/* Numeric Warnings */
/* #define PRINTNUMERICALWARNINGS */

/* maximum number of iterations  */
#define SET_MAXIT_solver_n5_05_H10			(200)	

/* scaling factor of line search (FTB rule) */
#define SET_FLS_SCALE_solver_n5_05_H10		(solver_n5_05_H10_float)(0.99)      

/* maximum number of supported elements in the filter */
#define MAX_FILTER_SIZE_solver_n5_05_H10	(200) 

/* maximum number of supported elements in the filter */
#define MAX_SOC_IT_solver_n5_05_H10			(4) 

/* desired relative duality gap */
#define SET_ACC_RDGAP_solver_n5_05_H10		(solver_n5_05_H10_float)(0.0001)

/* desired maximum residual on equality constraints */
#define SET_ACC_RESEQ_solver_n5_05_H10		(solver_n5_05_H10_float)(1E-06)

/* desired maximum residual on inequality constraints */
#define SET_ACC_RESINEQ_solver_n5_05_H10	(solver_n5_05_H10_float)(1E-06)

/* desired maximum violation of complementarity */
#define SET_ACC_KKTCOMPL_solver_n5_05_H10	(solver_n5_05_H10_float)(1E-06)


/* SOLVER RETURN CODES----------------------------------------------------------*/
/* solver has converged within desired accuracy */
#define OPTIMAL_solver_n5_05_H10      (1)

/* maximum number of iterations has been reached */
#define MAXITREACHED_solver_n5_05_H10 (0)

/* solver has stopped due to a timeout */
#define TIMEOUT_solver_n5_05_H10   (2)

/* wrong number of inequalities error */
#define INVALID_NUM_INEQ_ERROR_solver_n5_05_H10  (-4)

/* factorization error */
#define FACTORIZATION_ERROR_solver_n5_05_H10   (-5)

/* NaN encountered in function evaluations */
#define BADFUNCEVAL_solver_n5_05_H10  (-6)

/* no progress in method possible */
#define NOPROGRESS_solver_n5_05_H10   (-7)

/* regularization error */
#define REGULARIZATION_ERROR_solver_n5_05_H10   (-9)

/* invalid values in parameters */
#define PARAM_VALUE_ERROR_solver_n5_05_H10   (-11)

/* too small timeout given */
#define INVALID_TIMEOUT_solver_n5_05_H10   (-12)

/* licensing error - solver not valid on this machine */
#define LICENSE_ERROR_solver_n5_05_H10  (-100)

/* INTEGRATORS RETURN CODE ------------*/
/* Integrator ran successfully */
#define INTEGRATOR_SUCCESS (11)
/* Number of steps set by user exceeds maximum number of steps allowed */
#define INTEGRATOR_MAXSTEPS_EXCEEDED (12)





/* PARAMETERS -----------------------------------------------------------*/
/* fill this with data before calling the solver! */
typedef struct
{
    /* vector of size 160 */
    solver_n5_05_H10_float x0[160];

    /* vector of size 10 */
    solver_n5_05_H10_float xinit[10];

    /* vector of size 410 */
    solver_n5_05_H10_float all_parameters[410];


} solver_n5_05_H10_params;


/* OUTPUTS --------------------------------------------------------------*/
/* the desired variables are put here by the solver */
typedef struct
{
    /* vector of size 16 */
    solver_n5_05_H10_float x01[16];

    /* vector of size 16 */
    solver_n5_05_H10_float x02[16];

    /* vector of size 16 */
    solver_n5_05_H10_float x03[16];

    /* vector of size 16 */
    solver_n5_05_H10_float x04[16];

    /* vector of size 16 */
    solver_n5_05_H10_float x05[16];

    /* vector of size 16 */
    solver_n5_05_H10_float x06[16];

    /* vector of size 16 */
    solver_n5_05_H10_float x07[16];

    /* vector of size 16 */
    solver_n5_05_H10_float x08[16];

    /* vector of size 16 */
    solver_n5_05_H10_float x09[16];

    /* vector of size 16 */
    solver_n5_05_H10_float x10[16];


} solver_n5_05_H10_output;


/* SOLVER INFO ----------------------------------------------------------*/
/* diagnostic data from last interior point step */
typedef struct
{
    /* iteration number */
    solver_int32_default it;

	/* number of iterations needed to optimality (branch-and-bound) */
	solver_int32_default it2opt;
	
    /* inf-norm of equality constraint residuals */
    solver_n5_05_H10_float res_eq;
	
    /* inf-norm of inequality constraint residuals */
    solver_n5_05_H10_float res_ineq;

	/* norm of stationarity condition */
    solver_n5_05_H10_float rsnorm;

	/* max of all complementarity violations */
    solver_n5_05_H10_float rcompnorm;

    /* primal objective */
    solver_n5_05_H10_float pobj;	
	
    /* dual objective */
    solver_n5_05_H10_float dobj;	

    /* duality gap := pobj - dobj */
    solver_n5_05_H10_float dgap;		
	
    /* relative duality gap := |dgap / pobj | */
    solver_n5_05_H10_float rdgap;		

    /* duality measure */
    solver_n5_05_H10_float mu;

	/* duality measure (after affine step) */
    solver_n5_05_H10_float mu_aff;
	
    /* centering parameter */
    solver_n5_05_H10_float sigma;
	
    /* number of backtracking line search steps (affine direction) */
    solver_int32_default lsit_aff;
    
    /* number of backtracking line search steps (combined direction) */
    solver_int32_default lsit_cc;
    
    /* step size (affine direction) */
    solver_n5_05_H10_float step_aff;
    
    /* step size (combined direction) */
    solver_n5_05_H10_float step_cc;    

	/* solvertime */
	solver_n5_05_H10_float solvetime;   

	/* time spent in function evaluations */
	solver_n5_05_H10_float fevalstime;  


} solver_n5_05_H10_info;









/* SOLVER FUNCTION DEFINITION -------------------------------------------*/
/* Time of Solver Generation: (UTC) Thursday, October 14, 2021 12:00:19 PM */
/* User License expires on: (UTC) Friday, March 18, 2022 10:00:00 PM (approx.) (at the time of code generation) */
/* Solver Static License expires on: (UTC) Friday, March 18, 2022 10:00:00 PM (approx.) */
/* Solver Generation Request Id: 9c63124e-1dc1-4f60-b561-3f2bccd64225 */
/* examine exitflag before using the result! */
#ifdef __cplusplus
extern "C" {
#endif		

typedef void (*solver_n5_05_H10_extfunc)(solver_n5_05_H10_float* x, solver_n5_05_H10_float* y, solver_n5_05_H10_float* lambda, solver_n5_05_H10_float* params, solver_n5_05_H10_float* pobj, solver_n5_05_H10_float* g, solver_n5_05_H10_float* c, solver_n5_05_H10_float* Jeq, solver_n5_05_H10_float* h, solver_n5_05_H10_float* Jineq, solver_n5_05_H10_float* H, solver_int32_default stage, solver_int32_default iterations, solver_int32_default threadID);

extern solver_int32_default solver_n5_05_H10_solve(solver_n5_05_H10_params *params, solver_n5_05_H10_output *output, solver_n5_05_H10_info *info, FILE *fs, solver_n5_05_H10_extfunc evalextfunctions_solver_n5_05_H10);	

;





//Integrator declarations
typedef const solver_int32_default* (*cDynJacXsparsity)( solver_int32_default i );
typedef const solver_int32_default* (*cDynJacUsparsity)( solver_int32_default i );
typedef solver_int32_default (*fConDynamics)( const solver_n5_05_H10_callback_float** arg, solver_n5_05_H10_callback_float** res, solver_int32_default* iw, solver_n5_05_H10_callback_float* w, solver_int32_default mem );
typedef solver_int32_default (*fConJacStateDynamics)( const solver_n5_05_H10_callback_float** arg, solver_n5_05_H10_callback_float** res, solver_int32_default* iw, solver_n5_05_H10_callback_float* w, solver_int32_default mem );
typedef solver_int32_default (*fConJacInputDynamics)( const solver_n5_05_H10_callback_float** arg, solver_n5_05_H10_callback_float** res, solver_int32_default* iw, solver_n5_05_H10_callback_float* w, solver_int32_default mem );

void solver_n5_05_H10_rktwo_0(const solver_n5_05_H10_callback_float * const z, const solver_n5_05_H10_callback_float * const p, solver_n5_05_H10_float * const c, solver_n5_05_H10_float * const jacc,
            fConDynamics cDyn0rd, fConDynamics cDyn, const solver_int32_default threadID);






#ifdef __cplusplus
}
#endif

#endif
