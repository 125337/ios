//
//  ThemeService.m
//  MioPlugin
//

#import "ThemeService.h"
#import "ThemeConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"
#import <objc/message.h>
#import <UIKit/UIKit.h>

// 微信原生主题引擎类名（8.0.80 头文件实锤；运行时 objc_getClass 防硬链接符号）
#define MIO_CLS(name) objc_getClass(name)

@implementation ThemeService

+ (instancetype)shared {
    static ThemeService *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[ThemeService alloc] init];
    });
    return instance;
}

#pragma mark - 已导入列表

- (NSArray<NSString *> *)importedThemeNames {
    NSString *dir = [ThemeConfig mioThemesDir];
    NSArray *items = [[NSFileManager defaultManager] contentsOfDirectoryAtPath:dir error:nil];
    NSMutableArray *names = [NSMutableArray array];
    NSFileManager *fm = [NSFileManager defaultManager];
    for (NSString *item in items) {
        if ([item hasPrefix:@"."]) continue;
        NSString *full = [dir stringByAppendingPathComponent:item];
        BOOL isDir = NO;
        if ([fm fileExistsAtPath:full isDirectory:&isDir] && isDir) [names addObject:item];
    }
    return [names sortedArrayUsingSelector:@selector(compare:)];
}

#pragma mark - theme.inf 自动补写

// MMTheme themeFromPath: 对无元数据目录返回 nil（D519 实测），最大嫌疑缺 theme.inf
// （微信助手导入时大概率自行补写）。应用前缺文件就生成 plist 格式兜底：
// 字段名取自 MMTheme.h（tid/name/icon/version/author/discription/website），填最小集。
// 引擎不需要则忽略，无害；格式不对仍 nil 时走 Frida 实锤。
- (void)miEnsureThemeInf:(NSString *)themeDir {
    NSString *infPath = [themeDir stringByAppendingPathComponent:@"theme.inf"];
    NSFileManager *fm = [NSFileManager defaultManager];
    if ([fm fileExistsAtPath:infPath]) return;
    NSString *name = themeDir.lastPathComponent;
    NSDictionary *meta = @{
        @"tid"     : name,
        @"name"    : name,
        @"version" : @"1",
    };
    if ([meta writeToFile:infPath atomically:YES]) {
        WPLog(@"Theme", @"[INF] theme.inf 已生成（目录缺元数据）: %@", name);
    } else {
        WPLog(@"Theme", @"[INF] theme.inf 写入失败: %@", infPath);
    }
}

#pragma mark - 应用 / 恢复默认

- (BOOL)applyThemeNamed:(NSString *)name {
    NSString *path = [[ThemeConfig mioThemesDir] stringByAppendingPathComponent:name];
    BOOL isDir = NO;
    if (name.length == 0 || [name containsString:@"/"] || [name containsString:@".."] ||
        ![[NSFileManager defaultManager] fileExistsAtPath:path isDirectory:&isDir] || !isDir) {
        WPLog(@"Theme", @"[APPLY] 主题目录无效: %@", name);
        return NO;
    }
    BOOL ok = [self miApplyThemePath:path];
    if (ok) {
        ThemeConfig *cfg = [ThemeConfig shared];
        cfg.activeThemeName = name;
        [ConfigManager saveAll];
    }
    return ok;
}

- (BOOL)restoreDefaultTheme {
    Class themeCls = MIO_CLS("MMTheme");
    BOOL ok = NO;
    if (themeCls) {
        SEL defSel = NSSelectorFromString(@"defaultTheme");
        if ([themeCls respondsToSelector:defSel]) {
            id defTheme = ((id (*)(id, SEL))objc_msgSend)(themeCls, defSel);
            if (defTheme) ok = [self miSetCurrentTheme:defTheme];
        }
    }
    // 兜底：引擎拿不到 defaultTheme 时清掉 currentTheme 让微信回落
    if (!ok) {
        id mgr = [self miThemeManager];
        if (mgr) {
            @try {
                ((void (*)(id, SEL, id))objc_msgSend)(mgr, NSSelectorFromString(@"setCurrentTheme:"), nil);
                [self miNotifyThemeChanged];
                ok = YES;
            } @catch (NSException *e) {
                WPLog(@"Theme", @"[RESTORE] 兜底清理异常: %@", e);
            }
        }
    }
    if (ok) {
        ThemeConfig *cfg = [ThemeConfig shared];
        cfg.activeThemeName = @"";
        [ConfigManager saveAll];
        WPLog(@"Theme", @"[RESTORE] 已恢复微信默认主题");
    }
    return ok;
}

// 核心：themeFromPath → setCurrentTheme → reloadThemeResource → 通知（8.0.54/80 实锤流程）
- (BOOL)miApplyThemePath:(NSString *)path {
    Class themeCls = MIO_CLS("MMTheme");
    id mgr = [self miThemeManager];
    if (!themeCls || !mgr) {
        WPLog(@"Theme", @"[APPLY] MMTheme 引擎不可用（MMTheme=%@ MMThemeManager=%@）", themeCls, mgr);
        return NO;
    }
    @try {
        [self miEnsureThemeInf:path]; // 缺元数据的目录先补 theme.inf
        SEL fromPathSel = NSSelectorFromString(@"themeFromPath:");
        if (![themeCls respondsToSelector:fromPathSel]) {
            WPLog(@"Theme", @"[APPLY] MMTheme themeFromPath: 不可用");
            return NO;
        }
        id theme = ((id (*)(id, SEL, NSString *))objc_msgSend)(themeCls, fromPathSel, path);
        if (!theme) {
            WPLog(@"Theme", @"[APPLY] themeFromPath 返回 nil: %@", path);
            return NO;
        }
        if (![self miSetCurrentTheme:theme]) return NO;
        WPLog(@"Theme", @"[APPLY] 主题已应用: %@", path.lastPathComponent);
        return YES;
    } @catch (NSException *e) {
        WPLog(@"Theme", @"[APPLY] 异常: %@", e);
        return NO;
    }
}

- (BOOL)miSetCurrentTheme:(id)theme {
    id mgr = [self miThemeManager];
    if (!mgr) return NO;
    @try {
        ((void (*)(id, SEL, id))objc_msgSend)(mgr, NSSelectorFromString(@"setCurrentTheme:"), theme);
        SEL reloadSel = NSSelectorFromString(@"reloadThemeResource");
        if ([mgr respondsToSelector:reloadSel]) {
            ((void (*)(id, SEL))objc_msgSend)(mgr, reloadSel);
        }
        [self miNotifyThemeChanged];
        return YES;
    } @catch (NSException *e) {
        WPLog(@"Theme", @"[SETTHEME] 异常: %@", e);
        return NO;
    }
}

- (nullable id)miThemeManager {
    Class cls = MIO_CLS("MMThemeManager");
    if (!cls) return nil;
    id mgr = WXGetService(cls);
    if (!mgr) {
        WPLog(@"Theme", @"[SVC] MMThemeManager 服务获取失败（未登录早期/版本差异）");
    }
    return mgr;
}

// 切换通知（XOS 1.5.9 dylib 实锤常量名）：主通知 + 皮肤通知，驱动在屏 UI 刷新
- (void)miNotifyThemeChanged {
    void (^post)(void) = ^{
        [[NSNotificationCenter defaultCenter] postNotificationName:@"MMUIThemeDidChangeNotification" object:nil];
        [[NSNotificationCenter defaultCenter] postNotificationName:@"MMSkinDidChangeNotification" object:nil];
    };
    if ([NSThread isMainThread]) post(); else dispatch_async(dispatch_get_main_queue(), post);
}

#pragma mark - 删除

- (BOOL)deleteThemeNamed:(NSString *)name {
    if (name.length == 0 || [name containsString:@"/"] || [name containsString:@".."]) return NO;
    NSString *path = [[ThemeConfig mioThemesDir] stringByAppendingPathComponent:name];
    BOOL ok = [[NSFileManager defaultManager] removeItemAtPath:path error:nil];
    WPLog(@"Theme", @"[DELETE] %@ → %@", name, ok ? @"OK" : @"FAIL");
    if (ok && [[ThemeConfig shared].activeThemeName isEqualToString:name]) {
        // 删的是当前主题：视觉本会话保持（引擎持有已加载资源），清配置后重启回落原生
        ThemeConfig *cfg = [ThemeConfig shared];
        cfg.activeThemeName = @"";
        [ConfigManager saveAll];
    }
    return ok;
}

#pragma mark - 冷启动重放

- (void)replayIfNeeded {
    ThemeConfig *cfg = [ThemeConfig shared];
    if (!cfg.enableTheme) {
        WPLog(@"Theme", @"[REPLAY] 总开关关闭，跳过");
        return;
    }
    NSString *path = [cfg resolvedActiveThemePath];
    if (!path) {
        WPLog(@"Theme", @"[REPLAY] 无有效主题目录（name=%@），跳过", cfg.activeThemeName);
        return;
    }
    BOOL ok = [self miApplyThemePath:path];
    WPLog(@"Theme", @"[REPLAY] 重放主题 %@ → %@", cfg.activeThemeName, ok ? @"OK" : @"FAIL");
}

#pragma mark - 显示名

- (NSString *)currentThemeDisplayName {
    NSString *configured = [ThemeConfig shared].activeThemeName;
    if (configured.length) return configured;
    // 未配置时读引擎当前主题（微信自己可能设置了主题，如微信助手遗留）
    @try {
        id mgr = [self miThemeManager];
        SEL curSel = NSSelectorFromString(@"currentTheme");
        if (mgr && [mgr respondsToSelector:curSel]) {
            id theme = ((id (*)(id, SEL))objc_msgSend)(mgr, curSel);
            SEL baseSel = NSSelectorFromString(@"basePath");
            if (theme && [theme respondsToSelector:baseSel]) {
                NSString *bp = ((NSString *(*)(id, SEL))objc_msgSend)(theme, baseSel);
                if (bp.length && ![bp.lowercaseString hasSuffix:@".app"]) return bp.lastPathComponent;
            }
        }
    } @catch (NSException *e) { /* 引擎异常时按默认处理 */ }
    return @"默认";
}

@end
