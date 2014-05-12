void mySort(int d[], unsigned int n)
{
int i,j,key;
 for(i=2;i<=n;i++){
    key=d[i];
    j=i-1;

 while((j>0) && (d[j]>key)){
      
      d[j+1]=d[j];
      j--;

      d[j+1]=key;}
}
}
