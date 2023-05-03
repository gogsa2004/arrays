
int main()
{
int n, count=0, sum=0, b=0, max=0, str, stl;
float d;
 
cout<<"Введите кол-во элементов по горизонтали, по вертикали:\n";
cin>>n;
int Mas[n][n];
for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            Mas[i][j]=rand()%100;
        }
    }
 
for (int i=n-1; i>=0; i--)
    {     
        cout<<endl; 
        for (int j=0; j<n; j++ )                
        { 
            cout<<Mas[i][j]<<"\t";
        }   
        cout<<"\n";     
    }
 
for (int i=0; i<n; i++)
{
    for (int j=0; j<n; j++)
    {
        
        if (Mas[i][j]>max)
        {
            max=Mas[i][j];
        }
        str=i+1;
        stl=j+1;
    }
}
cout<<"\nMaximum: "<<max<<" Расположен в"<<str<<" строке и в столбце "<<stl;
return 0;
}