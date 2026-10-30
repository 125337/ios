//
//  ThemeConfig.h
//  MioPlugin
//

#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

// 主题美化配置：微信原生 MMThemeManager 主题包应用（CSS 引擎渲染，零 UI hook）
// 主题包 = zip 解压后的目录（D519 实测格式：平铺 PNG + weui_color_new.xml，theme.inf 可选）
@interface ThemeConfig : NSObject <ConfigModule>

// 总开关：控制冷启动是否重放已应用主题（页内手动应用不受此开关限制）
@property (nonatomic, assign) BOOL enableTheme;
// 当前应用的主题名（= 主题目录名，只存名字不存路径：容器迁移不失效）
@property (nonatomic, copy) NSString *activeThemeName;

+ (instancetype)shared;

/// 主题统一落盘根目录：Library/Preferences/Mio/themes（目录不存在则创建）。
/// 与字体同理由：Preferences 是"部分还原"式安装唯一会被还原的目录，主题跟配置一起活下来
+ (NSString *)mioThemesDir;

/// 当前启用主题的完整路径：activeThemeName 非空且目录存在时返回路径，否则返回 nil
- (nullable NSString *)resolvedActiveThemePath;

@end

NS_ASSUME_NONNULL_END
