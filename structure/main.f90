program main
    implicit none
    type point
        real*8 :: x, y ,z
    end type
    type(point) base

    base%x = 1.0
    base%y = 2.0
    base%z = 3.0

    call double(base)
    print"(3f8.4)", base%x, base%y, base%z
end program
