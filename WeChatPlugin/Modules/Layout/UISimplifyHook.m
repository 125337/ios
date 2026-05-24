#import "UISimplifyHook.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>
#import "../../Core/LogManager.h"

// ============================================================
// MARK: - 配置缓存（参照反编译 FUN_00043e84 L39977 启动时一次性加载到全局静态变量）
// ============================================================

static BOOL          _simplifyEnabled  = NO;
static NSDictionary *_menuNames        = nil;
static NSDictionary *_tabNames         = nil;
static NSString     *_mainTitle        = nil;
static NSString     *_contactsTitle    = nil;
static NSString     *_discoverTitle    = nil;
static NSString     *_friendsCount     = nil;

static void UISimplify_ReloadConfig(void) {
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    _simplifyEnabled = [d boolForKey:@"SimplifyEnabled"];
    _menuNames       = [d dictionaryForKey:@"Simplify_MenuNames"] ?: @{};
    _tabNames        = [d dictionaryForKey:@"Simplify_Tab_Names"] ?: @{};
    _mainTitle       = [d stringForKey:@"Simplify_MainTitle"];
    _contactsTitle   = [d stringForKey:@"Simplify_ContactsTitle"];
    _discoverTitle   = [d stringForKey:@"Simplify_DiscoverTitle"];
    _friendsCount    = [d stringForKey:@"Simplify_FriendsCount"];
}

// 参照反编译: DAT_0013a400 等全局变量直接读取，不再每次调 NSUserDefaults
#define SimplifyEnabled()  (_simplifyEnabled)
#define MenuNames()        (_menuNames)
#define TabNames()         (_tabNames)
#define MainTitle()        (_mainTitle)
#define ContactsTitle()    (_contactsTitle)
#define DiscoverTitle()    (_discoverTitle)
#define FriendsCount()     (_friendsCount)

// ============================================================
// MARK: - 原始 IMP 指针声明区 (9个)
// ============================================================

// 策略A: 字典查找替换 (6个)
static IMP _orig_WCTableViewCellLeftConfig_title = NULL;
static IMP _orig_MMTabbarItem_initWithTitle = NULL;
static IMP _orig_MMTabbarItem_setNormalTitle = NULL;
static IMP _orig_MMTabBarItemView_setTitle = NULL;
static IMP _orig_MMTabBarController_setTabBarItemTitle = NULL;
static IMP _orig_MMTableViewInfo_getTitle = NULL;

// 策略B: 全局标签拦截+上下文匹配 (3个)
static IMP _orig_MMUILabel_setText = NULL;
static IMP _orig_MMUILabel_setAttributedText = NULL;
static IMP _orig_MFTitleView_updateTitleView = NULL;

// ============================================================
// MARK: - 策略A: 共享 Tab 替换核心
// ============================================================

static NSString *replaceTabTitle(NSString *title) {
    if (!SimplifyEnabled() || !title) return title;
    id repl = TabNames()[title];
    return repl ?: title;
}

// ============================================================
// MARK: - 策略A: WCTableViewCellLeftConfig.title
// ============================================================

static id hook_WCTableViewCellLeftConfig_title(id self, SEL _cmd) {
    id orig = ((id (*)(id, SEL))_orig_WCTableViewCellLeftConfig_title)(self, _cmd);
    if (!SimplifyEnabled() || !orig) return orig;

    id repl = MenuNames()[orig];
    if (repl) return repl;

    // "服务\n支付" → 取 \n 后部分查字典
    NSRange nl = [orig rangeOfString:@"\n"];
    if (nl.location != NSNotFound) {
        NSString *suffix = [orig substringFromIndex:nl.location + 1];
        id subRepl = MenuNames()[suffix];
        if (subRepl) return subRepl;
    }
    return orig;
}

// ============================================================
// MARK: - 策略A: 4个底部Tab Hook
// ============================================================

static id hook_MMTabbarItem_initWithTitle(id self, SEL _cmd, NSString *title, id img, id selImg) {
    return ((id (*)(id, SEL, id, id, id))_orig_MMTabbarItem_initWithTitle)(
        self, _cmd, replaceTabTitle(title), img, selImg);
}

static void hook_MMTabbarItem_setNormalTitle(id self, SEL _cmd, NSString *title) {
    ((void (*)(id, SEL, id))_orig_MMTabbarItem_setNormalTitle)(self, _cmd, replaceTabTitle(title));
}

static void hook_MMTabBarItemView_setTitle(id self, SEL _cmd, NSString *title) {
    ((void (*)(id, SEL, id))_orig_MMTabBarItemView_setTitle)(self, _cmd, replaceTabTitle(title));
}

static void hook_MMTabBarController_setTabBarItemTitle(id self, SEL _cmd, NSString *title, NSUInteger idx) {
    ((void (*)(id, SEL, id, NSUInteger))_orig_MMTabBarController_setTabBarItemTitle)(
        self, _cmd, replaceTabTitle(title), idx);
}

// ============================================================
// MARK: - 策略A: MMTableViewInfo.getTitle:
// ============================================================

static id hook_MMTableViewInfo_getTitle(id self, SEL _cmd) {
    id orig = ((id (*)(id, SEL))_orig_MMTableViewInfo_getTitle)(self, _cmd);
    if (!SimplifyEnabled() || !orig) return orig;

    id repl = MenuNames()[orig];
    if (repl) return repl;

    NSRange nl = [orig rangeOfString:@"\n"];
    if (nl.location != NSNotFound) {
        NSString *suffix = [orig substringFromIndex:nl.location + 1];
        id subRepl = MenuNames()[suffix];
        if (subRepl) return subRepl;
    }
    return orig;
}

// ============================================================
// MARK: - 策略B: MMUILabel.setText: 4层决策树 ⭐核心 (参照 FUN_00044a80 L40388)
// ============================================================

static void hook_MMUILabel_setText(id self, SEL _cmd, NSString *text) {
    if (!text || !SimplifyEnabled()) {
        ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, text);
        return;
    }

    // 守卫: "[" 开头 = badge 数字，白名单跳过 (参照 L40413: cf__O_ = "[")
    if ([text hasPrefix:@"["]) {
        ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, text);
        return;
    }

    // 参照反编译 L40418-40450: 正则前置守卫 bVar1/bVar2
    // bVar1: 检查 text 是否含 "," 模式 → 用于 NavigationBar 上下文判断
    NSRegularExpression *commaRegex = [NSRegularExpression
        regularExpressionWithPattern:@"," options:0 error:nil];
    BOOL bVar1 = ([commaRegex firstMatchInString:text options:0
        range:NSMakeRange(0, text.length)] != nil);
    // bVar2: 检查 text 是否含 "U" 模式 → 用于通讯录上下文判断
    NSRegularExpression *uRegex = [NSRegularExpression
        regularExpressionWithPattern:@"U" options:0 error:nil];
    BOOL bVar2 = ([uRegex firstMatchInString:text options:0
        range:NSMakeRange(0, text.length)] != nil);

    // 匹配层1: NavigationBar (参照 L40450-40473, 仅 bVar1 时遍历)
    if (bVar1) {
        id responder = (UIView *)self;
        while ((responder = [responder nextResponder])) {
            NSString *className = NSStringFromClass([responder class]);
            if ([className containsString:@"NavigationBar"]) {
                NSString *title = MainTitle();
                if (title.length == 0) title = ContactsTitle();
                if (title.length == 0) title = DiscoverTitle();
                if (title.length > 0) {
                    ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, title);
                    return;
                }
                break;
            }
        }
    }

    // 匹配层2: Contacts (参照 L40475-40483, bVar2 守卫)
    if (bVar2) {
        NSString *ct = ContactsTitle();
        if (ct.length > 0) {
            if ([text hasPrefix:@"通讯录"] || [text isEqualToString:@"通讯录"]) {
                ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, ct);
                return;
            }
        }
    }

    // 匹配层3: Discover (参照 L40486-40491)
    NSString *dt = DiscoverTitle();
    if (dt.length > 0) {
        if ([text hasPrefix:@"发现"] || [text isEqualToString:@"发现"]) {
            ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, dt);
            return;
        }
    }

    // 匹配层4: 好友数格式替换 (参照 L40492-40511)
    NSString *fc = FriendsCount();
    if (fc.length > 0) {
        NSRegularExpression *regex = [NSRegularExpression
            regularExpressionWithPattern:@"\\d+" options:0 error:nil];
        NSTextCheckingResult *match = [regex firstMatchInString:text
            options:0 range:NSMakeRange(0, text.length)];
        if (match && [text containsString:@"位"] && [text containsString:@"联系人"]) {
            NSString *number = [text substringWithRange:match.range];
            NSString *formatted = [NSString stringWithFormat:fc, number];
            ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, formatted);
            return;
        }
    }

    // 默认
    ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, text);
}

// ============================================================
// MARK: - 策略B: MMUILabel.setAttributedText: (保留富文本属性, 参照 FUN_00044ecc L40526)
// ============================================================

static NSAttributedString *replacedAttrStr(NSAttributedString *orig, NSString *newText) {
    NSDictionary *attrs = (orig.length > 0)
        ? [orig attributesAtIndex:0 effectiveRange:NULL]
        : nil;
    return [[NSAttributedString alloc] initWithString:newText ?: @""
                                           attributes:attrs ?: @{}];
}

static void hook_MMUILabel_setAttributedText(id self, SEL _cmd, NSAttributedString *attrText) {
    if (!attrText || !SimplifyEnabled()) {
        ((void (*)(id, SEL, id))_orig_MMUILabel_setAttributedText)(self, _cmd, attrText);
        return;
    }
    NSString *text = attrText.string;
    if ([text hasPrefix:@"["]) {
        ((void (*)(id, SEL, id))_orig_MMUILabel_setAttributedText)(self, _cmd, attrText);
        return;
    }

    // bVar1/bVar2 正则守卫 (同 setText:)
    NSRegularExpression *commaRegex = [NSRegularExpression
        regularExpressionWithPattern:@"," options:0 error:nil];
    BOOL bVar1 = ([commaRegex firstMatchInString:text options:0
        range:NSMakeRange(0, text.length)] != nil);
    NSRegularExpression *uRegex = [NSRegularExpression
        regularExpressionWithPattern:@"U" options:0 error:nil];
    BOOL bVar2 = ([uRegex firstMatchInString:text options:0
        range:NSMakeRange(0, text.length)] != nil);

    // 匹配层1: NavigationBar
    if (bVar1) {
        id responder = (UIView *)self;
        while ((responder = [responder nextResponder])) {
            if ([NSStringFromClass([responder class]) containsString:@"NavigationBar"]) {
                NSString *title = MainTitle();
                if (title.length == 0) title = ContactsTitle();
                if (title.length == 0) title = DiscoverTitle();
                if (title.length > 0) {
                    ((void (*)(id, SEL, id))_orig_MMUILabel_setAttributedText)(self, _cmd,
                        replacedAttrStr(attrText, title));
                    return;
                }
                break;
            }
        }
    }

    // 匹配层2: Contacts
    if (bVar2) {
        NSString *ct = ContactsTitle();
        if (ct.length > 0) {
            if ([text hasPrefix:@"通讯录"] || [text isEqualToString:@"通讯录"]) {
                ((void (*)(id, SEL, id))_orig_MMUILabel_setAttributedText)(self, _cmd,
                    replacedAttrStr(attrText, ct));
                return;
            }
        }
    }

    // 匹配层3: Discover
    NSString *dt = DiscoverTitle();
    if (dt.length > 0) {
        if ([text hasPrefix:@"发现"] || [text isEqualToString:@"发现"]) {
            ((void (*)(id, SEL, id))_orig_MMUILabel_setAttributedText)(self, _cmd,
                replacedAttrStr(attrText, dt));
            return;
        }
    }

    // 匹配层4: 好友数
    NSString *fc = FriendsCount();
    if (fc.length > 0) {
        NSRegularExpression *regex = [NSRegularExpression
            regularExpressionWithPattern:@"\\d+" options:0 error:nil];
        NSTextCheckingResult *match = [regex firstMatchInString:text
            options:0 range:NSMakeRange(0, text.length)];
        if (match && [text containsString:@"位"] && [text containsString:@"联系人"]) {
            NSString *number = [text substringWithRange:match.range];
            NSString *formatted = [NSString stringWithFormat:fc, number];
            ((void (*)(id, SEL, id))_orig_MMUILabel_setAttributedText)(self, _cmd,
                replacedAttrStr(attrText, formatted));
            return;
        }
    }

    ((void (*)(id, SEL, id))_orig_MMUILabel_setAttributedText)(self, _cmd, attrText);
}

// ============================================================
// MARK: - 策略B: MFTitleView.updateTitleView:title: (参照 FUN_000454d0 L40696)
// ============================================================

static void hook_MFTitleView_updateTitleView(id self, SEL _cmd, id titleView, NSString *title) {
    if (!title || !SimplifyEnabled()) {
        ((void (*)(id, SEL, id, id))_orig_MFTitleView_updateTitleView)(self, _cmd, titleView, title);
        return;
    }
    if ([title hasPrefix:@"["]) {
        ((void (*)(id, SEL, id, id))_orig_MFTitleView_updateTitleView)(self, _cmd, titleView, title);
        return;
    }

    // bVar1/bVar2 正则守卫
    NSRegularExpression *commaRegex = [NSRegularExpression
        regularExpressionWithPattern:@"," options:0 error:nil];
    BOOL bVar1 = ([commaRegex firstMatchInString:title options:0
        range:NSMakeRange(0, title.length)] != nil);
    NSRegularExpression *uRegex = [NSRegularExpression
        regularExpressionWithPattern:@"U" options:0 error:nil];
    BOOL bVar2 = ([uRegex firstMatchInString:title options:0
        range:NSMakeRange(0, title.length)] != nil);

    // 匹配层1: NavigationBar
    if (bVar1) {
        id responder = (UIView *)self;
        while ((responder = [responder nextResponder])) {
            if ([NSStringFromClass([responder class]) containsString:@"NavigationBar"]) {
                NSString *t = MainTitle();
                if (t.length == 0) t = ContactsTitle();
                if (t.length == 0) t = DiscoverTitle();
                if (t.length > 0) {
                    ((void (*)(id, SEL, id, id))_orig_MFTitleView_updateTitleView)(
                        self, _cmd, titleView, t);
                    return;
                }
                break;
            }
        }
    }

    // 匹配层2: Contacts
    if (bVar2) {
        NSString *ct = ContactsTitle();
        if (ct.length > 0) {
            if ([title hasPrefix:@"通讯录"] || [title isEqualToString:@"通讯录"]) {
                ((void (*)(id, SEL, id, id))_orig_MFTitleView_updateTitleView)(
                    self, _cmd, titleView, ct);
                return;
            }
        }
    }

    // 匹配层3: Discover
    NSString *dt = DiscoverTitle();
    if (dt.length > 0) {
        if ([title hasPrefix:@"发现"] || [title isEqualToString:@"发现"]) {
            ((void (*)(id, SEL, id, id))_orig_MFTitleView_updateTitleView)(
                self, _cmd, titleView, dt);
            return;
        }
    }

    ((void (*)(id, SEL, id, id))_orig_MFTitleView_updateTitleView)(self, _cmd, titleView, title);
}

// ============================================================
// MARK: - +install 入口
// ============================================================

@implementation UISimplifyHook

+ (void)install {
    UISimplify_ReloadConfig();  // 参照 FUN_00043e44: 启动时一次性加载配置到静态缓存

    WPLog(@"UISimplify", @"UISimplifyHook install start");

    // ===== 策略A: 字典查找替换 (6个) =====

    Class cellLeftConfig = objc_getClass("WCTableViewCellLeftConfig");
    if (cellLeftConfig) {
        MSHookMessageEx(cellLeftConfig, @selector(title),
            (IMP)hook_WCTableViewCellLeftConfig_title,
            (IMP *)&_orig_WCTableViewCellLeftConfig_title);
        WPLog(@"UISimplify", @"[Hook] ✓ WCTableViewCellLeftConfig.title");
    } else {
        WPLog(@"UISimplify", @"[Hook] - WCTableViewCellLeftConfig not found");
    }

    Class tabItem = objc_getClass("MMTabbarItem");
    if (tabItem) {
        MSHookMessageEx(tabItem, @selector(initWithTitle:normalImage:selectedImage:),
            (IMP)hook_MMTabbarItem_initWithTitle, (IMP *)&_orig_MMTabbarItem_initWithTitle);
        MSHookMessageEx(tabItem, @selector(setNormalTitle:),
            (IMP)hook_MMTabbarItem_setNormalTitle, (IMP *)&_orig_MMTabbarItem_setNormalTitle);
        WPLog(@"UISimplify", @"[Hook] ✓ MMTabbarItem x2");
    } else {
        WPLog(@"UISimplify", @"[Hook] - MMTabbarItem not found");
    }

    Class tabItemView = objc_getClass("MMTabBarItemView");
    if (tabItemView) {
        MSHookMessageEx(tabItemView, @selector(setTitle:),
            (IMP)hook_MMTabBarItemView_setTitle, (IMP *)&_orig_MMTabBarItemView_setTitle);
        WPLog(@"UISimplify", @"[Hook] ✓ MMTabBarItemView.setTitle:");
    } else {
        WPLog(@"UISimplify", @"[Hook] - MMTabBarItemView not found");
    }

    Class tabBarCtrl = objc_getClass("MMTabBarController");
    if (tabBarCtrl) {
        MSHookMessageEx(tabBarCtrl, @selector(setTabBarItemTitle:forIndex:),
            (IMP)hook_MMTabBarController_setTabBarItemTitle,
            (IMP *)&_orig_MMTabBarController_setTabBarItemTitle);
        WPLog(@"UISimplify", @"[Hook] ✓ MMTabBarController.setTabBarItemTitle:forIndex:");
    } else {
        WPLog(@"UISimplify", @"[Hook] - MMTabBarController not found");
    }

    Class tvInfo = objc_getClass("MMTableViewInfo");
    if (tvInfo) {
        MSHookMessageEx(tvInfo, @selector(getTitle:),
            (IMP)hook_MMTableViewInfo_getTitle, (IMP *)&_orig_MMTableViewInfo_getTitle);
        WPLog(@"UISimplify", @"[Hook] ✓ MMTableViewInfo.getTitle:");
    } else {
        WPLog(@"UISimplify", @"[Hook] - MMTableViewInfo not found");
    }

    // ===== 策略B: 全局标签拦截 (3个) =====

    Class mmLabel = objc_getClass("MMUILabel");
    if (mmLabel) {
        MSHookMessageEx(mmLabel, @selector(setText:),
            (IMP)hook_MMUILabel_setText, (IMP *)&_orig_MMUILabel_setText);
        MSHookMessageEx(mmLabel, @selector(setAttributedText:),
            (IMP)hook_MMUILabel_setAttributedText, (IMP *)&_orig_MMUILabel_setAttributedText);
        WPLog(@"UISimplify", @"[Hook] ✓ MMUILabel x2");
    } else {
        WPLog(@"UISimplify", @"[Hook] - MMUILabel not found");
    }

    Class mfTitleView = objc_getClass("MFTitleView");
    if (mfTitleView) {
        MSHookMessageEx(mfTitleView, @selector(updateTitleView:title:),
            (IMP)hook_MFTitleView_updateTitleView, (IMP *)&_orig_MFTitleView_updateTitleView);
        WPLog(@"UISimplify", @"[Hook] ✓ MFTitleView.updateTitleView:title:");
    } else {
        WPLog(@"UISimplify", @"[Hook] - MFTitleView not found");
    }

    WPLog(@"UISimplify", @"UISimplifyHook install complete (9 hooks, 2 strategies)");
}

@end