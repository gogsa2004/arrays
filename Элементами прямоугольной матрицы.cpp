int main(){
const int m=5, n=6;
int A[m][n];
std::cout<<"before:\n";
for (int i=0; i<m; i++){
    for (int j=0; j<n; j++)
    {
        A[i][j]=rand()%10;
        std::cout<<A[i][j]<<' ';
    }
    std::cout<<std::endl;
}
for (int i=0; i<m/2; i++)
{
    int temp;
    for (int j=0; j<n; j++)
    {
        temp=A[i][j];
        A[i][j]=A[m-1-i][j];
        A[m-1-i][j]=temp;
    }
}
std::cout<<"after:\n";
for (int i=0; i<m; i++){
    for (int j=0; j<n; j++)
        std::cout<<A[i][j]<<' ';
    std::cout<<std::endl;
}
}