//
//  ThemeService.h
//  MioPlugin
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 主题美化服务：取图拦截架构（WXHelper 逆向实锤同款）。
//
// hook 微信取图层（-[MMThemeManager imageNamed:] + +[WCSVGImage imageNamed:fromConfig:]），
// 启用主题时按请求名查 themes/<当前主题>/（@3x→@2x→无倍率回退），命中返回主题图，
// 未命中走原实现。不使用 themeFromPath/theme.inf/setCurrentTheme（引擎注册路线，D519 实测走不通）。
//
// 使用方式：用户用文件管理器（Filza 等）把主题文件夹放入主题目录
// （Library/Preferences/Mio/themes/，设置页一键复制路径），列表点应用即生效。
@interface ThemeService : NSObject

+ (instancetype)shared;

/// 安装取图/取色 hook（ThemeHook.install 调用，dispatch_once 幂等，进程加载即生效）
- (void)installHooks;

/// 已导入主题名列表（themes 目录一级子目录名，按名称排序）
- (NSArray<NSString *> *)importedThemeNames;

/// 应用指定主题（写配置 + 清缓存 + 发切换通知，立即生效）
- (BOOL)applyThemeNamed:(NSString *)name;

/// 恢复微信默认主题（清配置 + 清缓存 + 通知，新请求回落原生资源）
- (BOOL)restoreDefaultTheme;

/// 删除已导入主题目录；若删的是当前应用主题，清配置并通知回落原生
- (BOOL)deleteThemeNamed:(NSString *)name;

/// 当前生效主题显示名：配置主题名；未配置返回 @"默认"
- (NSString *)currentThemeDisplayName;

@end

NS_ASSUME_NONNULL_END
