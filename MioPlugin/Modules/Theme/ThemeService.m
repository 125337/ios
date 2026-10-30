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
- (nullable UIImage *)miThemeImageForName:(NSString *)name;
- (BOOL)miApplyColorsForThemeDir:(NSString *)themeDir;
- (void)miNotifyThemeChanged;
- (nullable UIColor *)miThemeColorForName:(NSString *)name;
- (nullable NSDictionary<NSString *, NSString *> *)miParseThemeColors:(NSString *)themeDir;
// 取图子步骤（编排层调用；registerPair hook 也用 miLoadImageAtPath）
- (NSArray<NSString *> *)miLightCandidatesForStem:(NSString *)stem ext:(NSString *)ext threeX:(BOOL)threeX;
- (nullable NSArray<NSString *> *)miDarkCandidateNamesForStem:(NSString *)stem;
- (NSArray<NSString *> *)miDarkFileCandidatesForNames:(NSArray<NSString *> *)names threeX:(BOOL)threeX;
- (nullable UIImage *)miLoadImageAtPath:(nullable NSString *)path;
- (void)miRegisterServedImage:(nullable UIImage *)img lightPath:(nullable NSString *)lightPath darkPath:(nullable NSString *)darkPath;
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
// 图标层（按请求名查 themes/<当前主题>/，按当前屏幕亮暗取亮/暗文件，静态返回）：
//   ① -[MMThemeManager imageNamed:]                 位图（D519 的 PNG 走这里）
//   ② -[MMThemeManager imageNamed:warnIfNotFound:]  内部入口变体（微信代码可能直呼它绕过①）
//   ③ +[WCSVGImage imageNamed:fromConfig:]          SVG 图标位（icons_filled_*/icons_outlined_*）
//   缓存键带亮暗位（微信原生切亮暗时会重新取图，键不含模式会把旧模式的图原样还回去）；
//   暗色下无暗变体 → 用主题亮图（保持整屏同源配色）；文件按 @3x/@2x 后缀设 scale。
// 颜色层：hook 取色查询两个入口（微信助手符号表实锤同款路线）：
//   ④ -[WCColorMgr getColor:]             +[WCColor xxx] 动态类方法真实入口
//   ⑤ -[WCColorMgr getColorValueForName:] 对外查询 API
//   → 主题色表（weui_color_new.xml 旁路解析，按主题缓存）返回动态 UIColor
//   （colorWithDynamicProvider，微信 colorInLightMode:DarkMode: 同款机制），
//   系统切亮暗 UIKit 自动重解析，视图无需重建即当场换色。
// 图标暗色切换（搭微信暗色机器顺风车——实测微信切亮暗不重新取图，靠配对表原地换图）：
//   ⑥ -[DarkModeImageMgr registerPairWithLightImage:darkImage:] 配对侧换暗图：
//   亮图是我们发出的主题图时，暗边直接换成主题包 _Dark 文件，微信自己的亮暗机器
//   切换时经 darkModeImageForImage: 取暗边即得主题暗图（零检测、零重建）。
// 应用主题 = 改配置 + 发切换通知；hook 常驻直读配置，冷启动无需重放。
// ─────────────────────────────────────────────────────────────────────────────

// 原实现
static UIImage *(*g_orig_MMImageNamed)(id, SEL, NSString *);
static UIImage *(*g_orig_MMImageNamedWarn)(id, SEL, NSString *, BOOL);
static UIImage *(*g_orig_SVGImageNamedFromConfig)(id, SEL, NSString *, id);
static id (*g_orig_WCColorMgr_getColor)(id, SEL, NSString *);
static id (*g_orig_WCColorMgr_getColorValueForName)(id, SEL, NSString *);

// 取色时点拦截：任何视图任何时刻查色，主题定义的名字直接返回主题动态 UIColor
// （亮/暗双份，colorWithDynamicProvider 按当前 trait 出色，系统切换自动重解析）。
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

static UIImage *mio_MMThemeManager_imageNamed(id self, SEL _cmd, NSString *name) {
    UIImage *themed = [[ThemeService shared] miThemeImageForName:name];
    if (themed) return themed;
    return g_orig_MMImageNamed(self, _cmd, name);
}

static UIImage *mio_MMThemeManager_imageNamed_warnIfNotFound(id self, SEL _cmd, NSString *name, BOOL warn) {
    UIImage *themed = [[ThemeService shared] miThemeImageForName:name];
    if (themed) return themed;
    return g_orig_MMImageNamedWarn(self, _cmd, name, warn);
}

static UIImage *mio_WCSVGImage_imageNamed_fromConfig(id self, SEL _cmd, NSString *name, id config) {
    UIImage *themed = [[ThemeService shared] miThemeImageForName:name];
    if (themed) return themed;
    return g_orig_SVGImageNamedFromConfig(self, _cmd, name, config);
}

// ── 亮暗配对枢纽（DarkModeImageMgr）──
// 顺风车落点：微信原生把"亮图+暗图"注册成对（registerPairWithLightImage:darkImage:），
// 切暗时经 darkModeImageForImage: 取对的暗边。我们在配对侧换图——亮图若是我们发出的
// 主题图，暗边直接换成主题包 _Dark 文件，微信自己的亮暗机器从此替我们发暗图（零检测、零重建）。
// 发出的主题图身份表：UIImage(弱键) → {light,dark}主题文件路径。
// NSMapTable 弱键：图释放条目自动消失（无增长、无地址复用误判；NSMutableDictionary 会残留）
static NSMapTable<UIImage *, NSDictionary<NSString *, NSString *> *> *g_servedImagePaths = nil;

static id (*g_orig_DM_registerPair)(id, SEL, UIImage *, UIImage *);

// 注意：registerPairWithLightImage:darkImage: 返回 id（头文件实锤），必须透传原实现返回值——
// 写成 void 会让微信拿到 X0 残留垃圾对象调 size → unrecognized selector 闪退（8.0.79 实测）
static id mio_DM_registerPair(id self, SEL _cmd, UIImage *light, UIImage *dark) {
    UIImage *darkFinal = dark;
    if (light) {
        @synchronized(g_servedImagePaths) {
            NSDictionary<NSString *, NSString *> *reg = [g_servedImagePaths objectForKey:light];
            if (reg[@"dark"].length) {
                UIImage *ours = [[ThemeService shared] miLoadImageAtPath:reg[@"dark"]];
                if (ours) darkFinal = ours; // 亮图是我们发的 → 暗边换成主题包暗图
            }
        }
    }
    return g_orig_DM_registerPair(self, _cmd, light, darkFinal);
}

@implementation ThemeService {
    NSCache *_imageCache; // key = 主题名|L/D|请求名，value = UIImage 或 NSNull（未命中也缓存，挡高频磁盘读）
    NSDictionary<NSString *, NSString *> *_themeColorDict; // 主题色表 name → "#light,#dark"（取色时点拦截旁路查询）
    NSString *_themeColorDictPath;                          // 色表来源路径（变更时重载）
}

+ (instancetype)shared {
    static ThemeService *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[ThemeService alloc] init];
        instance->_imageCache = [NSCache new];
        instance->_imageCache.countLimit = 2048;
        g_servedImagePaths = [NSMapTable weakToStrongObjectsMapTable];
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
            SEL sWarn = NSSelectorFromString(@"imageNamed:warnIfNotFound:");
            if (class_getInstanceMethod(mgrCls, sWarn)) {
                MSHookMessageEx(mgrCls, sWarn, (IMP)mio_MMThemeManager_imageNamed_warnIfNotFound, (IMP *)&g_orig_MMImageNamedWarn);
                WPLog(@"Theme", @"[HOOK] ✓ -[MMThemeManager imageNamed:warnIfNotFound:]");
            } else {
                WPLog(@"Theme", @"[HOOK] ✗ MMThemeManager imageNamed:warnIfNotFound: 不存在");
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

        // 亮暗配对枢纽：配对侧换暗图（顺风车落点）
        Class dmCls = objc_getClass("DarkModeImageMgr");
        if (dmCls) {
            SEL sPair = NSSelectorFromString(@"registerPairWithLightImage:darkImage:");
            if (class_getInstanceMethod(dmCls, sPair)) {
                MSHookMessageEx(dmCls, sPair, (IMP)mio_DM_registerPair, (IMP *)&g_orig_DM_registerPair);
                WPLog(@"Theme", @"[HOOK] ✓ -[DarkModeImageMgr registerPairWithLightImage:darkImage:]");
            } else {
                WPLog(@"Theme", @"[HOOK] ✗ registerPairWithLightImage:darkImage: 不存在");
            }
        } else {
            WPLog(@"Theme", @"[HOOK] ✗ DarkModeImageMgr 类不存在");
        }
    });
}

#pragma mark - 主题目录查找（hook 热路径）

// 候选目录内第一个存在的文件；无则 nil
static NSString *MioFirstExistingFile(NSFileManager *fm, NSString *dir, NSArray<NSString *> *cands) {
    for (NSString *c in cands) {
        NSString *full = [dir stringByAppendingPathComponent:c];
        if ([fm fileExistsAtPath:full]) return full;
    }
    return nil;
}

// 返回主题命中图片；未启用/未命中返回 nil。
// 编排：判亮暗 → 查缓存 → 找文件（亮候选 + 暗变体推导）→ 按 scale 加载 → 登记身份。
// 缓存键带亮暗位：微信原生切亮暗时会重新取图，键不含模式会把旧模式的图原样还回去
// （切暗图标不刷新、杀后台才好的根因）。
// 亮暗判定用屏幕级 trait——不能用 UITraitCollection.currentTraitCollection：它只在
// UIKit 回调上下文可靠，微信启动期/后台线程的取图请求拿到的是默认亮色（暗色冷启动出亮图实锤）。
- (nullable UIImage *)miThemeImageForName:(NSString *)name {
    ThemeConfig *cfg = [ThemeConfig shared];
    if (!cfg.enableTheme) return nil;
    NSString *theme = cfg.activeThemeName;
    if (theme.length == 0 || name.length == 0 || [name containsString:@"/"]) return nil;

    NSString *dir = [[ThemeConfig mioThemesDir] stringByAppendingPathComponent:theme];
    NSFileManager *fm = [NSFileManager defaultManager];
    BOOL dark = [UIScreen mainScreen].traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark;
    BOOL threeX = [UIScreen mainScreen].scale >= 3;

    NSString *key = [theme stringByAppendingFormat:@"|%@|%@", dark ? @"D" : @"L", name];
    id cached = [_imageCache objectForKey:key];
    if (cached) return cached == [NSNull null] ? nil : cached;

    NSString *stem = name;
    NSString *ext = name.pathExtension.lowercaseString;
    if (ext.length) stem = [name stringByDeletingPathExtension];

    NSString *lightPath = MioFirstExistingFile(fm, dir, [self miLightCandidatesForStem:stem ext:ext threeX:threeX]);
    NSArray<NSString *> *darkNames = [self miDarkCandidateNamesForStem:stem];
    NSString *darkPath = darkNames.count ? MioFirstExistingFile(fm, dir, [self miDarkFileCandidatesForNames:darkNames threeX:threeX]) : nil;

    UIImage *result = nil;
    if (lightPath || darkPath) {
        UIImage *lightImg = [self miLoadImageAtPath:lightPath];
        UIImage *darkImg = [self miLoadImageAtPath:darkPath];
        if (dark) {
            result = darkImg ?: lightImg; // 无暗变体 → 用主题亮图（主题包覆盖不全时保持整屏同源配色）
        } else {
            result = lightImg ?: darkImg; // 亮色：亮图优先（个别包对亮名只提供暗名资源时兜底）
        }
        if (result) [self miRegisterServedImage:result lightPath:lightPath darkPath:darkPath];
    }

    [_imageCache setObject:(result ?: [NSNull null]) forKey:key cost:1];
    return result;
}

#pragma mark - 取图子步骤（候选名 / 加载 / 登记）

// 亮图候选：@3x（按屏）→ @2x → .png；带非 png 扩展名时原样兜底
- (NSArray<NSString *> *)miLightCandidatesForStem:(NSString *)stem ext:(NSString *)ext threeX:(BOOL)threeX {
    NSMutableArray<NSString *> *cands = [NSMutableArray array];
    if (threeX) [cands addObject:[stem stringByAppendingString:@"@3x.png"]];
    [cands addObject:[stem stringByAppendingString:@"@2x.png"]];
    [cands addObject:[stem stringByAppendingString:@".png"]];
    if (ext.length && ![ext isEqualToString:@"png"]) [cands addObject:[stem stringByAppendingPathExtension:ext]];
    return cands;
}

// 暗色变体名推导（D519 实锤五种形态，微信按自家暗色状态直接点名请求）：
//   ① 成对替换：XXX_White → XXX_Dark（接收气泡 White ↔ Dark 成对，最关键）
//   ② 追加：    XXX → XXX_Dark
//   ③ 小写追加：XXX → XXX_dark（dt_icon/fileicon_* 系）
//   ④ 插入：    XXX_HL → XXX_Dark_HL（高亮气泡）
//   ⑤ darkmode：XXX → XXX_darkmode（weapp_more 等）
// 请求名本身已带暗后缀 → 无需推导
- (nullable NSArray<NSString *> *)miDarkCandidateNamesForStem:(NSString *)stem {
    if ([stem hasSuffix:@"_Dark"] || [stem hasSuffix:@"_dark"] || [stem hasSuffix:@"_darkmode"]) return nil;
    NSMutableArray<NSString *> *names = [NSMutableArray array];
    NSRange white = [stem rangeOfString:@"_White" options:NSBackwardsSearch];
    if (white.location != NSNotFound) [names addObject:[stem stringByReplacingCharactersInRange:white withString:@"_Dark"]];
    NSRange hl = [stem rangeOfString:@"_HL" options:NSBackwardsSearch];
    if (hl.location != NSNotFound) [names addObject:[stem stringByReplacingCharactersInRange:hl withString:@"_Dark_HL"]];
    [names addObject:[stem stringByAppendingString:@"_Dark"]];
    [names addObject:[stem stringByAppendingString:@"_dark"]];
    [names addObject:[stem stringByAppendingString:@"_darkmode"]];
    return names;
}

// 变体名 → 文件名候选（@3x 按屏 → @2x → .png）
- (NSArray<NSString *> *)miDarkFileCandidatesForNames:(NSArray<NSString *> *)names threeX:(BOOL)threeX {
    NSMutableArray<NSString *> *cands = [NSMutableArray array];
    for (NSString *dn in names) {
        if (threeX) [cands addObject:[dn stringByAppendingString:@"@3x.png"]];
        [cands addObject:[dn stringByAppendingString:@"@2x.png"]];
        [cands addObject:[dn stringByAppendingString:@".png"]];
    }
    return cands;
}

// 文件 → UIImage：按文件名 @3x/@2x 后缀设 scale（imageWithContentsOfFile 不认后缀，
// scale 恒 1 会让 image.size 是逻辑点尺寸的 3 倍，按 size 布局的页面会炸）
- (nullable UIImage *)miLoadImageAtPath:(nullable NSString *)path {
    if (path.length == 0) return nil;
    NSData *data = [NSData dataWithContentsOfFile:path];
    if (!data) return nil;
    CGFloat scale = 1.0;
    NSString *stem = path.lastPathComponent.stringByDeletingPathExtension;
    if ([stem hasSuffix:@"@3x"]) scale = 3.0;
    else if ([stem hasSuffix:@"@2x"]) scale = 2.0;
    return [UIImage imageWithData:data scale:scale];
}

// 身份登记：发出的主题图（弱键，图释放条目自清）→ 亮暗路径；DarkModeImageMgr 配对时反查换暗图
- (void)miRegisterServedImage:(nullable UIImage *)img lightPath:(nullable NSString *)lightPath darkPath:(nullable NSString *)darkPath {
    if (!img || (!lightPath.length && !darkPath.length)) return;
    @synchronized(g_servedImagePaths) {
        [g_servedImagePaths setObject:@{@"light": lightPath ?: @"", @"dark": darkPath ?: @""}
                               forKey:img];
    }
}

- (void)miClearImageCache {
    [_imageCache removeAllObjects];
    @synchronized(g_servedImagePaths) {
        [g_servedImagePaths removeAllObjects];
    }
    WPLog(@"Theme", @"[CACHE] 主题图缓存已清");
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

    // "#light,#dark" → 动态 UIColor（微信 colorInLightMode:DarkMode: 同款机制）：
    // 亮/暗两份都解析，由 colorWithDynamicProvider 按当前 trait 出色——系统切亮暗时
    // UIKit 自动重新解析，持有颜色引用的视图（置顶会话/底栏等）无需重建即当场换色
    NSString *lightHex = pair, *darkHex = nil;
    NSRange comma = [pair rangeOfString:@","];
    if (comma.location != NSNotFound) {
        lightHex = [[pair substringToIndex:comma.location] stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
        darkHex = [[pair substringFromIndex:comma.location + 1] stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
    }
    if (lightHex.length == 0) return nil;

    // 纯解析：hex 为 #RRGGBB[AA]（D519 实测 8 位 = RRGGBBAA，如 #000000E5 = alpha 0.9）。
    // 不能回调引擎 hexStringToColor:——getColor: 是微信内部热路径（锁内调用链），
    // 从 hook 里再进引擎（m_lock 为 os_unfair_lock，不可重入）会死锁闪退。
    UIColor *lightColor = [self miColorFromHex:lightHex];
    if (!lightColor) return nil;
    UIColor *darkColor = darkHex.length ? [self miColorFromHex:darkHex] : nil;
    if (!darkColor) return lightColor;   // 主题未给暗色分支 → 亮暗同色
    return [UIColor colorWithDynamicProvider:^UIColor * (UITraitCollection *traits) {
        return traits.userInterfaceStyle == UIUserInterfaceStyleDark ? darkColor : lightColor;
    }];
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
    [self miClearImageCache];
    [self miNotifyThemeChanged];
    WPLog(@"Theme", @"[APPLY] 主题已应用: %@", name);
    return YES;
}

- (BOOL)restoreDefaultTheme {
    ThemeConfig *cfg = [ThemeConfig shared];
    cfg.activeThemeName = @"";
    [ConfigManager saveAll];
    [self miRestoreColors];
    [self miClearImageCache];
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
        [self miClearImageCache];
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
