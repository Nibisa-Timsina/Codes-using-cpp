#include<iostream>
using namespace std;
class Matrix
{
   public:
    int a[2][2];
    void getElement()
    {
        cout << "enter the element of the matrix:\n";
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cout <<"a["<<i+1<<"]["<<j+1<<"]=";
                cin >> a[i][j];
            }
        }
    }
    void display()
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cout << a[i][j]<< "\t";
                
            }
            cout << endl;
        }
    }
    friend Matrix operator+(Matrix &a,Matrix &b);
};

Matrix operator+(Matrix &A,Matrix &B)
{
    Matrix M;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            M.a[i][j]=A.a[i][j]+B.a[i][j];
        }    
    }
    return M;
}

int main()
{
    Matrix M1,M2,M3;
    M1.getElement();
    M2.getElement();
    M3=M1+M2;
    M3.display();
    return 0;
    
}
