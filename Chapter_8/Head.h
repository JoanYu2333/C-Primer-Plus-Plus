/**
 * @File Name: Head.h
 * @Brief :
 * @Author : YuJoan (yujoan2333@outlook.com)
 * @Version : 1.0
 * @Creat Date : 2022-02-18
 *
 */

#ifndef _HEAD_H
#define _HEAD_H
#include <iostream>
#include <array>
using namespace std;
struct CandyBar
{
    string name;
    float weight;
    int heat;
};

void Example_1(char *p);
void Example_1(const char *const p, int count);
void Example_2(CandyBar &A, char *name, double weight, int heat);

#endif