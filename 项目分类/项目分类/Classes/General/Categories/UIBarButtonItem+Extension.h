//
//  UIBarButtonItem+Extension.h
//  项目分类
//
//  Created by 侯谢送 on 2017/1/5.
//  Copyright © 2017年 侯谢送. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (Extension)
/**
 *  通过一张图片返回一个UIBarButtonItem
 *
 *  @param imageName <#imageName description#>
 *
 *  @return <#return value description#>
 */
+ (instancetype)itemWithImageName:(NSString *)imageName target:(id)target action:(SEL)action;


/**
 *  通过一张图片与文字返回一个UIBarButtonItem
 *
 *  @param imageName <#imageName description#>
 *  @param title     <#title description#>
 *  @param target    <#target description#>
 *  @param action    <#action description#>
 *
 *  @return <#return value description#>
 */
+ (instancetype)itemWithImageName:(NSString *)imageName title:(NSString *)title target:(id)target action:(SEL)action;

/**
 *  通过一个文字初始化一个UIBarButtonItem
 *
 *  @param title  <#title description#>
 *  @param target <#target description#>
 *  @param action <#action description#>
 *
 *  @return <#return value description#>
 */
+ (instancetype)itemWithTitle:(NSString *)title target:(id)target action:(SEL)action;

@end
