
#include <stdio.h>

int main()
{
    int i, j, n=5, m=4;
    int array[n][m];
    cout<<"Введите размер массива: "<<endl;
    cin>>n;
    cin>>m;
    cout<<"Введите элементы массива: "<<endl;
    for (i=0; i<n; i++)
        for(j=0; j<m; j++)
    cin>>array[i][j];
    return 0;
}
