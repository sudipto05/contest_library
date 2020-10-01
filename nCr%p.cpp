void process()
{
    for(int i=0;i<=1001;i++)
    {
        ncr[i][i]=1;
        ncr[i][0]=1;
        for(int j=i-1;j>0;j--)
            ncr[i][j]=(ncr[i-1][j]+ncr[i-1][j-1])%lmod;
    }
}
