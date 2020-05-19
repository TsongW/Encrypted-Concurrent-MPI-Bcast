!   -*- Mode: Fortran; -*-
!
!   (C) 2014 by Argonne National Laboratory.
!   See COPYRIGHT in top-level directory.
!
subroutine PMPIR_Type_create_struct_f08(count, array_of_blocklengths, &
    array_of_displacements, array_of_types, newtype, ierror)
    use, intrinsic :: iso_c_binding, only : c_int
    use :: mpi_f08, only : MPI_Datatype
    use :: mpi_f08, only : MPI_ADDRESS_KIND
    use :: mpi_c_interface, only : c_Datatype
    use :: mpi_c_interface, only : MPIR_Type_create_struct_c

    implicit none

    integer, intent(in) :: count
    integer, intent(in) :: array_of_blocklengths(count)
    integer(MPI_ADDRESS_KIND), intent(in) :: array_of_displacements(count)
    type(MPI_Datatype), intent(in) :: array_of_types(count)
    type(MPI_Datatype), intent(out) :: newtype
    integer, optional, intent(out) :: ierror

    integer(c_int) :: count_c
    integer(c_int) :: array_of_blocklengths_c(count)
    integer(c_Datatype) :: array_of_types_c(count)
    integer(c_Datatype) :: newtype_c
    integer(c_int) :: ierror_c

    if (c_int == kind(0)) then
        ierror_c = MPIR_Type_create_struct_c(count, array_of_blocklengths, array_of_displacements, &
            array_of_types%MPI_VAL, newtype%MPI_VAL)
    else
        count_c = count
        array_of_types_c = array_of_types%MPI_VAL
        array_of_blocklengths_c = array_of_blocklengths
        ierror_c = MPIR_Type_create_struct_c(count_c, array_of_blocklengths_c, array_of_displacements, array_of_types_c, &
            newtype_c)
        newtype%MPI_VAL = newtype_c
    end if

    if(present(ierror)) ierror = ierror_c

end subroutine PMPIR_Type_create_struct_f08
