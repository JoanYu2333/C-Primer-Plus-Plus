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
#include <cstring>
using namespace std;
struct CandyBar
{
    string name;
    float weight;
    int heat;
};
struct stringy
{
    char *str;
    int ct;
};

void Example_1(char *p);
void Example_1(const char *const p, int count);
void Example_2(CandyBar &A, char *name, double weight, int heat);
void Example_3();
void Example_3(string &S);
void Example_4();
void Example_4_show(const stringy &A, int count = 1);
void Example_4_show(const char *str, int count = 1);
void Example_4_set(stringy &A, char *str);
void Example_5();
template <typename T>
T Example_5_max5(T array[5]);
void Example_6();
template <typename T>
T Example_6_maxn(T array, int count);
template <>
char **Example_6_maxn(char **ptr, int count);
void Example_7();
template <typename T>
T ShowArray(T arr[], int n);
template <typename T>
T ShowArray(T *arr[], int n);

#endif