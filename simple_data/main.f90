program main
    implicit none
    real*8 :: a
    integer :: i
    call pass_to_c(a, i)
    print*, a, i
end program


