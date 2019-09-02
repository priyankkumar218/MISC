#include <iostream>
#include <stdlib.h>
using namespace std;

void StarHalfPyramid(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void NumHalfPyramid(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void AlphabetPyramid(char n)
{
    //n = last row character
    char alphabet = 'A';
    for(int i = 1; i<=(n-'A'+1); ++i)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<alphabet<<" ";
        }
        ++alphabet;
        cout<<endl;
    }
}

void StarPyramid(int n)
{
    int k = 0;
    for(int i=1; i<=n; ++i, k=0)
    {
        for(int space = 1; space<=n-i; space++)
        {
            cout<<" ";
        }
        while(k != 2*i-1)
        {
            cout<<"* ";
            ++k;
        }
        cout<<endl;
    }
}

void FloydTriangle(int n)
{
    int num = 1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

int fact(int n) { return(n==1||n==0) ? 1 : n*fact(n-1); }

void PascalTriangle(int n)
{
    for(int i = 0; i<n; i++)
    {
        for(int c = 0; c<=(n-i-2); c++)
            cout<<" ";
        for(int c = 0; c<=i; c++)
            cout<<fact(i)/(fact(c)*fact(i-c))<<" ";

        cout<<endl;
    }
}

void StarPyramidRev(int n)
{
    for(int i=n; i>=1; --i)
    {
        for(int space = 0; space<n-i; space++)
            cout<<" ";

        for(int j=i; j<=2*i-1; ++j)
            cout<<"* ";

        for(int j=0; j<i-1; ++j)
            cout<<"* ";

        cout<<endl;
    }
}

int main()
{
    int ch;
    while(ch>0)
    {
        cin>>ch;
        switch(ch)
        {
            case 1: StarHalfPyramid(5);
                break;
            case 2: NumHalfPyramid(5);
                break;
            case 3: AlphabetPyramid('E');
                break;
            case 4: StarPyramid(5);
                break;
            case 5: FloydTriangle(5);
                break;
            case 6: PascalTriangle(5);
                break;
            case 7: StarPyramidRev(5);
                break;
            case 0: exit(0);
        }
    }

    return 0;
}
