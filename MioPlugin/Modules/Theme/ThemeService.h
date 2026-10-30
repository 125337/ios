//
//  ThemeService.h
//  MioPlugin
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 主题美化服务：把主题包目录喂给微信原生 MMThemeManager（MMTheme CSS 引擎），零 UI hook。
//
// 规范（8.0.54 主二进制字符串 + D519 实测包 + WXHelper 实机三方实锤）：
//   ① 主题包 = 目录：平铺 PNG（逻辑名@2x/@3x/~iphone，走 NSBundle 解析）+
//      weui_color_new.xml（颜色表，微信根目录同名文件覆盖）+ style.css 等可选
//   ② 应用 = [MMTheme themeFromPath:目录] → [MMThemeManager setCurrentTheme:]
//      → [reloadThemeResource] → post MMUIThemeDidChangeNotification
//   ③ theme.inf 元数据可选（D519 无此文件正常生效），名字兜底用目录名
//   ④ 持久化自管：配置只记主题名，冷启动由 ThemeHook 重放（双保险，不依赖微信偏好存储）
@interface ThemeService : NSObject

+ (instancetype)shared;

/// 已导入主题名列表（themes 目录一级子目录名，按名称排序）
- (NSArray<NSString *> *)importedThemeNames;

/// 从 zip 导入主题包：解压 → 归一化（剥单层根目录）→ 校验特征文件 → 落盘 themes/<名称>/
/// @param zipPath zip 文件路径
/// @param outName 导出：最终主题名（= 目录名）
/// @param errText 导出：失败原因（成功为 nil）
/// @return 成功 YES
- (BOOL)importThemeFromZip:(NSString *)zipPath
                   outName:(NSString **)outName
                   errText:(NSString **)errText;

/// 应用指定主题（同步执行；发出切换通知刷新在屏 UI）
- (BOOL)applyThemeNamed:(NSString *)name;

/// 恢复微信默认主题（setCurrentTheme: defaultTheme + reload + 通知；清配置）
- (BOOL)restoreDefaultTheme;

/// 删除已导入主题目录；若删的是当前应用主题，仅清配置（当前会话保持视觉，重启回落原生）
- (BOOL)deleteThemeNamed:(NSString *)name;

/// 冷启动重放：enableTheme 且配置主题目录存在时重新应用（幂等，服务未就绪安全返回）
- (void)replayIfNeeded;

/// 当前生效主题显示名：配置主题名；未配置时读 MMThemeManager.currentTheme 的目录名；默认主题返回 @"默认"
- (NSString *)currentThemeDisplayName;

@end

NS_ASSUME_NONNULL_END
