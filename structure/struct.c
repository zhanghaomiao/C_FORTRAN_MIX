struct point
{
    double x, y, z;
};

void double_(struct point *p)
{
    p->x += p->x;
    p->y += p->y;
    p->z += p->z;
}