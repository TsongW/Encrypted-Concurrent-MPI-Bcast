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
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_SHRINK( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPIX_COMM_SHRINK = PMPIX_COMM_SHRINK
#pragma weak mpix_comm_shrink__ = PMPIX_COMM_SHRINK
#pragma weak mpix_comm_shrink_ = PMPIX_COMM_SHRINK
#pragma weak mpix_comm_shrink = PMPIX_COMM_SHRINK
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPIX_COMM_SHRINK = pmpix_comm_shrink__
#pragma weak mpix_comm_shrink__ = pmpix_comm_shrink__
#pragma weak mpix_comm_shrink_ = pmpix_comm_shrink__
#pragma weak mpix_comm_shrink = pmpix_comm_shrink__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPIX_COMM_SHRINK = pmpix_comm_shrink_
#pragma weak mpix_comm_shrink__ = pmpix_comm_shrink_
#pragma weak mpix_comm_shrink_ = pmpix_comm_shrink_
#pragma weak mpix_comm_shrink = pmpix_comm_shrink_
#else
#pragma weak MPIX_COMM_SHRINK = pmpix_comm_shrink
#pragma weak mpix_comm_shrink__ = pmpix_comm_shrink
#pragma weak mpix_comm_shrink_ = pmpix_comm_shrink
#pragma weak mpix_comm_shrink = pmpix_comm_shrink
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_SHRINK( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPIX_COMM_SHRINK = PMPIX_COMM_SHRINK
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink__( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpix_comm_shrink__ = pmpix_comm_shrink__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpix_comm_shrink = pmpix_comm_shrink
#else
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpix_comm_shrink_ = pmpix_comm_shrink_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPIX_COMM_SHRINK  MPIX_COMM_SHRINK
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpix_comm_shrink__  mpix_comm_shrink__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpix_comm_shrink  mpix_comm_shrink
#else
#pragma _HP_SECONDARY_DEF pmpix_comm_shrink_  mpix_comm_shrink_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPIX_COMM_SHRINK as PMPIX_COMM_SHRINK
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpix_comm_shrink__ as pmpix_comm_shrink__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpix_comm_shrink as pmpix_comm_shrink
#else
#pragma _CRI duplicate mpix_comm_shrink_ as pmpix_comm_shrink_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_SHRINK( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_COMM_SHRINK")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_COMM_SHRINK")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_COMM_SHRINK")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_COMM_SHRINK")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_SHRINK( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_shrink__")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_shrink__")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_shrink__")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_shrink__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_SHRINK( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_shrink_")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_shrink_")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_shrink_")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_shrink_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_SHRINK( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_shrink")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_shrink")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_shrink")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_shrink")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_SHRINK( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpix_comm_shrink__ = MPIX_COMM_SHRINK
#pragma weak mpix_comm_shrink_ = MPIX_COMM_SHRINK
#pragma weak mpix_comm_shrink = MPIX_COMM_SHRINK
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPIX_COMM_SHRINK = mpix_comm_shrink__
#pragma weak mpix_comm_shrink_ = mpix_comm_shrink__
#pragma weak mpix_comm_shrink = mpix_comm_shrink__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPIX_COMM_SHRINK = mpix_comm_shrink_
#pragma weak mpix_comm_shrink__ = mpix_comm_shrink_
#pragma weak mpix_comm_shrink = mpix_comm_shrink_
#else
#pragma weak MPIX_COMM_SHRINK = mpix_comm_shrink
#pragma weak mpix_comm_shrink__ = mpix_comm_shrink
#pragma weak mpix_comm_shrink_ = mpix_comm_shrink
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_SHRINK( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPIX_COMM_SHRINK")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPIX_COMM_SHRINK")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPIX_COMM_SHRINK")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_SHRINK( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_shrink__")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_shrink__")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_shrink__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_SHRINK( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_shrink_")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_shrink_")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink_( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_shrink_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_SHRINK( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_shrink")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_shrink")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_shrink")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPIX_COMM_SHRINK( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_shrink__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_shrink_( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_shrink( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpix_comm_shrink__ = PMPIX_COMM_SHRINK
#pragma weak pmpix_comm_shrink_ = PMPIX_COMM_SHRINK
#pragma weak pmpix_comm_shrink = PMPIX_COMM_SHRINK
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPIX_COMM_SHRINK = pmpix_comm_shrink__
#pragma weak pmpix_comm_shrink_ = pmpix_comm_shrink__
#pragma weak pmpix_comm_shrink = pmpix_comm_shrink__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPIX_COMM_SHRINK = pmpix_comm_shrink_
#pragma weak pmpix_comm_shrink__ = pmpix_comm_shrink_
#pragma weak pmpix_comm_shrink = pmpix_comm_shrink_
#else
#pragma weak PMPIX_COMM_SHRINK = pmpix_comm_shrink
#pragma weak pmpix_comm_shrink__ = pmpix_comm_shrink
#pragma weak pmpix_comm_shrink_ = pmpix_comm_shrink
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_shrink__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_COMM_SHRINK")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_shrink_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_COMM_SHRINK")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_shrink( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_COMM_SHRINK")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPIX_COMM_SHRINK( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_shrink__")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_shrink_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_shrink__")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_shrink( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_shrink__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPIX_COMM_SHRINK( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_shrink_")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_shrink__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_shrink_")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_shrink( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_shrink_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPIX_COMM_SHRINK( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_shrink")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_shrink__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_shrink")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_shrink_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_shrink")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpix_comm_shrink_ PMPIX_COMM_SHRINK
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpix_comm_shrink_ pmpix_comm_shrink__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpix_comm_shrink_ pmpix_comm_shrink
#else
#define mpix_comm_shrink_ pmpix_comm_shrink_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPIX_Comm_shrink
#define MPIX_Comm_shrink PMPIX_Comm_shrink 
#endif

#else

#ifdef F77_NAME_UPPER
#define mpix_comm_shrink_ MPIX_COMM_SHRINK
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpix_comm_shrink_ mpix_comm_shrink__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpix_comm_shrink_ mpix_comm_shrink
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpix_comm_shrink_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *ierr ){
    *ierr = MPIX_Comm_shrink( (MPI_Comm)(*v1), (MPI_Comm *)(v2) );
}
