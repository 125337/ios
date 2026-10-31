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
// 壁纸层（ChatBackgroundMgr hook 查询侧）
- (nullable NSString *)miWallpaperPathOverride;
- (nullable NSString *)miWallpaperPathForMode:(BOOL)dark;
- (nullable UIImage *)miWallpaperImageForMode:(BOOL)dark;
- (nullable UIColor *)miWallpaperPatternColorForName:(NSString *)name;
- (BOOL)miWallpaperActive;
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
// ③ +[WCSVGImage imageNamed:...]               SVG 图标位（icons_filled_*/icons_outlined_*）
//   —— WCSVGImage 取图是一整族类方法（imageNamed:/color:/size:/fromConfig: 等 8 个变体），
//   底栏带颜色/尺寸参数走的是 imageNamed:color: 等变体（log 70 实证 fromConfig 一个不够），
//   家族全 hook，命中主题包文件则返回主题 PNG（tint 参数忽略），未命中走原实现。
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
// 壁纸层：hook 聊天背景路径查询（⑦），三级来源——主题包内壁纸图（文件名含
// wallpaper/chat_bg/chatbg 即候选，不强制主题包规范）→ 用户自设图
// （Library/Preferences/Mio/wallpaper[_dark].png）→ 无则放行原实现；
// 无暗版用亮图，与图标层同规则。
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
// ── 诊断：取色全链路（每名一次，cap 120）──
static void MioLogColorProbe(NSString *entry, NSString *name, BOOL hit) {
    static NSMutableSet<NSString *> *seen = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{ seen = [NSMutableSet set]; });
    if (!name || seen.count > 120 || [seen containsObject:name]) return;
    [seen addObject:name];
    WPLog(@"Theme", @"[COLOR] %@ name=%@ 主题命中=%d", entry, name, hit);
}

static id mio_WCColorMgr_getColor(id self, SEL _cmd, NSString *name) {
    UIColor *themed = [[ThemeService shared] miThemeColorForName:name];
    MioLogColorProbe(@"getColor", name, themed != nil);
    if (themed) return themed;
    return g_orig_WCColorMgr_getColor(self, _cmd, name);
}

static id mio_WCColorMgr_getColorValueForName(id self, SEL _cmd, NSString *name) {
    UIColor *themed = [[ThemeService shared] miThemeColorForName:name];
    MioLogColorProbe(@"getColorValueForName", name, themed != nil);
    if (themed) return themed;
    return g_orig_WCColorMgr_getColorValueForName(self, _cmd, name);
}

// ── 底栏图标改名映射（8.0.80 → 主题包老名）──
// log 72 实证：8.0.80 底栏走 SVG.imageNamed:size:color:alpha:rotate:，请求新名
// bubble_circle/person_list/discover/person × regular/filled；主题包均按老名
// icons_outlined/filled_{chatbox,contacts,discover,me} 制作。新名→老名映射，
// 旧版微信（8.0.54 实证同名族）只问老名，映射不触发，零副作用。
// 注：icons_outlined_chatbox 两个包均无（未选中会话 tab，只能原生）。
static NSString *MioLegacyImageNameForModernName(NSString *stem) {
    static NSDictionary<NSString *, NSString *> *map = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        map = @{
            @"bubble_circle_regular": @"icons_outlined_chatbox",
            @"bubble_circle_filled":  @"icons_filled_chatbox",
            @"person_list_regular":   @"icons_outlined_contacts",
            @"person_list_filled":    @"icons_filled_contacts",
            @"discover_regular":      @"icons_outlined_discover",
            @"discover_filled":       @"icons_filled_discover",
            @"person_regular":        @"icons_outlined_me",
            @"person_filled":         @"icons_filled_me",
        };
    });
    return map[stem];
}

// ── 诊断：取图全链路日志（每个入口每个名字只打一次，cap 400）──
static void MioLogImgRequest(NSString *entry, NSString *name, BOOL hit) {
    static NSMutableSet<NSString *> *seen = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{ seen = [NSMutableSet set]; });
    if (!name || seen.count > 400 || [seen containsObject:name]) return;
    [seen addObject:name];
    BOOL dark = [UIScreen mainScreen].traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark;
    WPLog(@"Theme", @"[IMG] %@ name=%@ 命中=%d dark=%d", entry, name, hit, dark ? 1 : 0);
}

// MMThemeManager 两个位图入口
static UIImage *mio_MMThemeManager_imageNamed(id self, SEL _cmd, NSString *name) {
    UIImage *themed = [[ThemeService shared] miThemeImageForName:name];
    MioLogImgRequest(@"MMThemeManager.imageNamed", name, themed != nil);
    if (themed) return themed;
    return g_orig_MMImageNamed(self, _cmd, name);
}

static UIImage *mio_MMThemeManager_imageNamed_warnIfNotFound(id self, SEL _cmd, NSString *name, BOOL warn) {
    UIImage *themed = [[ThemeService shared] miThemeImageForName:name];
    MioLogImgRequest(@"MMThemeManager.imageNamed:warnIfNotFound", name, themed != nil);
    if (themed) return themed;
    return g_orig_MMImageNamedWarn(self, _cmd, name, warn);
}

// ── WCSVGImage 取图家族（8 个类方法变体，全部 hook 元类）──
// 命中主题包文件 → 返回主题 PNG（color/size/tint 参数忽略，包内图即最终形态）；未命中走原实现
static id (*g_orig_SVG_imageNamed)(id, SEL, NSString *);
static id (*g_orig_SVG_imageNamed_color)(id, SEL, NSString *, UIColor *);
static id (*g_orig_SVG_imageNamed_color_alpha)(id, SEL, NSString *, UIColor *, double);
static id (*g_orig_SVG_imageNamed_color_alpha_rotate)(id, SEL, NSString *, UIColor *, double, double);
static id (*g_orig_SVG_imageNamed_size)(id, SEL, NSString *, CGSize);
static id (*g_orig_SVG_imageNamed_size_color)(id, SEL, NSString *, CGSize, UIColor *);
static id (*g_orig_SVG_imageNamed_size_color_alpha_rotate)(id, SEL, NSString *, CGSize, UIColor *, double, double);

static id mio_SVG_imageNamed(id self, SEL _cmd, NSString *name) {
    UIImage *themed = [[ThemeService shared] miThemeImageForName:name];
    MioLogImgRequest(@"SVG.imageNamed", name, themed != nil);
    if (themed) return themed;
    return g_orig_SVG_imageNamed(self, _cmd, name);
}

static id mio_SVG_imageNamed_color(id self, SEL _cmd, NSString *name, UIColor *color) {
    UIImage *themed = [[ThemeService shared] miThemeImageForName:name];
    MioLogImgRequest(@"SVG.imageNamed:color:", name, themed != nil);
    if (themed) return themed;
    return g_orig_SVG_imageNamed_color(self, _cmd, name, color);
}

static id mio_SVG_imageNamed_color_alpha(id self, SEL _cmd, NSString *name, UIColor *color, double alpha) {
    UIImage *themed = [[ThemeService shared] miThemeImageForName:name];
    MioLogImgRequest(@"SVG.imageNamed:color:alpha:", name, themed != nil);
    if (themed) return themed;
    return g_orig_SVG_imageNamed_color_alpha(self, _cmd, name, color, alpha);
}

static id mio_SVG_imageNamed_color_alpha_rotate(id self, SEL _cmd, NSString *name, UIColor *color, double alpha, double rotate) {
    UIImage *themed = [[ThemeService shared] miThemeImageForName:name];
    MioLogImgRequest(@"SVG.imageNamed:color:alpha:rotate:", name, themed != nil);
    if (themed) return themed;
    return g_orig_SVG_imageNamed_color_alpha_rotate(self, _cmd, name, color, alpha, rotate);
}

static id mio_SVG_imageNamed_size(id self, SEL _cmd, NSString *name, CGSize size) {
    UIImage *themed = [[ThemeService shared] miThemeImageForName:name];
    MioLogImgRequest(@"SVG.imageNamed:size:", name, themed != nil);
    if (themed) return themed;
    return g_orig_SVG_imageNamed_size(self, _cmd, name, size);
}

static id mio_SVG_imageNamed_size_color(id self, SEL _cmd, NSString *name, CGSize size, UIColor *color) {
    UIImage *themed = [[ThemeService shared] miThemeImageForName:name];
    MioLogImgRequest(@"SVG.imageNamed:size:color:", name, themed != nil);
    if (themed) return themed;
    return g_orig_SVG_imageNamed_size_color(self, _cmd, name, size, color);
}

static id mio_SVG_imageNamed_size_color_alpha_rotate(id self, SEL _cmd, NSString *name, CGSize size, UIColor *color, double alpha, double rotate) {
    UIImage *themed = [[ThemeService shared] miThemeImageForName:name];
    MioLogImgRequest(@"SVG.imageNamed:size:color:alpha:rotate:", name, themed != nil);
    if (themed) return themed;
    return g_orig_SVG_imageNamed_size_color_alpha_rotate(self, _cmd, name, size, color, alpha, rotate);
}

static UIImage *mio_WCSVGImage_imageNamed_fromConfig(id self, SEL _cmd, NSString *name, id config) {
    UIImage *themed = [[ThemeService shared] miThemeImageForName:name];
    MioLogImgRequest(@"SVG.imageNamed:fromConfig:", name, themed != nil);
    if (themed) return themed;
    return g_orig_SVGImageNamedFromConfig(self, _cmd, name, config);
}

// ── UIImage 原生取图（底栏可能不走微信任何管理器，直呼 UIKit）──
// 同样接主题 serve：命中主题包文件返回主题 PNG，否则原实现
static UIImage *(*g_orig_UIImage_imageNamed)(id, SEL, NSString *);
static UIImage *(*g_orig_UIImage_imageNamed_bundle_traits)(id, SEL, NSString *, NSBundle *, UITraitCollection *);

static UIImage *mio_UIImage_imageNamed(id self, SEL _cmd, NSString *name) {
    UIImage *themed = [[ThemeService shared] miThemeImageForName:name];
    MioLogImgRequest(@"UIImage.imageNamed", name, themed != nil);
    if (themed) return themed;
    return g_orig_UIImage_imageNamed(self, _cmd, name);
}

static UIImage *mio_UIImage_imageNamed_bundle_traits(id self, SEL _cmd, NSString *name, NSBundle *bundle, UITraitCollection *traits) {
    UIImage *themed = [[ThemeService shared] miThemeImageForName:name];
    MioLogImgRequest(@"UIImage.imageNamed:inBundle:compatibleWithTraitCollection:", name, themed != nil);
    if (themed) return themed;
    return g_orig_UIImage_imageNamed_bundle_traits(self, _cmd, name, bundle, traits);
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

// ── 壁纸层（聊天背景）──
// 8.0.80 实证：getChatBackgroundImagePathForUser: 无人调用（log 72 零询问）。
// 探针两个落点：imageInPath:（按路径加载图，视图机制内部必经）+
// getChatBackgroundViewForUser:containerSize:（背景视图创建点），数据说话后定 serve 点。
static NSString *(*g_orig_ChatBGMgr_getImagePath)(id, SEL, id);

static id mio_ChatBGMgr_getImagePath(id self, SEL _cmd, id username) {
    id orig = g_orig_ChatBGMgr_getImagePath(self, _cmd, username);
    NSString *ours = [[ThemeService shared] miWallpaperPathOverride];
    static NSInteger budget = 20; // 诊断：前 20 次询问全打（user/原值/我方决定）
    if (budget-- > 0) {
        WPLog(@"Theme", @"[WALLPAPER] 询问 user=%@ orig=<%@ %@> ours=%@",
              username, [orig class], orig,
              ours.length ? [ours lastPathComponent] : @"nil");
    }
    if (!ours.length) return orig;
    if ([orig isKindOfClass:[NSURL class]]) return [NSURL fileURLWithPath:ours];
    return ours;
}

static id (*g_orig_ChatBGMgr_imageInPath)(id, SEL, id);

static id mio_ChatBGMgr_imageInPath(id self, SEL _cmd, NSString *path) {
    // serve 点（log 73 实证：聊天背景图加载走 imageInPath:，路径 query 无人调）。
    // 只拦微信内置默认背景（ChatBackground_*），用户自设的每会话自定义背景放行。
    if ([path.lastPathComponent hasPrefix:@"ChatBackground"]) {
        NSString *ours = [[ThemeService shared] miWallpaperPathOverride];
        if (ours.length) {
            UIImage *wp = [[ThemeService shared] miLoadImageAtPath:ours];
            if (wp) {
                static NSInteger budget = 5;
                if (budget-- > 0) WPLog(@"Theme", @"[WALLPAPER] serve 主题壁纸 %@", [ours lastPathComponent]);
                return wp;
            }
        }
    }
    id r = g_orig_ChatBGMgr_imageInPath(self, _cmd, path);
    static NSInteger budget = 20;
    if (budget-- > 0) {
        WPLog(@"Theme", @"[WALLPAPER] imageInPath path=%@ → <%@ %@>", path, [r class], r);
    }
    return r;
}

static id (*g_orig_ChatBGMgr_bgViewForUser)(id, SEL, id, CGSize);

static id mio_ChatBGMgr_bgViewForUser(id self, SEL _cmd, id username, CGSize size) {
    id v = g_orig_ChatBGMgr_bgViewForUser(self, _cmd, username, size);
    static NSInteger budget = 10;
    if (budget-- > 0) {
        NSMutableString *sub = [NSMutableString string];
        if ([v isKindOfClass:[UIView class]]) {
            for (UIView *c in ((UIView *)v).subviews) {
                [sub appendFormat:@" <%@ %@>", NSStringFromClass([c class]), c];
            }
        }
        WPLog(@"Theme", @"[WALLPAPER] bgView user=%@ size=%@ view=<%@> 子视图:%@",
              username, NSStringFromCGSize(size), v, sub);
    }
    return v;
}

// ── 壁纸透明化：主框架四页的 UITableView/UITableViewCell 白底 → 透明，露出 BG_0 壁纸 ──
// log 74 实证：BG_0 pattern 已生效（顶部透出壁纸），被四页内容区自己的白底（表格/cell，
// BG_1 族）盖住。仅当"壁纸激活 + 视图在四页/容器的 responder 链上"才强制透明；
// 推出的二级页面（导航 push）不在链上，不受影响。pattern 色本身放行（是垫底的载体）。
static BOOL MioWallpaperClearEligible(UIView *view) {
    if (![[ThemeService shared] miWallpaperActive]) return NO;
    NSString * const tags[] = {
        @"NewMainFrameViewController",     // 会话
        @"ContactsViewController",         // 通讯录
        @"FindFriendEntryViewController",  // 发现
        @"MoreViewController",             // 我的
        @"MainTabBarViewController",       // 容器（8.0.80 新旧两名）
        @"NewMainTabBarViewController",
    };
    id r = view;
    int steps = 0;
    while (r && steps++ < 40) {
        NSString *cls = NSStringFromClass([r class]);
        for (int i = 0; i < 6; i++) {
            if ([cls isEqualToString:tags[i]]) return YES;
        }
        r = [(UIResponder *)r nextResponder];
    }
    return NO;
}

static BOOL MioIsWallpaperPatternColor(UIColor *c) {
    if (!c) return NO;
    return c == [[ThemeService shared] miWallpaperPatternColorForName:@"BG_0"];
}

static void (*g_orig_UITV_setBg)(id, SEL, UIColor *);

static void mio_UITV_setBg(id self, SEL _cmd, UIColor *c) {
    if (c && !MioIsWallpaperPatternColor(c) && MioWallpaperClearEligible(self)) {
        static NSInteger budget = 20;
        if (budget-- > 0) WPLog(@"Theme", @"[WALLPAPER] tableView 透明化 %@", NSStringFromClass([self class]));
        c = [UIColor clearColor];
    }
    g_orig_UITV_setBg(self, _cmd, c);
}

static void (*g_orig_UITCell_setBg)(id, SEL, UIColor *);

static void mio_UITCell_setBg(id self, SEL _cmd, UIColor *c) {
    if (c && !MioIsWallpaperPatternColor(c) && MioWallpaperClearEligible(self)) {
        static NSInteger budget = 40;
        if (budget-- > 0) WPLog(@"Theme", @"[WALLPAPER] cell 透明化 %@", NSStringFromClass([self class]));
        c = [UIColor clearColor];
    }
    g_orig_UITCell_setBg(self, _cmd, c);
}

static void (*g_orig_UITCell_setBgView)(id, SEL, UIView *);

static void mio_UITCell_setBgView(id self, SEL _cmd, UIView *v) {
    if (v && MioWallpaperClearEligible(self)) {
        static NSInteger budget = 20;
        if (budget-- > 0) WPLog(@"Theme", @"[WALLPAPER] cell.backgroundView 移除 %@", NSStringFromClass([self class]));
        v = nil;
    }
    g_orig_UITCell_setBgView(self, _cmd, v);
}

@implementation ThemeService {
    NSCache *_imageCache; // key = 主题名|L/D|请求名，value = UIImage 或 NSNull（未命中也缓存，挡高频磁盘读）
    NSDictionary<NSString *, NSString *> *_themeColorDict; // 主题色表 name → "#light,#dark"（取色时点拦截旁路查询）
    NSString *_themeColorDictPath;                          // 色表来源路径（变更时重载）
    NSMutableDictionary<NSString *, NSArray<NSString *> *> *_wallpaperScanCache; // 主题目录 → 壁纸候选文件名（applyTheme 清）
    UIImage *_wallpaperImgL;      // 壁纸亮图缓存
    UIImage *_wallpaperImgD;      // 壁纸暗图缓存
    UIColor *_wallpaperPatternColor; // BG_0 壁纸 pattern 动态色（构建一次）
    BOOL _wallpaperPatternBuilt;     // pattern 构建标记（负结果也标记，避免高频重扫）
}

+ (instancetype)shared {
    static ThemeService *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[ThemeService alloc] init];
        instance->_imageCache = [NSCache new];
        instance->_imageCache.countLimit = 2048;
        instance->_wallpaperScanCache = [NSMutableDictionary dictionary];
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
            // 家族全 hook：底栏带颜色/尺寸参数走 imageNamed:color: 等变体（log 70 实证 fromConfig 一个不够）
            Class metaCls = object_getClass(svgCls);
            struct { const char *sel; IMP imp; void **orig; const char *tag; } svgHooks[] = {
                {"imageNamed:",                          (IMP)mio_SVG_imageNamed,                       (void **)&g_orig_SVG_imageNamed,                    "imageNamed:"},
                {"imageNamed:color:",                    (IMP)mio_SVG_imageNamed_color,                 (void **)&g_orig_SVG_imageNamed_color,              "imageNamed:color:"},
                {"imageNamed:color:alpha:",              (IMP)mio_SVG_imageNamed_color_alpha,           (void **)&g_orig_SVG_imageNamed_color_alpha,        "imageNamed:color:alpha:"},
                {"imageNamed:color:alpha:rotate:",       (IMP)mio_SVG_imageNamed_color_alpha_rotate,    (void **)&g_orig_SVG_imageNamed_color_alpha_rotate, "imageNamed:color:alpha:rotate:"},
                {"imageNamed:size:",                     (IMP)mio_SVG_imageNamed_size,                  (void **)&g_orig_SVG_imageNamed_size,               "imageNamed:size:"},
                {"imageNamed:size:color:",               (IMP)mio_SVG_imageNamed_size_color,            (void **)&g_orig_SVG_imageNamed_size_color,         "imageNamed:size:color:"},
                {"imageNamed:size:color:alpha:rotate:",  (IMP)mio_SVG_imageNamed_size_color_alpha_rotate, (void **)&g_orig_SVG_imageNamed_size_color_alpha_rotate, "imageNamed:size:color:alpha:rotate:"},
                {"imageNamed:fromConfig:",               (IMP)mio_WCSVGImage_imageNamed_fromConfig,     (void **)&g_orig_SVGImageNamedFromConfig,           "imageNamed:fromConfig:"},
            };
            for (unsigned i = 0; i < sizeof(svgHooks) / sizeof(svgHooks[0]); i++) {
                SEL s = NSSelectorFromString(@(svgHooks[i].sel));
                if (class_getClassMethod(svgCls, s)) {
                    MSHookMessageEx(metaCls, s, svgHooks[i].imp, svgHooks[i].orig);
                    WPLog(@"Theme", @"[HOOK] ✓ +[WCSVGImage %@]", @(svgHooks[i].tag));
                } else {
                    WPLog(@"Theme", @"[HOOK] ✗ WCSVGImage %@ 不存在", @(svgHooks[i].tag));
                }
            }
        } else {
            WPLog(@"Theme", @"[HOOK] ✗ WCSVGImage 类不存在");
        }

        // UIImage 原生取图（底栏可能直呼 UIKit）——同样接主题 serve
        Class uiImgCls = objc_getClass("UIImage");
        if (uiImgCls) {
            SEL ui1 = NSSelectorFromString(@"imageNamed:");
            if (class_getClassMethod(uiImgCls, ui1)) {
                MSHookMessageEx(object_getClass(uiImgCls), ui1, (IMP)mio_UIImage_imageNamed, (IMP *)&g_orig_UIImage_imageNamed);
                WPLog(@"Theme", @"[HOOK] ✓ +[UIImage imageNamed:]");
            }
            SEL ui2 = NSSelectorFromString(@"imageNamed:inBundle:compatibleWithTraitCollection:");
            if (class_getClassMethod(uiImgCls, ui2)) {
                MSHookMessageEx(object_getClass(uiImgCls), ui2, (IMP)mio_UIImage_imageNamed_bundle_traits, (IMP *)&g_orig_UIImage_imageNamed_bundle_traits);
                WPLog(@"Theme", @"[HOOK] ✓ +[UIImage imageNamed:inBundle:compatibleWithTraitCollection:]");
            }
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

        // 壁纸层：路径查询（8.0.80 零调用，保留观察）+ 加载图 + 视图创建点（探针定位 serve 落点）
        Class chatBGCls = objc_getClass("ChatBackgroundMgr");
        if (chatBGCls) {
            SEL wp = NSSelectorFromString(@"getChatBackgroundImagePathForUser:");
            if (class_getInstanceMethod(chatBGCls, wp)) {
                MSHookMessageEx(chatBGCls, wp, (IMP)mio_ChatBGMgr_getImagePath, (IMP *)&g_orig_ChatBGMgr_getImagePath);
                WPLog(@"Theme", @"[HOOK] ✓ -[ChatBackgroundMgr getChatBackgroundImagePathForUser:]");
            } else {
                WPLog(@"Theme", @"[HOOK] ✗ getChatBackgroundImagePathForUser: 不存在");
            }
            SEL iip = NSSelectorFromString(@"imageInPath:");
            if (class_getInstanceMethod(chatBGCls, iip)) {
                MSHookMessageEx(chatBGCls, iip, (IMP)mio_ChatBGMgr_imageInPath, (IMP *)&g_orig_ChatBGMgr_imageInPath);
                WPLog(@"Theme", @"[HOOK] ✓ -[ChatBackgroundMgr imageInPath:]");
            } else {
                WPLog(@"Theme", @"[HOOK] ✗ imageInPath: 不存在");
            }
            SEL bgv = NSSelectorFromString(@"getChatBackgroundViewForUser:containerSize:");
            if (class_getInstanceMethod(chatBGCls, bgv)) {
                MSHookMessageEx(chatBGCls, bgv, (IMP)mio_ChatBGMgr_bgViewForUser, (IMP *)&g_orig_ChatBGMgr_bgViewForUser);
                WPLog(@"Theme", @"[HOOK] ✓ -[ChatBackgroundMgr getChatBackgroundViewForUser:containerSize:]");
            } else {
                WPLog(@"Theme", @"[HOOK] ✗ getChatBackgroundViewForUser:containerSize: 不存在");
            }
        } else {
            WPLog(@"Theme", @"[HOOK] ✗ ChatBackgroundMgr 类不存在");
        }

        // 壁纸透明化：主框架四页表格/cell 白底 → 透明（壁纸激活时）
        Class uitvCls = objc_getClass("UITableView");
        if (uitvCls) {
            SEL sb = NSSelectorFromString(@"setBackgroundColor:");
            MSHookMessageEx(uitvCls, sb, (IMP)mio_UITV_setBg, (IMP *)&g_orig_UITV_setBg);
            WPLog(@"Theme", @"[HOOK] ✓ -[UITableView setBackgroundColor:]（壁纸透明化）");
        }
        Class uitCellCls = objc_getClass("UITableViewCell");
        if (uitCellCls) {
            SEL sb = NSSelectorFromString(@"setBackgroundColor:");
            MSHookMessageEx(uitCellCls, sb, (IMP)mio_UITCell_setBg, (IMP *)&g_orig_UITCell_setBg);
            WPLog(@"Theme", @"[HOOK] ✓ -[UITableViewCell setBackgroundColor:]（壁纸透明化）");
            SEL sbv = NSSelectorFromString(@"setBackgroundView:");
            MSHookMessageEx(uitCellCls, sbv, (IMP)mio_UITCell_setBgView, (IMP *)&g_orig_UITCell_setBgView);
            WPLog(@"Theme", @"[HOOK] ✓ -[UITableViewCell setBackgroundView:]（壁纸透明化）");
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
    // 8.0.80 底栏新名查不到 → 映射到包内老名再试（旧版微信只问老名，不触发）
    if (!lightPath) {
        NSString *legacy = MioLegacyImageNameForModernName(stem);
        if (legacy) {
            stem = legacy;
            lightPath = MioFirstExistingFile(fm, dir, [self miLightCandidatesForStem:stem ext:ext threeX:threeX]);
        }
    }
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
    // 包作者笔误容错：stem3x.png（少个@，如小悠米包的 icons_outlined_discover3x.png）
    [cands addObject:[stem stringByAppendingString:@"3x.png"]];
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
    @synchronized(_wallpaperScanCache) {
        [_wallpaperScanCache removeAllObjects];
    }
    _wallpaperImgL = nil;
    _wallpaperImgD = nil;
    _wallpaperPatternColor = nil;
    _wallpaperPatternBuilt = NO;
    WPLog(@"Theme", @"[CACHE] 主题图缓存已清");
}

#pragma mark - 壁纸层（聊天背景路径三级来源）

// hook 查询侧：主题启用且找到壁纸图 → 返回路径；否则 nil（hook 放行原实现）。
// 亮暗按屏幕级 trait 判定（与取图同一口径），无暗版自动用亮版。
- (nullable NSString *)miWallpaperPathOverride {
    BOOL dark = [UIScreen mainScreen].traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark;
    return [self miWallpaperPathForMode:dark];
}

- (nullable NSString *)miWallpaperPathForMode:(BOOL)dark {
    ThemeConfig *cfg = [ThemeConfig shared];
    if (!cfg.enableTheme || cfg.activeThemeName.length == 0) return nil;
    NSString *themeDir = [[ThemeConfig mioThemesDir] stringByAppendingPathComponent:cfg.activeThemeName];
    NSString *p = [self miWallpaperPathForThemeDir:themeDir dark:dark];
    // 二级：用户自设图 Library/Preferences/Mio/wallpaper[_dark].png（无 UI，Filza 放文件即可）
    NSString *level2 = nil;
    NSString *mioDir = [[ThemeConfig mioThemesDir] stringByDeletingLastPathComponent];
    if (dark) {
        NSString *dk = [mioDir stringByAppendingPathComponent:@"wallpaper_dark.png"];
        if ([[NSFileManager defaultManager] fileExistsAtPath:dk]) level2 = dk;
    }
    if (!level2.length) {
        NSString *lt = [mioDir stringByAppendingPathComponent:@"wallpaper.png"];
        if ([[NSFileManager defaultManager] fileExistsAtPath:lt]) level2 = lt;
    }
    NSString *final_ = p.length ? p : level2;
    static NSInteger budget = 20; // 诊断：决策全打（一级/二级/落空）
    if (budget-- > 0) {
        WPLog(@"Theme", @"[WALLPAPER] 决策 dark=%d 一级(包内)=%@ 二级(自设)=%@ → %@",
              dark,
              p.length ? [p lastPathComponent] : @"无",
              level2.length ? [level2 lastPathComponent] : @"无",
              final_.length ? [final_ lastPathComponent] : @"放行原实现");
    }
    return final_;
}

// 壁纸图缓存（亮/暗各一份；miClearImageCache 失效）
- (nullable UIImage *)miWallpaperImageForMode:(BOOL)dark {
    ThemeConfig *cfg = [ThemeConfig shared];
    if (!cfg.enableTheme || cfg.activeThemeName.length == 0) return nil;
    UIImage *cached = dark ? _wallpaperImgD : _wallpaperImgL;
    if (cached) return cached;
    NSString *p = [self miWallpaperPathForMode:dark];
    if (!p.length) return nil;
    UIImage *img = [self miLoadImageAtPath:p];
    if (img) {
        if (dark) _wallpaperImgD = img; else _wallpaperImgL = img;
    }
    return img;
}

// 四页壁纸：BG_0 → 壁纸 pattern 图色（动态 provider 亮/暗自动换图）。
// 暗壁纸缺失用亮图（与图标层同规则）。BG_0 查询高频 → 只构建一次，applyTheme/restore 失效。
- (nullable UIColor *)miWallpaperPatternColorForName:(NSString *)name {
    if (_wallpaperPatternBuilt) return _wallpaperPatternColor;
    _wallpaperPatternBuilt = YES;
    UIImage *light = [self miWallpaperImageForMode:NO];
    if (!light) return nil;
    UIImage *darkImg = [self miWallpaperImageForMode:YES] ?: light;
    UIImage *lightRef = light;
    _wallpaperPatternColor = [UIColor colorWithDynamicProvider:^UIColor *(UITraitCollection *t) {
        return [UIColor colorWithPatternImage:(t.userInterfaceStyle == UIUserInterfaceStyleDark ? (darkImg ?: lightRef) : lightRef)];
    }];
    WPLog(@"Theme", @"[WALLPAPER] BG_0 → 壁纸 pattern 亮<%@> 暗<%@>", lightRef, darkImg);
    return _wallpaperPatternColor;
}

// 壁纸是否激活（透明化 hook 的总闸）：主题启用 + 壁纸图存在（亮图为准，暗缺失用亮）
- (BOOL)miWallpaperActive {
    ThemeConfig *cfg = [ThemeConfig shared];
    if (!cfg.enableTheme || cfg.activeThemeName.length == 0) return NO;
    return [self miWallpaperImageForMode:NO] != nil;
}

// 一级：主题包内扫描。文件名（不区分大小写）含 wallpaper/chat_bg/chatbg 的 png 即候选——
// 主题包来自各家、命名不统一，不强制规范；精确 wallpaper.png 优先。
// 暗色：候选里带 dark 的优先，没有则回落亮图（与图标层同规则）。
// 扫描结果按主题目录缓存（applyTheme/restore 时清），避免每次聊天页建背景都遍历目录。
- (nullable NSString *)miWallpaperPathForThemeDir:(NSString *)dir dark:(BOOL)dark {
    if (dir.length == 0) return nil;
    @synchronized(_wallpaperScanCache) {
        NSArray<NSString *> *cands = _wallpaperScanCache[dir];
        if (!cands) {
            NSArray *items = [[NSFileManager defaultManager] contentsOfDirectoryAtPath:dir error:nil];
            NSMutableArray<NSString *> *m = [NSMutableArray array];
            for (NSString *f in items) {
                if ([f hasPrefix:@"."]) continue;
                NSString *lower = f.lowercaseString;
                if (![lower.pathExtension isEqualToString:@"png"]) continue;
                if ([lower containsString:@"wallpaper"] || [lower containsString:@"chat_bg"] || [lower containsString:@"chatbg"]) {
                    [m addObject:f];
                }
            }
            cands = [m copy];
            _wallpaperScanCache[dir] = cands;
            WPLog(@"Theme", @"[WALLPAPER] 扫描 %@ → %lu 候选%@", dir.lastPathComponent, (unsigned long)cands.count,
                  cands.count ? [NSString stringWithFormat:@": %@", [cands componentsJoinedByString:@", "]] : @"");
        }
        if (!cands.count) return nil;
        if (dark) {
            for (NSString *f in cands) {
                if ([f.lowercaseString containsString:@"dark"]) return [dir stringByAppendingPathComponent:f];
            }
        }
        for (NSString *f in cands) {
            if ([f.lowercaseString isEqualToString:@"wallpaper.png"]) return [dir stringByAppendingPathComponent:f];
        }
        return [dir stringByAppendingPathComponent:cands[0]];
    }
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

    // 壁纸层：BG_0（页面底色，log 73 四页共用）→ 壁纸 pattern 图色（主题色表优先级之下的整页覆盖）
    if ([name isEqualToString:@"BG_0"]) {
        UIColor *wp = [self miWallpaperPatternColorForName:name];
        if (wp) return wp;
    }

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
