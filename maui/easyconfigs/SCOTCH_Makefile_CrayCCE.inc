EXE		=
LIB		= .a
OBJ		= .o

MAKE		= gmake
AR		= ar
ARFLAGS		= -ruv
CAT		= cat
CCS		= cc
CCP		= cc
CCD		= cc
CFLAGS		= -fPIC -O3 -DCOMMON_PTHREAD -DCOMMON_RANDOM_FIXED_SEED -DSCOTCH_PTHREAD -DSCOTCH_RENAME 
CLIBFLAGS	=
LDFLAGS		= -lm -lrt
CP		= cp
LEX		= flex -Pscotchyy -olex.yy.c
LN		= ln
MKDIR		= mkdir
MV		= mv
RANLIB		= ranlib
YACC		= bison -pscotchyy -y -b y

