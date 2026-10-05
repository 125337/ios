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
@property (nonatomic, copy)   NSString *hcBorderColor; // 边框颜色 hex（空 = separator 色）
@property (nonatomic, copy)   NSString *hcCardBgColor; // 背景颜色 hex（空 = 透明）

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
