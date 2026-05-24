// ============================================================
// UISimplifyHook.m — 微信界面简化 Hook 模块
// 参照反编译: 微信优化反编译最新/123456.c FUN_00044244 (L40131)
//
// 极致防御版本:
// - 所有方法调用前做 nil/isKindOfClass 检查
// - 响应者链遍历加长度限制防死循环
// - 检测老版本 微信优化1.6.5.dylib 避免方法钩子冲突
// - NSUserDefaults 缓存到静态变量，避免 Hook 路径 IO
// ============================================================

#import "UISimplifyHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <UIKit/UIKit.h>

// ============================================================
// MARK: - 配置静态缓存 (参照 FUN_00043e84 L39977)
// ============================================================

static BOOL          _simplifyEnabled  = NO;
static NSDictionary *_menuNames        = nil;
static NSDictionary *_tabNames         = nil;
static NSString     *_mainTitle        = nil;
static NSString     *_contactsTitle    = nil;
static NSString     *_discoverTitle    = nil;
static NSString     *_friendsCount     = nil;

// 检测设备上是否加载了老版本插件（避免双钩子冲突）
static BOOL _oldPluginLoaded = NO;

static void UISimplify_ReloadConfig(void) {
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    _simplifyEnabled = [d boolForKey:@"SimplifyEnabled"];
    if (!_simplifyEnabled) return;  // 没开开关，不加载后续配置
    
    _menuNames     = [d dictionaryForKey:@"Simplify_MenuNames"] ?: @{};
    _tabNames      = [d dictionaryForKey:@"Simplify_Tab_Names"]  ?: @{};
    _mainTitle     = [d stringForKey:@"Simplify_MainTitle"];
    _contactsTitle = [d stringForKey:@"Simplify_ContactsTitle"];
    _discoverTitle = [d stringForKey:@"Simplify_DiscoverTitle"];
    _friendsCount  = [d stringForKey:@"Simplify_FriendsCount"];
    WPLog(@"UISimplify", @"Config loaded: enabled=%d menu=%lu tab=%lu",
          _simplifyEnabled, (unsigned long)_menuNames.count, (unsigned long)_tabNames.count);
}

// 安全宏：保证所有输入不为 nil
#define SafeStr(s)   ((s) ?: @"")
#define SafeDict(d)  ((d) ?: @{})
#define Enabled()    (_simplifyEnabled && !_oldPluginLoaded)

// ============================================================
// MARK: - 原始 IMP 指针
// ============================================================

static IMP _orig_WCTableViewCellLeftConfig_title = NULL;
static IMP _orig_MMTabbarItem_init = NULL;
static IMP _orig_MMTabbarItem_setNormalTitle = NULL;
static IMP _orig_MMTabBarItemView_setTitle = NULL;
static IMP _orig_MMTabBarController_setTabBarItemTitle = NULL;
static IMP _orig_MMTableViewInfo_getTitle = NULL;
static IMP _orig_MMUILabel_setText = NULL;
static IMP _orig_MMUILabel_setAttributedText = NULL;
static IMP _orig_MFTitleView_updateTitle = NULL;

// ============================================================
// MARK: - 安全工具函数
// ============================================================

// 安全的 class 查找 (不会在 objc_getClass 返回 nil 时崩溃)
static Class SafeGetClass(const char *name) {
    Class cls = objc_getClass(name);
    if (!cls) WPLog(@"UISimplify", @"[Warn] Class not found: %s", name);
    return cls;
}

// 安全 NSStringFromClass (nil safe)
static NSString *SafeClassName(id obj) {
    if (!obj) return @"nil";
    Class cls = object_getClass(obj);
    if (!cls) return @"nil";
    return NSStringFromClass(cls);
}

// 安全检查某类是否在响应者链中
static BOOL ResponderChainContainsClassName(id start, NSString *className, int maxDepth) {
    if (!start || !className || maxDepth <= 0) return NO;
    id resp = start;
    for (int i = 0; i < maxDepth && resp; i++) {
        @try {
            NSString *cn = SafeClassName(resp);
            if ([cn rangeOfString:className].location != NSNotFound) return YES;
            resp = [resp nextResponder];
        } @catch (NSException *e) {
            return NO;
        }
    }
    return NO;
}

// 安全字符串前缀检查
static BOOL SafeHasPrefix(NSString *s, NSString *prefix) {
    return s && prefix && [s hasPrefix:prefix];
}

// ============================================================
// MARK: - 策略A: WCTableViewCellLeftConfig.title (参照 FUN_00044490)
// ============================================================

static id hook_WCTitle(id self, SEL _cmd) {
    if (!_orig_WCTableViewCellLeftConfig_title) return nil;
    id orig = ((id (*)(id, SEL))_orig_WCTableViewCellLeftConfig_title)(self, _cmd);
    if (!Enabled() || !orig || !_menuNames) return orig;
    
    id repl = [_menuNames objectForKey:orig];
    if (repl) return repl;
    
    @try {
        NSRange nl = [orig rangeOfString:@"\n"];
        if (nl.location != NSNotFound && nl.location + 1 < orig.length) {
            NSString *suffix = [orig substringFromIndex:nl.location + 1];
            id subRepl = [_menuNames objectForKey:suffix];
            if (subRepl) return subRepl;
        }
    } @catch (NSException *e) {}
    return orig;
}

// ============================================================
// MARK: - 策略A: Tab 标题替换 (4个Hook)
// ============================================================

static NSString *replaceTabTitle(NSString *title) {
    if (!Enabled() || !title || !_tabNames) return title;
    id repl = [_tabNames objectForKey:title];
    return repl ?: title;
}

static id hook_MMTabbarItem_init(id self, SEL _cmd, NSString *title, id img, id selImg) {
    if (!_orig_MMTabbarItem_init) return nil;
    return ((id (*)(id, SEL, id, id, id))_orig_MMTabbarItem_init)(self, _cmd, replaceTabTitle(title), img, selImg);
}

static void hook_MMTabbarItem_setNormalTitle(id self, SEL _cmd, NSString *title) {
    if (!_orig_MMTabbarItem_setNormalTitle) return;
    ((void (*)(id, SEL, id))_orig_MMTabbarItem_setNormalTitle)(self, _cmd, replaceTabTitle(title));
}

static void hook_MMTabBarItemView_setTitle(id self, SEL _cmd, NSString *title) {
    if (!_orig_MMTabBarItemView_setTitle) return;
    ((void (*)(id, SEL, id))_orig_MMTabBarItemView_setTitle)(self, _cmd, replaceTabTitle(title));
}

static void hook_MMTabBarController_setTabBarItemTitle(id self, SEL _cmd, NSString *title, NSUInteger idx) {
    if (!_orig_MMTabBarController_setTabBarItemTitle) return;
    ((void (*)(id, SEL, id, NSUInteger))_orig_MMTabBarController_setTabBarItemTitle)(self, _cmd, replaceTabTitle(title), idx);
}

// ============================================================
// MARK: - 策略A: MMTableViewInfo.getTitle: (参照 FUN_00044910)
// ============================================================

static id hook_MMTableViewInfo_getTitle(id self, SEL _cmd) {
    if (!_orig_MMTableViewInfo_getTitle) return nil;
    id orig = ((id (*)(id, SEL))_orig_MMTableViewInfo_getTitle)(self, _cmd);
    if (!Enabled() || !orig || !_menuNames) return orig;
    
    id repl = [_menuNames objectForKey:orig];
    if (repl) return repl;
    
    @try {
        NSRange nl = [orig rangeOfString:@"\n"];
        if (nl.location != NSNotFound && nl.location + 1 < orig.length) {
            NSString *suffix = [orig substringFromIndex:nl.location + 1];
            id subRepl = [_menuNames objectForKey:suffix];
            if (subRepl) return subRepl;
        }
    } @catch (NSException *e) {}
    return orig;
}

// ============================================================
// MARK: - 策略B: MMUILabel.setText: (参照 FUN_00044a80) ⭐核心
// ============================================================

static void hook_MMUILabel_setText(id self, SEL _cmd, NSString *text) {
    if (!_orig_MMUILabel_setText) return;
    
    // Guard 0: 开关关闭 → 原始
    if (!_simplifyEnabled) {
        ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, text);
        return;
    }
    // Guard 1: nil text → 原始
    if (!text) {
        ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, text);
        return;
    }
    // Guard 2: badge 数字 (以 "[" 开头) → 原始
    if ([text hasPrefix:@"["]) {
        ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, text);
        return;
    }
    // Guard 3: self 必须继承 UIResponder（才能遍历响应者链）
    if (![self isKindOfClass:[UIResponder class]]) {
        ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, text);
        return;
    }
    
    // --- 匹配层1: NavigationBar → mainTitleReplacement ---
    if (!_oldPluginLoaded && _mainTitle && _mainTitle.length > 0) {
        if (ResponderChainContainsClassName(self, @"NavigationBar", 10)) {
            ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, _mainTitle);
            return;
        }
    }
    
    // --- 匹配层2: Contacts → contactsReplacement ---
    if (!_oldPluginLoaded && _contactsTitle && _contactsTitle.length > 0) {
        if (SafeHasPrefix(text, @"通讯录") || [text isEqualToString:@"通讯录"]) {
            if (ResponderChainContainsClassName(self, @"Contact", 10)) {
                ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, _contactsTitle);
                return;
            }
        }
    }
    
    // --- 匹配层3: Discover → discoverReplacement ---
    if (!_oldPluginLoaded && _discoverTitle && _discoverTitle.length > 0) {
        if (SafeHasPrefix(text, @"发现") || [text isEqualToString:@"发现"]) {
            ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, _discoverTitle);
            return;
        }
    }
    
    // --- 匹配层4: 好友数格式 ---
    if (!_oldPluginLoaded && _friendsCount && _friendsCount.length > 0) {
        @try {
            NSRegularExpression *regex = [NSRegularExpression
                regularExpressionWithPattern:@"\\d+" options:0 error:nil];
            if (regex) {
                NSTextCheckingResult *match = [regex firstMatchInString:text
                    options:0 range:NSMakeRange(0, text.length)];
                if (match && match.range.location != NSNotFound && match.range.length > 0) {
                    if ([text containsString:@"位"] && [text containsString:@"联系人"]) {
                        NSString *number = [text substringWithRange:match.range];
                        NSString *formatted = [NSString stringWithFormat:_friendsCount, number];
                        if (formatted) {
                            ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, formatted);
                            return;
                        }
                    }
                }
            }
        } @catch (NSException *e) {}
    }
    
    // 默认: 调用原始
    ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, text);
}

// ============================================================
// MARK: - 策略B: MMUILabel.setAttributedText: (参照 FUN_00044ecc)
// ============================================================

static NSAttributedString *replacedAttrStr(NSAttributedString *orig, NSString *newText) {
    if (!orig || !newText) return nil;
    NSDictionary *attrs = nil;
    @try {
        if (orig.length > 0) {
            attrs = [orig attributesAtIndex:0 effectiveRange:NULL];
        }
    } @catch (NSException *e) {}
    return [[NSAttributedString alloc] initWithString:newText attributes:attrs ?: @{}];
}

static void hook_MMUILabel_setAttributedText(id self, SEL _cmd, NSAttributedString *attrText) {
    if (!_orig_MMUILabel_setAttributedText) return;
    
    if (!_simplifyEnabled || !attrText) {
        ((void (*)(id, SEL, id))_orig_MMUILabel_setAttributedText)(self, _cmd, attrText);
        return;
    }
    if (![self isKindOfClass:[UIResponder class]]) {
        ((void (*)(id, SEL, id))_orig_MMUILabel_setAttributedText)(self, _cmd, attrText);
        return;
    }
    
    NSString *text = attrText.string;
    if (!text || [text hasPrefix:@"["]) {
        ((void (*)(id, SEL, id))_orig_MMUILabel_setAttributedText)(self, _cmd, attrText);
        return;
    }
    
    // Nav
    if (!_oldPluginLoaded && _mainTitle && _mainTitle.length > 0) {
        if (ResponderChainContainsClassName(self, @"NavigationBar", 10)) {
            NSAttributedString *replaced = replacedAttrStr(attrText, _mainTitle);
            if (replaced) {
                ((void (*)(id, SEL, id))_orig_MMUILabel_setAttributedText)(self, _cmd, replaced);
                return;
            }
        }
    }
    // Contacts
    if (!_oldPluginLoaded && _contactsTitle && _contactsTitle.length > 0) {
        if (SafeHasPrefix(text, @"通讯录") || [text isEqualToString:@"通讯录"]) {
            NSAttributedString *replaced = replacedAttrStr(attrText, _contactsTitle);
            if (replaced) {
                ((void (*)(id, SEL, id))_orig_MMUILabel_setAttributedText)(self, _cmd, replaced);
                return;
            }
        }
    }
    // Discover
    if (!_oldPluginLoaded && _discoverTitle && _discoverTitle.length > 0) {
        if (SafeHasPrefix(text, @"发现") || [text isEqualToString:@"发现"]) {
            NSAttributedString *replaced = replacedAttrStr(attrText, _discoverTitle);
            if (replaced) {
                ((void (*)(id, SEL, id))_orig_MMUILabel_setAttributedText)(self, _cmd, replaced);
                return;
            }
        }
    }
    
    ((void (*)(id, SEL, id))_orig_MMUILabel_setAttributedText)(self, _cmd, attrText);
}

// ============================================================
// MARK: - 策略B: MFTitleView.updateTitleView:title: (参照 FUN_000454d0)
// ============================================================

static void hook_MFTitleView_updateTitle(id self, SEL _cmd, id titleView, NSString *title) {
    if (!_orig_MFTitleView_updateTitle) return;
    
    if (!_simplifyEnabled || !title || [title hasPrefix:@"["] || _oldPluginLoaded) {
        ((void (*)(id, SEL, id, id))_orig_MFTitleView_updateTitle)(self, _cmd, titleView, title);
        return;
    }
    if (![self isKindOfClass:[UIResponder class]]) {
        ((void (*)(id, SEL, id, id))_orig_MFTitleView_updateTitle)(self, _cmd, titleView, title);
        return;
    }
    
    if (_mainTitle && _mainTitle.length > 0) {
        if (ResponderChainContainsClassName(self, @"NavigationBar", 10)) {
            ((void (*)(id, SEL, id, id))_orig_MFTitleView_updateTitle)(self, _cmd, titleView, _mainTitle);
            return;
        }
    }
    if (_contactsTitle && _contactsTitle.length > 0) {
        if (SafeHasPrefix(title, @"通讯录") || [title isEqualToString:@"通讯录"]) {
            ((void (*)(id, SEL, id, id))_orig_MFTitleView_updateTitle)(self, _cmd, titleView, _contactsTitle);
            return;
        }
    }
    if (_discoverTitle && _discoverTitle.length > 0) {
        if (SafeHasPrefix(title, @"发现") || [title isEqualToString:@"发现"]) {
            ((void (*)(id, SEL, id, id))_orig_MFTitleView_updateTitle)(self, _cmd, titleView, _discoverTitle);
            return;
        }
    }
    
    ((void (*)(id, SEL, id, id))_orig_MFTitleView_updateTitle)(self, _cmd, titleView, title);
}

// ============================================================
// MARK: - Hook 安装 (参照 FUN_00044244 L40131)
// ============================================================

@implementation UISimplifyHook

+ (void)install {
    // 1. 加载配置 (参照 FUN_00043e44)
    UISimplify_ReloadConfig();
    
    // 2. 检测老版本插件 (如果同时加载则跳过我们的上下文 Hook，避免冲突)
    if (objc_getClass("CSWCEnhanceViewController")) {
        _oldPluginLoaded = YES;
        WPLog(@"UISimplify", @"[Warn] Old plugin 微信优化 detected — context hooks disabled");
    }
    
    WPLog(@"UISimplify", @"UISimplifyHook install start (oldPlugin=%d)", _oldPluginLoaded);
    
    // ===== 策略A: 字典查找替换 (6个) — 相对安全，始终安装 =====
    
    Class configClass = SafeGetClass("WCTableViewCellLeftConfig");
    if (configClass) {
        MSHookMessageEx(configClass, @selector(title),
            (IMP)hook_WCTitle, (IMP *)&_orig_WCTableViewCellLeftConfig_title);
    }
    
    Class tabItem = SafeGetClass("MMTabbarItem");
    if (tabItem) {
        MSHookMessageEx(tabItem, @selector(initWithTitle:normalImage:selectedImage:),
            (IMP)hook_MMTabbarItem_init, (IMP *)&_orig_MMTabbarItem_init);
        MSHookMessageEx(tabItem, @selector(setNormalTitle:),
            (IMP)hook_MMTabbarItem_setNormalTitle, (IMP *)&_orig_MMTabbarItem_setNormalTitle);
    }
    
    Class tabItemView = SafeGetClass("MMTabBarItemView");
    if (tabItemView) {
        MSHookMessageEx(tabItemView, @selector(setTitle:),
            (IMP)hook_MMTabBarItemView_setTitle, (IMP *)&_orig_MMTabBarItemView_setTitle);
    }
    
    Class tabBarCtrl = SafeGetClass("MMTabBarController");
    if (tabBarCtrl) {
        MSHookMessageEx(tabBarCtrl, @selector(setTabBarItemTitle:forIndex:),
            (IMP)hook_MMTabBarController_setTabBarItemTitle, (IMP *)&_orig_MMTabBarController_setTabBarItemTitle);
    }
    
    Class tvInfo = SafeGetClass("MMTableViewInfo");
    if (tvInfo) {
        MSHookMessageEx(tvInfo, @selector(getTitle:),
            (IMP)hook_MMTableViewInfo_getTitle, (IMP *)&_orig_MMTableViewInfo_getTitle);
    }
    
    // ===== 策略B: 上下文匹配 (3个) — 仅老插件不存在时安装 =====
    
    if (!_oldPluginLoaded) {
        Class mmLabel = SafeGetClass("MMUILabel");
        if (mmLabel) {
            MSHookMessageEx(mmLabel, @selector(setText:),
                (IMP)hook_MMUILabel_setText, (IMP *)&_orig_MMUILabel_setText);
            MSHookMessageEx(mmLabel, @selector(setAttributedText:),
                (IMP)hook_MMUILabel_setAttributedText, (IMP *)&_orig_MMUILabel_setAttributedText);
        }
        
        Class mfTitle = SafeGetClass("MFTitleView");
        if (mfTitle) {
            MSHookMessageEx(mfTitle, @selector(updateTitleView:title:),
                (IMP)hook_MFTitleView_updateTitle, (IMP *)&_orig_MFTitleView_updateTitle);
        }
    }
    
    WPLog(@"UISimplify", @"UISimplifyHook install done (%d hooks)", _oldPluginLoaded ? 6 : 9);
}

@end