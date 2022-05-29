#include <iostream>
#include <vector>


using namespace std ;

int main ()
{
    int m , n , p ;
    cout << " please Enter The Size Of The Matrix As m n p " << endl;
    cin >> m >> n >> p;

/*
     int matrix[m][n][p] = {
                            {
                                {1, 2 ,3 , 4},
                                {3, 4 , 5 ,6 },
                                {5, 6 , 7 ,8}
                            },
                            {
                                {7, 8 , 9 , 10},
                                {9, 10 ,11, 12},
                                {11, 12 ,13 ,14}
                            }
                        };

*/

int matrix[m][n][p] ;
cout << "plz enter the matrix elements\n\t";
 for (int i = 0 ; i < m ; i++)   // first element of the m matrix
    {
        for (int j = 0 ; j < n ; j++)   // frist element of (n) of the first elemnt m
        {
            for (int k = 0 ; k < p ; k++)
            {
                cin >> matrix[i][j][k];
                cout <<"\t";


            }
        }
    }

    cout << "\n\tmatrix ["<<m<<"]["<<n<<"]["<<p<<"]=\n";

 for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<p; k++)
                cout<<"\t"<<matrix[i][j][k]<<"  ";
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<endl;
cout<<"Flatten_Matrix =\n";

vector <int> Flatten_Matrix ((m*n*p),1) ;
        int y = 0;                      //  counter for the vector
        for (int i = 0 ; i < m ; i++)   // first element of the m matrix
    {
        for (int j = 0 ; j < n ; j++)   // frist element of (n) of the first elemnt m
        {
            for (int k = 0 ; k < p ; k++)
            {
                Flatten_Matrix[y] = matrix[i][j][k];
                y += 1 ;

            }
        }
    }

 cout <<"{ ";
 for(int i = 0 ;i < (m*n*p) ; i++ )

cout << Flatten_Matrix[i]<<" , ";

cout << "}\n\n";




    return 0;
}
