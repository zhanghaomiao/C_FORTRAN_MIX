program main
    implicit none
    character(len=12) :: str = "hello"
    call pass_string(str)
    print*, str
end program