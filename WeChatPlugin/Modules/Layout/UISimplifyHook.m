// ============================================================
// UISimplifyHook.m — 微信界面简化 Hook 模块
// 100% 对齐微信优化实现 (FUN_00044244 ~ FUN_000454d0)
// MRC 编译
// ============================================================

#import "UISimplifyHook.h"
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

// 配置Key — 保持不变
static NSString *const kSettingsChanged = @"com.wechat.tweak.settings_changed";

// ============================================================
// MARK: - 配置加载 (对齐 FUN_00043e84)
// ============================================================

static void UISimplify_ReloadConfig(void) {
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    
    // MRC: 先释放旧值
    [_menuNames release];
    [_tabNames release];
    [_mainTitle release];
    [_contactsTitle release];
    [_discoverTitle release];
    [_friendsCount release];
    
    // 无配置时默认不启用，留空代表不改动
    id enabledObj = [d objectForKey:@"SimplifyEnabled"];
    if (enabledObj == nil) {
        _simplifyEnabled = NO;
    } else {
        _simplifyEnabled = [d boolForKey:@"SimplifyEnabled"];
    }
    
    // 微信优化 L40014-40017: 加载菜单名映射
    _menuNames = [[d dictionaryForKey:@"Simplify_MenuNames"] retain];
    if (!_menuNames) _menuNames = [@{} retain];
    
    // 微信优化 L40024-40051: 菜单名跨版本兼容预处理
    // 高版本和低版本菜单标题不同(如"订单与卡包"/"卡包")，
    // 用户只需配其中一个，自动补齐另一个。
    {
        NSArray *versionPairs = @[
            @[@"订单与卡包", @"卡包"],
        ];
        NSMutableDictionary *mutDict = [_menuNames mutableCopy];
        for (NSArray *pair in versionPairs) {
            NSString *newName = pair[0];
            NSString *oldName = pair[1];
            id newVal = [mutDict objectForKey:newName];
            id oldVal = [mutDict objectForKey:oldName];
            
            if (oldVal && !newVal) {
                [mutDict setObject:oldVal forKey:newName];
            } else if (!oldVal && newVal) {
                [mutDict setObject:newVal forKey:oldName];
            }
        }
        [_menuNames release];
        _menuNames = [mutDict copy];
        [mutDict release];
    }
    
    // 微信优化 L40089-40096: 加载Tab名映射
    _tabNames = [[d dictionaryForKey:@"Simplify_Tab_Names"] retain];
    if (!_tabNames) _tabNames = [@{} retain];
    
    // 微信优化 L40100-40103: 主标题替换
    _mainTitle = [[d stringForKey:@"Simplify_MainTitle"] retain];
    
    // 微信优化 L40105-40108: 通讯录替换
    _contactsTitle = [[d stringForKey:@"Simplify_ContactsTitle"] retain];
    
    // 微信优化 L40110-40113: 发现页替换
    _discoverTitle = [[d stringForKey:@"Simplify_DiscoverTitle"] retain];
    
    // 微信优化 L40115-40118: 好友数格式
    _friendsCount = [[d stringForKey:@"Simplify_FriendsCount"] retain];
}

// 微信优化 L39964-39972: 注册热更新监听
static void UISimplify_RegisterHotReload(void) {
    CFNotificationCenterRef center = CFNotificationCenterGetDarwinNotifyCenter();
    CFNotificationCenterAddObserver(
        center,
        NULL,
        (CFNotificationCallback)UISimplify_ReloadConfig,
        (CFStringRef)kSettingsChanged,
        NULL,
        CFNotificationSuspensionBehaviorDeliverImmediately
    );
}

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
// MARK: - Hook #1: WCTableViewCellLeftConfig.title (对齐 FUN_00044490)
// ============================================================

static id hook_WCTitle(id self, SEL _cmd) {
    if (!_orig_WCTableViewCellLeftConfig_title) return nil;
    id orig = ((id (*)(id, SEL))_orig_WCTableViewCellLeftConfig_title)(self, _cmd);
    if (!_simplifyEnabled || !orig || !_menuNames) return orig;
    
    id repl = [_menuNames objectForKey:orig];
    return repl ? repl : orig;
}

// ============================================================
// MARK: - Hooks #2-#5: Tab栏4个Hook (对齐 FUN_00044544~FUN_00044830)
// ============================================================

static NSString *replaceTabTitle(NSString *title) {
    if (!_simplifyEnabled || !title || !_tabNames) return title;
    id repl = [_tabNames objectForKey:title];
    return repl ? repl : title;
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
// MARK: - Hook #6: MMTableViewInfo.getTitle: (对齐 FUN_00044910)
// ============================================================

static id hook_MMTableViewInfo_getTitle(id self, SEL _cmd) {
    if (!_orig_MMTableViewInfo_getTitle) return nil;
    id orig = ((id (*)(id, SEL))_orig_MMTableViewInfo_getTitle)(self, _cmd);
    
    // 微信优化 L40347-40357: 每次都读NSUserDefaults查开关
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    if (![d boolForKey:@"SimplifyEnabled"]) return orig;
    
    if (!orig || !_menuNames) return orig;
    
    // 微信优化 L40364: 只有含"\n"的标题才查字典替换
    if (![orig containsString:@"\n"]) return orig;
    
    id repl = [_menuNames objectForKey:orig];
    return repl ? repl : orig;
}

// ============================================================
// MARK: - Hook #7: MMUILabel.setText: (对齐 FUN_00044a80) ⭐核心
// ============================================================

static void hook_MMUILabel_setText(id self, SEL _cmd, NSString *text) {
    if (!_orig_MMUILabel_setText) return;
    
    // Guard 0: disabled → original (L40409)
    if (!_simplifyEnabled) {
        ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, text);
        return;
    }
    // Guard 1: nil → original (L40409)
    if (!text) {
        ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, text);
        return;
    }
    // Guard 2: badge — hasPrefix:@"[" (L40413)
    if ([text hasPrefix:@"["]) {
        ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, text);
        return;
    }
    
    // L40418-40432: bVar1 = containsString:@"," (逗号检测)
    BOOL hasComma = [text containsString:@","];
    
    // L40450-40473: NavBar 检测 → 逗号优先，无逗号时 responder chain 兜底
    if (_mainTitle && _mainTitle.length > 0) {
        BOOL shouldReplace = hasComma;
        if (!shouldReplace) {
            id responder = [self nextResponder];
            while (responder) {
                if ([NSStringFromClass([responder class]) rangeOfString:@"NavigationBar"].location != NSNotFound) {
                    shouldReplace = YES;
                    break;
                }
                responder = [responder nextResponder];
            }
        }
        if (shouldReplace) {
            ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, _mainTitle);
            return;
        }
    }
    
    // L40474-40483: 通讯录路径 — 逗号 OR 文本匹配"通讯录"
    if (_contactsTitle && _contactsTitle.length > 0) {
        if (hasComma || [text containsString:@"通讯录"]) {
            ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, _contactsTitle);
            return;
        }
    }
    
    // L40484-40516: 发现页路径 — 逗号 OR 文本匹配"发现"
    if (_discoverTitle && _discoverTitle.length > 0) {
        if (hasComma || [text containsString:@"发现"]) {
            ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, _discoverTitle);
            return;
        }
    }
    
    // L40492-40511: 好友数格式 — 门控+固定正则+format
    // 只有通讯录底部好友数文本才处理，防止误伤其他含数字的文本
    if (_friendsCount && _friendsCount.length > 0) {
        if (![text containsString:@"个朋友"]) {
            ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, text);
            return;
        }
        NSRegularExpression *regex = [NSRegularExpression
            regularExpressionWithPattern:@"\\d+" options:0 error:nil];
        if (regex) {
            NSTextCheckingResult *match = [regex firstMatchInString:text
                options:0 range:NSMakeRange(0, text.length)];
            if (match && match.range.location != NSNotFound) {
                NSString *formatted = [text stringByReplacingCharactersInRange:match.range
                                                                    withString:_friendsCount];
                if (formatted) {
                    ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, formatted);
                    return;
                }
            }
        }
    }
    
    // L40513: default → original
    ((void (*)(id, SEL, id))_orig_MMUILabel_setText)(self, _cmd, text);
}

// ============================================================
// MARK: - Hook #8: MMUILabel.setAttributedText: (对齐 FUN_00044ecc)
// ============================================================

static void hook_MMUILabel_setAttributedText(id self, SEL _cmd, NSAttributedString *attrText) {
    if (!_orig_MMUILabel_setAttributedText) return;
    
    if (!_simplifyEnabled || !attrText) {
        ((void (*)(id, SEL, id))_orig_MMUILabel_setAttributedText)(self, _cmd, attrText);
        return;
    }
    
    NSString *text = attrText.string;
    if (!text || [text hasPrefix:@"["]) {
        ((void (*)(id, SEL, id))_orig_MMUILabel_setAttributedText)(self, _cmd, attrText);
        return;
    }
    
    BOOL hasComma = [text containsString:@","];
    
    // Nav bar — 逗号优先，无逗号时 responder chain 兜底
    if (_mainTitle && _mainTitle.length > 0) {
        BOOL shouldReplace = hasComma;
        if (!shouldReplace) {
            id responder = [self nextResponder];
            while (responder) {
                if ([NSStringFromClass([responder class]) rangeOfString:@"NavigationBar"].location != NSNotFound) {
                    shouldReplace = YES;
                    break;
                }
                responder = [responder nextResponder];
            }
        }
        if (shouldReplace) {
            // L40600-40604: NSMutableAttributedString 保持原属性
            NSDictionary *attrs = nil;
            if (attrText.length > 0) {
                attrs = [attrText attributesAtIndex:0 effectiveRange:NULL];
            }
            NSMutableAttributedString *replaced = [[NSMutableAttributedString alloc]
                initWithString:_mainTitle attributes:attrs ?: @{}];
            if (replaced) {
                ((void (*)(id, SEL, id))_orig_MMUILabel_setAttributedText)(self, _cmd, replaced);
                [replaced release];
                return;
            }
        }
    }
    
    // Contacts — 逗号 OR 文本匹配"通讯录"
    if (_contactsTitle && _contactsTitle.length > 0) {
        if (hasComma || [text containsString:@"通讯录"]) {
            NSDictionary *attrs = nil;
            if (attrText.length > 0) {
                attrs = [attrText attributesAtIndex:0 effectiveRange:NULL];
            }
            NSMutableAttributedString *replaced = [[NSMutableAttributedString alloc]
                initWithString:_contactsTitle attributes:attrs ?: @{}];
            if (replaced) {
                ((void (*)(id, SEL, id))_orig_MMUILabel_setAttributedText)(self, _cmd, replaced);
                [replaced release];
                return;
            }
        }
    }
    
    // Discover — 逗号 OR 文本匹配"发现"
    if (_discoverTitle && _discoverTitle.length > 0) {
        if (hasComma || [text containsString:@"发现"]) {
            NSDictionary *attrs = nil;
            if (attrText.length > 0) {
                attrs = [attrText attributesAtIndex:0 effectiveRange:NULL];
            }
            NSMutableAttributedString *replaced = [[NSMutableAttributedString alloc]
                initWithString:_discoverTitle attributes:attrs ?: @{}];
            if (replaced) {
                ((void (*)(id, SEL, id))_orig_MMUILabel_setAttributedText)(self, _cmd, replaced);
                [replaced release];
                return;
            }
        }
    }
    
    // Friends count — 门控+固定正则+format
    if (_friendsCount && _friendsCount.length > 0) {
        if (![text containsString:@"个朋友"]) {
            ((void (*)(id, SEL, id))_orig_MMUILabel_setAttributedText)(self, _cmd, attrText);
            return;
        }
        NSRegularExpression *regex = [NSRegularExpression
            regularExpressionWithPattern:@"\\d+" options:0 error:nil];
        if (regex) {
            NSTextCheckingResult *match = [regex firstMatchInString:text
                options:0 range:NSMakeRange(0, text.length)];
            if (match && match.range.location != NSNotFound) {
                NSString *formatted = [text stringByReplacingCharactersInRange:match.range
                                                                    withString:_friendsCount];
                if (formatted) {
                    NSDictionary *attrs = nil;
                    if (attrText.length > 0) {
                        attrs = [attrText attributesAtIndex:0 effectiveRange:NULL];
                    }
                    NSMutableAttributedString *replaced = [[NSMutableAttributedString alloc]
                        initWithString:formatted attributes:attrs ?: @{}];
                    if (replaced) {
                        ((void (*)(id, SEL, id))_orig_MMUILabel_setAttributedText)(self, _cmd, replaced);
                        [replaced release];
                        return;
                    }
                }
            }
        }
    }
    
    ((void (*)(id, SEL, id))_orig_MMUILabel_setAttributedText)(self, _cmd, attrText);
}

// ============================================================
// MARK: - Hook #9: MFTitleView.updateTitleView:title: (对齐 FUN_000454d0)
// ⚠️ 微信优化在此Hook中完全不遍历responder chain!
// ============================================================

static void hook_MFTitleView_updateTitle(id self, SEL _cmd, id titleView, NSString *title) {
    if (!_orig_MFTitleView_updateTitle) return;
    
    // L40715: disabled || nil → original
    if (!_simplifyEnabled || !title) {
        ((void (*)(id, SEL, id, id))_orig_MFTitleView_updateTitle)(self, _cmd, titleView, title);
        return;
    }
    // L40719: badge hasPrefix:@"["
    if ([title hasPrefix:@"["]) {
        ((void (*)(id, SEL, id, id))_orig_MFTitleView_updateTitle)(self, _cmd, titleView, title);
        return;
    }
    
    // L40721-40735: bVar2 = containsString:@","
    BOOL hasComma = [title containsString:@","];
    
    // L40754-40758: 主标题 — 逗号优先；无逗号时 responder chain 兜底
    if (_mainTitle && _mainTitle.length > 0) {
        BOOL shouldReplace = hasComma;
        if (!shouldReplace) {
            id responder = [self nextResponder];
            while (responder) {
                if ([NSStringFromClass([responder class]) rangeOfString:@"NavigationBar"].location != NSNotFound) {
                    shouldReplace = YES;
                    break;
                }
                responder = [responder nextResponder];
            }
        }
        if (shouldReplace) {
            ((void (*)(id, SEL, id, id))_orig_MFTitleView_updateTitle)(self, _cmd, titleView, _mainTitle);
            return;
        }
    }
    
    // L40762-40766: 通讯录 — 逗号 OR 文本匹配"通讯录"
    if (_contactsTitle && _contactsTitle.length > 0) {
        if (hasComma || [title containsString:@"通讯录"]) {
            ((void (*)(id, SEL, id, id))_orig_MFTitleView_updateTitle)(self, _cmd, titleView, _contactsTitle);
            return;
        }
    }
    
    // L40769-40778: 发现页 — 逗号 OR 文本匹配"发现"
    if (_discoverTitle && _discoverTitle.length > 0) {
        if (hasComma || [title containsString:@"发现"]) {
            ((void (*)(id, SEL, id, id))_orig_MFTitleView_updateTitle)(self, _cmd, titleView, _discoverTitle);
            return;
        }
    }
    
    // L40775: default → original
    ((void (*)(id, SEL, id, id))_orig_MFTitleView_updateTitle)(self, _cmd, titleView, title);
}

// ============================================================
// MARK: - Hook 安装 (对齐 FUN_00044244 L40131)
// ============================================================

@implementation UISimplifyHook

+ (void)install {
    // 1. 加载配置 (L39969: FUN_00043e84)
    UISimplify_ReloadConfig();
    
    // 2. 注册热更新监听 (L39970-39971)
    UISimplify_RegisterHotReload();
    
    // ===== 策略A: 字典查找替换 (6个) =====
    
    // L40136-40137: WCTableViewCellLeftConfig.title
    Class configClass = objc_getClass("WCTableViewCellLeftConfig");
    if (configClass) {
        MSHookMessageEx(configClass, @selector(title),
            (IMP)hook_WCTitle, (IMP *)&_orig_WCTableViewCellLeftConfig_title);
    }
    
    // L40138-40140: MMTabbarItem × 2
    Class tabItem = objc_getClass("MMTabbarItem");
    if (tabItem) {
        MSHookMessageEx(tabItem, @selector(initWithTitle:normalImage:selectedImage:),
            (IMP)hook_MMTabbarItem_init, (IMP *)&_orig_MMTabbarItem_init);
        MSHookMessageEx(tabItem, @selector(setNormalTitle:),
            (IMP)hook_MMTabbarItem_setNormalTitle, (IMP *)&_orig_MMTabbarItem_setNormalTitle);
    }
    
    // L40141-40142: MMTabBarItemView
    Class tabItemView = objc_getClass("MMTabBarItemView");
    if (tabItemView) {
        MSHookMessageEx(tabItemView, @selector(setTitle:),
            (IMP)hook_MMTabBarItemView_setTitle, (IMP *)&_orig_MMTabBarItemView_setTitle);
    }
    
    // L40143-40144: MMTabBarController
    Class tabBarCtrl = objc_getClass("MMTabBarController");
    if (tabBarCtrl) {
        MSHookMessageEx(tabBarCtrl, @selector(setTabBarItemTitle:forIndex:),
            (IMP)hook_MMTabBarController_setTabBarItemTitle, (IMP *)&_orig_MMTabBarController_setTabBarItemTitle);
    }
    
    // L40145-40146: MMTableViewInfo
    Class tvInfo = objc_getClass("MMTableViewInfo");
    if (tvInfo) {
        MSHookMessageEx(tvInfo, @selector(getTitle:),
            (IMP)hook_MMTableViewInfo_getTitle, (IMP *)&_orig_MMTableViewInfo_getTitle);
    }
    
    // ===== 策略B: 上下文匹配 (3个) =====
    
    // L40147-40149: MMUILabel.setText: + setAttributedText:
    Class mmLabel = objc_getClass("MMUILabel");
    if (mmLabel) {
        MSHookMessageEx(mmLabel, @selector(setText:),
            (IMP)hook_MMUILabel_setText, (IMP *)&_orig_MMUILabel_setText);
        MSHookMessageEx(mmLabel, @selector(setAttributedText:),
            (IMP)hook_MMUILabel_setAttributedText, (IMP *)&_orig_MMUILabel_setAttributedText);
    }
    
    // L40150-40151: MFTitleView
    Class mfTitle = objc_getClass("MFTitleView");
    if (mfTitle) {
        MSHookMessageEx(mfTitle, @selector(updateTitleView:title:),
            (IMP)hook_MFTitleView_updateTitle, (IMP *)&_orig_MFTitleView_updateTitle);
    }
}

+ (void)reloadConfig {
    UISimplify_ReloadConfig();
}

@end