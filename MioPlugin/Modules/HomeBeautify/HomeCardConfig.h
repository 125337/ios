#import <Foundation/Foundation.h>
#import "../../Core/ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

/// 首页卡片配置（首页美化模块，全新独立一套配置，前缀 HomeCard_，不与旧功能共用）
@interface HomeCardConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL hcEnabled;          // 启用卡片（总开关，开启后子配置才生效）
@property (nonatomic, copy)   NSString *hcTitle;       // 主页标题（空 = 不替换）
@property (nonatomic, assign) CGFloat hcTitleSize;     // 标题大小（0 = 默认）
@property (nonatomic, assign) CGFloat hcTitleOffsetX;  // 标题X偏移值（0 = 默认）

// 卡片数值（XOS CadisCard* 同构）
@property (nonatomic, assign) CGFloat hcCardHeight;    // 卡片高度（<=0 按 100 处理）
@property (nonatomic, assign) CGFloat hcCardOffsetY;   // 卡片Y偏移
@property (nonatomic, assign) CGFloat hcCardBottomFix; // 底部占位修正（header 高度追加量）
@property (nonatomic, assign) CGFloat hcCardMargin;    // 卡片边距（左右，<0 按 0）
@property (nonatomic, assign) CGFloat hcBorderWidth;   // 边框粗细（0 = 无边框）
@property (nonatomic, copy)   NSString *hcBorderColor;       // 边框颜色 hex（空 = separator 色）
@property (nonatomic, copy)   NSString *hcBorderColorDark;   // 边框颜色深色 hex（空 = 用浅色值）
@property (nonatomic, copy)   NSString *hcCardBgColor;       // 背景颜色 hex（空 = 透明）
@property (nonatomic, copy)   NSString *hcCardBgColorDark;   // 背景颜色深色 hex（空 = 用浅色值）

// 天气挂件（XOS CadisWeather* 同构）
@property (nonatomic, assign) BOOL      hcWeatherEnabled;    // 显示天气（CadisWeatherMode）
@property (nonatomic, assign) NSInteger hcWeatherPos;        // 显示位置 0卡片内 1日历内 2联系人内（CadisWeatherPos）
@property (nonatomic, assign) CGFloat   hcWeatherX;          // X位置%（默认 85，CadisWeatherOffsetX）
@property (nonatomic, assign) CGFloat   hcWeatherY;          // Y位置%（默认 5，CadisWeatherOffsetY）
@property (nonatomic, assign) CGFloat   hcWeatherAlpha;      // 透明度 0-100（默认 90，应用时 /100，CadisWeatherAlpha）
@property (nonatomic, copy)   NSString *hcWeatherBgColor;      // 背景颜色 hex（CadisWeatherColor）
@property (nonatomic, copy)   NSString *hcWeatherBgColorDark;  // 背景颜色深色 hex
@property (nonatomic, copy)   NSString *hcWeatherCity;         // 天气城市（空 = wttr.in 按 IP 自动定位，CadisWeatherCity）
@property (nonatomic, assign) NSInteger hcWeatherLang;         // 天气语言 0中文 1英文（CadisWeatherLang，日历点按菜单可改）

// 日历挂件（XOS CadisCalendar* 同构）
@property (nonatomic, assign) BOOL      hcCalEnabled;        // 显示日历（CadisCalendarMode）
@property (nonatomic, assign) NSInteger hcCalPos;            // 显示位置 0上 1中 2下（CadisCalendarPos，未设默认 1）
@property (nonatomic, assign) CGFloat   hcCalY;              // Y位置%（默认 50，CadisCalendarOffsetY）
@property (nonatomic, assign) CGFloat   hcCalBgHeight;       // 背景高度（默认 0，总高 = 值 + 128，CadisCalendarBgHeight）
@property (nonatomic, assign) CGFloat   hcCalScale;          // 内容缩放%（默认 100，应用钳制 50-200，CadisCalendarContentScale）
@property (nonatomic, copy)   NSString *hcCalBgColor;          // 背景颜色 hex（CadisCalendarColor）
@property (nonatomic, copy)   NSString *hcCalBgColorDark;
@property (nonatomic, copy)   NSString *hcCalHolidayColor;     // 节假日颜色 hex（CadisCalendarAccentColor）
@property (nonatomic, copy)   NSString *hcCalHolidayColorDark;
@property (nonatomic, copy)   NSString *hcCalSelectedColor;    // 选中日期颜色 hex（CadisCalendarSelectedColor）
@property (nonatomic, copy)   NSString *hcCalSelectedColorDark;

// 卡片图片（磁盘文件，浅/深色各一张，与卡片背景图的 MioCardBackground 目录相互独立）
+ (NSString *)imageDirectory;
+ (nullable NSString *)lightImagePath;   // 浅色模式图片路径（无 = 未设置）
+ (nullable NSString *)darkImagePath;    // 深色模式图片路径（无 = 未设置）
+ (BOOL)hasLightImage;
+ (BOOL)hasDarkImage;
+ (void)deleteLightImage;
+ (void)deleteDarkImage;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
