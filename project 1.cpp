#include <iostream>
#include <string>

int main()
{

    long const int arrSize = 13;
    float myArr[arrSize]; // [] [] [] [] [] [] [] [] [] []

    // Temp : ---------wint speed------------
    // 0  5   10   15 20 25 30 35 40 45
    // [-5]   []   [] [] [] [] [] [] [] []
    // [0.0]  []   [] [] [] [] [] [] [] []
    // [5.0]  []   [] [] [] [] [] [] [] []
    // [10.0] []   [] [] [] [] [] [] [] []
    // [15.0] []   [] [] [] [] [] [] [] []
    // [20.0] []   [] [] [] [] [] [] [] []
    // [25.0] []   [] [] [] [] [] [] [] []
    // [30.0] []   [] [] [] [] [] [] [] []
    // [35.0] []   [] [] [] [] [] [] [] []
    // [40.0] []   [] [] [] [] [] [] [] []
    // [45.0] []   [] [] [] [] [] [] [] []
    // [50.0] []   [] [] [] [] [] [] [] []

   float my2DArr[arrSize][arrSize]; // 2D array

    std::cout << "Temp : ----------Wind Speed -----------\n";

    for (size_t i = 0; i < arrSize; i++)
    {
        for (size_t k = 0; k < arrSize; k++) //Nest loop
        {
            my2DArr[i][k] = 0;
        }
    }
    
    my2DArr[0][0] = 0.0;
    my2DArr[0][1] = 5.0;
    my2DArr[0][2] = 10.0;
    my2DArr[0][3] = 15.0; 
    my2DArr[0][4] = 20.0;
    my2DArr[0][5] = 25.0;
    my2DArr[0][6] = 30.0;
    my2DArr[0][7] = 35.0;
    my2DArr[0][8] = 40.0;
    my2DArr[0][9] = 45.0;
    
   
    my2DArr[1][0] = -5.0;
    my2DArr[1][1] = -16.4;
    my2DArr[1][2] = -22.1;
    my2DArr[1][3] = -25.8;
    my2DArr[1][4] = -28.6;
    my2DArr[1][5] = -30.8;
    my2DArr[1][6] = -32.7;
    my2DArr[1][7] = -34.3;
    my2DArr[1][8] = -35.7;
    my2DArr[1][9] = -37.0;
 
    my2DArr[2][0] =  0.0;
    my2DArr[2][1] =  -10.5;
    my2DArr[2][2] =  -15.9;
    my2DArr[2][3] =  -19.4;
    my2DArr[2][4] =  -22.0;
    my2DArr[2][5] =  -24.1;
    my2DArr[2][6] =  -25.9;
    my2DArr[2][7] =  -27.4;
    my2DArr[2][8] =  -28.8;
    my2DArr[2][9] =  -30.0;

    my2DArr[3][0] =  5.0;
    my2DArr[3][1] =  -4.6;
    my2DArr[3][2] =  -9.7;
    my2DArr[3][3] =  -13.0;
    my2DArr[3][4] =  -15.4;
    my2DArr[3][5] =  -17.4;
    my2DArr[3][6] =  -19.1;
    my2DArr[3][7] =  -20.5;
    my2DArr[3][8] =  -21.8;
    my2DArr[3][9] =  -23.0;
 
    my2DArr[4][0] = 10.0;
    my2DArr[4][2] = 1.2;
    my2DArr[4][2] = -3.5;
    my2DArr[4][3] = -6.6;
    my2DArr[4][4] = -8.9;
    my2DArr[4][5] = -10.7;
    my2DArr[4][6] = -12.3;
    my2DArr[4][7] = -13.6;
    my2DArr[4][8] = -14.8;
    my2DArr[4][9] = -15.9;

    my2DArr[5][0] = 15.0;
    my2DArr[5][1] = 7.1;
    my2DArr[5][2] = 2.7;
    my2DArr[5][3] = -0.2;
    my2DArr[5][4] = -2.3;
    my2DArr[5][5] = -4.0;
    my2DArr[5][6] = -5.5;
    my2DArr[5][7] = -6.8;
    my2DArr[5][8] = -7.9;
    my2DArr[5][9] = -8.9;

    my2DArr[6][0] = 20.0;
    my2DArr[6][1] = 13.0;
    my2DArr[6][2] = 8.9;
    my2DArr[6][3] = 6.2;
    my2DArr[6][4] = 4.2;
    my2DArr[6][5] = 2.6;
    my2DArr[6][6] = 1.3;
    my2DArr[6][7] = 0.1;
    my2DArr[6][8] = -0.9;
    my2DArr[6][9] = -1.8;

    my2DArr[7][0] = 25.0;
    my2DArr[7][1] = 18.9;
    my2DArr[7][2] = 15.1;
    my2DArr[7][3] = 12.6;
    my2DArr[7][4] = 10.8;
    my2DArr[7][5] = 9.3;
    my2DArr[7][6] = 8.1;
    my2DArr[7][7] = 7.0;
    my2DArr[7][8] = 6.1;
    my2DArr[7][9] = 5.2;

    my2DArr[8][0] = 30.0;
    my2DArr[8][1] = 24.7;
    my2DArr[8][2] = 21.2;
    my2DArr[8][3] = 19.0;
    my2DArr[8][4] = 17.4;
    my2DArr[8][5] = 16.0;
    my2DArr[8][6] = 14.9;
    my2DArr[8][7] = 13.9;
    my2DArr[8][8] = 13.0;
    my2DArr[8][9] = 12.2;

    my2DArr[9][0] = 35.0;
    my2DArr[9][1] = 30.6;
    my2DArr[9][2] = 27.4;
    my2DArr[9][3] = 25.4;
    my2DArr[9][4] = 23.9;
    my2DArr[9][5] = 22.7;
    my2DArr[9][6] = 21.7;
    my2DArr[9][7] = 20.8;
    my2DArr[9][8] = 20.0;
    my2DArr[9][9] = 19.3;

    my2DArr[10][0] = 40.0;
    my2DArr[10][1] = 36.5;
    my2DArr[10][2] = 33.6;
    my2DArr[10][3] = 31.8;
    my2DArr[10][4] = 30.5;
    my2DArr[10][5] = 29.4;
    my2DArr[10][6] = 28.5;
    my2DArr[10][7] = 27.7;
    my2DArr[10][8] = 26.9;
    my2DArr[10][9] = 26.3;

    my2DArr[11][0] = 45.0;
    my2DArr[11][1] = 42.3;
    my2DArr[11][2] = 39.8;
    my2DArr[11][3] = 38.2;
    my2DArr[11][4] = 37.0;
    my2DArr[11][5] = 36.1;
    my2DArr[11][6] = 35.3;
    my2DArr[11][7] = 34.5;
    my2DArr[11][8] = 33.9;
    my2DArr[11][9] = 33.3;

    my2DArr[12][0] = 50.0;
    my2DArr[12][1] = 48.2;
    my2DArr[12][2] = 46.0;
    my2DArr[12][3] = 44.6;
    my2DArr[12][4] = 43.6;
    my2DArr[12][5] = 42.8;
    my2DArr[12][6] = 42.0;
    my2DArr[12][7] = 41.4;
    my2DArr[12][8] = 40.9;
    my2DArr[12][9] = 40.4;


    for (size_t i = 0; i < arrSize; i++)
    {
        for (size_t k = 0; k < arrSize; k++) //Nest loop
        {
            std::cout << my2DArr[i][k] << " ";
        }
    
        std::cout << "\n";
    
    }
      

    system("pause");
    
}


