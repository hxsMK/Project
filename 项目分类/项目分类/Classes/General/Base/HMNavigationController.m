//
//  HMNavigationController.m
//  项目分类
//
//  Created by 侯谢送 on 2017/1/5.
//  Copyright © 2017年 侯谢送. All rights reserved.
//

#import "HMNavigationController.h"
#import "UIBarButtonItem+Extension.h"

@interface HMNavigationController ()

@end

@implementation HMNavigationController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated{
    
    NSString *title = @"返回";
    
    NSInteger count = self.childViewControllers.count;
    //如果执行到这个地方,判断里面有一个控制器的话,代表当前要往导航控制器里面push的是第二个控制器
    if (count>=1) {
        
        if (count == 1) {
            title = [[self.childViewControllers firstObject] title];
        }
        //设置在push的时候隐藏底部的tabbar
        viewController.hidesBottomBarWhenPushed = YES;
        
        viewController.navigationItem.leftBarButtonItem = [UIBarButtonItem itemWithImageName:@"navigationbar_back_withtext" title:title target:self action:@selector(back)];
    }
    
    [super pushViewController:viewController animated:animated];
}

- (void)back{
    [self popViewControllerAnimated:YES];
}

@end
