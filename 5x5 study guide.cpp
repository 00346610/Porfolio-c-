#include <iostream>
using namespace std;

void printMatrix(int arg[][6], const int argR, const int argC);


int main()

{/////using 6 rows to account for the x row
    const int rowSize=6;////////define size of array rows
    const int colSize=6;///////define size of array collumns
    int multTable[rowSize][colSize];///the both array to make the table
    
for (int i= 0; i<rowSize; i++){////int i =rowSize
for (int j=0; j<colSize; j++) ///int j =colSize
   if (i==0)///setting if for 0 value for j
        multTable[i][j]=j;
    else if (j==0)///setting if for o value for i
        multTable[i][j]=i;
    else
        multTable[i][j]=i*j;////setting the multiplication part i*j
    
}
printMatrix(multTable,rowSize,colSize);/////link function to int main
return (0);
}

void printMatrix(int arg[][6],const int argR, const int argC){///funct for table
    for(int i =0; i<argR; i++){///makes the table start at x
    for(int j=0; j<argC; j++){
            if(i==0 && j==0)
            cout<<"x\t";///x starter
            else
            cout<<arg[i][j]<<"\t";////print out the values of i*j
        }
        cout<<endl;
    }
    
    
    
    
}