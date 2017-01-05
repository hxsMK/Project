//
//  HMStartApp.m
//  项目分类
//
//  Created by 侯谢送 on 2017/1/4.
//  Copyright © 2017年 侯谢送. All rights reserved.
//

#import "HMStartApp.h"

@implementation HMStartApp

+ (void)load {
    
    static dispatch_once_t onceToken;
    
    dispatch_once(&onceToken, ^{
        
        [[self class] hm_initUserData];
        
    });
}

#pragma mark - 初始化个人数据
+ (void)hm_initUserData {
    
}


@end
