void add_i_(int array[3][3])
{
    for(int i =0; i<3; i++)
    {
        for(int j =0; j< 3; j++)
        {
            array[i][j] += j;
        }
    }

}

void add_i_2_(int* a, int* row, int* col)
{
    for(int i=0; i<*row; i++)
        for(int j = 0; j<*col; j++)
        {
            a[i**row+j] += j;
        }
}