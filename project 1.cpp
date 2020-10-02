// project 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{

    const int arrSize = 20;
    int myArr[arrSize]; // [] [] [] [] [] [] [] [] [] []

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

    int my2DArr[arrSize][arrSize]; // 2D array

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
    my2DArr[0][10] = 45.0;
   
    my2DArr[1][0] = 0.0;
    my2DArr[1][1] = -5.0;
    my2DArr[1][2] = 0.0;
    my2DArr[1][3] = 0.0;
    my2DArr[1][4] = -5.0;
    my2DArr[1][5] = 0.0;
    my2DArr[1][6] = 0.0;
    my2DArr[1][7] = -5.0;
    my2DArr[1][8] = 0.0;
    my2DArr[1][9] = 0.0;
    my2DArr[1][10] = -5.0;
 
    my2DArr[2][0] = -5.0;
    my2DArr[2][1] = 0.0;
    my2DArr[2][2] = -5.0;
    my2DArr[2][3] = 0.0;
    my2DArr[2][4] = -5.0;
    my2DArr[2][5] = 0.0;
    my2DArr[2][6] = -5.0;
    my2DArr[2][7] = 0.0;
    my2DArr[2][8] = -5.0;
    my2DArr[2][9] = 0.0;
    my2DArr[2][10] = -5.0;

    my2DArr[3][0] = 0.0;
    my2DArr[3][1] = -5.0;
    my2DArr[3][2] = 0.0;
    my2DArr[3][3] = 0.0;
    my2DArr[3][4] = -5.0;
    my2DArr[3][5] = 0.0;
    my2DArr[3][6] = 0.0;
    my2DArr[3][7] = -5.0;
    my2DArr[3][8] = 0.0;
    my2DArr[3][9] = 0.0;
    my2DArr[3][10] = -5.0;
 
    my2DArr[4][1] = -5.0;
    my2DArr[4][2] = 0.0;
    my2DArr[4][3] = 0.0;
    my2DArr[4][4] = -5.0;
    my2DArr[4][5] = 0.0;
    my2DArr[4][6] = 0.0;
    my2DArr[4][7] = -5.0;
    my2DArr[4][8] = 0.0;
    my2DArr[4][9] = 0.0;
    my2DArr[4][10] = -5.0;


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


