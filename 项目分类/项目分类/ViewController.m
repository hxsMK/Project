//
//  ViewController.m
//  项目分类
//
//  Created by 侯谢送 on 2017/1/4.
//  Copyright © 2017年 侯谢送. All rights reserved.
//

#import "ViewController.h"
#import "HMMacros.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    UIImageView *imageView = [[UIImageView alloc]init];
    imageView.image = HM_IMAGE(@"xx");
    
    self.view.backgroundColor = HM_ColorFromRGB(0xff00ff);
    self.view.backgroundColor = HM_white_color;
    
    //哈哈哈哈
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
