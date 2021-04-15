#include<stdio.h>
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
void setUp(){}
void tearDown(){}
char Status_tt;
void booking_file_check(void)
{
    TEST_ASSERT_EQUAL('f',Status_tt);
}

int main(){
    FILE *fp;
	fp=fopen("seats_reserved.txt","r");
     if(fp == NULL)
    {
        Status_tt='f';
    }else{
        Status_tt='e';
    }
    UNITY_BEGIN();
    RUN_TEST(booking_file_check);
    return UNITY_END();
}
