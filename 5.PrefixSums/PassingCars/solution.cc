/****************************************************************************
 * 
 * Copyright (C) 2016 @com, Inc. All rights reserved.
 * 
 ****************************************************************************/



/** 
 * @file solution.cc
 * @author yinchunxiang(@com)
 * @date 2016/05/01 16:54:18
 * @brief 
 * 
 **/ 
 

int solution(vector<int> &A) {
    int n = A.size();
    if (n > 100000 || n <= 0) {
        return -1;
    }
    int num_zero = 0;
    int result = 0;
    for (auto& num : A) {
        if (0 == num) {
            num_zero += 1;
        } else {
            result += num_zero;
        }
    }
    if (result > 1000000000) {
        return -1;

    }
    return result;
}













/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
