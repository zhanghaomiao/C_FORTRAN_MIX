program main
    implicit none
    complex w
    double complex z
    call pass_complex(w, z)
    print"(2f10.6)", w
    print"(2f10.6)", z
end program