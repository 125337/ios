// ============================================================
// UISimplifyHook.m — 微信界面简化 Hook 模块
// 参照反编译: 微信优化 FRE_00044a80 + WCRefine FUN_002f0d4c
//
// 全项目已切换为 MRC，与 WCRefine/微信优化 同为 MRC 编译，
// 不再有 ARC+MSHookMessageEx trampoline 冲突，所有 9 个 hook 全部安装。
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

// alt key 回退映射
static NSDictionary *_altMenuKeys     = nil;

static void UISimplify_ReloadConfig(void) {
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    _simplifyEnabled = [d boolForKey:@"SimplifyEnabled"];
    
    // MRC: 先释放旧值，retain 新值。NSUserDefaults 返回 autorelease 对象，必须 retain
    [_menuNames release];
    [_tabNames release];
    [_mainTitle release];
    [_contactsTitle release];
    [_discoverTitle release];
    [_friendsCount release];
    
    if (!_simplifyEnabled) {
        _menuNames     = nil;
        _tabNames      = nil;
        _mainTitle     = nil;
        _contactsTitle = nil;
        _discoverTitle = nil;
        _friendsCount  = nil;
        return;
    }
    
    _menuNames     = [[d dictionaryForKey:@"Simplify_MenuNames"] retain] ?: @{};
    _tabNames      = [[d dictionaryForKey:@"Simplify_Tab_Names"] retain]  ?: @{};
    _mainTitle     = [[d stringForKey:@"Simplify_MainTitle"] retain];
    _contactsTitle = [[d stringForKey:@"Simplify_ContactsTitle"] retain];
    _discoverTitle = [[d stringForKey:@"Simplify_DiscoverTitle"] retain];
    _friendsCount  = [[d stringForKey:@"Simplify_FriendsCount"] retain];
    
    [_altMenuKeys release];
    _altMenuKeys   = [@{
        @"订单与卡包": @"卡包",
        @"支付与服务": @"服务",
    } retain];
    WPLog(@"UISimplify", @"Config loaded: enabled=%d menu=%lu tab=%lu",
          _simplifyEnabled, (unsigned long)_menuNames.count, (unsigned long)_tabNames.count);
}

// 安全宏：保证所有输入不为 nil
#define SafeStr(s)   ((s) ?: @"")
#define SafeDict(d)  ((d) ?: @{})

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

// 菜单名查找：先直接查，再 alt key 回退
// 参照 微信优化 FUN_00044910 getTitle 的 "\n" 分割逻辑 + WCRefine 首字回退思路
static id menuNameLookup(id orig) {
    id repl = [_menuNames objectForKey:orig];
    if (repl) return repl;
    // alt key fallback (e.g. "订单与卡包" → "卡包")
    NSString *altKey = [_altMenuKeys objectForKey:orig];
    if (altKey) {
        repl = [_menuNames objectForKey:altKey];
        if (repl) return repl;
    }
    return nil;
}

// 针对复合标题 (如 "卡包\n订单与卡包") 做全路径匹配:
// 1. 整体查 2. \n前半查 3. \n后半查 4. 查alt key
static id menuNameLookupWithNewline(id orig) {
    id repl = menuNameLookup(orig);
    if (repl) return repl;
    
    @try {
        NSRange nl = [orig rangeOfString:@"\n"];
        if (nl.location != NSNotFound) {
            // "\n" 前半段 (参照 WCRefine 首字思路，微信主行通常在 \n 前)
            if (nl.location > 0) {
                NSString *prefix = [orig substringToIndex:nl.location];
                repl = menuNameLookup(prefix);
                if (repl) return repl;
            }
            // "\n" 后半段
            if (nl.location + 1 < [orig length]) {
                NSString *suffix = [orig substringFromIndex:nl.location + 1];
                repl = menuNameLookup(suffix);
                if (repl) return repl;
            }
        }
    } @catch (NSException *e) {}
    return nil;
}

static id hook_WCTitle(id self, SEL _cmd) {
    if (!_orig_WCTableViewCellLeftConfig_title) return nil;
    id orig = ((id (*)(id, SEL))_orig_WCTableViewCellLeftConfig_title)(self, _cmd);
    if (!_simplifyEnabled || !orig || !_menuNames) return orig;
    
    id repl = menuNameLookupWithNewline(orig);
    return repl ?: orig;
}

// ============================================================
// MARK: - 策略A: Tab 标题替换 (4个Hook)
// ============================================================

// 参照 WCRefine FUN_002efbe4: dict 查不到时用首字回退
static NSString *replaceTabTitle(NSString *title) {
    if (!_simplifyEnabled || !title || !_tabNames) return title;
    id repl = [_tabNames objectForKey:title];
    if (repl) return repl;
    // 首字回退 (WCRefine: FUN_002fa550 提取首字符查 dict)
    if (title.length > 0) {
        NSString *firstChar = [title substringToIndex:1];
        repl = [_tabNames objectForKey:firstChar];
        if (repl) return repl;
    }
    return title;
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
    if (!_simplifyEnabled || !orig || !_menuNames) return orig;
    
    id repl = menuNameLookupWithNewline(orig);
    return repl ?: orig;
}

// ============================================================
// MARK: - 策略B: MMUILabel.setText: (参照 微信优化FUN_00044a80 + WCRefineFUN_002f0d4c) ⭐核心
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
    // Guard 2: badge 数字 (以 "[" 开头, 微信优化 L40398 hasPrefix:@"[")
    if ([text hasPrefix:@"["]) {
        ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, text);
        return;
    }
    // Guard 3: self 必须继承 UIResponder（才能遍历响应者链）
    if (![self isKindOfClass:[UIResponder class]]) {
        ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, text);
        return;
    }
    
    // 微信优化: 先做 containsString 检测再做上下文遍历
    // bVar1 = [text containsString:@","] → 导航栏路径
    // bVar2 = [text containsString:@"U"] → 通讯录路径
    BOOL hasComma = [text containsString:@","];
    
    // --- 匹配层1: NavigationBar → mainTitleReplacement ---
    // 微信优化 L40405: bVar1 (comma) + NavigationBar → mainTitle
    if (_mainTitle && _mainTitle.length > 0 && hasComma) {
        if (ResponderChainContainsClassName(self, @"NavigationBar", 10)) {
            ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, _mainTitle);
            return;
        }
    }
    // 兜底：无 comma 也查 NavigationBar (处理其他标题格式)
    if (_mainTitle && _mainTitle.length > 0 && !hasComma) {
        if (ResponderChainContainsClassName(self, @"NavigationBar", 10)) {
            ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, _mainTitle);
            return;
        }
    }
    
    // --- 匹配层2: Contacts → contactsReplacement ---
    // 微信优化 L40479: bVar2 ("U" 检测) + contactsTitle
    if (_contactsTitle && _contactsTitle.length > 0) {
        if (SafeHasPrefix(text, @"通讯录") || [text isEqualToString:@"通讯录"]) {
            ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, _contactsTitle);
            return;
        }
    }
    
    // --- 匹配层3: Discover → discoverReplacement ---
    if (_discoverTitle && _discoverTitle.length > 0) {
        if (SafeHasPrefix(text, @"发现") || [text isEqualToString:@"发现"]) {
            ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, _discoverTitle);
            return;
        }
    }
    
    // --- 匹配层4: 好友数格式 ---
    if (_friendsCount && _friendsCount.length > 0) {
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
    return [[[NSAttributedString alloc] initWithString:newText attributes:attrs ?: @{}] autorelease];
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
    if (_mainTitle && _mainTitle.length > 0) {
        if (ResponderChainContainsClassName(self, @"NavigationBar", 10)) {
            NSAttributedString *replaced = replacedAttrStr(attrText, _mainTitle);
            if (replaced) {
                ((void (*)(id, SEL, id))_orig_MMUILabel_setAttributedText)(self, _cmd, replaced);
                return;
            }
        }
    }
    // Contacts
    if (_contactsTitle && _contactsTitle.length > 0) {
        if (SafeHasPrefix(text, @"通讯录") || [text isEqualToString:@"通讯录"]) {
            NSAttributedString *replaced = replacedAttrStr(attrText, _contactsTitle);
            if (replaced) {
                ((void (*)(id, SEL, id))_orig_MMUILabel_setAttributedText)(self, _cmd, replaced);
                return;
            }
        }
    }
    // Discover
    if (_discoverTitle && _discoverTitle.length > 0) {
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
    
    if (!_simplifyEnabled || !title || [title hasPrefix:@"["]) {
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
    
    WPLog(@"UISimplify", @"UISimplifyHook install start (MRC mode, 9 hooks)");
    
    // ===== 策略A: 字典查找替换 (6个) =====
    
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
    
    // ===== 策略B: 上下文匹配 (3个) — MRC 编译，可与微信优化/WCRefine 安全共存 =====
    
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
    
    WPLog(@"UISimplify", @"UISimplifyHook install done (9 hooks)");
}

@end