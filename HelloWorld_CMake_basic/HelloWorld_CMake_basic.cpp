﻿/********************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @author         : Jabed-Akhtar
  * @date           : 14.08.2022
  ******************************************************************************
  * Description:
  *     - A simple CMake Hello World Project.
  *******************************************************************************/

/* Includes --------------------------------------------------------------------*/
#include "HelloWorld_CMake_basic.h"
#include "iostream"

using namespace std;

/* Main - The application entry point ------------------------------------------*/
int main()
{
	string str = "Hello World from CMake :).";
	cout << "-------------------------\n";
	cout << str << endl;
	cout << "-------------------------\n";
	return 0;
}

/* ------------------------- END OF FILE ---------------------------------------*/