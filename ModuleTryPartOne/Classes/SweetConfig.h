//
//  SweetConfig.h
//  WindBookRead
//
//  Created by 冯剑锋 on 16/2/1.
//  Copyright © 2016年 冯剑锋. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SweetConfig : NSObject

#define DEF_LoginAndRegisterStoryBoard [UIStoryboard storyboardWithName:@"LoginAndRegist" bundle:nil]
#define DEF_MainPageStoryBoard [UIStoryboard storyboardWithName:@"MainPage" bundle:nil]
#define DEF_FisrtPageStoryBoard [UIStoryboard storyboardWithName:@"FisrtPage" bundle:nil]
#define DEF_ClassIficationStoryBoard [UIStoryboard storyboardWithName:@"ClassIfication" bundle:nil]
#define DEF_FindStoryBoard [UIStoryboard storyboardWithName:@"Find" bundle:nil]
#define DEF_ShowTreasureStoryBoard [UIStoryboard storyboardWithName:@"ShowTreasure" bundle:nil]
#define DEF_MineStoryBoard [UIStoryboard storyboardWithName:@"Mine" bundle:nil]
#define DEF_MainOtherStoryBoard [UIStoryboard storyboardWithName:@"MainOther" bundle:nil]

/*----------------------------------------------------------------------------------------*/

/*=============================== (frameAndColor) ========================================*/

/*----------------------------------------------------------------------------------------*/

#define kScreenWidth  [UIScreen mainScreen].bounds.size.width
#define kScreenHeight [UIScreen mainScreen].bounds.size.height

//相对5s屏幕的比例
#define K_scale [[UIScreen mainScreen] bounds].size.width/320
//默认图
#define DefaultImageSquare [UIImage imageNamed:@"default_image"]
#define DefaultImage [UIImage imageNamed:@"default_image"]
#define DefaultPersonHead [UIImage imageNamed:@"defualt_headImage"]
/**
*	app整体View的背景色
*/
#define DEF_MainBackColor [UIColor colorWithRed:241/255.0 green:241/255.0 blue:241/255.0 alpha:1.0]

/**
 *	获取视图宽度
 *
 *	@param 	view 	视图对象
 *
 *	@return	宽度
 */
#define DEF_WIDTH(view) view.bounds.size.width

/**
 *	获取视图高度
 *
 *	@param 	view 	视图对象
 *
 *	@return	高度
 */
#define DEF_HEIGHT(view) view.bounds.size.height

/**
 *	获取视图原点横坐标
 *
 *	@param 	view 	视图对象
 *
 *	@return	原点横坐标
 */
#define DEF_LEFT(view) view.frame.origin.x

/**
 *	获取视图原点纵坐标
 *
 *	@param 	view 	视图对象
 *
 *	@return	原点纵坐标
 */
#define DEF_TOP(view) view.frame.origin.y

/**
 *	获取视图右下角横坐标
 *
 *	@param 	view 	视图对象
 *
 *	@return	右下角横坐标
 */
#define DEF_RIGHT(view) (DEF_LEFT(view) + DEF_WIDTH(view))

/**
 *	获取视图右下角纵坐标
 *
 *	@param 	view 	视图对象
 *
 *	@return	右下角纵坐标
 */
#define DEF_BOTTOM(view) (DEF_TOP(view) + DEF_HEIGHT(view))

/**
 *  主屏的宽
 */
#define DEF_SCREEN_WIDTH [[UIScreen mainScreen] bounds].size.width

/**
 *  主屏的高
 */
#define DEF_SCREEN_HEIGHT [[UIScreen mainScreen] bounds].size.height

/**
 *  主屏的size
 */
#define DEF_SCREEN_SIZE   [[UIScreen mainScreen] bounds].size

/**
 *  主屏的frame
 */
#define DEF_SCREEN_FRAME  [UIScreen mainScreen].bounds

/**
 *  宽度比例系数-6s
 */
#define DEF_WIDTH_RATIO   [[UIScreen mainScreen] bounds].size.width/375

/**
 *  高度比例系数
 */
#define DEF_HEIGHT_RATIO   [[UIScreen mainScreen] bounds].size.height/667

/**
 *	生成RGB颜色
 *
 *	@param 	red 	red值（0~255）
 *	@param 	green 	green值（0~255）
 *	@param 	blue 	blue值（0~255）
 *
 *	@return	UIColor对象
 */
#define DEF_RGB_COLOR(_red, _green, _blue) [UIColor colorWithRed:(_red)/255.0f green:(_green)/255.0f blue:(_blue)/255.0f alpha:1]

/**
 *	生成RGBA颜色
 *
 *	@param 	red 	red值（0~255）
 *	@param 	green 	green值（0~255）
 *	@param 	blue 	blue值（0~255）
 *	@param 	alpha 	blue值（0~1）
 *
 *	@return	UIColor对象
 */
#define DEF_RGBA_COLOR(_red, _green, _blue, _alpha) [UIColor colorWithRed:(_red)/255.0f green:(_green)/255.0f blue:(_blue)/255.0f alpha:(_alpha)]

//===================主色===

#define NavBgColor @"008eff"
#define VcBgColor @"e7e8ea"
#define showBgColor @"ffffff"

//===================辅色===
#define warRedColor @"fa6261"
#define runYellow @"ffd800"
#define finishGreed @"1dc4aa"
#define offlineGrayColor @"bfbfbf"
#define alertButtonGrayColor @"ebeef2"

//===================字体色===
#define oneLevel_black @"000000"
#define twoLevel_Gray @"919191"
#define threeLevel_white @"ffffff"
#define fourLevel_Gray @"d9d9d9"
#define fiveLevel_black @"606b7b"
#define sixLevel_gray @"5D5D5E"

/**
 *	生成RGB颜色
 *
 *	@param 	rgb 	RGB颜色值（必须0x开头，例如:0xffffff）
 *
 *	@return	UIColor对象
 */
#define DEF_RGBString_COLOR(rgb) [UIColor colorWithRGB:rgb]

/**
 *  返回颜色
 *
 *  @param color 字符串的16进制的颜色
 *
 *  @return UIColor对象
 */
#define getColor(color) [UIColor colorWithRed:((float)((strtoul([color UTF8String],0,16) & 0xFF0000) >> 16))/255.0 green:((float)((strtoul([color UTF8String],0,16) & 0xFF00) >> 8))/255.0 blue:((float)(strtoul([color UTF8String],0,16) & 0xFF))/255.0 alpha:1.0]

#define getAlphaColor(color, alphas) [UIColor colorWithRed:((float)((strtoul([color UTF8String],0,16) & 0xFF0000) >> 16))/255.0 green:((float)((strtoul([color UTF8String],0,16) & 0xFF00) >> 8))/255.0 blue:((float)(strtoul([color UTF8String],0,16) & 0xFF))/255.0 alpha: alphas]

/**
 *	生成RGBA颜色
 *
 *	@param 	string 	颜色描述字符串，带“＃”开头
 *
 *	@return	UIColor对象
 */
#define DEF_STRING_COLOR(string) [UIColor colorWithString:string]


//筛选距左边界距离
#define kMenuLeftSpace 100

/**
 *  判断屏幕尺寸是否为320*480
 *
 *	@return	判断结果（YES:是 NO:不是）
 */
#define DEF_SCREEN_IS_320_480 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(320, 480), [[UIScreen mainScreen] currentMode].size) : NO)

/**
 *  判断屏幕尺寸是否为640*960
 *
 *	@return	判断结果（YES:是 NO:不是）
 */
#define DEF_SCREEN_IS_640_960 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)

/**
 *  判断屏幕尺寸是否为640*1136
 *
 *	@return	判断结果（YES:是 NO:不是）
 */
#define DEF_SCREEN_IS_640_1136 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

/**
 *  判断屏幕尺寸是否为750*1334
 *
 *	@return	判断结果（YES:是 NO:不是）
 */
#define DEF_SCREEN_IS_750_1334 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)

/**
 *  判断屏幕尺寸是否为828*1472
 *
 *	@return	判断结果（YES:是 NO:不是）
 */
#define DEF_SCREEN_IS_1242_2208 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) : NO)

/**
 *  判断是否为ios7
 *
 *	@return	判断结果（YES:是 NO:不是）
 */
#define system_7 ([[[UIDevice currentDevice] systemVersion] floatValue])>= 7.0

#define system_8 ([[[UIDevice currentDevice] systemVersion] floatValue])>= 8.0

#define isIhpone5  ([UIScreen mainScreen].bounds.size.height>=568)

/*!
 *  判断是不是4s手机
 */
#define iphone_Is_4s ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(320, 480), [[UIScreen mainScreen] bounds].size) : NO)

/*!
 *  判断是不是5或者5s手机
 */
#define iphone_Is_5_5s ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(320, 568), [[UIScreen mainScreen] bounds].size) : NO)

/*!
 *  判断是不是6手机
 */
#define iphone_Is_6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(375, 667), [[UIScreen mainScreen] bounds].size) : NO)

/*!
 *  判断是不是6p手机
 */
#define iphone_Is_6p ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(414, 736), [[UIScreen mainScreen] bounds].size) : NO)

#define TabbarAndNavHeight 113

/*----------------------------------------------------------------------------------------*/

/*===============================    (文字大小)    ========================================*/

/*----------------------------------------------------------------------------------------*/

//通用字号
#define DEF_FontSize_18 DEF_Font(18)
#define DEF_FontSize_17 DEF_Font(17)
#define DEF_FontSize_16 DEF_Font(16)
#define DEF_FontSize_15 DEF_Font(15)
#define DEF_FontSize_14 DEF_Font(14)
#define DEF_FontSize_13 DEF_Font(13)
#define DEF_FontSize_12 DEF_Font(12)
#define DEF_FontSize_11 DEF_Font(11)
#define DEF_FontSize_10 DEF_Font(10)
#define DEF_FontSize_9 DEF_Font(9)
#define DEF_FontSize_8 DEF_Font(8)

//设置通用字体
#define DEF_Font(fontSize) [UIFont fontWithName:@"FZLTHJW--GB1-0" size:fontSize]
/*----------------------------------------------------------------------------------------*/

/*===============================     (数据存储)   ========================================*/

/*----------------------------------------------------------------------------------------*/



/**
 *	永久存储对象
 *
 *  NSUserDefaults保存的文件在tmp文件夹里
 *
 *	@param	object      需存储的对象
 *	@param	key         对应的key
 */
#define DEF_PERSISTENT_SET_OBJECT(object, key)                                                                                                 \
({                                                                                                                                             \
NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];                                                                          \
[defaults setObject:object forKey:key];                                                                                                    \
[defaults synchronize];                                                                                                                    \
})

/**
 *	取出永久存储的对象
 *
 *	@param	key     所需对象对应的key
 *	@return	key     所对应的对象
 */
#define DEF_PERSISTENT_GET_OBJECT(key)  [[NSUserDefaults standardUserDefaults] objectForKey:key]


/**
 *  清除 NSUserDefaults 保存的所有数据
 */
#define DEF_PERSISTENT_REMOVE_ALLDATA   [[NSUserDefaults standardUserDefaults] removePersistentDomainForName:[[NSBundle mainBundle] bundleIdentifier]]


/**
 *  清除 NSUserDefaults 保存的指定数据
 */
#define DEF_PERSISTENT_REMOVE(_key)                                         \
({                                                                          \
NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];       \
[defaults removeObjectForKey:_key];                                     \
[defaults synchronize];                                                 \
})

#ifdef DEBUG
// DEBUG模式下进行调试打印

// 输出结果标记出所在类方法与行数
#define DEBUGLog(fmt, ...)   NSLog((@"%s[Line: %d]™ " fmt), strrchr(__FUNCTION__,'['), __LINE__, ##__VA_ARGS__)

#else

#define DEBUGLog(...)   {}

#endif

#define DEF_md5headStr(str) [@"g,ICxkqDjg*SUKGrZDb9eQ4F*Z.7l96X" stringByAppendingString:str]

/**
 *   屏幕当前显示的View
 */

#define  DEF_ROOTVIEW  [[[[[UIApplication sharedApplication] windows] firstObject] rootViewController] view]

//
#define UMShareAppKey @"578361a067e58e3a7400095d"
#define WXAppId       @"wx9529e16c1951c68e"
#define WXAppSecret   @"8534531a03f5719fd89b929401885a2e"//8534531a03f5719fd89b929401885a2e
#define QQAppId       @"1104821764"
#define QQAppKey      @"7bCzYP0EdrDxMkEI"
#define SinaAppKey    @"2260558996"
#define SinaAppSecret @"0a92539e775e093c2a26498a6858c77d"

#define ViewAppearORDisappear @"控制器将要显现或消失"

@end
