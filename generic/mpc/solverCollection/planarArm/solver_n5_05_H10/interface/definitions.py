import numpy
import ctypes

name = "solver_n5_05_H10"
requires_callback = True
lib = "lib/libsolver_n5_05_H10.so"
lib_static = "lib/libsolver_n5_05_H10.a"
c_header = "include/solver_n5_05_H10.h"

# Parameter             | Type    | Scalar type      | Ctypes type    | Numpy type   | Shape     | Len
params = \
[("x0"                  , "dense" , ""               , ctypes.c_double, numpy.float64, (160,   1),  160),
 ("xinit"               , "dense" , ""               , ctypes.c_double, numpy.float64, ( 10,   1),   10),
 ("all_parameters"      , "dense" , ""               , ctypes.c_double, numpy.float64, (410,   1),  410)]

# Output                | Type    | Scalar type      | Ctypes type    | Numpy type   | Shape     | Len
outputs = \
[("x01"                 , ""      , ""               , ctypes.c_double, numpy.float64,     ( 16,),   16),
 ("x02"                 , ""      , ""               , ctypes.c_double, numpy.float64,     ( 16,),   16),
 ("x03"                 , ""      , ""               , ctypes.c_double, numpy.float64,     ( 16,),   16),
 ("x04"                 , ""      , ""               , ctypes.c_double, numpy.float64,     ( 16,),   16),
 ("x05"                 , ""      , ""               , ctypes.c_double, numpy.float64,     ( 16,),   16),
 ("x06"                 , ""      , ""               , ctypes.c_double, numpy.float64,     ( 16,),   16),
 ("x07"                 , ""      , ""               , ctypes.c_double, numpy.float64,     ( 16,),   16),
 ("x08"                 , ""      , ""               , ctypes.c_double, numpy.float64,     ( 16,),   16),
 ("x09"                 , ""      , ""               , ctypes.c_double, numpy.float64,     ( 16,),   16),
 ("x10"                 , ""      , ""               , ctypes.c_double, numpy.float64,     ( 16,),   16)]

# Info Struct Fields
info = \
[('it', ctypes.c_int),
('it2opt', ctypes.c_int),
('res_eq', ctypes.c_double),
('res_ineq', ctypes.c_double),
('rsnorm', ctypes.c_double),
('rcompnorm', ctypes.c_double),
('pobj', ctypes.c_double),
('dobj', ctypes.c_double),
('dgap', ctypes.c_double),
('rdgap', ctypes.c_double),
('mu', ctypes.c_double),
('mu_aff', ctypes.c_double),
('sigma', ctypes.c_double),
('lsit_aff', ctypes.c_int),
('lsit_cc', ctypes.c_int),
('step_aff', ctypes.c_double),
('step_cc', ctypes.c_double),
('solvetime', ctypes.c_double),
('fevalstime', ctypes.c_double)
]