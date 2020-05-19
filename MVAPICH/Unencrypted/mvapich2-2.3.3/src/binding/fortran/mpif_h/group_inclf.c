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
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_INCL( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_GROUP_INCL = PMPI_GROUP_INCL
#pragma weak mpi_group_incl__ = PMPI_GROUP_INCL
#pragma weak mpi_group_incl_ = PMPI_GROUP_INCL
#pragma weak mpi_group_incl = PMPI_GROUP_INCL
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_GROUP_INCL = pmpi_group_incl__
#pragma weak mpi_group_incl__ = pmpi_group_incl__
#pragma weak mpi_group_incl_ = pmpi_group_incl__
#pragma weak mpi_group_incl = pmpi_group_incl__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_GROUP_INCL = pmpi_group_incl_
#pragma weak mpi_group_incl__ = pmpi_group_incl_
#pragma weak mpi_group_incl_ = pmpi_group_incl_
#pragma weak mpi_group_incl = pmpi_group_incl_
#else
#pragma weak MPI_GROUP_INCL = pmpi_group_incl
#pragma weak mpi_group_incl__ = pmpi_group_incl
#pragma weak mpi_group_incl_ = pmpi_group_incl
#pragma weak mpi_group_incl = pmpi_group_incl
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_INCL( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );

#pragma weak MPI_GROUP_INCL = PMPI_GROUP_INCL
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );

#pragma weak mpi_group_incl__ = pmpi_group_incl__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );

#pragma weak mpi_group_incl = pmpi_group_incl
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );

#pragma weak mpi_group_incl_ = pmpi_group_incl_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_GROUP_INCL  MPI_GROUP_INCL
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_group_incl__  mpi_group_incl__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_group_incl  mpi_group_incl
#else
#pragma _HP_SECONDARY_DEF pmpi_group_incl_  mpi_group_incl_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_GROUP_INCL as PMPI_GROUP_INCL
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_group_incl__ as pmpi_group_incl__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_group_incl as pmpi_group_incl
#else
#pragma _CRI duplicate mpi_group_incl_ as pmpi_group_incl_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_INCL( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GROUP_INCL")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GROUP_INCL")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GROUP_INCL")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GROUP_INCL")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_INCL( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_incl__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_incl__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_incl__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_incl__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_INCL( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_incl_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_incl_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_incl_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_incl_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_INCL( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_incl")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_incl")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_incl")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_incl")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_INCL( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_group_incl__ = MPI_GROUP_INCL
#pragma weak mpi_group_incl_ = MPI_GROUP_INCL
#pragma weak mpi_group_incl = MPI_GROUP_INCL
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_GROUP_INCL = mpi_group_incl__
#pragma weak mpi_group_incl_ = mpi_group_incl__
#pragma weak mpi_group_incl = mpi_group_incl__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_GROUP_INCL = mpi_group_incl_
#pragma weak mpi_group_incl__ = mpi_group_incl_
#pragma weak mpi_group_incl = mpi_group_incl_
#else
#pragma weak MPI_GROUP_INCL = mpi_group_incl
#pragma weak mpi_group_incl__ = mpi_group_incl
#pragma weak mpi_group_incl_ = mpi_group_incl
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_INCL( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_GROUP_INCL")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_GROUP_INCL")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_GROUP_INCL")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_INCL( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_incl__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_incl__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_incl__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_INCL( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_incl_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_incl_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_incl_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_INCL( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_incl")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_incl")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_incl")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_incl( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_GROUP_INCL( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_incl__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_incl_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_incl( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_group_incl__ = PMPI_GROUP_INCL
#pragma weak pmpi_group_incl_ = PMPI_GROUP_INCL
#pragma weak pmpi_group_incl = PMPI_GROUP_INCL
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_GROUP_INCL = pmpi_group_incl__
#pragma weak pmpi_group_incl_ = pmpi_group_incl__
#pragma weak pmpi_group_incl = pmpi_group_incl__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_GROUP_INCL = pmpi_group_incl_
#pragma weak pmpi_group_incl__ = pmpi_group_incl_
#pragma weak pmpi_group_incl = pmpi_group_incl_
#else
#pragma weak PMPI_GROUP_INCL = pmpi_group_incl
#pragma weak pmpi_group_incl__ = pmpi_group_incl
#pragma weak pmpi_group_incl_ = pmpi_group_incl
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_incl__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GROUP_INCL")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_incl_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GROUP_INCL")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_incl( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GROUP_INCL")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_GROUP_INCL( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_incl__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_incl_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_incl__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_incl( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_incl__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_GROUP_INCL( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_incl_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_incl__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_incl_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_incl( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_incl_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_GROUP_INCL( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_incl")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_incl__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_incl")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_incl_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_incl")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_group_incl_ PMPI_GROUP_INCL
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_group_incl_ pmpi_group_incl__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_group_incl_ pmpi_group_incl
#else
#define mpi_group_incl_ pmpi_group_incl_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Group_incl
#define MPI_Group_incl PMPI_Group_incl 
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_group_incl_ MPI_GROUP_INCL
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_group_incl_ mpi_group_incl__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_group_incl_ mpi_group_incl
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_group_incl_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint v3[], MPI_Fint *v4, MPI_Fint *ierr ){
    *ierr = MPI_Group_incl( (MPI_Group)*v1, (int)*v2, v3, (MPI_Group *)(v4) );
}