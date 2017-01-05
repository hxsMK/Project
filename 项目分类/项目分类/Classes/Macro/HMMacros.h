//
//  HMMacros.h
//  项目分类
//
//  Created by 侯谢送 on 2017/1/4.
//  Copyright © 2017年 侯谢送. All rights reserved.
//



/**
 *   常用宏
 */
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


//RGB
#define HM_RGB(r, g, b) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1]
//RGBA
#define HM_RGBA(r, g, b, a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
//随机颜色
#define HM_RandomColor [UIColor colorWithRed:arc4random_uniform(256)/255.0 green:arc4random_uniform(256)/255.0 blue:arc4random_uniform(256)/255.0 alpha:1]

#define HM_FileManager [NSFileManager defaultManager]
#define HM_UserDefaults   [NSUserDefaults standardUserDefaults]
#define HM_Window         [[UIApplication sharedApplication] keyWindow]

/// 系统控件默认高度
#define HM_StatusBarHeight        (20.f)

#define HM_TopBarHeight           (44.f)
#define HM_BottomBarHeight        (49.f)

#define HM_CellDefaultHeight      (44.f)

#define HM_EnglishKeyboardHeight  (216.f)
#define HM_ChineseKeyboardHeight  (252.f)


#define HM_IMAGE(imgName) [UIImage imageNamed:imgName]
#define HM_URL(url) [NSURL URLWithString:url]

//当前版本
#define HM_FSystemVersion          ([[[UIDevice currentDevice] systemVersion] floatValue])
#define HM_DSystemVersion          ([[[UIDevice currentDevice] systemVersion] doubleValue])
#define HM_SSystemVersion          ([[UIDevice currentDevice] systemVersion])

// RGB颜色转换（16进制->10进制）
#define HM_ColorFromRGB(rgbValue)\
                                \
                                [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
                                green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
                                blue:((float)(rgbValue & 0xFF))/255.0 \
                                alpha:1.0]

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

#define HM_H30 [UIFont systemFontOfSize:30]
#define HM_H29 [UIFont systemFontOfSize:29]
#define HM_H28 [UIFont systemFontOfSize:28]
#define HM_H27 [UIFont systemFontOfSize:27]
#define HM_H26 [UIFont systemFontOfSize:26]
#define HM_H25 [UIFont systemFontOfSize:25]
#define HM_H24 [UIFont systemFontOfSize:24]
#define HM_H23 [UIFont systemFontOfSize:23]
#define HM_H22 [UIFont systemFontOfSize:22]
#define HM_H20 [UIFont systemFontOfSize:20]
#define HM_H19 [UIFont systemFontOfSize:19]
#define HM_H18 [UIFont systemFontOfSize:18]
#define HM_H17 [UIFont systemFontOfSize:17]
#define HM_H16 [UIFont systemFontOfSize:16]
#define HM_H15 [UIFont systemFontOfSize:15]
#define HM_H14 [UIFont systemFontOfSize:14]
#define HM_H13 [UIFont systemFontOfSize:13]
#define HM_H12 [UIFont systemFontOfSize:12]
#define HM_H11 [UIFont systemFontOfSize:11]
#define HM_H10 [UIFont systemFontOfSize:10]
#define HM_H8 [UIFont systemFontOfSize:8]

///粗体
#define HM_HB20 [UIFont boldSystemFontOfSize:20]
#define HM_HB18 [UIFont boldSystemFontOfSize:18]
#define HM_HB16 [UIFont boldSystemFontOfSize:16]
#define HM_HB14 [UIFont boldSystemFontOfSize:14]
#define HM_HB13 [UIFont boldSystemFontOfSize:13]
#define HM_HB12 [UIFont boldSystemFontOfSize:12]
#define HM_HB11 [UIFont boldSystemFontOfSize:11]
#define HM_HB10 [UIFont boldSystemFontOfSize:10]
#define HM_HB8 [UIFont boldSystemFontOfSize:8]

///常用颜色
#define HM_black_color     [UIColor blackColor]
#define HM_blue_color      [UIColor blueColor]
#define HM_brown_color     [UIColor brownColor]
#define HM_clear_color     [UIColor clearColor]
#define HM_darkGray_color  [UIColor darkGrayColor]
#define HM_darkText_color  [UIColor darkTextColor]
#define HM_white_color     [UIColor whiteColor]
#define HM_yellow_color    [UIColor yellowColor]
#define HM_red_color       [UIColor redColor]
#define HM_orange_color    [UIColor orangeColor]
#define HM_purple_color    [UIColor purpleColor]
#define HM_lightText_color [UIColor lightTextColor]
#define HM_lightGray_color [UIColor lightGrayColor]
#define HM_green_color     [UIColor greenColor]
#define HM_gray_color      [UIColor grayColor]
#define HM_magenta_color   [UIColor magentaColor]

///系统版本号
#define HM_VersionLargerThan7  ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0)
#define HM_VersionLargerThan8  ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)

#define HM_Version7  ([[[UIDevice currentDevice] systemVersion] floatValue] == 7.0)
#define HM_Version8  ([[[UIDevice currentDevice] systemVersion] floatValue] == 8.0)

#endif /* HMMacros_h */
