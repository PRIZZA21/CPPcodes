int highestpowerof2(int n)
{
    if(n<1)
    {
        return 0;
    }
    int res =1;
    for (int i=0;i<n;i++)
    {
       int curr = 1<<i;
       if(curr>n)
       break;

       res=curr;
    }
    return res;
}
