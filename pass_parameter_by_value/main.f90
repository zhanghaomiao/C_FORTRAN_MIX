program main
  implicit none
    interface 
      integer function crtn(i) bind(C)
      integer, VALUE, intent(in) :: i
      end function
    end interface
  integer :: M = 20
  integer :: MM
  MM = crtn(M)
  print*, M, MM
end program


