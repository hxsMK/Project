//
//  HMThirdPartService.m
//  项目分类
//
//  Created by 侯谢送 on 2017/1/4.
//  Copyright © 2017年 侯谢送. All rights reserved.
//

#import "HMThirdPartService.h"
#import "HMMacros.h"

#import <IQKeyboardManager.h>

@implementation HMThirdPartService

+ (void)load {
    
    static dispatch_once_t onceToken;
    
    dispatch_once(&onceToken, ^{
        
        
        
        [[self class] initCoredata];
        
        [[self class] hm_setKeyBord];
        
        [[self class] hm_reachableStaus];
        
    });
}

#pragma mark - 初始化coredata
+ (void)initCoredata {
    
}

#pragma mark - 键盘回收相关
+ (void)hm_setKeyBord {
    
    IQKeyboardManager *manager = [IQKeyboardManager sharedManager];
    manager.enable = YES;
    manager.shouldResignOnTouchOutside = YES;
    manager.shouldToolbarUsesTextFieldTintColor = YES;
    manager.enableAutoToolbar = YES;
    
    NSLog(@"什么玩意");
}

#pragma mark － 检测网络相关
+ (void)hm_reachableStaus {
    
}

@end
