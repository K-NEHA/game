
#include<stdio.h>
#include<stdlib.h>
#include "header.h"
#include "unity.h"
#include "unity_internals.h"
#include<stddef.h>
void setUp(){}
void tearDown(){}

char matrix[10];
void board(void){
    matrix[1]='x';
    matrix[2]='x';
    matrix[3]='x';
    TEST_ASSERT_EQUAL(1,CheckForWin(matrix));
}

void board1(void){
    matrix[4]='x';
    matrix[5]='x';
    matrix[6]='x';
    TEST_ASSERT_EQUAL(1,CheckForWin(matrix));
}

void board2(void){
    matrix[7]='x';
    matrix[8]='x';
    matrix[9]='x';
    TEST_ASSERT_EQUAL(1,CheckForWin(matrix));
}

void board3(void){
    matrix[1]='x';
    matrix[4]='x';
    matrix[7]='x';
    TEST_ASSERT_EQUAL(1,CheckForWin(matrix));
}

void board4(void){
    matrix[2]='x';
    matrix[5]='x';
    matrix[8]='x';
    TEST_ASSERT_EQUAL(1,CheckForWin(matrix));
}

void board5(void){
    matrix[3]='x';
    matrix[6]='x';
    matrix[9]='x';
    TEST_ASSERT_EQUAL(1,CheckForWin(matrix));
}

void board6(void){
    matrix[1]='x';
    matrix[5]='x';
    matrix[9]='x';
    TEST_ASSERT_EQUAL(1,CheckForWin(matrix));
}

void board7(void){
    matrix[3]='x';
    matrix[5]='x';
    matrix[7]='x';
    TEST_ASSERT_EQUAL(1,CheckForWin(matrix));
}

int main()
{
///Initiate the Unity Test Framework
UNITY_BEGIN();
RUN_TEST(board);
RUN_TEST(board1);
RUN_TEST(board2);
RUN_TEST(board3);
RUN_TEST(board4);
RUN_TEST(board5);
RUN_TEST(board6);
RUN_TEST(board7);
/// Close the Unity Test Framework
UNITY_END();
return 0;
}
