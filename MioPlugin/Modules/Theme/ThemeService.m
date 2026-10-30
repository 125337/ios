//
//  ThemeService.m
//  MioPlugin
//

#import "ThemeService.h"
#import "ThemeConfig.h"
#import "MioZipReader.h"
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

#pragma mark - 导入（zip → themes/<名称>/）

- (BOOL)importThemeFromZip:(NSString *)zipPath
                   outName:(NSString **)outName
                   errText:(NSString **)errText {
    if (errText) *errText = nil;
    if (outName) *outName = nil;
    if (zipPath.pathExtension.lowercaseString.length == 0) {
        // 无扩展名不直接拒绝（部分来源 zip 不带后缀），仅记日志
        WPLog(@"Theme", @"[IMPORT] 无扩展名 zip，继续尝试: %@", zipPath.lastPathComponent);
    }

    // 主题名 = zip 文件名去扩展名；清洗非法路径字符
    NSString *base = zipPath.lastPathComponent;
    if ([base.pathExtension.lowercaseString isEqualToString:@"zip"]) base = [base stringByDeletingPathExtension];
    NSCharacterSet *illegal = [[NSCharacterSet characterSetWithCharactersInString:@"/\\:?<>|*\""] invertedSet];
    base = [[base componentsSeparatedByCharactersInSet:illegal] componentsJoinedByString:@"_"];
    base = [base stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
    if (base.length == 0) base = @"imported_theme";

    NSString *themesDir = [ThemeConfig mioThemesDir];
    NSString *tmpDir = [themesDir stringByAppendingPathComponent:@".import_tmp"];
    NSFileManager *fm = [NSFileManager defaultManager];
    [fm removeItemAtPath:tmpDir error:nil]; // 上次残留清理
    [fm createDirectoryAtPath:tmpDir withIntermediateDirectories:YES attributes:nil error:nil];

    // 解压：优先探测微信自带 zip 类（8.0.54 实测 SSZipArchive 未注册，类名带前缀未实锤）；
    // 全部候选落空时走自研 MioZipReader（libz raw inflate，dlsym 加载，零外部依赖）
    BOOL unzipped = NO;
    NSString *unzipErr = nil;
    Class zipCls = nil;
    for (NSString *candidate in @[@"SSZipArchive", @"QSSZipArchive", @"ZipArchive", @"MMZipArchive"]) {
        Class cls = objc_getClass(candidate.UTF8String);
        WPLog(@"Theme", @"[IMPORT] zip 类探测 %@ → %@", candidate, cls ?: @"nil");
        if (cls && [cls respondsToSelector:NSSelectorFromString(@"unzipFileAtPath:toDestination:")]) {
            zipCls = cls;
            break;
        }
    }
    if (zipCls) {
        @try {
            ((BOOL (*)(id, SEL, NSString *, NSString *))objc_msgSend)
                (zipCls, NSSelectorFromString(@"unzipFileAtPath:toDestination:"), zipPath, tmpDir);
            unzipped = YES;
            WPLog(@"Theme", @"[IMPORT] 走微信 %@ 解压", zipCls);
        } @catch (NSException *e) {
            unzipErr = [NSString stringWithFormat:@"微信解压器异常：%@", e.reason ?: @"未知异常"];
        }
    }
    if (!unzipped) {
        unzipped = [MioZipReader unzipFileAtPath:zipPath toDestination:tmpDir errText:&unzipErr];
        WPLog(@"Theme", @"[IMPORT] 走自研 MioZipReader 解压 → %@", unzipped ? @"OK" : @"FAIL");
    }
    if (!unzipped) {
        if (errText) *errText = unzipErr ?: @"解压失败";
        [fm removeItemAtPath:tmpDir error:nil];
        return NO;
    }

    // 归一化：zip 常带单层根目录（或 __MACOSX 垃圾）；定位真实主题根
    NSString *root = [self miThemeRootInDir:tmpDir];
    if (!root) {
        if (errText) *errText = @"不是有效的微信主题包（缺少 PNG/颜色表/CSS 特征文件）";
        [fm removeItemAtPath:tmpDir error:nil];
        return NO;
    }

    // 落盘：同名覆盖
    NSString *dest = [themesDir stringByAppendingPathComponent:base];
    if ([dest.lowercaseString isEqualToString:tmpDir.lowercaseString]) {
        if (errText) *errText = @"主题名非法";
        [fm removeItemAtPath:tmpDir error:nil];
        return NO;
    }
    [fm removeItemAtPath:dest error:nil];
    NSError *mvErr = nil;
    if (![fm moveItemAtPath:root toPath:dest error:&mvErr]) {
        if (errText) *errText = [NSString stringWithFormat:@"落盘失败：%@", mvErr.localizedDescription ?: @"未知错误"];
        [fm removeItemAtPath:tmpDir error:nil];
        return NO;
    }
    [fm removeItemAtPath:tmpDir error:nil];

    WPLog(@"Theme", @"[IMPORT] 主题导入成功: %@ (%@)", base, zipPath.lastPathComponent);
    if (outName) *outName = base;
    return YES;
}

// 在解压结果里定位主题根：单层根目录则剥壳；特征校验（≥1 个 png 或 weui_color*.xml 或 *.css）
- (nullable NSString *)miThemeRootInDir:(NSString *)dir {
    NSFileManager *fm = [NSFileManager defaultManager];
    NSArray *items = [fm contentsOfDirectoryAtPath:dir error:nil];
    NSMutableArray *subdirs = [NSMutableArray array];
    for (NSString *item in items) {
        if ([item hasPrefix:@"."]) continue; // __MACOSX / 隐藏目录直接忽略
        BOOL isDir = NO;
        if ([fm fileExistsAtPath:[dir stringByAppendingPathComponent:item] isDirectory:&isDir] && isDir) {
            [subdirs addObject:item];
        }
    }
    NSString *root = dir;
    // 所有可见内容都在唯一子目录里 → 剥壳
    if (subdirs.count == 1 && [self miVisibleFileCountInDir:dir] == 1) {
        root = [dir stringByAppendingPathComponent:subdirs[0]];
    }
    if (![self miLooksLikeThemeDir:root]) {
        // 允许再剥一层（zip 里套两层目录的打包习惯）
        NSArray *inner = subdirs;
        if (inner.count == 1) {
            NSString *root2 = [dir stringByAppendingPathComponent:inner[0]];
            for (NSString *sub in [fm contentsOfDirectoryAtPath:root2 error:nil]) {
                BOOL isDir = NO;
                NSString *full = [root2 stringByAppendingPathComponent:sub];
                if ([sub hasPrefix:@"."] || ![fm fileExistsAtPath:full isDirectory:&isDir] || !isDir) continue;
                if ([self miLooksLikeThemeDir:full]) return full;
            }
        }
        return nil;
    }
    return root;
}

- (NSInteger)miVisibleFileCountInDir:(NSString *)dir {
    NSInteger n = 0;
    for (NSString *item in [[NSFileManager defaultManager] contentsOfDirectoryAtPath:dir error:nil]) {
        if ([item hasPrefix:@"."]) continue;
        n++;
    }
    return n;
}

// 特征校验：≥1 个 .png / weui_color*.xml / *.css 即认为有效主题包（D519 实测格式）
- (BOOL)miLooksLikeThemeDir:(NSString *)dir {
    NSFileManager *fm = [NSFileManager defaultManager];
    BOOL isDir = NO;
    if (![fm fileExistsAtPath:dir isDirectory:&isDir] || !isDir) return NO;
    for (NSString *item in [fm contentsOfDirectoryAtPath:dir error:nil]) {
        NSString *ext = item.pathExtension.lowercaseString;
        if ([ext isEqualToString:@"png"] || [ext isEqualToString:@"css"]) return YES;
        if ([ext isEqualToString:@"xml"] && [item.lowercaseString hasPrefix:@"weui_color"]) return YES;
    }
    return NO;
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
