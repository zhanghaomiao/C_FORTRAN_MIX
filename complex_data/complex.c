struct cpx {float r, i;};
struct dpx {double r, i;};

void pass_complex_(struct cpx *w, struct dpx *z)
{
    w -> r = 12.;
    w -> i = .1;
    z -> r =  66;
    z -> i = 23.0;
};