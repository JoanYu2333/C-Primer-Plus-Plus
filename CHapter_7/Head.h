/**
 * @File Name: Head.h
 * @Brief :
 * @Author : YuJoan (yujoan2333@outlook.com)
 * @Version : 1.0
 * @Creat Date : 2022-02-15
 *
 */

#ifndef _HEAD_H
#define _HEAD_H

#include <iostream>
#include <array>
#include <vector>
struct box
{
    /* data */
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
float Example_1(float a, float b);
void Example_2(std::array<float, 10> a);
void Example_3(box a, box *b);
int Example_5(int value);
void Example_6(std::vector<double> a, int count);
double add(double x, double y);
double calculate(double a, double b, double (*p)(double c, double d));
#endif