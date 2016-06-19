/****************************************************************************
 * 
 * Copyright (C) 2016 @com, Inc. All rights reserved.
 * 
 ****************************************************************************/



/** 
 * @file solution.cc
 * @author yinchunxiang(@com)
 * @date 2016/05/01 17:13:39
 * @brief 
 * 
 **/ 
 
int solution(int A, int B, int K) {
    return (A % K == 0) ? (B/K - A/K + 1) : (B/K - A/K);
}













/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
