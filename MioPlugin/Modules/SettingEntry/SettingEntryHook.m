#import "SettingEntryHook.h"
#import "WPCommonUI.h"
#import "WPUIVC.h"
#import "WPOtherVC.h"
#import "WPBackupVC.h"
#import "WPAboutVC.h"
#import "WPAccountVC.h"
#import "../Voice/WPVoicePackSettingsVC.h"
#import "../../Core/ConfigManager.h"
#import "../../Config/Constants.h"
#import "../../Settings/Controllers/SettingGeneralFunctionController.h"
#import "../../Settings/Controllers/SettingRedEnvelopController.h"
#import "../../Settings/Controllers/SettingMomentsController.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import "../../Core/LogManager.h"
#import "../../Core/MioAlertHelper.h"
#import "../../Settings/Controllers/SettingCornerRadiusController.h"
#import "../../Settings/Common/WPWeChatTable.h"

// 仿微信优化做法：不在 viewDidLoad 里创建 UI（view bounds 可能为 (0,0,0,0)），
// 改在 viewWillAppear 里创建 —— 此时 view 已在 window 中，bounds 正确。
// 微信优化不创建新 VC，而是往微信现有 VC 上加子视图，所以天然没这个问题。
// 我们虽然创建了新 VC（MioPluginEntryVC），但把 UI 创建推迟到 viewWillAppear，
// 等价于在 view 已就绪后才开始施工，从根本上消除黑屏。

static void pluginEntryViewDidLoad(id self, SEL _cmd) {
    WPLog(@"Setting", @"[Entry] viewDidLoad");

    // 调用父类 viewDidLoad（创建基础 view）
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, _cmd);
    if (m) {
        ((void (*)(id, SEL))method_getImplementation(m))(self, _cmd);
    }

    UIViewController *vc = (UIViewController *)self;
    vc.title = @"Mio助手";

    // 不做 UI 创建 — 全部推迟到 viewWillAppear
    WPLog(@"Setting", @"[Entry] viewDidLoad done, defer UI to viewWillAppear");
}

static void pluginEntryViewDidAppear(id self, SEL _cmd, BOOL animated) {
    // 调用父类
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, _cmd);
    if (m) {
        ((void (*)(id, SEL, BOOL))method_getImplementation(m))(self, _cmd, animated);
    }
    // 兜底：pop 返回时子页 viewWillDisappear 恢复微信原样的时机晚于本页 viewWillAppear，
    // 这里在 appear 完成后再统一一次，避免顶栏停留在微信原色
    WPApplyNavAppearance((UIViewController *)self);
}

static void pluginEntryViewWillDisappear(id self, SEL _cmd, BOOL animated) {
    // 调用父类
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, _cmd);
    if (m) {
        ((void (*)(id, SEL, BOOL))method_getImplementation(m))(self, _cmd, animated);
    }
    WPRestoreNavAppearance((UIViewController *)self);
}

// ===== 搜索注册表：一级页挂 action（复用 openXxx:）；二级页/功能项挂 vcClass（wpSearchOpen: 反射 push）=====
// 条目两级：页面条目（title=页面名）+ 功能项条目（title=页面内功能行名），同一页面可出现多次，cat 显示归属页
static NSArray<NSDictionary *> *WPEntrySearchItems(void) {
    static NSArray *items = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        items = @[
            // --- 一级页面 ---
            @{ @"title": @"账户信息", @"action": @"openAccount:", @"kw": @"账户 信息 余额 account" },
            @{ @"title": @"语音包", @"action": @"openVoice:", @"kw": @"语音包 语音 转发 voice" },
            @{ @"title": @"常用功能", @"action": @"openCommon:", @"kw": @"常用 通用 common" },
            @{ @"title": @"界面定制", @"action": @"openUI:", @"kw": @"界面 定制 主题 ui" },
            @{ @"title": @"圆角美化", @"action": @"openCorner:", @"kw": @"圆角 美化 corner" },
            @{ @"title": @"红包设置", @"action": @"openRedEnvelop:", @"kw": @"红包 抢红包 收款 转账 拉群" },
            @{ @"title": @"朋友圈", @"action": @"openMoments:", @"kw": @"朋友圈 pyq 时刻 moments 集赞" },
            @{ @"title": @"其他功能", @"action": @"openOther:", @"kw": @"其他 other" },
            @{ @"title": @"备份", @"action": @"openBackup:", @"kw": @"备份 恢复 backup" },
            @{ @"title": @"关于", @"action": @"openAbout:", @"kw": @"关于 版本 about" },
            // --- 常用功能 ---
            @{ @"title": @"关键词提醒", @"vc": @"SettingKeywordAlertController", @"cat": @"常用功能", @"kw": @"关键词 提醒 keyword 命中 弹窗" },
            @{ @"title": @"指定页面上锁", @"vc": @"SettingPageLockController", @"cat": @"常用功能", @"kw": @"上锁 锁 密码 面容 指纹 pagelock 生物识别" },
            @{ @"title": @"消息防撤回", @"vc": @"SettingRevokeController", @"cat": @"常用功能", @"kw": @"防撤回 撤回 revoke 提示" },
            @{ @"title": @"通知撤回者", @"vc": @"SettingRevokeController", @"cat": @"常用功能", @"kw": @"撤回 通知 谁 通知者" },
            @{ @"title": @"自定义撤回消息显示", @"vc": @"SettingRevokeController", @"cat": @"常用功能", @"kw": @"撤回 格式 显示 自定义" },
            @{ @"title": @"消息时间", @"vc": @"SettingMessageTimeController", @"cat": @"常用功能", @"kw": @"消息 时间 显示 msgtime" },
            @{ @"title": @"启用一键已读消息", @"vc": @"SettingGeneralFunctionController", @"cat": @"通用功能", @"kw": @"已读 一键 读 read" },
            @{ @"title": @"启用修改文字(小丑功能)", @"vc": @"SettingGeneralFunctionController", @"cat": @"通用功能", @"kw": @"小丑 修改 文字 joker" },
            @{ @"title": @"启用退群检测", @"vc": @"SettingGeneralFunctionController", @"cat": @"通用功能", @"kw": @"退群 群 检测" },
            @{ @"title": @"修改解锁密码", @"vc": @"SettingGeneralFunctionController", @"cat": @"通用功能", @"kw": @"密码 解锁 加密" },
            // --- 红包设置 ---
            @{ @"title": @"启用自动抢红包", @"vc": @"SettingRedEnvelopController", @"cat": @"红包设置", @"kw": @"抢红包 红包 自动" },
            @{ @"title": @"红包信息同步到窗口", @"vc": @"SettingRedEnvelopController", @"cat": @"红包设置", @"kw": @"红包 同步 窗口 转发" },
            @{ @"title": @"显示红包详情", @"vc": @"SettingRedEnvelopController", @"cat": @"红包设置", @"kw": @"红包 详情" },
            @{ @"title": @"抢红包后自动回复", @"vc": @"SettingRedEnvelopController", @"cat": @"红包设置", @"kw": @"红包 回复 谢谢" },
            @{ @"title": @"过滤红包关键词", @"vc": @"SettingRedEnvelopController", @"cat": @"红包设置", @"kw": @"红包 过滤 关键词 拼多多" },
            @{ @"title": @"过滤不抢的群", @"vc": @"SettingRedEnvelopController", @"cat": @"红包设置", @"kw": @"红包 过滤 群 黑名单" },
            @{ @"title": @"启用自动收款", @"vc": @"SettingRedEnvelopController", @"cat": @"红包设置", @"kw": @"收款 转账 确认 到账" },
            @{ @"title": @"私聊转账自动收款", @"vc": @"SettingRedEnvelopController", @"cat": @"红包设置", @"kw": @"收款 转账 私聊" },
            @{ @"title": @"群聊转账自动收款", @"vc": @"SettingRedEnvelopController", @"cat": @"红包设置", @"kw": @"收款 转账 群聊" },
            @{ @"title": @"收款后自动回复", @"vc": @"SettingRedEnvelopController", @"cat": @"红包设置", @"kw": @"收款 回复" },
            @{ @"title": @"启用定额自动拉群", @"vc": @"SettingRedEnvelopController", @"cat": @"红包设置", @"kw": @"拉群 定额 转账 群 档位" },
            @{ @"title": @"拉群规则", @"vc": @"SettingFixedInviteRulesController", @"cat": @"自动抢红包", @"kw": @"拉群 规则 定额" },
            @{ @"title": @"红包推送提示", @"vc": @"SettingRedEnvelopController", @"cat": @"红包设置", @"kw": @"红包 通知 推送 提示" },
            @{ @"title": @"收款推送提示", @"vc": @"SettingRedEnvelopController", @"cat": @"红包设置", @"kw": @"收款 通知 推送 提示" },
            // --- 朋友圈 ---
            @{ @"title": @"便捷朋友圈", @"vc": @"SettingMomentsController", @"cat": @"朋友圈功能", @"kw": @"朋友圈 便捷 半屏 pyq" },
            @{ @"title": @"高清朋友圈", @"vc": @"SettingMomentsController", @"cat": @"朋友圈功能", @"kw": @"朋友圈 高清 清晰" },
            @{ @"title": @"朋友圈伪集赞", @"vc": @"SettingMomentsController", @"cat": @"朋友圈功能", @"kw": @"伪集赞 点赞 评论 朋友圈 数量 文本" },
            // --- 界面定制 ---
            @{ @"title": @"修改全局布局", @"vc": @"WPUILayoutSettingsVC", @"cat": @"界面定制", @"kw": @"全局 布局 字号 缩放 倍率 字体 大小" },
            @{ @"title": @"修改对话布局", @"vc": @"WPUILayoutSettingsVC", @"cat": @"界面定制", @"kw": @"对话 聊天 布局 字号 缩放 倍率" },
            @{ @"title": @"布局设置", @"vc": @"WPUILayoutSettingsVC", @"cat": @"界面定制", @"kw": @"布局 字体 font layout" },
            @{ @"title": @"聊天顶部栏", @"vc": @"SettingChatTopBarController", @"cat": @"界面定制", @"kw": @"顶部 聊天 顶栏 头像" },
            @{ @"title": @"显示聊天头像", @"vc": @"SettingChatTopBarController", @"cat": @"界面定制", @"kw": @"聊天 头像 显示" },
            @{ @"title": @"显示群聊人数", @"vc": @"SettingChatTopBarController", @"cat": @"界面定制", @"kw": @"群聊 人数 显示" },
            @{ @"title": @"管理显示黑名单", @"vc": @"SettingChatTopBarController", @"cat": @"界面定制", @"kw": @"黑名单 顶部 显示" },
            @{ @"title": @"隐藏头像", @"vc": @"SettingAvatarHideController", @"cat": @"界面定制", @"kw": @"头像 隐藏 avatar" },
            @{ @"title": @"UI净化", @"vc": @"WPUIPurifyVC", @"cat": @"界面定制", @"kw": @"净化 气泡 分隔线 听写 purify" },
            @{ @"title": @"隐藏聊天气泡背景", @"vc": @"WPUIPurifyVC", @"cat": @"界面定制", @"kw": @"气泡 背景 隐藏 净化" },
            @{ @"title": @"禁用输入框听写", @"vc": @"WPUIPurifyVC", @"cat": @"界面定制", @"kw": @"听写 输入 禁用 麦克风" },
            @{ @"title": @"输入框占位文本", @"vc": @"WPUIPlaceholderTextVC", @"cat": @"界面定制", @"kw": @"占位 输入框 文本 提示 placeholder" },
            @{ @"title": @"附件布局优化", @"vc": @"WPUIAttachmentLayoutVC", @"cat": @"界面定制", @"kw": @"附件 布局 图片 列数" },
            // --- 圆角美化 ---
            @{ @"title": @"列表圆角", @"vc": @"SettingListCornerRadiusController", @"cat": @"圆角美化", @"kw": @"列表 圆角 corner" },
            @{ @"title": @"卡片背景", @"vc": @"SettingCardBackgroundController", @"cat": @"圆角美化", @"kw": @"卡片 背景 card" },
            @{ @"title": @"开启资料圆角", @"vc": @"SettingCardBackgroundController", @"cat": @"圆角美化", @"kw": @"资料 圆角 头像" },
            @{ @"title": @"隐藏信息卡片", @"vc": @"SettingCardBackgroundController", @"cat": @"圆角美化", @"kw": @"卡片 信息 隐藏" },
            // --- 其他功能 ---
            @{ @"title": @"调试日志", @"vc": @"WPOtherVC", @"cat": @"其他功能", @"kw": @"调试 日志 debug" },
            @{ @"title": @"隐藏内容", @"vc": @"WPOtherVC", @"cat": @"其他功能", @"kw": @"隐藏 内容" },
            @{ @"title": @"免提示", @"vc": @"WPOtherVC", @"cat": @"其他功能", @"kw": @"免提示 提示 弹窗" },
            @{ @"title": @"重置所有配置", @"vc": @"WPBackupVC", @"cat": @"备份", @"kw": @"重置 配置 恢复出厂" },
        ];
    });
    return items;
}

// 填充入口页功能行（keyword 为空 = 完整功能列表；非空 = 搜索结果）。复用模式重建，搜索输入变化时反复调用
static void wpEntryBuildRows(WPWeChatTable *wc, NSString *keyword) {
    if (!wc) return;
    if (![wc clearSectionsForReuse]) {
        WPLog(@"Setting", @"[Entry] [SEARCH] clearSectionsForReuse 不可用，放弃重建");
        return;
    }
    WPWGroup *g = [wc addGroup];
    id handler = [MioPluginSwitchHandler sharedInstance];
    NSString *kw = [keyword stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]].lowercaseString;

    if (kw.length == 0) {
        [g wpSetHeader:@"功能列表" footer:nil];
        NSArray *navItems = @[@[@"账户信息", @"openAccount:"], @[@"语音包", @"openVoice:"], @[@"常用功能", @"openCommon:"], @[@"界面定制", @"openUI:"], @[@"圆角美化", @"openCorner:"], @[@"红包设置", @"openRedEnvelop:"], @[@"朋友圈", @"openMoments:"], @[@"其他功能", @"openOther:"], @[@"备份", @"openBackup:"], @[@"关于", @"openAbout:"]];
        for (NSUInteger i = 0; i < navItems.count; i++) {
            id cell = WPWCNavCell(NSSelectorFromString(@"wpEntryNavTap:"),
                                  handler,
                                  navItems[i][0], nil);
            if (cell) {
                objc_setAssociatedObject(cell, "action", navItems[i][1], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                [g addCell:cell];
            }
        }
    } else {
        [g wpSetHeader:@"搜索结果" footer:@"点击结果直达对应设置页"];
        NSUInteger hits = 0;
        for (NSDictionary *item in WPEntrySearchItems()) {
            NSString *title = item[@"title"];
            BOOL match = [title.lowercaseString containsString:kw];
            if (!match) {
                for (NSString *k in [item[@"kw"] componentsSeparatedByString:@" "]) {
                    if (k.length && [k.lowercaseString containsString:kw]) { match = YES; break; }
                }
            }
            if (!match) continue;
            hits++;
            NSString *right = item[@"cat"];
            id cell = WPWCNavCell(NSSelectorFromString(@"wpEntryNavTap:"), handler, title, right.length ? right : nil);
            if (!cell) continue;
            if ([item[@"action"] length]) {
                objc_setAssociatedObject(cell, "action", item[@"action"], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            } else {
                objc_setAssociatedObject(cell, "action", @"wpSearchOpen:", OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                objc_setAssociatedObject(cell, "vcClass", item[@"vc"], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                objc_setAssociatedObject(cell, "categoryName", item[@"cat"], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            }
            [g addCell:cell];
        }
        if (hits == 0) {
            // action 未挂 → wpEntryNavTap 直接 return，纯提示行不可跳转
            id cell = WPWCNavCell(NSSelectorFromString(@"wpEntryNavTap:"), handler,
                                  [NSString stringWithFormat:@"未找到与“%@”相关的功能", keyword], nil);
            if (cell) [g addCell:cell];
        }
    }
    [wc reloadAsync];
}

static void pluginEntryViewWillAppear(id self, SEL _cmd, BOOL animated) {
    WPLog(@"Setting", @"[Entry] viewWillAppear");

    // 调用父类
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, _cmd);
    if (m) {
        ((void (*)(id, SEL, BOOL))method_getImplementation(m))(self, _cmd, animated);
    }

    UIViewController *vc = (UIViewController *)self;

    // 每次出现都重设背景（微信主题系统可能在子页返回时改过 view/scrollView 颜色）
    vc.view.backgroundColor = WPBgColor();
    for (UIView *sub in vc.view.subviews) {
        if ([sub isKindOfClass:[UIScrollView class]]) {
            sub.backgroundColor = WPBgColor();
        }
    }

    // 顶栏颜色与页面背景统一：viewWillAppear 应用一次，viewDidAppear 还有兜底二次应用
    WPApplyNavAppearance(vc);

    // associated object 做一次性标记（runtime 级原子安全，无需 @synchronized）
    if (objc_getAssociatedObject(self, @"_entrySetupDone")) {
        return;
    }
    objc_setAssociatedObject(self, @"_entrySetupDone", @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    // bounds 检查
    if (vc.view.bounds.size.width < 1) {
        WPLog(@"Setting", @"[Entry] viewWillAppear: bounds invalid (w=%.0f), skip",
              vc.view.bounds.size.width);
        objc_setAssociatedObject(self, @"_entrySetupDone", nil, OBJC_ASSOCIATION_ASSIGN); // 允许重试
        return;
    }

    CGFloat w = vc.view.bounds.size.width;

    // === 以下是 UI 创建逻辑（与原来完全一致，只是移到了 viewWillAppear） ===
    // 与子页面(SettingCategoryController)对齐：self.view 和 scrollView 都设 WPBgColor，
    // 防止 scrollView 未完全覆盖时露出微信基类的主题背景色
    vc.view.backgroundColor = WPBgColor();

    CGFloat y = 8;

    UIView *heroCard = WPMakeCard(y, w);
    CGFloat hy = 24;

    UIView *avatar = [[UIView alloc] initWithFrame:CGRectMake((w - kPad * 2) / 2 - 40, hy, 80, 80)];
    avatar.backgroundColor = [UIColor colorWithRed:0.851 green:0.851 blue:0.859 alpha:1.0];
    avatar.layer.cornerRadius = 40;
    [heroCard addSubview:avatar];
    hy += 88;

    UILabel *heroName = [[UILabel alloc] initWithFrame:CGRectMake(0, hy, w - kPad * 2, 28)];
    heroName.text = @"Mio助手";
    heroName.font = [UIFont systemFontOfSize:22 weight:UIFontWeightBold];
    heroName.textColor = WPAccent();
    heroName.textAlignment = NSTextAlignmentCenter;
    [heroCard addSubview:heroName];
    hy += 36;

    UILabel *heroVer = [[UILabel alloc] initWithFrame:CGRectMake(0, hy, w - kPad * 2, 18)];
    heroVer.text = [NSString stringWithFormat:@"v%@", kPluginVersion];
    heroVer.font = [UIFont systemFontOfSize:13];
    heroVer.textColor = [UIColor colorWithRed:0.400 green:0.800 blue:0.451 alpha:1.0];
    heroVer.textAlignment = NSTextAlignmentCenter;
    [heroCard addSubview:heroVer];
    hy += 28;

    CGRect hcf = heroCard.frame; hcf.size.height = hy; heroCard.frame = hcf;

    // === 微信引擎：功能列表交给微信原生渲染（WCR 同款 NormalCell accessoryType=1，箭头是微信自家图） ===
    WPWeChatTable *wc = [WPWeChatTable tableForVC:vc];
    if (wc) {
        UITableView *tv = wc.tableView;
        // headW 必须跟表实际宽度（[UIScreen] 硬编码在表宽变化时会让 header 错位重排）
        CGFloat headW = tv.bounds.size.width > 1 ? tv.bounds.size.width : vc.view.bounds.size.width;

        // hero 卡包一层容器作 tableHeaderView；顶部 8px 间隔与子页面 y=8 起步对齐
        UIView *headerWrap = [[UIView alloc] initWithFrame:CGRectMake(0, 0, headW, hy + 14)];
        heroCard.frame = CGRectMake(kPad, 8, headW - kPad * 2, hy);
        heroCard.autoresizingMask = UIViewAutoresizingFlexibleWidth;
        [headerWrap addSubview:heroCard];

        // 搜索卡片：hero 下方，输入实时过滤功能列表，点击结果直达页面
        CGFloat sy = 8 + hy + 10;
        UIView *searchCard = WPMakeCard(sy, headW);
        searchCard.frame = CGRectMake(kPad, sy, headW - kPad * 2, 44);
        UITextField *searchField = [[UITextField alloc] initWithFrame:CGRectMake(12, 0, headW - kPad * 2 - 24, 44)];
        searchField.placeholder = @"搜索功能";
        searchField.font = [UIFont systemFontOfSize:15];
        searchField.clearButtonMode = UITextFieldViewModeWhileEditing;
        searchField.returnKeyType = UIReturnKeyDone;
        searchField.autocorrectionType = UITextAutocorrectionTypeNo;
        objc_setAssociatedObject(searchField, "wcTable", wc, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [searchField addTarget:[MioPluginSwitchHandler sharedInstance]
                        action:@selector(searchTextChanged:)
              forControlEvents:UIControlEventEditingChanged];
        [searchField addTarget:[MioPluginSwitchHandler sharedInstance]
                        action:@selector(searchFieldDone:)
              forControlEvents:UIControlEventEditingDidEndOnExit];
        [searchCard addSubview:searchField];
        [headerWrap addSubview:searchCard];
        CGFloat headH = sy + 44 + 10;

        // UIKit 已知要求：tableHeaderView.frame 修改后需重新赋值才会重算内容区布局
        headerWrap.frame = CGRectMake(0, 0, headW, headH);
        tv.tableHeaderView = headerWrap;
        headerWrap.frame = CGRectMake(0, 0, headW, headH);
        tv.tableHeaderView = headerWrap;

        wpEntryBuildRows(wc, nil); // 首次填充功能列表行（搜索重建走同一入口）

        UILabel *wfooter = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, headW, 50)];
        wfooter.text = [NSString stringWithFormat:@"Mio助手 v%@", kPluginVersion];
        wfooter.font = [UIFont systemFontOfSize:12];
        wfooter.textColor = WPT3();
        wfooter.textAlignment = NSTextAlignmentCenter;
        wfooter.numberOfLines = 2;
        wc.tableView.tableFooterView = wfooter;

        [vc.view addSubview:wc.containerView]; // WCR 同款容器挂载：表在容器内 y=0，容器定位导航栏下方；直接挂 tableView 会成 y=0 全屏，hero 顶进导航栏
        // 行数据填充 + 延迟双刷已由 wpEntryBuildRows 内的 reloadAsync 完成（async 排队在 addSubview 之后）

        WPLog(@"Setting", @"[Entry] 微信引擎列表完成 (header=%@)", NSStringFromClass([headerWrap class]));
        return;
    }

    // 旧兜底路径已删除：微信 cell 框架缺失时入口页无法渲染（与子页面策略一致）
    WPLog(@"Setting", @"[Entry] 微信 cell 框架缺失，入口页无法渲染（旧兜底已移除）");
}

@implementation MioPluginSwitchHandler

+ (instancetype)sharedInstance {
    static MioPluginSwitchHandler *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[MioPluginSwitchHandler alloc] init];
    });
    return instance;
}

- (void)onEditRowTap:(id)sender {
    NSString *key = objc_getAssociatedObject(sender, "editConfigKey");
    NSString *title = objc_getAssociatedObject(sender, "editTitle");
    UILabel *valueLabel = objc_getAssociatedObject(sender, "editValueLabel");
    NSString *hint = objc_getAssociatedObject(sender, "editConfigHint");
    if (!key || !title) return;

    NSString *currentValue = nil;
    @try {
        id val = [ConfigManager valueForKey:key];
        if ([val isKindOfClass:[NSString class]]) currentValue = val;
        else if ([val isKindOfClass:[NSNumber class]]) currentValue = [val stringValue];
    } @catch (NSException *e) {}

    NSString *message = objc_getAssociatedObject(sender, @"editMessage");
    NSNumber *typeNum = objc_getAssociatedObject(sender, @"editValueType");
    InputValueType valueType = typeNum ? [typeNum integerValue] : InputValueTypeNumber;
    [MioAlertHelper showInputAlert:title
                           message:message ?: @""
                       initialText:currentValue ?: @""
                       placeholder:hint ?: @""
                          keyboard:(valueType == InputValueTypeNumber)
                                       ? UIKeyboardTypeNumbersAndPunctuation
                                       : UIKeyboardTypeDefault
                            secure:NO
                        onConfirm:^(NSString *input) {
        NSString *newValue = input ?: @"";
        @try {
            if (newValue.length == 0 && hint.length > 0) {
                newValue = hint;
            }

            if (valueType == InputValueTypeText) {
                // 文本类型：直接保存字符串
                [ConfigManager setValue:newValue forKey:key];
            } else {
                // 数值类型：转为 NSDecimalNumber 保存
                NSDecimalNumber *decimal = [NSDecimalNumber decimalNumberWithString:newValue];
                [ConfigManager setValue:decimal forKey:key];
            }

            [ConfigManager saveAll];
            WPLog(@"Setting", @"[EDIT] %@ = %@ (type=%ld)", key, newValue, (long)valueType);
            if (valueLabel) {
                valueLabel.text = newValue.length > 0 ? newValue : hint ?: @"";
            }
        } @catch (NSException *e) {
            WPLog(@"Setting", @"[ERR] save %@: %@ - %@", key, e.name, e.reason);
        }
    }];
}

- (void)onNavigate:(UIButton *)sender {
    NSString *action = objc_getAssociatedObject(sender, "action");
    if (!action) return;
    SEL sel = NSSelectorFromString(action);
    if ([self respondsToSelector:sel]) {
        ((void (*)(id, SEL, id))objc_msgSend)(self, sel, sender);
    }
}

- (void)openAccount:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] openAccount: currentVC nil"); return; }
    WPAccountVC *subVC = [[WPAccountVC alloc] init];
    [vc.navigationController pushViewController:subVC animated:YES];
    WPLog(@"Setting", @"[Nav] pushed WPAccountVC");
}

- (void)openVoice:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] openVoice: currentVC nil"); return; }
    WPVoicePackSettingsVC *subVC = [[WPVoicePackSettingsVC alloc] init];
    [vc.navigationController pushViewController:subVC animated:YES];
    WPLog(@"Setting", @"[Nav] pushed WPVoicePackSettingsVC");
}

- (void)openCommon:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] openCommon: currentVC nil"); return; }
    SettingGeneralFunctionController *subVC = [[SettingGeneralFunctionController alloc] init];
    subVC.categoryName = @"通用功能";
    [vc.navigationController pushViewController:subVC animated:YES];
    WPLog(@"Setting", @"[Nav] pushed SettingGeneralFunctionController");
}

- (void)openUI:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] openUI: currentVC nil"); return; }
    WPUIVC *subVC = [[WPUIVC alloc] init];
    [vc.navigationController pushViewController:subVC animated:YES];
    WPLog(@"Setting", @"[Nav] pushed WPUIVC");
}

- (void)openCorner:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] openCorner: currentVC nil"); return; }
    SettingCornerRadiusController *subVC = [[SettingCornerRadiusController alloc] init];
    [vc.navigationController pushViewController:subVC animated:YES];
    WPLog(@"Setting", @"[Nav] pushed SettingCornerRadiusController");
}

- (void)openRedEnvelop:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] openRedEnvelop: currentVC nil"); return; }
    SettingRedEnvelopController *subVC = [[SettingRedEnvelopController alloc] init];
    subVC.categoryName = @"自动抢红包";
    [vc.navigationController pushViewController:subVC animated:YES];
    WPLog(@"Setting", @"[Nav] pushed SettingRedEnvelopController");
}

- (void)openMoments:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] openMoments: currentVC nil"); return; }
    SettingMomentsController *subVC = [[SettingMomentsController alloc] init];
    subVC.categoryName = @"朋友圈功能";
    [vc.navigationController pushViewController:subVC animated:YES];
    WPLog(@"Setting", @"[Nav] pushed SettingMomentsController");
}

- (void)openOther:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] openOther: currentVC nil"); return; }
    WPOtherVC *subVC = [[WPOtherVC alloc] init];
    [vc.navigationController pushViewController:subVC animated:YES];
    WPLog(@"Setting", @"[Nav] pushed WPOtherVC");
}

- (void)openBackup:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] openBackup: currentVC nil"); return; }
    WPBackupVC *subVC = [[WPBackupVC alloc] init];
    [vc.navigationController pushViewController:subVC animated:YES];
    WPLog(@"Setting", @"[Nav] pushed WPBackupVC");
}

- (void)openAbout:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] openAbout: currentVC nil"); return; }
    WPAboutVC *subVC = [[WPAboutVC alloc] init];
    [vc.navigationController pushViewController:subVC animated:YES];
    WPLog(@"Setting", @"[Nav] pushed WPAboutVC");
}

- (UIViewController *)currentVCFrom:(id)sender {
    // 微信引擎回调传入的是 cellManager（非视图），走顶层 VC 兜底
    if (![sender isKindOfClass:[UIView class]]) {
        return WPGetTopVCForPresentation();
    }
    UIResponder *responder = (UIResponder *)sender;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

// 微信引擎入口列表回调：入参 = cellManager（反编译实证），action 名挂在 assoc "action"
- (void)wpEntryNavTap:(id)arg {
    NSString *action = objc_getAssociatedObject(arg, "action");
    WPLog(@"Setting", @"[Entry] wpEntryNavTap: action=%@ arg=%@", action, arg ? NSStringFromClass([arg class]) : @"nil");
    if (!action) return;
    SEL sel = NSSelectorFromString(action);
    if ([self respondsToSelector:sel]) {
        ((void (*)(id, SEL, id))objc_msgSend)(self, sel, arg);
    }
}

#pragma mark - 入口页搜索

- (void)searchTextChanged:(UITextField *)tf {
    WPWeChatTable *wc = objc_getAssociatedObject(tf, "wcTable");
    if (!wc) return;
    wpEntryBuildRows(wc, tf.text ?: @"");
}

- (void)searchFieldDone:(UITextField *)tf {
    [tf resignFirstResponder];
}

// 搜索结果二级页跳转：cellManager 挂 vcClass（类名）/categoryName，反射创建后 push
- (void)wpSearchOpen:(id)arg {
    NSString *clsName = objc_getAssociatedObject(arg, "vcClass");
    if (!clsName.length) return;
    Class cls = objc_getClass(clsName.UTF8String);
    if (!cls) {
        WPLog(@"Setting", @"[Search] class not found: %@", clsName);
        return;
    }
    UIViewController *vc = [[cls alloc] init];
    NSString *cat = objc_getAssociatedObject(arg, "categoryName");
    if (cat.length && [vc respondsToSelector:@selector(setCategoryName:)]) {
        ((void (*)(id, SEL, id))objc_msgSend)(vc, NSSelectorFromString(@"setCategoryName:"), cat);
    }
    UIViewController *top = WPGetTopVCForPresentation();
    [top.navigationController pushViewController:vc animated:YES];
    WPLog(@"Setting", @"[Search] pushed %@", clsName);
}

@end

@implementation SettingEntryHook

+ (void)install {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        WPLog(@"Setting", @"SettingEntryHook install");

        Class pluginsMgrClass = objc_getClass("WCPluginsMgr");
        if (pluginsMgrClass) {
            WPLog(@"Setting", @"[Plugin] WCPluginsMgr found");
            id sharedInstance = ((id (*)(id, SEL, ...))objc_msgSend)(pluginsMgrClass, NSSelectorFromString(@"sharedInstance"));
            if (sharedInstance) {
                Class baseClass = WPGetBaseClass();
                WPLog(@"Setting", @"[Plugin] baseClass: %@", NSStringFromClass(baseClass));

                Class entryClass = objc_getClass("MioPluginEntryVC");
                if (!entryClass) {
                    entryClass = objc_allocateClassPair(baseClass, "MioPluginEntryVC", 0);
                    if (entryClass) {
                        class_addMethod(entryClass, NSSelectorFromString(@"viewDidLoad"), (IMP)pluginEntryViewDidLoad, "v@:");
                        class_addMethod(entryClass, NSSelectorFromString(@"viewWillAppear:"), (IMP)pluginEntryViewWillAppear, "v@:B");
                        class_addMethod(entryClass, NSSelectorFromString(@"viewDidAppear:"), (IMP)pluginEntryViewDidAppear, "v@:B");
                        class_addMethod(entryClass, NSSelectorFromString(@"viewWillDisappear:"), (IMP)pluginEntryViewWillDisappear, "v@:B");
                        objc_registerClassPair(entryClass);
                        WPLog(@"Setting", @"[Plugin] MioPluginEntryVC created");
                    } else {
                        WPLog(@"Setting", @"[Plugin] MioPluginEntryVC create failed");
                    }
                } else {
                    WPLog(@"Setting", @"[Plugin] MioPluginEntryVC exists");
                }

                if (entryClass) {
                    SEL regSel = NSSelectorFromString(@"registerControllerWithTitle:version:controller:");
                    if ([sharedInstance respondsToSelector:regSel]) {
                        ((void (*)(id, SEL, NSString *, NSString *, NSString *))objc_msgSend)(
                            sharedInstance, regSel,
                            @"Mio助手", kPluginVersion, @"MioPluginEntryVC");
                        WPLog(@"Setting", @"[Plugin] registered");
                    } else {
                        WPLog(@"Setting", @"[Plugin] registerController not found");
                    }
                }
            } else {
                WPLog(@"Setting", @"[Plugin] sharedInstance nil");
            }
        } else {
            WPLog(@"Setting", @"[Plugin] WCPluginsMgr not found");
        }

        WPLog(@"Setting", @"SettingEntryHook install complete");
    });
}

@end
