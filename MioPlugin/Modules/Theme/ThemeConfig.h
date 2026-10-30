//
//  ThemeConfig.h
//  MioPlugin
//

#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

// 主题美化配置：取图拦截模式（hook -[MMThemeManager imageNamed:] 等按名覆盖，WXHelper 同款）
// 主题包 = 主题目录下的文件夹（平铺 PNG，D519 实测格式，无需元数据）
@interface ThemeConfig : NSObject <ConfigModule>

// 总开关：取图拦截生效开关（hook 实时读取，切换后新请求即生效）
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
