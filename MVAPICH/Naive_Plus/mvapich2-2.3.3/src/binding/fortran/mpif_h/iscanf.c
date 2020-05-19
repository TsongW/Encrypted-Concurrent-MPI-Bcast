/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*  
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 * This file is automatically generated by buildiface 
 * DO NOT EDIT
 */
#include "mpi_fortimpl.h"


/* Begin MPI profiling block */
#if defined(USE_WEAK_SYMBOLS) && !defined(USE_ONLY_MPI_NAMES) 
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISCAN( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_ISCAN = PMPI_ISCAN
#pragma weak mpi_iscan__ = PMPI_ISCAN
#pragma weak mpi_iscan_ = PMPI_ISCAN
#pragma weak mpi_iscan = PMPI_ISCAN
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_ISCAN = pmpi_iscan__
#pragma weak mpi_iscan__ = pmpi_iscan__
#pragma weak mpi_iscan_ = pmpi_iscan__
#pragma weak mpi_iscan = pmpi_iscan__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_ISCAN = pmpi_iscan_
#pragma weak mpi_iscan__ = pmpi_iscan_
#pragma weak mpi_iscan_ = pmpi_iscan_
#pragma weak mpi_iscan = pmpi_iscan_
#else
#pragma weak MPI_ISCAN = pmpi_iscan
#pragma weak mpi_iscan__ = pmpi_iscan
#pragma weak mpi_iscan_ = pmpi_iscan
#pragma weak mpi_iscan = pmpi_iscan
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISCAN( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_ISCAN = PMPI_ISCAN
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_iscan__ = pmpi_iscan__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_iscan = pmpi_iscan
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_iscan_ = pmpi_iscan_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_ISCAN  MPI_ISCAN
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_iscan__  mpi_iscan__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_iscan  mpi_iscan
#else
#pragma _HP_SECONDARY_DEF pmpi_iscan_  mpi_iscan_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_ISCAN as PMPI_ISCAN
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_iscan__ as pmpi_iscan__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_iscan as pmpi_iscan
#else
#pragma _CRI duplicate mpi_iscan_ as pmpi_iscan_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISCAN( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ISCAN")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ISCAN")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ISCAN")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ISCAN")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISCAN( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscan__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscan__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscan__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscan__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISCAN( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscan_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscan_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscan_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscan_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_ISCAN( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscan")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscan")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscan")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscan")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISCAN( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_iscan__ = MPI_ISCAN
#pragma weak mpi_iscan_ = MPI_ISCAN
#pragma weak mpi_iscan = MPI_ISCAN
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_ISCAN = mpi_iscan__
#pragma weak mpi_iscan_ = mpi_iscan__
#pragma weak mpi_iscan = mpi_iscan__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_ISCAN = mpi_iscan_
#pragma weak mpi_iscan__ = mpi_iscan_
#pragma weak mpi_iscan = mpi_iscan_
#else
#pragma weak MPI_ISCAN = mpi_iscan
#pragma weak mpi_iscan__ = mpi_iscan
#pragma weak mpi_iscan_ = mpi_iscan
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISCAN( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_ISCAN")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_ISCAN")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_ISCAN")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISCAN( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iscan__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iscan__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iscan__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISCAN( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iscan_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iscan_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iscan_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_ISCAN( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iscan")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iscan")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iscan")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscan( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_ISCAN( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_iscan__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_iscan_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_iscan( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_iscan__ = PMPI_ISCAN
#pragma weak pmpi_iscan_ = PMPI_ISCAN
#pragma weak pmpi_iscan = PMPI_ISCAN
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_ISCAN = pmpi_iscan__
#pragma weak pmpi_iscan_ = pmpi_iscan__
#pragma weak pmpi_iscan = pmpi_iscan__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_ISCAN = pmpi_iscan_
#pragma weak pmpi_iscan__ = pmpi_iscan_
#pragma weak pmpi_iscan = pmpi_iscan_
#else
#pragma weak PMPI_ISCAN = pmpi_iscan
#pragma weak pmpi_iscan__ = pmpi_iscan
#pragma weak pmpi_iscan_ = pmpi_iscan
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_iscan__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ISCAN")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_iscan_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ISCAN")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_iscan( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ISCAN")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_ISCAN( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscan__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_iscan_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscan__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_iscan( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscan__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_ISCAN( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscan_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_iscan__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscan_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_iscan( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscan_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_ISCAN( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscan")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_iscan__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscan")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_iscan_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscan")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_iscan_ PMPI_ISCAN
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_iscan_ pmpi_iscan__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_iscan_ pmpi_iscan
#else
#define mpi_iscan_ pmpi_iscan_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Iscan
#define MPI_Iscan PMPI_Iscan 
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_iscan_ MPI_ISCAN
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_iscan_ mpi_iscan__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_iscan_ mpi_iscan
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_iscan_ ( void*v1, void*v2, MPI_Fint *v3, MPI_Fint *v4, MPI_Fint *v5, MPI_Fint *v6, MPI_Fint *v7, MPI_Fint *ierr ){

#ifndef HAVE_MPI_F_INIT_WORKS_WITH_C
    if (MPIR_F_NeedInit){ mpirinitf_(); MPIR_F_NeedInit = 0; }
#endif
    if (v1 == MPIR_F_MPI_IN_PLACE) v1 = MPI_IN_PLACE;
    if (v1 == MPIR_F_MPI_BOTTOM) v1 = MPI_BOTTOM;
    if (v2 == MPIR_F_MPI_BOTTOM) v2 = MPI_BOTTOM;
    *ierr = MPI_Iscan( v1, v2, (int)*v3, (MPI_Datatype)(*v4), (MPI_Op)*v5, (MPI_Comm)(*v6), (MPI_Request *)(v7) );
}
