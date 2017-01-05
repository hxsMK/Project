//
//  HMMacros.h
//  项目分类
//
//  Created by 侯谢送 on 2017/1/4.
//  Copyright © 2017年 侯谢送. All rights reserved.
//

#ifndef HMMacros_h
#define HMMacros_h

//*************************************** 沙盒路径 ***************************************//
#define HM_PATH_OF_APP_HOME    NSHomeDirectory()
#define HM_PATH_OF_TEMP        NSTemporaryDirectory()
#define HM_PATH_OF_DOCUMENT    [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]

//************************************** DEBUG LOG **************************************//
#ifdef DEBUG
#define NSLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define NSLog(...)
#endif

//系统字体大小
#define HM_SYS_FONT(x) [UIFont systemFontOfSize:x]
//屏幕宽度、高度
#define HM_SCREEN_W [UIScreen mainScreen].bounds.size.width
#define HM_SCREEN_H [UIScreen mainScreen].bounds.size.height

//RGBA
#define HM_RGBA(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
//随机颜色
#define HM_RandomColor [UIColor colorWithRed:arc4random_uniform(256)/255.0 green:arc4random_uniform(256)/255.0 blue:arc4random_uniform(256)/255.0 alpha:1]

#define HM_FileManager [NSFileManager defaultManager]
#define HM_UserDefaults   [NSUserDefaults standardUserDefaults]
#define HM_Window         [[UIApplication sharedApplication] keyWindow]

 dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(<#delayInSeconds#> * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
    <#code to be executed after a specified delay#>
});


// View 坐标(x,y)和宽高(width,height)
#define HM_X(v)                    (v).frame.origin.x
#define HM_Y(v)                    (v).frame.origin.y
#define HM_WIDTH(v)                (v).frame.size.width
#define HM_HEIGHT(v)               (v).frame.size.height

#define HM_MinX(v)                 CGRectGetMinX((v).frame)
#define HM_MinY(v)                 CGRectGetMinY((v).frame)

#define HM_MidX(v)                 CGRectGetMidX((v).frame)
#define HM_MidY(v)                 CGRectGetMidY((v).frame)

#define HM_MaxX(v)                 CGRectGetMaxX((v).frame)
#define HM_MaxY(v)                 CGRectGetMaxY((v).frame)

#endif /* HMMacros_h */
