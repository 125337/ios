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
- (BOOL)miApplyColorsForThemeDir:(NSString *)themeDir;
- (void)miNotifyThemeChanged;
- (nullable UIColor *)miThemeColorForName:(NSString *)name;
- (nullable NSDictionary<NSString *, NSString *> *)miParseThemeColors:(NSString *)themeDir;
@end

// weui_color_new.xml 解析器：<color name="X">#light,#dark</color>（亮/暗逗号对，
// 与微信原生同款格式；仅用于取色时点拦截的旁路查询表，引擎自己的解析不受影响）
@interface _MioColorXmlParser : NSObject <NSXMLParserDelegate>
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSString *> *result;
@property (nonatomic, copy) NSString *curName;
@property (nonatomic, strong) NSMutableString *buf;
@end
@implementation _MioColorXmlParser
- (void)parser:(NSXMLParser *)parser didStartElement:(NSString *)elementName namespaceURI:(NSString *)namespaceURI qualifiedName:(NSString *)qualifiedName attributes:(NSDictionary<NSString *, NSString *> *)attributeDict {
    if ([elementName isEqualToString:@"color"]) {
        self.curName = attributeDict[@"name"];
        self.buf = [NSMutableString string];
    }
}
- (void)parser:(NSXMLParser *)parser foundCharacters:(NSString *)string {
    [self.buf appendString:string];
}
- (void)parser:(NSXMLParser *)parser didEndElement:(NSString *)elementName namespaceURI:(NSString *)namespaceURI qualifiedName:(NSString *)qualifiedName {
    if ([elementName isEqualToString:@"color"] && self.curName.length) {
        NSString *v = [self.buf stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (v.length) self.result[self.curName] = v;
    }
    self.curName = nil;
    self.buf = nil;
}
@end

// ─────────────────────────────────────────────────────────────────────────────
// 主题拦截架构（微信助手 3.9-5 实证路线：取点拦截，不碰引擎注册/CSS）。
//
// 图标层：hook 微信取图层，启用主题时按请求名查 themes/<当前主题>/：
//   ① -[MMThemeManager imageNamed:]        位图（D519 的 PNG 走这里）
//   ② +[WCSVGImage imageNamed:fromConfig:] SVG 图标位（icons_filled_*/icons_outlined_*）
//   命中 → [UIImage imageWithContentsOfFile:]；未命中 → 原实现（引擎缓存零污染）。
// 颜色层：hook 取色查询两个入口（微信助手符号表实锤同款路线）：
//   ③ -[WCColorMgr getColor:]             +[WCColor xxx] 动态类方法真实入口
//   ④ -[WCColorMgr getColorValueForName:] 对外查询 API
//   → 主题色表（weui_color_new.xml 旁路解析，按主题缓存）亮暗按 trait 拆分，纯 hex 解析。
// 亮暗切换：hook -[UIWindow traitCollectionDidChange:]，系统切亮暗当场发微信
//   主题切换通知驱动在屏 UI 重建取色（无定时器无轮询）。
// 应用主题 = 改配置 + 发切换通知；hook 常驻直读配置，冷启动无需重放。
// ─────────────────────────────────────────────────────────────────────────────

// 原实现
static UIImage *(*g_orig_MMImageNamed)(id, SEL, NSString *);
static UIImage *(*g_orig_SVGImageNamedFromConfig)(id, SEL, NSString *, id);
static id (*g_orig_WCColorMgr_getColor)(id, SEL, NSString *);
static id (*g_orig_WCColorMgr_getColorValueForName)(id, SEL, NSString *);
static void (*g_orig_UIWindow_traitCollectionDidChange)(id, SEL, UITraitCollection *);

// 取色时点拦截：任何视图任何时刻查色，主题定义的名字直接返回主题色（亮/暗按系统外观拆分，
// hex 纯解析）。与视图创建时机无关——顶栏/底栏/搜索栏等组件首屏即主题色。
// getColor: 是 +[WCColor xxx] 全部动态类方法（resolveClassMethod:）的真实入口；
// getColorValueForName: 是另一条对外查询 API。两个查询面都拦。
static id mio_WCColorMgr_getColor(id self, SEL _cmd, NSString *name) {
    UIColor *themed = [[ThemeService shared] miThemeColorForName:name];
    if (themed) return themed;
    return g_orig_WCColorMgr_getColor(self, _cmd, name);
}

static id mio_WCColorMgr_getColorValueForName(id self, SEL _cmd, NSString *name) {
    UIColor *themed = [[ThemeService shared] miThemeColorForName:name];
    if (themed) return themed;
    return g_orig_WCColorMgr_getColorValueForName(self, _cmd, name);
}

// 系统亮暗切换：UIWindow trait 变化 → 当场发微信主题切换通知，在屏 UI 重建并
// 经取色拦截拿到新亮暗分支的主题色（无需杀进程重进）
static void mio_UIWindow_traitCollectionDidChange(id self, SEL _cmd, UITraitCollection *previous) {
    g_orig_UIWindow_traitCollectionDidChange(self, _cmd, previous);
    ThemeConfig *cfg = [ThemeConfig shared];
    if (!cfg.enableTheme || cfg.activeThemeName.length == 0) return;
    UITraitCollection *cur = [(UIView *)self traitCollection];
    if (!previous || !cur || previous.userInterfaceStyle == cur.userInterfaceStyle) return;
    [[ThemeService shared] miNotifyThemeChanged];
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
    NSDictionary<NSString *, NSString *> *_themeColorDict; // 主题色表 name → "#light,#dark"（取色时点拦截旁路查询）
    NSString *_themeColorDictPath;                          // 色表来源路径（变更时重载）
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
            SEL s4 = NSSelectorFromString(@"getColorValueForName:");
            if (class_getInstanceMethod(colorMgrCls, s4)) {
                MSHookMessageEx(colorMgrCls, s4, (IMP)mio_WCColorMgr_getColorValueForName, (IMP *)&g_orig_WCColorMgr_getColorValueForName);
                WPLog(@"Theme", @"[HOOK] ✓ -[WCColorMgr getColorValueForName:]");
            } else {
                WPLog(@"Theme", @"[HOOK] ✗ WCColorMgr getColorValueForName: 不存在");
            }
            SEL s5 = NSSelectorFromString(@"getColor:");
            if (class_getInstanceMethod(colorMgrCls, s5)) {
                MSHookMessageEx(colorMgrCls, s5, (IMP)mio_WCColorMgr_getColor, (IMP *)&g_orig_WCColorMgr_getColor);
                WPLog(@"Theme", @"[HOOK] ✓ -[WCColorMgr getColor:]");
            } else {
                WPLog(@"Theme", @"[HOOK] ✗ WCColorMgr getColor: 不存在");
            }
        } else {
            WPLog(@"Theme", @"[HOOK] ✗ WCColorMgr 类不存在");
        }

        // 系统亮暗切换 → 当场重刷主题色（UIWindow trait 变化是系统切外观的必经时点）
        Class winCls = objc_getClass("UIWindow");
        SEL s6 = NSSelectorFromString(@"traitCollectionDidChange:");
        if (winCls && class_getInstanceMethod(winCls, s6)) {
            MSHookMessageEx(winCls, s6, (IMP)mio_UIWindow_traitCollectionDidChange, (IMP *)&g_orig_UIWindow_traitCollectionDidChange);
            WPLog(@"Theme", @"[HOOK] ✓ -[UIWindow traitCollectionDidChange:]");
        } else {
            WPLog(@"Theme", @"[HOOK] ✗ UIWindow traitCollectionDidChange: 不存在");
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

#pragma mark - 取色时点拦截（getColor:/getColorValueForName: hook 的查询侧）

// 解析主题色表：weui_color_new.xml → name → "#light,#dark"（_MioColorXmlParser 旁路解析，
// 不碰引擎状态；结果由调用方按路径缓存，每个主题只解析一次）
- (nullable NSDictionary<NSString *, NSString *> *)miParseThemeColors:(NSString *)themeDir {
    NSString *xmlPath = [themeDir stringByAppendingPathComponent:@"weui_color_new.xml"];
    if (![[NSFileManager defaultManager] fileExistsAtPath:xmlPath]) return nil;
    NSXMLParser *parser = [[NSXMLParser alloc] initWithContentsOfURL:[NSURL fileURLWithPath:xmlPath]];
    if (!parser) return nil;
    _MioColorXmlParser *delegate = [[_MioColorXmlParser alloc] init];
    delegate.result = [NSMutableDictionary dictionary];
    parser.delegate = delegate;
    [parser parse];
    NSDictionary<NSString *, NSString *> *result = [delegate.result copy];
    WPLog(@"Theme", @"[COLOR] 主题色表解析完成：%lu 项", (unsigned long)result.count);
    return result;
}

// 查询主题色：主题定义了该名字 → 返回主题 UIColor；否则 nil 走原实现。
// 亮/暗按系统外观拆分逗号对，hex 纯解析（#RRGGBB[AA]）——全路径零回调引擎。
- (nullable UIColor *)miThemeColorForName:(NSString *)name {
    if (name.length == 0 || [name containsString:@"/"]) return nil;
    ThemeConfig *cfg = [ThemeConfig shared];
    if (!cfg.enableTheme || cfg.activeThemeName.length == 0) return nil;

    NSString *themeDir = [[ThemeConfig mioThemesDir] stringByAppendingPathComponent:cfg.activeThemeName];
    NSString *xmlPath = [themeDir stringByAppendingPathComponent:@"weui_color_new.xml"];
    if (!_themeColorDict || ![_themeColorDictPath isEqualToString:xmlPath]) {
        _themeColorDict = [self miParseThemeColors:themeDir] ?: @{};
        _themeColorDictPath = xmlPath;
    }
    NSString *pair = _themeColorDict[name];
    if (pair.length == 0) return nil;

    // "#light,#dark" → 按系统外观取一
    NSString *hex = pair;
    NSRange comma = [pair rangeOfString:@","];
    if (comma.location != NSNotFound) {
        BOOL dark = [UITraitCollection currentTraitCollection].userInterfaceStyle == UIUserInterfaceStyleDark;
        hex = dark ? [pair substringFromIndex:comma.location + 1] : [pair substringToIndex:comma.location];
        hex = [hex stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
    }
    if (hex.length == 0) return nil;

    // 纯解析：hex 为 #RRGGBB[AA]（D519 实测 8 位 = RRGGBBAA，如 #000000E5 = alpha 0.9）。
    // 不能回调引擎 hexStringToColor:——getColor: 是微信内部热路径（锁内调用链），
    // 从 hook 里再进引擎（m_lock 为 os_unfair_lock，不可重入）会死锁闪退。
    return [self miColorFromHex:hex];
}

- (nullable UIColor *)miColorFromHex:(NSString *)hexStr {
    // 按 2 位一组切分（scanHexInt 会连续吃掉全部 hex 位，不能用）
    NSString *h = [hexStr stringByReplacingOccurrencesOfString:@"#" withString:@""];
    if (h.length < 6) return nil;
    unsigned int r = 0, g = 0, b = 0, a = 255;
    [[NSScanner scannerWithString:[h substringWithRange:NSMakeRange(0, 2)]] scanHexInt:&r];
    [[NSScanner scannerWithString:[h substringWithRange:NSMakeRange(2, 2)]] scanHexInt:&g];
    [[NSScanner scannerWithString:[h substringWithRange:NSMakeRange(4, 2)]] scanHexInt:&b];
    if (h.length >= 8) {
        [[NSScanner scannerWithString:[h substringWithRange:NSMakeRange(6, 2)]] scanHexInt:&a];
    }
    return [UIColor colorWithRed:r / 255.0 green:g / 255.0 blue:b / 255.0 alpha:a / 255.0];
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

#pragma mark - 显示名

- (NSString *)currentThemeDisplayName {
    NSString *configured = [ThemeConfig shared].activeThemeName;
    return configured.length ? configured : @"默认";
}

@end
