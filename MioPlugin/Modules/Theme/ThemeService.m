//
//  ThemeService.m
//  MioPlugin
//

#import "ThemeService.h"
#import "ThemeConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/LogManager.h"
#import <objc/message.h>
#import <UIKit/UIKit.h>
#import <substrate.h>

@interface ThemeService ()
- (nullable NSString *)miCachedThemeImagePathForName:(NSString *)name;
@end

// ─────────────────────────────────────────────────────────────────────────────
// 取图拦截架构（WXHelper 3.9-5 逆向实锤：它不用 themeFromPath/theme.inf/setCurrentTheme，
// 引擎注册路线对元数据/CSS 有隐藏要求且 D519 实测走不通，全部废弃）。
//
// 机制：hook 微信取图层两个入口，启用主题时按请求名查 themes/<当前主题>/：
//   ① -[MMThemeManager imageNamed:]        位图（D519 的 PNG 走这里）
//   ② +[WCSVGImage imageNamed:fromConfig:] SVG 图标位（icons_filled_*/icons_outlined_*）
//   命中 → [UIImage imageWithContentsOfFile:]；未命中 → 原实现（引擎缓存零污染）。
//   _dark/_Dark 变体天然支持（请求名自带后缀，按名查找自动覆盖）。
//   应用主题 = 改配置 + 发切换通知；hook 常驻直读配置，冷启动无需重放。
// ─────────────────────────────────────────────────────────────────────────────

// 原实现
static UIImage *(*g_orig_MMImageNamed)(id, SEL, NSString *);
static UIImage *(*g_orig_SVGImageNamedFromConfig)(id, SEL, NSString *, id);
static void (*g_orig_WCColorMgr_loadColorFromXML)(id, SEL);

// 微信自己加载完颜色表的瞬间重放主题色（时机对齐：早于微信则被覆盖、晚于主界面创建则首屏陈旧；
// 我们自己用 loadColorFromXMLByPath: 应用，不走此方法，无递归）
static void mio_WCColorMgr_loadColorFromXML(id self, SEL _cmd) {
    g_orig_WCColorMgr_loadColorFromXML(self, _cmd);
    ThemeConfig *cfg = [ThemeConfig shared];
    if (!cfg.enableTheme || cfg.activeThemeName.length == 0) return;
    dispatch_async(dispatch_get_main_queue(), ^{
        NSString *dir = [[ThemeConfig mioThemesDir] stringByAppendingPathComponent:cfg.activeThemeName];
        if ([[ThemeService shared] miApplyColorsForThemeDir:dir]) {
            [[ThemeService shared] miNotifyThemeChanged];
        }
    });
}

static UIImage *mio_MMThemeManager_imageNamed(id self, SEL _cmd, NSString *name) {
    NSString *path = [[ThemeService shared] miCachedThemeImagePathForName:name];
    if (path) {
        UIImage *img = [UIImage imageWithContentsOfFile:path];
        if (img) return img;
    }
    return g_orig_MMImageNamed(self, _cmd, name);
}

static UIImage *mio_WCSVGImage_imageNamed_fromConfig(id self, SEL _cmd, NSString *name, id config) {
    NSString *path = [[ThemeService shared] miCachedThemeImagePathForName:name];
    if (path) {
        UIImage *img = [UIImage imageWithContentsOfFile:path];
        if (img) return img;
    }
    return g_orig_SVGImageNamedFromConfig(self, _cmd, name, config);
}

@implementation ThemeService {
    NSCache *_pathCache; // key = 主题名|请求名，value = 路径或 NSNull（未命中也缓存，挡高频磁盘读）
    NSInteger _hitCount;
}

+ (instancetype)shared {
    static ThemeService *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[ThemeService alloc] init];
        instance->_pathCache = [NSCache new];
        instance->_pathCache.countLimit = 2048;
    });
    return instance;
}

#pragma mark - hook 安装（ThemeHook.install 调用，进程加载即生效）

- (void)installHooks {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        Class mgrCls = objc_getClass("MMThemeManager");
        if (mgrCls) {
            SEL s = NSSelectorFromString(@"imageNamed:");
            if (class_getInstanceMethod(mgrCls, s)) {
                MSHookMessageEx(mgrCls, s, (IMP)mio_MMThemeManager_imageNamed, (IMP *)&g_orig_MMImageNamed);
                WPLog(@"Theme", @"[HOOK] ✓ -[MMThemeManager imageNamed:]");
            } else {
                WPLog(@"Theme", @"[HOOK] ✗ MMThemeManager imageNamed: 不存在");
            }
        } else {
            WPLog(@"Theme", @"[HOOK] ✗ MMThemeManager 类不存在");
        }

        Class svgCls = objc_getClass("WCSVGImage");
        if (svgCls) {
            SEL s2 = NSSelectorFromString(@"imageNamed:fromConfig:");
            if (class_getClassMethod(svgCls, s2)) {
                // 类方法 → hook 元类
                MSHookMessageEx(object_getClass(svgCls), s2,
                                (IMP)mio_WCSVGImage_imageNamed_fromConfig, (IMP *)&g_orig_SVGImageNamedFromConfig);
                WPLog(@"Theme", @"[HOOK] ✓ +[WCSVGImage imageNamed:fromConfig:]");
            } else {
                WPLog(@"Theme", @"[HOOK] ✗ WCSVGImage imageNamed:fromConfig: 不存在");
            }
        } else {
            WPLog(@"Theme", @"[HOOK] ✗ WCSVGImage 类不存在");
        }

        Class colorMgrCls = objc_getClass("WCColorMgr");
        if (colorMgrCls) {
            SEL s3 = NSSelectorFromString(@"loadColorFromXML");
            if (class_getInstanceMethod(colorMgrCls, s3)) {
                MSHookMessageEx(colorMgrCls, s3, (IMP)mio_WCColorMgr_loadColorFromXML, (IMP *)&g_orig_WCColorMgr_loadColorFromXML);
                WPLog(@"Theme", @"[HOOK] ✓ -[WCColorMgr loadColorFromXML]");
            } else {
                WPLog(@"Theme", @"[HOOK] ✗ WCColorMgr loadColorFromXML 不存在");
            }
        } else {
            WPLog(@"Theme", @"[HOOK] ✗ WCColorMgr 类不存在");
        }
    });
}

#pragma mark - 主题目录查找（hook 热路径）

// 返回主题目录内命中的图片路径；未启用/未命中返回 nil
- (nullable NSString *)miCachedThemeImagePathForName:(NSString *)name {
    ThemeConfig *cfg = [ThemeConfig shared];
    if (!cfg.enableTheme) return nil;
    NSString *theme = cfg.activeThemeName;
    if (theme.length == 0 || name.length == 0 || [name containsString:@"/"]) return nil;

    NSString *key = [theme stringByAppendingFormat:@"|%@", name];
    id cached = [_pathCache objectForKey:key];
    if (cached) return cached == [NSNull null] ? nil : cached;

    // 候选：去扩展名 → @3x（按屏）→ @2x → .png；带非 png 扩展名时原样兜底
    NSString *stem = name;
    NSString *ext = name.pathExtension.lowercaseString;
    if (ext.length) stem = [name stringByDeletingPathExtension];

    NSMutableArray<NSString *> *cands = [NSMutableArray array];
    if ([UIScreen mainScreen].scale >= 3) [cands addObject:[stem stringByAppendingString:@"@3x.png"]];
    [cands addObject:[stem stringByAppendingString:@"@2x.png"]];
    [cands addObject:[stem stringByAppendingString:@".png"]];
    if (ext.length && ![ext isEqualToString:@"png"]) [cands addObject:name];

    NSString *dir = [[ThemeConfig mioThemesDir] stringByAppendingPathComponent:theme];
    NSFileManager *fm = [NSFileManager defaultManager];
    NSString *found = nil;
    for (NSString *c in cands) {
        NSString *full = [dir stringByAppendingPathComponent:c];
        if ([fm fileExistsAtPath:full]) { found = full; break; }
    }
    [_pathCache setObject:(found ?: [NSNull null]) forKey:key cost:1];

    if (found) {
        _hitCount++;
        if (_hitCount <= 5 || _hitCount % 100 == 0) {
            WPLog(@"Theme", @"[IMG] 命中(%ld): %@ → %@", (long)_hitCount, name, found.lastPathComponent);
        }
    }
    return found;
}

- (void)miClearPathCache {
    [_pathCache removeAllObjects];
    WPLog(@"Theme", @"[CACHE] 主题图路径缓存已清");
}

#pragma mark - 颜色层（weui_color_new.xml → WCColorMgr 引擎自带加载器）

- (nullable id)miColorMgr {
    Class cls = objc_getClass("WCColorMgr");
    if (!cls) return nil;
    SEL s = NSSelectorFromString(@"sharedInstance");
    if (![cls respondsToSelector:s]) return nil;
    return ((id (*)(id, SEL))objc_msgSend)(cls, s);
}

// 用引擎自己的 loadColorFromXMLByPath: 加载主题色表（引擎自行解析亮/暗 _currentType、
// 维护内部缓存）。自写解析器塞 colorDic 的路线已废弃——引擎解析时按类型拆分存储，
// 原样塞 "#light,#dark" 串会渲染错乱（D519 实测）。
- (BOOL)miApplyColorsForThemeDir:(NSString *)themeDir {
    id mgr = [self miColorMgr];
    SEL loadSel = NSSelectorFromString(@"loadColorFromXMLByPath:");
    if (!mgr || ![mgr respondsToSelector:loadSel]) {
        WPLog(@"Theme", @"[COLOR] WCColorMgr/loadColorFromXMLByPath: 不可用，跳过颜色层");
        return NO;
    }
    NSString *xmlPath = [themeDir stringByAppendingPathComponent:@"weui_color_new.xml"];
    if (![[NSFileManager defaultManager] fileExistsAtPath:xmlPath]) {
        WPLog(@"Theme", @"[COLOR] 主题无 weui_color_new.xml（纯图标包），跳过颜色层");
        return NO;
    }
    BOOL ok = ((BOOL (*)(id, SEL, NSString *))objc_msgSend)(mgr, loadSel, xmlPath);
    WPLog(@"Theme", @"[COLOR] 引擎加载主题色表 %@ → %@", xmlPath.lastPathComponent, ok ? @"OK" : @"FAIL");
    return ok;
}

// 还原原生色表：重载 app 原包（引擎内部处理解析/缓存/类型，快照方案废弃）
- (void)miRestoreColors {
    id mgr = [self miColorMgr];
    SEL l = NSSelectorFromString(@"loadColorFromXML");
    if (mgr && [mgr respondsToSelector:l]) {
        ((void (*)(id, SEL))objc_msgSend)(mgr, l);
        WPLog(@"Theme", @"[COLOR] 原生颜色表已还原（loadColorFromXML）");
    }
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

#pragma mark - 应用 / 恢复默认（改配置 + 通知，不碰引擎状态）

- (BOOL)applyThemeNamed:(NSString *)name {
    NSString *path = [[ThemeConfig mioThemesDir] stringByAppendingPathComponent:name];
    BOOL isDir = NO;
    if (name.length == 0 || [name containsString:@"/"] || [name containsString:@".."] ||
        ![[NSFileManager defaultManager] fileExistsAtPath:path isDirectory:&isDir] || !isDir) {
        WPLog(@"Theme", @"[APPLY] 主题目录无效: %@", name);
        return NO;
    }
    ThemeConfig *cfg = [ThemeConfig shared];
    cfg.enableTheme = YES;
    cfg.activeThemeName = name;
    [ConfigManager saveAll];
    [self miApplyColorsForThemeDir:path]; // 颜色层（无 xml 的纯图标包自动跳过）
    [self miClearPathCache];
    [self miNotifyThemeChanged];
    WPLog(@"Theme", @"[APPLY] 主题已应用: %@", name);
    return YES;
}

- (BOOL)restoreDefaultTheme {
    ThemeConfig *cfg = [ThemeConfig shared];
    cfg.activeThemeName = @"";
    [ConfigManager saveAll];
    [self miRestoreColors];
    [self miClearPathCache];
    [self miNotifyThemeChanged];
    WPLog(@"Theme", @"[RESTORE] 已恢复微信默认主题");
    return YES;
}

// 切换通知（XOS 1.5.9 dylib 实锤常量名）：驱动在屏 UI 重建取图
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
    if (ok) {
        BOOL wasActive = [[ThemeConfig shared].activeThemeName isEqualToString:name];
        if (wasActive) {
            ThemeConfig *cfg = [ThemeConfig shared];
            cfg.activeThemeName = @"";
            [ConfigManager saveAll];
            [self miRestoreColors];
        }
        [self miClearPathCache];
        if (wasActive) [self miNotifyThemeChanged]; // 新请求回落原生资源
    }
    return ok;
}

#pragma mark - 冷启动重放（仅颜色层；图标层 hook 常驻直读配置，无需重放）

// ThemeHook.install 延迟调用：配置里有主题时重新替换 WCColorMgr 色表（colorDic 是内存态，
// 微信启动 loadColorFromXML 会用原生表覆盖，必须在其后重放）
- (void)reapplyColorsOnLaunch {
    ThemeConfig *cfg = [ThemeConfig shared];
    if (!cfg.enableTheme || cfg.activeThemeName.length == 0) {
        WPLog(@"Theme", @"[REPLAY] 无启用主题，颜色层跳过");
        return;
    }
    NSString *path = [[ThemeConfig mioThemesDir] stringByAppendingPathComponent:cfg.activeThemeName];
    BOOL ok = [self miApplyColorsForThemeDir:path];
    WPLog(@"Theme", @"[REPLAY] 颜色层重放 %@ → %@", cfg.activeThemeName, ok ? @"OK" : @"SKIP/FAIL");
    if (ok) [self miNotifyThemeChanged]; // 刷新首屏陈旧视图
}

#pragma mark - 显示名

- (NSString *)currentThemeDisplayName {
    NSString *configured = [ThemeConfig shared].activeThemeName;
    return configured.length ? configured : @"默认";
}

@end
