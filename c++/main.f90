program main
    implicit none
    integer :: i
    integer :: a(3,3) = reshape( (/ (i, i=1,9) /), (/3,3/), order=(/2,1/))
    call add_i(a)
    do i = 1, 3
        print"(3I3)", a(i, :)
    enddo
end program