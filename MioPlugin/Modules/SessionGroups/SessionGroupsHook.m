#import "SessionGroupsHook.h"
#import "SessionGroupsConfig.h"
#import "SessionGroupsTab.h"
#import "SessionGroupsStripView.h"
#import "SessionGroupManagerVC.h"
#import "../SideGroups/SideGroupsConfig.h"
#import "../SideGroups/SideGroupsRailView.h"
#import "../SideGroups/SideGroupsDirCell.h"
#import "../SideGroups/SideGroupsActions.h"
#import "../../Core/LogManager.h"
#import "../../Core/MioAlertHelper.h"
#import "../SettingEntry/WPCommonUI.h"
#import <UIKit/UIKit.h>
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>

// ─────────────────────────────────────────────────────────────
// 反编译证据索引（WCR_2.1.8_export\groups\）：
//  - 默认四组:           Misc_part6.c:3897-3917
//  - scope 位语义:       Misc_part6.c:8722-8748（bit0单聊 bit1群聊 bit2公众号 0x18特殊 0x20置顶 0x40未读 0x80@我）
//  - scope==0 落 other:  Misc_part6.c:8755-8780
//  - other 补公众号位:   effectiveScopeMaskForTab Misc_part6.c:7886-7913
//  - 置顶过滤:           shouldFilterTopArrayForTab Misc_part6.c:7822-7875 + FilterPinned 8946-8958
//  - 未读统计:           unreadCountForTab Misc_part6.c:10285-10570（all→0 于 10348；m_bShowUnReadAsRedDot 跳过 10508-10531）
//  - chatroom 判定:      scopeForContact Misc_part13.c:24507-24511（@chatroom/@im_chatroom 后缀）
//  - 公众号判定:         Misc_part13.c:24518-24536（brandservice/brandsessionholder/_openim）+ contact.isServiceBrand
//  - 特殊账号:           isPassthroughSystemContact Misc_part13.c:25148-25150（dispatch_once NSSet contains 小写名）
//  - 单聊判定:           Misc_part13.c:25156（isChatSession）
//  - 联系人兜底:         CContactMgr getContactByName:（Misc_part13.c:25114-25121；WCR hook 了该方法 FUN__part6.c:46367）
//  - numberOfRows:       wcrGrouping_.c:4616-4726（目标 section 返回过滤数，其余透传）
//  - 行重映射:           WCRGroupingSnapshot.hiddenOriginalRowsBySection（头文件）+ wcrGrouping_.c:5481+
//  - 增量保护:           insertSessionCell 等关动画透传+刷新（wcrGrouping_.c:4419-4616）；insertRow:/deleteSessionCell: 只刷新不透传
//  - reloadData 无动画:  Misc.c:21388-21389
//  - 头部接管:           直接接管 section(0) header（hook viewForHeader/heightForHeader，section==0
//                        且快照生效时返回分组条 cell，高 44；SGUnstickHeader 去粘滞让条跟随内容
//                        滚动，避免与微信「Windows 已登录」浮层提示条同位重叠）
//                        WCR 侧为 FUN_003b53f4 谓词（FUN__part6.c:55286）+ 主动 addSubview，机制不同仅语义对齐
//  - 滑动手势:           FUN__part13.c:16571-16853（dir 取反/循环/分母 max(W*0.35,100)/阈值 50·12+450·800）
//  - 触感映射:           Misc_part4.c:1755-1784（1→Soft(3) 2→Medium(1) 3→Heavy(2)）
//  - 选中组:             homeTelegramGroupingSelectedTabId（Misc_part21.c:41181；Mio 仅会话内记忆，不落盘）
//  - 分组持久化:         homeTelegramGroupingTabs 字典数组（Misc_part6.c:4436/5124；ensureTabsLoaded 4325-4440）
//  - kind3 匹配:         session:matchesTab:（Misc_part6.c:8537-8800；m_uLastTime >1e12 则 /1000，窗口 [0, days*86400]）
//  - 目录去重:           isDuplicateOfTab（Misc_part6.c:4925-5040）+ availableQuickAddTabs（7513-7660）
// ─────────────────────────────────────────────────────────────

// 关联对象键用自指指针（objc_*AssociatedObject 要求 const void *，不能用 NSString）
static const void *kSGAssocSnapshot = &kSGAssocSnapshot;
static const void *kSGAssocStrip    = &kSGAssocStrip;
static const void *kSGAssocHeaderCell = &kSGAssocHeaderCell;
static const void *kSGAssocRefresh  = &kSGAssocRefresh;
static const void *kSGAssocPan      = &kSGAssocPan;
static const void *kSGAssocPanDlg   = &kSGAssocPanDlg;
static const void *kSGAssocRail     = &kSGAssocRail;     // 侧边分组栏（挂 vc）
static const void *kSGAssocRailNative = &kSGAssocRailNative; // 列表原生 frame（挂 table，NSValue）
static const void *kSGAssocRailWanted = &kSGAssocRailWanted; // 上轮让位 frame（挂 table，区分自触发与原生变更）
static const void *kSGAssocRailSelfWrite = &kSGAssocRailSelfWrite; // 自写帧标志（挂 table，setFrame hook 放行用）

static IMP orig_numberOfSections      = NULL;
static IMP orig_numberOfRows          = NULL;
static IMP orig_cellForRow            = NULL;
static IMP orig_heightForRow          = NULL;
static IMP orig_didSelect             = NULL;
static IMP orig_canEdit               = NULL;
static IMP orig_editingStyle          = NULL;
static IMP orig_commitEditing         = NULL;
static IMP orig_willDisplay           = NULL;
static IMP orig_didEndDisplaying      = NULL;
static IMP orig_viewForHeader         = NULL;
static IMP orig_heightForHeader       = NULL;
static IMP orig_viewDidLoad           = NULL;
static IMP orig_viewWillAppear        = NULL;
static IMP orig_viewDidAppear         = NULL;
static IMP orig_reloadSessions        = NULL;
static IMP orig_reloadAll             = NULL;
static IMP orig_insertSessionCell     = NULL;
static IMP orig_deleteSessionCell     = NULL;
static IMP orig_insertRow             = NULL;
static IMP orig_deleteSessionCellAt   = NULL;
static IMP orig_logicGetSession       = NULL; // 仅捕获 IMP 用于枚举，不替换
static IMP orig_tableLayout           = NULL; // MainFrameTableView.layoutSubviews（unstick 用）

// header cell 标记 tag（WCR tag 0x7f149 同语义；"SG01"）——创建时标记，调试可辨识
#define SG_HEADER_CELL_TAG 0x53303031

// header cell 弱引用缓存：hook_viewForHeader 出口赋值，SGUnstickHeader 直接读，免去
// layoutSubviews 热路径的 table.subviews 遍历。微信首页只有一个 MainFrameTableView，
// 单例缓存足够；weak 保证 cell 销毁后自动置 nil，无悬垂指针
static __weak UITableViewCell *sHeaderHostCell = nil;

static BOOL sInstalled = NO;
static NSHashTable *sSeenVCs = nil; // weak，记录出现过的 NMFVC

static void SGSelectTabIndex(id vc, NSInteger idx, CGFloat velocity, BOOL animated);
static void SGDispatchLongPress(id vc, SessionGroupsTab *tab);
static void SGShowLongPressMenu(id vc, SessionGroupsTab *tab);
static void SGOpenGroupManager(void);
static BOOL SGIsMainFrameVC(id vc);
static UITableView *SGMainTableView(id vc);
static BOOL SGActive(id vc);

// 手势落点（不给微信类 addMethod，用独立 sink 对象）
@interface SGHomeGestureSink : NSObject
- (void)sgHandlePan:(UIPanGestureRecognizer *)pan;
@end
static SGHomeGestureSink *sGestureSink = nil;

// 滑动切换手势仲裁 delegate（WCR Misc.c:43447-43879 WCRTGSwipeSwitchDelegate 同构）
// 赢表格滚动 pan 的关键：中央区要求表格系 pan 先失败（横滑时表格不可横滚必 fail → 我们接管；
// 竖滑表格 pan 直接成功 → 让位），shouldBegin 门闩横向占优 1.2 倍 + 条区放行 + 边缘 60pt 排除
@interface SGSwipeSwitchDelegate : NSObject
- (instancetype)initWithVC:(id)vc;
@end

#pragma mark - 快照模型

// 目录计划行（XOS XZYCLGEntry 语义，构建器 FUN__part4.c:23307-23347）：
// 组头行（isHeader，kind=1）自包含 tabId/title/count/unread/folded（folded 为构建时快照，
// XOS FUN_0029f080 setFolded 同款）；会话行携带原生 section/row，hook 链直接重映射透传
//（XOS entry.row/section 存原生坐标，cellForRow 按 entry 重映射，FUN__part4.c:16473-17100）
@interface SGPlanRow : NSObject
@property (nonatomic, assign) BOOL isHeader;
@property (nonatomic, copy) NSString *tabId;
@property (nonatomic, copy) NSString *title;           // 组头行
@property (nonatomic, assign) NSUInteger count;        // 组头行：列入目录的本组会话数
@property (nonatomic, assign) NSUInteger unread;       // 组头行：未读条数和（红点会话受 sgFoldGroupNoRedDot 折扣）
@property (nonatomic, assign) BOOL redDot;             // 组头行：组内存在免打扰未读
@property (nonatomic, assign) BOOL folded;             // 组头行：构建时折叠态（chevron ˅/›）
@property (nonatomic, assign) NSInteger nativeSection; // 会话行
@property (nonatomic, assign) NSInteger nativeRow;     // 会话行
@end
@implementation SGPlanRow
@end

@interface SGHomeSnapshot : NSObject
@property (nonatomic, assign) NSInteger sectionCount;
@property (nonatomic, strong) NSArray<NSNumber *> *origCounts;             // 每 section 原行数
@property (nonatomic, strong) NSArray<NSArray<NSNumber *> *> *hiddenRows;  // 每 section 隐藏的原行号（升序）
@property (nonatomic, assign) NSInteger targetSection;                     // 会话最多的 section
@property (nonatomic, copy) NSString *signature;
@property (nonatomic, strong) NSArray<SessionGroupsTab *> *tabs;
@property (nonatomic, strong) NSArray<NSNumber *> *tabUnread;              // 每组未读数（all 恒 0）
@property (nonatomic, strong) NSArray<NSNumber *> *tabRedDot;
@property (nonatomic, assign) BOOL dirMode;                                // 目录收纳模式（InList 且选中全部组，XOS 位置模式 6 语义）
@property (nonatomic, strong) NSArray<SGPlanRow *> *dirPlan;               // 目录计划行（section 0 全量驱动：组头+会话）
@end
@implementation SGHomeSnapshot
@end

#pragma mark - 会话字段动态访问（MMSessionInfo，见 微信头文件\WeChat\MMSessionInfo.h）

static inline BOOL SGResponds(id obj, SEL sel) {
    return obj && [(id)obj respondsToSelector:sel];
}

static NSString *SGUsernameOf(id session) {
    if (SGResponds(session, @selector(m_nsUserName))) {
        id v = ((id (*)(id, SEL))objc_msgSend)(session, @selector(m_nsUserName));
        if ([v isKindOfClass:NSString.class]) return v;
    }
    return nil;
}

static NSUInteger SGUnreadOf(id session) {
    if (SGResponds(session, @selector(m_uUnReadCount))) {
        return (NSUInteger)((NSUInteger (*)(id, SEL))objc_msgSend)(session, @selector(m_uUnReadCount));
    }
    return 0;
}

static BOOL SGIsTopOf(id session) {
    if (SGResponds(session, @selector(m_bIsTop))) {
        return ((BOOL (*)(id, SEL))objc_msgSend)(session, @selector(m_bIsTop));
    }
    return NO;
}

// kind3 时间窗基准（Misc_part6.c:8537-8800）：m_uLastTime 秒级，>1e12 视为毫秒 /1000
static NSTimeInterval SGLastTimeOf(id session) {
    if (SGResponds(session, @selector(m_uLastTime))) {
        NSUInteger t = ((NSUInteger (*)(id, SEL))objc_msgSend)(session, @selector(m_uLastTime));
        if (t > 1000000000000ULL) t /= 1000;
        return (NSTimeInterval)t;
    }
    return 0;
}

static id SGContactOf(id session, NSString *username) {
    if (SGResponds(session, @selector(m_contact))) {
        id c = ((id (*)(id, SEL))objc_msgSend)(session, @selector(m_contact));
        if (c) return c;
    }
    // CContactMgr 兜底（WCR 同款路径，Misc_part13.c:25114-25121）
    id center = objc_getClass("MMServiceCenter");
    if (!center || !SGResponds(center, @selector(defaultCenter))) return nil;
    id defaultCenter = ((id (*)(id, SEL))objc_msgSend)(center, @selector(defaultCenter));
    id mgrCls = objc_getClass("CContactMgr");
    if (!defaultCenter || !mgrCls || !SGResponds(defaultCenter, @selector(getService:))) return nil;
    id mgr = ((id (*)(id, SEL, id))objc_msgSend)(defaultCenter, @selector(getService:), mgrCls);
    if (mgr && SGResponds(mgr, @selector(getContactByName:))) {
        return ((id (*)(id, SEL, id))objc_msgSend)(mgr, @selector(getContactByName:), username);
    }
    return nil;
}

#pragma mark - 分类（session:matchesTab: 内置路径移植）

// 透传系统账号集合。机制实证：dispatch_once NSSet contains 小写用户名（Misc_part13.c:25148-25150）。
// 名单为微信公开常量账号（WCR 名单字符串未导出，近似）。
static NSSet *SGPassthroughSet(void) {
    static NSSet *set = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        set = [NSSet setWithArray:@[
            @"filehelper", @"fmessage", @"medianote", @"floatbottle", @"qmessage",
            @"qqmail", @"tmessage", @"weibo", @"newsapp", @"masssend",
            @"notification_messages", @"exdevice",
        ]];
    });
    return set;
}

// groupScopeForNativeSession 移植（Misc_part13.c:24479-25160）
static NSUInteger SGDetermineScope(id session, NSString *username) {
    NSString *lower = username.lowercaseString;
    if (lower.length == 0) return 0;

    // 群聊（scopeForContact，Misc_part13.c:24507-24511）
    if ([lower hasSuffix:@"@chatroom"] || [lower hasSuffix:@"@im_chatroom"]) return 2;

    // 公众号/品牌 holder（Misc_part13.c:24518-24536）
    if ([lower isEqualToString:@"brandservicesessionholder"] ||
        [lower isEqualToString:@"brandsessionholder"] ||
        [lower containsString:@"_openim"]) {
        return 4;
    }
    if (SGResponds(session, @selector(isBrandServiceBoxSession)) &&
        ((BOOL (*)(id, SEL))objc_msgSend)(session, @selector(isBrandServiceBoxSession))) {
        return 4;
    }
    id contact = SGContactOf(session, username);
    if (contact && SGResponds(contact, @selector(isServiceBrand)) &&
        ((BOOL (*)(id, SEL))objc_msgSend)(contact, @selector(isServiceBrand))) {
        return 4;
    }
    if ([lower hasPrefix:@"gh_"]) return 4;

    // 特殊/透传系统账号（Misc_part13.c:25148-25150）
    if ([SGPassthroughSet() containsObject:lower]) return 0x18;

    // 单聊（Misc_part13.c:25156 isChatSession）
    if (SGResponds(session, @selector(isChatSession))) {
        return ((BOOL (*)(id, SEL))objc_msgSend)(session, @selector(isChatSession)) ? 1 : 0;
    }
    return contact ? 1 : 0;
}

// session:matchesTab: kind0/kind1/kind3 路径（Misc_part6.c:8596-8790）；scope 由调用方预算传入
// 过滤参数按激活模块取值：电报分组开 → sg*；仅侧边分组开 → sd*（两套配置独立，
// 轮着用免重调）；双开时列表只有一份，口径跟随电报 sg*
static BOOL SGMatchesTab(id session, NSString *username, NSUInteger scope, SessionGroupsTab *tab, SessionGroupsConfig *cfg, SideGroupsConfig *sd) {
    BOOL filterPinned = cfg.sgEnabled ? cfg.sgFilterPinned : sd.sdFilterPinned;
    NSInteger recentDays = cfg.sgEnabled ? cfg.sgRecentDays : sd.sdRecentDays;
    if (tab.kind == 0) {
        if ((filterPinned || tab.hidePinned) && SGIsTopOf(session)) return NO;
        return YES;
    }
    if (tab.kind == 3) {
        // 最近 N 天（Misc_part6.c:8537-8800 kind3 路径）：tab 自带天数优先，回落全局天数
        if ((filterPinned || tab.hidePinned) && SGIsTopOf(session)) return NO;
        NSInteger days = tab.recentDays > 0 ? tab.recentDays : (recentDays > 0 ? recentDays : 3);
        NSTimeInterval last = SGLastTimeOf(session);
        if (last <= 0) return NO;
        NSTimeInterval dt = [NSDate date].timeIntervalSince1970 - last;
        return dt >= 0 && dt <= (NSTimeInterval)days * 86400.0;
    }
    if (tab.kind != 1) return NO;

    // 置顶过滤：全局过滤开关或本组 hidePinned（长按动作 5 落点，homeTelegramGroupingFilterPinned
    // Misc_part6.c:8946-8958 + tab.hidePinned per-tab 开关）
    if ((filterPinned || tab.hidePinned) && SGIsTopOf(session)) return NO;

    // effectiveScopeMaskForTab：other 组补公众号位 bit2(4)（Misc_part6.c:7886-7913）
    NSUInteger eff = tab.scopeMask;
    if ([tab.tabId isEqualToString:@"other"]) eff |= 4;

    // 基础 scope 位（0x1f）与非基础位分开判：纯附加位组（置顶0x20/未读0x40/@我0x80，
    // eff&0x1f==0）不看 scope，直接由附加位决定——旧写法 (scope&eff&0x1f)!=0 会把
    // 纯附加位组恒判不命中（未读/置顶/@我组加进来永远是空组）
    BOOL match;
    if (eff & 0x1f) {
        // scope==0（未知）落 other 兜底（Misc_part6.c:8755-8780）
        match = (scope == 0) ? ((eff & 0x18) != 0) : ((scope & eff & 0x1f) != 0);
    } else {
        match = (eff & 0xe0) != 0;
    }

    // 附加位收窄/判定（Misc_part6.c:8722-8748）：0x20 置顶 / 0x40 未读 / 0x80 @我
    if (match && (eff & 0x20)) match = SGIsTopOf(session);
    if (match && (eff & 0x40)) match = SGUnreadOf(session) > 0;
    if (match && (eff & 0x80)) {
        NSUInteger atMe = 0;
        if (SGResponds(session, @selector(m_uAtMeCount)))
            atMe += (NSUInteger)((NSUInteger (*)(id, SEL))objc_msgSend)(session, @selector(m_uAtMeCount));
        if (SGResponds(session, @selector(m_uAtAllCount)))
            atMe += (NSUInteger)((NSUInteger (*)(id, SEL))objc_msgSend)(session, @selector(m_uAtAllCount));
        match = atMe > 0;
    }
    return match;
}

#pragma mark - 环境判断

static BOOL SGIsMainFrameVC(id vc) {
    if (!vc) return NO;
    NSString *cls = NSStringFromClass(object_getClass(vc));
    return [cls containsString:@"NewMainFrameViewController"];
}

static UITableView *SGMainTableView(id vc) {
    if (SGResponds(vc, @selector(m_tableView))) {
        id t = ((id (*)(id, SEL))objc_msgSend)(vc, @selector(m_tableView));
        if ([t isKindOfClass:UITableView.class]) return t;
    }
    return nil;
}

// active（对应 wcrGrouping_active，wcrGrouping_.c:2586-2677；Mio 扩展：侧边分组独立开关
// 与电报分组共用同一分组引擎，任一开启即激活快照/过滤）
static BOOL SGActive(id vc) {
    if (!SGIsMainFrameVC(vc)) return NO;
    if ([SessionGroupsConfig shared].sgEnabled) return YES;
    return [SideGroupsConfig shared].sdEnabled;
}

// 条显隐：条属于电报式分组模块（sgEnabled），侧边分组不决定条——
// 只开侧边分组时列表顶部不出现分组 tab（XOS 侧栏形态列表无条）。
static BOOL SGWantsStrip(id vc) {
    return [SessionGroupsConfig shared].sgEnabled;
}

static SessionGroupsTab *SGSelectedTab(NSArray<SessionGroupsTab *> *tabs) {
    NSString *tid = [SessionGroupsTab currentSelectedTabId];
    if (tid.length) {
        for (SessionGroupsTab *t in tabs) if ([t.tabId isEqualToString:tid]) return t;
    }
    return tabs.firstObject; // 无选中记录时回落第一组（WCR Misc_part6.c:4444-4462；启动即此分支）
}

#pragma mark - 目录折叠集合（XOS DAT_003ea9f8 同构）

// 折叠组集合 + 持久化（XOS：全局 NSMutableSet + NSUserDefaults 键 xzyChatListGroupingFoldedGroups，
// 加载 FUN__part4.c:13916-13970 / 保存 FUN_0020ba40 20767-20785 setObject+synchronize；Mio 独立键）
static NSString * const kSGFoldedGroupsKey = @"MioSgFoldedGroups";
static NSMutableSet<NSString *> *sFoldedTabIds = nil;

static NSMutableSet<NSString *> *SGFoldedSet(void) {
    if (!sFoldedTabIds) {
        NSArray *arr = [[NSUserDefaults standardUserDefaults] arrayForKey:kSGFoldedGroupsKey];
        sFoldedTabIds = [NSMutableSet setWithArray:arr ?: @[]];
    }
    return sFoldedTabIds;
}

static BOOL SGIsTabFolded(NSString *tabId) {
    return tabId.length > 0 && [SGFoldedSet() containsObject:tabId];
}

#pragma mark - 快照构建

static NSString *SGSignature(id vc, UITableView *table) {
    SessionGroupsConfig *cfg = [SessionGroupsConfig shared];
    NSInteger sections = 0;
    if (orig_numberOfSections) {
        sections = ((NSInteger (*)(id, SEL, id))orig_numberOfSections)(vc, @selector(numberOfSectionsInTableView:), table);
    }
    if (sections < 1) sections = 1;
    NSMutableArray<NSString *> *parts = [NSMutableArray array];
    [parts addObject:[NSString stringWithFormat:@"s%ld", (long)sections]];
    for (NSInteger s = 0; s < sections; s++) {
        NSInteger c = 0;
        if (orig_numberOfRows) {
            c = ((NSInteger (*)(id, SEL, id, NSInteger))orig_numberOfRows)(vc, @selector(tableView:numberOfRowsInSection:), table, s);
        }
        [parts addObject:[NSString stringWithFormat:@"%ld", (long)c]];
    }
    NSArray<SessionGroupsTab *> *tabs = [SessionGroupsTab visibleTabs];
    [parts addObject:SGSelectedTab(tabs).tabId];
    SideGroupsConfig *sd = [SideGroupsConfig shared];
    // 过滤口径按激活模块取值入签（规则见 SGMatchesTab 注释）
    BOOL filterPinned = cfg.sgEnabled ? cfg.sgFilterPinned : sd.sdFilterPinned;
    BOOL filterDup = cfg.sgEnabled ? cfg.sgFilterDuplicate : sd.sdFilterDuplicate;
    [parts addObject:filterPinned ? @"p1" : @"p0"];
    [parts addObject:filterDup ? @"d1" : @"d0"];
    [parts addObject:[NSString stringWithFormat:@"pos%ld", (long)sd.sdPosition]];
    // 目录模式与折叠数入签：折叠切换即使漏了显式失效也靠签名变化重建（XOS 修订计数 DAT_003eaab4 同效）
    BOOL dirActive = sd.sdEnabled
        && (sd.sdPosition == SDSidePositionLeftInList || sd.sdPosition == SDSidePositionRightInList)
        && SGSelectedTab(tabs).kind == 0 && tabs.count > 1;
    [parts addObject:[NSString stringWithFormat:@"dir%d_%lu", dirActive, (unsigned long)SGFoldedSet().count]];
    return [parts componentsJoinedByString:@"|"];
}

static SGHomeSnapshot *SGBuildSnapshot(id vc, UITableView *table) {
    if (!orig_logicGetSession || !orig_numberOfRows) return nil;

    SGHomeSnapshot *snap = [[SGHomeSnapshot alloc] init];
    SessionGroupsConfig *cfg = [SessionGroupsConfig shared];
    // 分组条数据源 = 管理页维护的可见分组（disabled 过滤后；空回落默认四组）
    NSArray<SessionGroupsTab *> *tabs = [SessionGroupsTab visibleTabs];
    snap.tabs = tabs;

    // 目录模式判定（XOS 位置模式 6 语义：仅 InList 位置 + 选中全部组时在列表内收纳；
    // 组 = 除选中组外的全部可见组。至少 2 组才收纳，无组可收时维持普通列表）
    SessionGroupsTab *sel = SGSelectedTab(tabs);
    NSUInteger selIdx = 0;
    for (NSUInteger t = 0; t < tabs.count; t++) if (tabs[t] == sel) { selIdx = t; break; }
    SideGroupsConfig *sd = [SideGroupsConfig shared];
    // 过滤/统计口径按激活模块取值：电报分组开 → sg*；仅侧边分组开 → sd*（两套独立，
    // 轮着用免重调）；双开时列表只有一份，口径跟随电报 sg*
    BOOL filterDup = cfg.sgEnabled ? cfg.sgFilterDuplicate : sd.sdFilterDuplicate;
    BOOL foldNoDot = cfg.sgEnabled ? cfg.sgFoldGroupNoRedDot : sd.sdFoldGroupNoRedDot;
    BOOL dirActive = sd.sdEnabled
        && (sd.sdPosition == SDSidePositionLeftInList || sd.sdPosition == SDSidePositionRightInList)
        && sel.kind == 0 && tabs.count > 1;

    // 目录分桶（每组一个桶 + 未匹配任何组的「其他」桶，XOS other 组 DAT_003eaac1 语义）
    NSMutableArray<NSMutableArray<SGPlanRow *> *> *dirBuckets = [NSMutableArray arrayWithCapacity:tabs.count];
    NSMutableArray<NSNumber *> *dirCounts = [NSMutableArray arrayWithCapacity:tabs.count];
    NSMutableArray<NSNumber *> *dirUnreads = [NSMutableArray arrayWithCapacity:tabs.count];
    NSMutableArray<NSNumber *> *dirDots = [NSMutableArray arrayWithCapacity:tabs.count];
    for (NSUInteger t = 0; t < tabs.count; t++) {
        [dirBuckets addObject:[NSMutableArray array]];
        [dirCounts addObject:@(0)];
        [dirUnreads addObject:@(0)];
        [dirDots addObject:@(NO)];
    }
    NSMutableArray<SGPlanRow *> *otherRows = [NSMutableArray array];
    NSInteger otherUnread = 0;
    BOOL otherDot = NO;

    NSInteger sections = ((NSInteger (*)(id, SEL, id))orig_numberOfSections)(vc, @selector(numberOfSectionsInTableView:), table);
    if (sections < 1) sections = 1;
    snap.sectionCount = sections;

    NSMutableArray<NSNumber *> *counts = [NSMutableArray arrayWithCapacity:sections];
    NSMutableArray<NSArray<NSNumber *> *> *hidden = [NSMutableArray arrayWithCapacity:sections];
    NSMutableArray<NSMutableArray<id> *> *rowSessions = [NSMutableArray arrayWithCapacity:sections];
    for (NSInteger s = 0; s < sections; s++) {
        NSInteger c = ((NSInteger (*)(id, SEL, id, NSInteger))orig_numberOfRows)(vc, @selector(tableView:numberOfRowsInSection:), table, s);
        [counts addObject:@(c)];
        NSMutableArray<id> *rows = [NSMutableArray arrayWithCapacity:c];
        for (NSInteger r = 0; r < c; r++) {
            NSIndexPath *ip = [NSIndexPath indexPathForRow:r inSection:s];
            id sess = ((id (*)(id, SEL, id))orig_logicGetSession)(vc, @selector(logicGetSessionAtIndexPath:), ip);
            [rows addObject:sess ?: NSNull.null];
        }
        [rowSessions addObject:rows];
    }

    // 分类 + 未读/红点统计（unreadCountForTab 语义，Misc_part6.c:10285-10570）
    // 隐藏行必须 [tab][section] 二维分桶！WCR hiddenOriginalRowsBySection 是
    // NSDictionary<section, rows>（WCRGroupingSnapshot.h:12 + 空快照 __NSDictionary0__
    // FUN__part6.c:51190 + dump 处 keys 遍历/objectForKeyedSubscript 55002-55035）。
    // 曾按 tab 一维混入所有 section 行号再复制给每个 section → 置顶区(section 0)被
    // 套上其他 section 的行号（混合集必含 0）→ 置顶会话在所有非 all 分组消失
    NSMutableSet *seenUser = [NSMutableSet set];
    NSMutableArray<NSMutableArray<NSMutableArray<NSNumber *> *> *> *hiddenPerTab = [NSMutableArray arrayWithCapacity:tabs.count];
    NSMutableArray<NSNumber *> *unreadPerTab = [NSMutableArray arrayWithCapacity:tabs.count];
    NSMutableArray<NSNumber *> *dotPerTab = [NSMutableArray arrayWithCapacity:tabs.count];
    for (NSUInteger t = 0; t < tabs.count; t++) {
        NSMutableArray<NSMutableArray<NSNumber *> *> *perSection = [NSMutableArray arrayWithCapacity:sections];
        for (NSInteger s = 0; s < sections; s++) [perSection addObject:[NSMutableArray array]];
        [hiddenPerTab addObject:perSection];
        [unreadPerTab addObject:@(0)]; // all 组恒 0（Misc_part6.c:10348-10353）
        [dotPerTab addObject:@(NO)];
    }

    NSInteger targetSection = -1;
    NSInteger targetSessionRows = 0;
    for (NSInteger s = 0; s < sections; s++) {
        NSInteger sessionRows = 0;
        for (NSInteger r = 0; r < (NSInteger)rowSessions[s].count; r++) {
            id sess = rowSessions[s][r];
            if (sess == NSNull.null || !sess) continue;
            sessionRows++;

            NSString *username = SGUsernameOf(sess) ?: @"";
            NSUInteger unread = SGUnreadOf(sess);
            BOOL redDotFlag = NO;
            if (SGResponds(sess, @selector(m_bShowUnReadAsRedDot))) {
                redDotFlag = ((BOOL (*)(id, SEL))objc_msgSend)(sess, @selector(m_bShowUnReadAsRedDot));
            }
            NSUInteger scope = SGDetermineScope(sess, username);
            BOOL dup = NO;
            if (username.length > 0) {
                if ([seenUser containsObject:username]) {
                    dup = YES; // 过滤重复联系人（按用户名去重，近似 WCR isDuplicateOfTab 语义）
                } else {
                    [seenUser addObject:username];
                }
            }

            // 目录归属：首个命中的组（互斥，XOS 分类 FUN_00211e50 同语义）；命中选中组（全部）才进目录
            NSInteger dirOwner = -1;
            BOOL allKeep = NO;
            for (NSUInteger t = 0; t < tabs.count; t++) {
                SessionGroupsTab *tab = tabs[t];
                BOOL keep = SGMatchesTab(sess, username, scope, tab, cfg, sd);
                if (filterDup && dup) keep = NO;
                if (dirActive) {
                    if ((NSInteger)t == selIdx) allKeep = keep;
                    else if (keep && dirOwner < 0) dirOwner = (NSInteger)t;
                }
                if (!keep) {
                    [hiddenPerTab[t][s] addObject:@(r)]; // 记入本 section 的桶（WCR BySection 语义）
                    continue;
                }
                if (tab.kind == 0) continue; // all 组未读恒 0（Misc_part6.c:10348-10353）
                if (unread == 0) continue;
                // 逐组独立统计（unreadCountForTab 按 tab 遍历会话的语义；旧实现按默认
                // tab 序号 1/2/3 硬编码桶，自定义分组下序号与 scope 不再对齐）
                // 折叠群不红点：红点标记会话不计入数字（Misc_part6.c:10512-10523 config
                // 开 → FUN_01576b80 查会话红点属性 → 命中不计）
                if (!redDotFlag || !foldNoDot) {
                    // WCR 累加的是未读条数之和，非会话数（unreadCountForTab_ 10530：
                    // local_200 += m_uUnReadCount）。按会话 +1 会把"3条消息2个人"
                    // 算成 2，WCR 是 1+2=3
                    unreadPerTab[t] = @([unreadPerTab[t] integerValue] + (NSInteger)unread);
                }
                // 组红点信号（WCR 双值模式：setUnreadCount:/setHasRedDotUnread: 双
                // setter FUN__part6.c:45216-45219，快捷球 refreshBallBadge 45659-45668
                // 同款 count==0 用红点）：组内存在免打扰且有未读的会话。显示端优先级
                // 数字 > 红点（Misc_part19.c:7581 officialUnreadBadgeViewWithCount:）
                if (redDotFlag && ![dotPerTab[t] boolValue]) {
                    [dotPerTab replaceObjectAtIndex:t withObject:@(YES)];
                }
            }

            // 目录桶落位（XOS 构建器：会话 entry 归组，组头后跟本组会话，FUN__part4.c:23347-23349）
            if (dirActive && allKeep) {
                SGPlanRow *row = [[SGPlanRow alloc] init];
                row.isHeader = NO;
                row.nativeSection = s;
                row.nativeRow = r;
                BOOL dotCounted = redDotFlag && foldNoDot; // 红点会话不计未读数字
                if (dirOwner >= 0) {
                    row.tabId = tabs[dirOwner].tabId;
                    [dirBuckets[dirOwner] addObject:row];
                    dirCounts[dirOwner] = @(dirCounts[dirOwner].integerValue + 1);
                    if (unread > 0 && !dotCounted) {
                        dirUnreads[dirOwner] = @(dirUnreads[dirOwner].integerValue + (NSInteger)unread);
                    }
                    if (redDotFlag && !dirDots[dirOwner].boolValue) {
                        [dirDots replaceObjectAtIndex:(NSUInteger)dirOwner withObject:@(YES)];
                    }
                } else {
                    // 未匹配任何组 → 「其他」桶（XOS other 组）
                    row.tabId = @"__sg_dir_other__";
                    [otherRows addObject:row];
                    if (unread > 0 && !dotCounted) otherUnread += (NSInteger)unread;
                    if (redDotFlag) otherDot = YES;
                }
            }
        }
        if (sessionRows > targetSessionRows) {
            targetSessionRows = sessionRows;
            targetSection = s;
        }
    }
    if (targetSection < 0) targetSection = 0;

    // 隐藏行：目录模式 = section 0 由计划行全量驱动、其余 section 全隐藏；
    // 普通模式 = 选中组每 section 取自己的桶
    if (dirActive) {
        for (NSInteger s = 0; s < sections; s++) {
            if (s == 0) {
                [hidden addObject:@[]]; // section 0 行空间 = 计划行，不走 hidden 重映射
                continue;
            }
            NSMutableArray<NSNumber *> *all = [NSMutableArray arrayWithCapacity:rowSessions[s].count];
            for (NSInteger r = 0; r < (NSInteger)rowSessions[s].count; r++) [all addObject:@(r)];
            [hidden addObject:all];
        }
    } else {
        for (NSInteger s = 0; s < sections; s++) {
            [hidden addObject:[hiddenPerTab[selIdx][s] sortedArrayUsingSelector:@selector(compare:)]];
        }
    }

    // 目录计划（XOS 构建器输出：组头 entry 后跟未折叠组的会话 entry，按组序排列；
    // 空组不出头——构建器只遍历有会话的组，FUN__part4.c:23281-23370）
    if (dirActive) {
        snap.dirMode = YES;
        NSMutableArray<SGPlanRow *> *plan = [NSMutableArray array];
        for (NSUInteger t = 0; t < tabs.count; t++) {
            if ((NSInteger)t == selIdx) continue;
            if (dirCounts[t].integerValue == 0) continue;
            SGPlanRow *h = [[SGPlanRow alloc] init];
            h.isHeader = YES;
            h.tabId = tabs[t].tabId;
            h.title = tabs[t].title ?: @"";
            h.count = dirCounts[t].unsignedIntegerValue;
            h.unread = dirUnreads[t].unsignedIntegerValue;
            h.redDot = dirDots[t].boolValue;
            h.folded = SGIsTabFolded(h.tabId);
            [plan addObject:h];
            if (!h.folded) [plan addObjectsFromArray:dirBuckets[t]]; // 折叠组只出头（FUN_001cbca4 语义）
        }
        if (otherRows.count > 0) {
            SGPlanRow *h = [[SGPlanRow alloc] init];
            h.isHeader = YES;
            h.tabId = @"__sg_dir_other__";
            h.title = @"其他";
            h.count = otherRows.count;
            h.unread = (NSUInteger)otherUnread;
            h.redDot = otherDot;
            h.folded = SGIsTabFolded(h.tabId);
            [plan addObject:h];
            if (!h.folded) [plan addObjectsFromArray:otherRows];
        }
        snap.dirPlan = plan;
    }

    snap.origCounts = [counts copy];
    snap.hiddenRows = [hidden copy];
    snap.targetSection = targetSection;
    snap.tabUnread = [unreadPerTab copy];
    snap.tabRedDot = [dotPerTab copy];
    snap.signature = SGSignature(vc, table);
    return snap;
}

static SGHomeSnapshot *SGEnsureSnapshot(id vc, UITableView *table) {
    SGHomeSnapshot *snap = objc_getAssociatedObject(vc, kSGAssocSnapshot);
    NSString *fresh = SGSignature(vc, table);
    if (snap && [snap.signature isEqualToString:fresh]) return snap;
    snap = SGBuildSnapshot(vc, table);
    objc_setAssociatedObject(vc, kSGAssocSnapshot, snap, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    if (snap) {
        WPLog(@"SG", @"[SgHook] snapshot rebuilt sig=%@ target=%ld", snap.signature, (long)snap.targetSection);
    }
    return snap;
}

static void SGInvalidateSnapshot(id vc) {
    objc_setAssociatedObject(vc, kSGAssocSnapshot, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

// 行号重映射：displayed row → native row（隐藏行升序跳过）
static NSInteger SGNativeRow(SGHomeSnapshot *snap, NSInteger section, NSInteger row) {
    if (section < 0 || section >= (NSInteger)snap.hiddenRows.count) return row;
    NSInteger native = row;
    for (NSNumber *h in snap.hiddenRows[section]) {
        NSInteger hv = h.integerValue;
        if (hv <= native) native++;
        else break;
    }
    return native;
}

// displayed 行空间校验：行号是否落在快照的过滤后行数内。
// 目录模式恒 NO：section 0 由计划行驱动（会话行在调用方先行拦截）、其余 section 全隐藏
static BOOL SGIsDisplayedSpace(id self, UITableView *table, NSIndexPath *ip) {
    SGHomeSnapshot *snap = objc_getAssociatedObject(self, kSGAssocSnapshot);
    if (!snap || !ip) return NO;
    if (snap.dirMode) return NO;
    if (ip.section < 0 || ip.section >= (NSInteger)snap.origCounts.count) return NO;
    NSInteger hidden = (NSInteger)snap.hiddenRows[ip.section].count;
    NSInteger origCnt = snap.origCounts[ip.section].integerValue;
    // 与当前原行数不一致视为 native 空间（模型漂移时保守放行）
    NSInteger curOrig = 0;
    if (orig_numberOfRows) {
        curOrig = ((NSInteger (*)(id, SEL, id, NSInteger))orig_numberOfRows)(self, @selector(tableView:numberOfRowsInSection:), table, ip.section);
    }
    if (curOrig != origCnt) return NO;
    return ip.row < origCnt - hidden;
}

static NSIndexPath *SGNativeIndexPath(id self, UITableView *table, NSIndexPath *ip) {
    SGHomeSnapshot *snap = objc_getAssociatedObject(self, kSGAssocSnapshot);
    if (!snap || !ip || snap.dirMode) return ip;
    if (ip.section < 0 || ip.section >= (NSInteger)snap.hiddenRows.count) return ip;
    NSInteger native = SGNativeRow(snap, ip.section, ip.row);
    if (native == ip.row) return ip;
    return [NSIndexPath indexPathForRow:native inSection:ip.section]; // 原生坐标
}

#pragma mark - 刷新调度

// scheduleRefreshForTrigger 语义（wcrGrouping_.c 上游 + FUN__part6.c:46444 合并窗口简化为下一 runloop 合并）
static void SGScheduleRefresh(id vc) {
    if (!vc || !SGIsMainFrameVC(vc)) return;
    [sSeenVCs addObject:vc];
    NSNumber *pending = objc_getAssociatedObject(vc, kSGAssocRefresh);
    if (pending.boolValue) return;
    objc_setAssociatedObject(vc, kSGAssocRefresh, @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    dispatch_async(dispatch_get_main_queue(), ^{
        objc_setAssociatedObject(vc, kSGAssocRefresh, @NO, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        UITableView *table = SGMainTableView(vc);
        if (!table) return;
        if (!SGActive(vc)) {
            // 关闭时还原：清快照并按原生数据源重建（resetToNativeLayoutForTrigger 语义，wcrGrouping_.c:3464-3589）
            if (objc_getAssociatedObject(vc, kSGAssocSnapshot)) {
                SGInvalidateSnapshot(vc);
                [table reloadData];
            }
            return;
        }
        SGInvalidateSnapshot(vc);
        // performWithoutAnimation + reloadData（Misc.c:21388-21389）
        [UIView performWithoutAnimation:^{
            [table reloadData];
        }];
    });
}

#pragma mark - 分组条管理

static SessionGroupsStripView *SGEnsureStrip(id vc, UITableView *table) {
    SessionGroupsStripView *strip = objc_getAssociatedObject(vc, kSGAssocStrip);
    if (!strip) {
        CGFloat h = [SessionGroupsStripView preferredHeight];
        CGFloat w = table.bounds.size.width > 0 ? table.bounds.size.width : [UIScreen mainScreen].bounds.size.width;
        strip = [[SessionGroupsStripView alloc] initWithFrame:CGRectMake(0, 0, w, h)];
        strip.autoresizingMask = UIViewAutoresizingFlexibleWidth;
        __weak id weakVC = vc;
        strip.onSelectIndex = ^(NSInteger idx) {
            SGSelectTabIndex(weakVC, idx, 0, YES);
        };
        // 长按动作（WCR handleHomeItemLongPress 同构）：index → 可见组 → 执行器分发
        strip.onLongPressIndex = ^(NSInteger idx) {
            NSArray<SessionGroupsTab *> *tabs = [SessionGroupsTab visibleTabs];
            if (idx < 0 || idx >= (NSInteger)tabs.count) return;
            SGDispatchLongPress(weakVC, tabs[idx]);
        };
        objc_setAssociatedObject(vc, kSGAssocStrip, strip, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    // 全屏滑动手势（WCR 007f9e0c 同款）：挂 vc.view 根视图 + 仲裁 delegate + cancels=YES +
    // 单指。此前挂 table 且无 delegate，表格 pan 先识别压死本手势 → "划不动"
    if ([SessionGroupsConfig shared].sgFullscreenSwipe && !objc_getAssociatedObject(vc, kSGAssocPan)) {
        UIPanGestureRecognizer *pan = [[UIPanGestureRecognizer alloc] initWithTarget:sGestureSink action:@selector(sgHandlePan:)];
        pan.cancelsTouchesInView = YES;
        pan.delaysTouchesBegan = NO;
        pan.delaysTouchesEnded = NO;
        pan.maximumNumberOfTouches = 1;
        SGSwipeSwitchDelegate *dlg = [[SGSwipeSwitchDelegate alloc] initWithVC:vc];
        pan.delegate = dlg; // UIGestureRecognizer.delegate 是 assign，delegate 必须自持（assoc 保活）
        UIView *host = [vc view];
        if (host) [host addGestureRecognizer:pan];
        objc_setAssociatedObject(vc, kSGAssocPan, pan, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(vc, kSGAssocPanDlg, dlg, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return strip;
}

static void SGReloadStrip(id vc, SGHomeSnapshot *snap) {
    SessionGroupsStripView *strip = objc_getAssociatedObject(vc, kSGAssocStrip);
    if (!strip) return;
    NSMutableArray *titles = [NSMutableArray array];
    for (SessionGroupsTab *t in snap.tabs) [titles addObject:t.title];
    // WCR reloadTabs 同构（Misc_part19.c:7255-7268）：重建按钮前先把条选中态同步到当前
    // 选中组——否则 reload 时 refreshAppearance 按旧 _selectedIndex 摆指示器（闪回旧 tab）
    SessionGroupsTab *sel = SGSelectedTab(snap.tabs);
    NSInteger idx = 0;
    for (NSUInteger t = 0; t < snap.tabs.count; t++) if (snap.tabs[t] == sel) { idx = (NSInteger)t; break; }
    if (strip.selectedIndex != idx) {
        [strip setSelectedIndex:idx velocity:0 animated:NO];
    }
    [strip reloadTabTitles:[titles copy]];
    [strip updateBadges:snap.tabUnread redDots:snap.tabRedDot];
    // 兜底：tab 数量变化导致重建前同步越界未生效时，重建后再补一次
    if (strip.selectedIndex != idx) {
        [strip setSelectedIndex:idx velocity:0 animated:NO];
    }
}

#pragma mark - 侧边分组（XOS XZYCLG 移植：FUN_0020a174 侧栏挂载+列表 frame 让位）

// 关闭时还原：摘侧栏 + 恢复列表原生 frame
static void SGRemoveSideRail(id vc, UITableView *table) {
    SideGroupsRailView *rail = objc_getAssociatedObject(vc, kSGAssocRail);
    if (rail) {
        [rail removeFromSuperview];
        objc_setAssociatedObject(vc, kSGAssocRail, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    NSValue *nativeV = objc_getAssociatedObject(table, kSGAssocRailNative);
    objc_setAssociatedObject(table, kSGAssocRailNative, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(table, kSGAssocRailWanted, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    if (nativeV && !CGRectEqualToRect(table.frame, [nativeV CGRectValue])) {
        table.frame = [nativeV CGRectValue]; // 记录已清，setFrame hook 按未接管放行
    }
}

// XOS FUN_00200a14（hook 的 table setFrame:）移植：让位帧的运行时维护不在布局 pass 逐帧做，
// 而是拦截微信每次对 table 的 setFrame——
// · 自写帧（带标志）→ 放行（XOS FUN_00222cec 的 eaeb0 标志语义）
// · 悬浮模式/未接管 → 放行（XOS DAT_003eaad0==1 短路）
// · 宽度未变（下拉小程序面板/滚动动画只改 y/h 或平移）→ 放行，原生动画零对抗
// · 宽度变宽（微信重排回全宽）→ 在新帧上重套让位，一次写回（变窄放行，对齐 XOS）
static IMP orig_tableSetFrame = NULL;

static void hook_tableSetFrame(UITableView *table, SEL _cmd, CGRect frame) {
    if (!orig_tableSetFrame) return;
    SideGroupsConfig *sd = [SideGroupsConfig shared];
    if (sd.sdEnabled && sd.sdRailScope != 1) {
        NSNumber *selfWriteV = objc_getAssociatedObject(table, kSGAssocRailSelfWrite);
        if (selfWriteV.boolValue) {
            objc_setAssociatedObject(table, kSGAssocRailSelfWrite, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        } else {
            NSValue *nativeV = objc_getAssociatedObject(table, kSGAssocRailNative);
            if (nativeV) {
                CGRect native = [nativeV CGRectValue];
                if (frame.size.width > native.size.width + 0.5) { // 微信把列表改宽 → 重套让位
                    CGFloat w = MIN(MAX(sd.sdRailWidth, 40), 90);
                    BOOL left = (sd.sdPosition == SDSidePositionLeft || sd.sdPosition == SDSidePositionLeftInList);
                    CGRect want = frame;
                    if (left) {
                        want.origin.x = frame.origin.x + w;
                        want.size.width = frame.size.width - w;
                    } else {
                        want.size.width = frame.size.width - w;
                    }
                    if (want.size.width >= 100) {
                        objc_setAssociatedObject(table, kSGAssocRailNative, [NSValue valueWithCGRect:frame], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                        objc_setAssociatedObject(table, kSGAssocRailWanted, [NSValue valueWithCGRect:want], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                        objc_setAssociatedObject(table, kSGAssocRailSelfWrite, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                        ((void (*)(id, SEL, CGRect))orig_tableSetFrame)(table, _cmd, want);
                        return;
                    }
                }
            }
        }
    }
    ((void (*)(id, SEL, CGRect))orig_tableSetFrame)(table, _cmd, frame);
}

// MainFrameTableView.layoutSubviews 收尾调用（对齐 XOS FUN_0020a174 在每次布局后重摆侧栏）：
// 1) 让位帧只在首次接管时写一次（带自写标志走 setFrame hook），此后 table 帧维护全部
//    交给 hook_tableSetFrame（XOS FUN_00200a14 机制），布局 pass 不逐帧写帧 → 微信
//    下拉小程序面板等原生动画零对抗
// 2) 作用范围双模式（XOS SideScope）：0=让位（左 x+=w/width-=w，右 width-=w），
//    1=悬浮（不写 table 帧，rail 覆盖列表边缘）
// 3) 侧栏定位（左 minX / 右 maxX-w，X 微调）+ 配置签名应用 + 快照数据同步
static void SGSideRailLayoutPass(UITableView *table) {
    id vc = nil;
    for (id seen in sSeenVCs) {
        if (SGIsMainFrameVC(seen) && SGMainTableView(seen) == table) { vc = seen; break; }
    }
    if (!vc) return;
    SideGroupsConfig *sd = [SideGroupsConfig shared];
    if (!sd.sdEnabled) {
        SGRemoveSideRail(vc, table);
        return;
    }

    CGRect cur = table.frame;
    // ── 让位帧维护（XOS SideScope 双模式）──
    CGFloat w = MIN(MAX(sd.sdRailWidth, 40), 90);
    CGFloat off = MIN(MAX(sd.sdRailXOffset, -30), 30);
    BOOL left = (sd.sdPosition == SDSidePositionLeft || sd.sdPosition == SDSidePositionLeftInList);
    BOOL floating = (sd.sdRailScope == 1);
    NSValue *nativeV = objc_getAssociatedObject(table, kSGAssocRailNative);
    if (floating) {
        if (nativeV) {
            // 切回悬浮：清记录后恢复原生帧（hook 见记录空 → 放行，无对抗）
            objc_setAssociatedObject(table, kSGAssocRailNative, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            objc_setAssociatedObject(table, kSGAssocRailWanted, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            if (!CGRectEqualToRect(cur, [nativeV CGRectValue])) table.frame = [nativeV CGRectValue];
        }
    } else if (!nativeV) {
        // 首次接管：以当前帧为原生基准套让位，一次写帧（自写标志 → hook 放行）
        CGRect native = cur;
        CGRect want = native;
        if (left) {
            want.origin.x = native.origin.x + w;
            want.size.width = native.size.width - w;
        } else {
            want.size.width = native.size.width - w;
        }
        if (want.size.width >= 100) {
            objc_setAssociatedObject(table, kSGAssocRailNative, [NSValue valueWithCGRect:native], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            objc_setAssociatedObject(table, kSGAssocRailWanted, [NSValue valueWithCGRect:want], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            objc_setAssociatedObject(table, kSGAssocRailSelfWrite, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            table.frame = want;
            cur = want;
        }
    }
    // rail 定位基准：让位模式用原生记录（hook 维护），悬浮/未接管用当前帧；
    // 微信变窄帧 hook 放行不记录（对齐 XOS），此处识别后同步记录使 rail 贴合实际
    CGRect base = cur;
    if (!floating && nativeV) {
        CGRect native = [nativeV CGRectValue];
        NSValue *wantedV = objc_getAssociatedObject(table, kSGAssocRailWanted);
        BOOL ours = wantedV && CGRectEqualToRect(cur, [wantedV CGRectValue]);
        if (!ours && fabs(cur.size.width - native.size.width) > 0.5) {
            objc_setAssociatedObject(table, kSGAssocRailNative, [NSValue valueWithCGRect:cur], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            native = cur;
        }
        base = native;
    }
    CGRect railFrame; // table.superview 坐标系
    if (left) {
        railFrame = CGRectMake(base.origin.x + off, base.origin.y, w, base.size.height);
    } else {
        railFrame = CGRectMake(base.origin.x + base.size.width - w + off, base.origin.y, w, base.size.height);
    }

    // ── 侧栏挂载与定位（全部变化才写：布局 pass 内任何无条件写都会与微信原生布局
    //    形成写回风暴 → host 反复 layout → 卡死，sgbadge18e 实测）──
    SideGroupsRailView *rail = objc_getAssociatedObject(vc, kSGAssocRail);
    if (!rail) {
        rail = [[SideGroupsRailView alloc] initWithFrame:CGRectZero];
        __weak id weakVC = vc;
        rail.onSelectIndex = ^(NSInteger idx) {
            SGSelectTabIndex(weakVC, idx, 0, YES);
        };
        rail.onLongPressIndex = ^(NSInteger idx) {
            NSArray<SessionGroupsTab *> *tabs = [SessionGroupsTab visibleTabs];
            if (idx < 0 || idx >= (NSInteger)tabs.count) return;
            [SideGroupsActions showActionsForTab:tabs[idx]]; // 侧边独立动作器，不触发电报长按链
        };
        objc_setAssociatedObject(vc, kSGAssocRail, rail, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    UIView *host = [vc view];
    if (!host) return;
    if (rail.superview != host) {
        [rail removeFromSuperview];
        [host addSubview:rail];
    }
    if ([host.subviews lastObject] != rail) [host bringSubviewToFront:rail]; // 仅被别的视图盖住时才动层级
    CGRect newRailFrame = [table.superview convertRect:railFrame toView:host];
    if (!CGRectEqualToRect(rail.frame, newRailFrame)) rail.frame = newRailFrame;
    [rail applyConfig];

    // ── 数据同步（标题/角标/选中态，快照签名缓存，热路径开销同条刷新） ──
    SGHomeSnapshot *snap = SGEnsureSnapshot(vc, table);
    if (!snap) return;
    NSMutableArray<NSString *> *titles = [NSMutableArray array];
    NSMutableArray<NSString *> *tabIds = [NSMutableArray array];
    for (SessionGroupsTab *t in snap.tabs) {
        [titles addObject:t.title ?: @""];
        [tabIds addObject:t.tabId ?: @""];
    }
    [rail reloadTitles:titles badges:snap.tabUnread tabIds:tabIds];
    SessionGroupsTab *sel = SGSelectedTab(snap.tabs);
    NSInteger idx = 0;
    for (NSUInteger t = 0; t < snap.tabs.count; t++) if (snap.tabs[t] == sel) { idx = (NSInteger)t; break; }
    if (rail.selectedIndex != idx) rail.selectedIndex = idx;

    // ── 列表内目录（XOS「+列表内」形态）：不再用覆盖视图 —— 目录模式（选中全部组）时
    //    section 0 由快照计划行全量驱动（组头/会话行，见 hook_cellForRow / hook_didSelect），
    //    此处无任何视图/帧写入 ──
}

#pragma mark - 切组

// FUN_007f320c 提交链（FUN__part13.c:18524-18703）：持久化 → 条弹簧动画 → 触感 → 异步 reload
static void SGSelectTabIndex(id vc, NSInteger idx, CGFloat velocity, BOOL animated) {
    if (!SGActive(vc)) return;
    UITableView *table = SGMainTableView(vc);
    if (!table) return;

    NSArray<SessionGroupsTab *> *tabs = [SessionGroupsTab visibleTabs];
    if (idx < 0 || idx >= (NSInteger)tabs.count) return;
    SessionGroupsTab *tab = tabs[idx];

    // 1) 当前选中组（仅会话内内存态，不跨启动）
    [SessionGroupsTab setCurrentSelectedTabId:tab.tabId];

    // 2) 条选中态先走弹簧动画（FUN_007f320c:18634-18636 在 reload 之前）。旧顺序是先同步
    //    reloadData——SGReloadStrip 用旧 _selectedIndex 重建条，指示器先闪回旧 tab 再硬跳
    //    新 tab，弹簧动画被吞（"秒切回全部又秒切到私聊"）
    SessionGroupsStripView *strip = objc_getAssociatedObject(vc, kSGAssocStrip);
    if (strip) [strip setSelectedIndex:idx velocity:velocity animated:animated];

    // 3) 切组触感（FUN_007f4808 紧随条动画之后；Misc_part4.c:1755-1784：1→Soft 2→Medium 3→Heavy）
    SessionGroupsConfig *cfg = [SessionGroupsConfig shared];
    if (cfg.sgSwitchHaptic > 0 && @available(iOS 10.0, *)) {
        UIImpactFeedbackStyle style = UIImpactFeedbackStyleLight;   // index==1 → style 3(Soft)
        if (cfg.sgSwitchHaptic == 2) style = UIImpactFeedbackStyleMedium; // index==2 → style 1(Medium)
        else if (cfg.sgSwitchHaptic >= 3) style = UIImpactFeedbackStyleHeavy; // 其他 → Heavy(2)
        UIImpactFeedbackGenerator *gen = [[UIImpactFeedbackGenerator alloc] initWithStyle:style];
        [gen impactOccurred];
    }

    // 4) 异步 reload（FUN_007f320c:18687-18703 dispatch_after → main queue）：让弹簧起手帧
    //    先落屏，表格重建开销不打断动画；弱引用防 vc 已销毁时对孤儿表格 reloadData
    SGInvalidateSnapshot(vc);
    __weak UITableView *weakTable = table;
    dispatch_async(dispatch_get_main_queue(), ^{
        UITableView *t = weakTable;
        if (!t) return;
        [UIView performWithoutAnimation:^{ [t reloadData]; }];
    });
    WPLog(@"SG", @"[SgHook] select tab %ld (%@)", (long)idx, tab.tabId);
}

#pragma mark - 目录折叠切换

// 折叠切换（XOS FUN_001cbd20：集合 toggle → FUN_0020ba40 持久化 → 修订计数 DAT_003eaab4++
// 失效缓存；点击链 FUN_001ccc14 → FUN_001c9388 刷新）——目录组头点击是收纳展开/收起，不是跳组
static void SGToggleFold(id vc, NSString *tabId) {
    if (!tabId.length) return;
    NSMutableSet<NSString *> *set = SGFoldedSet();
    BOOL fold = ![set containsObject:tabId];
    if (fold) [set addObject:tabId];
    else [set removeObject:tabId];
    [[NSUserDefaults standardUserDefaults] setObject:[set allObjects] forKey:kSGFoldedGroupsKey];
    [[NSUserDefaults standardUserDefaults] synchronize];
    SGInvalidateSnapshot(vc);
    UITableView *table = SGMainTableView(vc);
    if (table) [UIView performWithoutAnimation:^{
        [table reloadData];
        [table layoutIfNeeded]; // 布局落在本 block 内完成，防止下一 runloop 的隐式动画让角标闪动
    }];
    WPLog(@"SG", @"[SgHook] dir fold %@ → %d", tabId, fold);
}

#pragma mark - 长按动作（WCR FUN_007f7044 执行器 FUN__part13.c:19926-20070 + FUN_007f7854 菜单，Mio 裁剪版）

// 打开分组管理（WCR action 2 = presentFromViewController:halfScreen:1 弹窗形态，
// FUN_01ee62a0 half=1 分支：裸 UINavigationController + pageSheet + iOS15 largeDetent
// + root VC 左上关闭按钮）。
// 注意：从长按菜单回调发起时，调用方（SGShowLongPressMenu）负责延迟到 WCActionSheet
// dismiss 动画结束——sheet 回调内同步 present，两转场并发冲突 → 弹窗被回滚/死锁
// （WCR 菜单是自绘视图 removeFromSuperview 收场，无此冲突，故可直接 present）
static void SGOpenGroupManager(void) {
    UIViewController *top = [UIApplication sharedApplication].keyWindow.rootViewController;
    while (top.presentedViewController) top = top.presentedViewController;
    if (!top) return;
    SessionGroupManagerVC *mgr = [[SessionGroupManagerVC alloc] init];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:mgr];
    nav.modalPresentationStyle = UIModalPresentationPageSheet;
    if (@available(iOS 15.0, *)) {
        UISheetPresentationController *sheet = nav.sheetPresentationController;
        if (sheet) {
            sheet.detents = @[UISheetPresentationControllerDetent.largeDetent];
            sheet.prefersScrollingExpandsWhenScrolledToEdge = YES;
        }
    }
    UIBarButtonItem *close = [[UIBarButtonItem alloc] initWithTitle:@"关闭"
                                style:UIBarButtonItemStylePlain
                               target:mgr action:@selector(sgCloseModal:)];
    mgr.navigationItem.leftBarButtonItem = close;
    [top presentViewController:nav animated:YES completion:nil];
}

// 长按菜单（FUN_007f7854：menuLongPressActions + runtimeTitle，tab.title 空则「分组」）
static void SGShowLongPressMenu(id vc, SessionGroupsTab *tab) {
    NSArray<NSNumber *> *actions = [SessionGroupsTab menuLongPressActionsForTab:tab];
    NSMutableArray<NSString *> *titles = [NSMutableArray array];
    for (NSNumber *a in actions) {
        [titles addObject:[SessionGroupsTab runtimeTitleForLongPressAction:a.integerValue tab:tab]];
    }
    [MioAlertHelper showMenuAlert:(tab.title.length ? tab.title : @"分组")
                          buttons:titles
                         onButton:^(NSInteger index) {
        if (index < 0 || index >= (NSInteger)actions.count) return;
        NSInteger act = actions[index].integerValue;
        switch (act) {
            case 2:
                // WCActionSheet dismiss 动画（0.3s）走完再 present：回调内同步 present
                // 与 sheet 收起转场并发冲突（WCR 自绘菜单无此问题）
                dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.4 * NSEC_PER_SEC)),
                               dispatch_get_main_queue(), ^{ SGOpenGroupManager(); });
                break;
            case 5: {
                BOOL nv = !tab.hidePinned;
                [SessionGroupsTab setHidePinned:nv forTabId:tab.tabId];
                WPShowToast(nv ? @"已隐藏置顶会话" : @"已显示置顶会话");
                break;
            }
            case 7:
                [SessionGroupsTab setTabId:tab.tabId disabled:YES];
                WPShowToast(@"已停用分组");
                break;
            case 8:
                [SessionGroupsTab shiftVisibleTabId:tab.tabId by:-1];
                WPShowToast(@"已左移");
                break;
            case 9:
                [SessionGroupsTab shiftVisibleTabId:tab.tabId by:1];
                WPShowToast(@"已右移");
                break;
        }
    }];
}

// 执行器分发（FUN_007f7044：!vc||!tab||action==4 直接返回；1/3 为 WCR 生态动作，Mio 裁剪）
static void SGDispatchLongPress(id vc, SessionGroupsTab *tab) {
    if (!vc || !tab) return;
    NSInteger action = [SessionGroupsTab resolvedLongPressActionForTab:tab];
    if (action == 4) return; // 无操作
    if (action == 6) { SGShowLongPressMenu(vc, tab); return; }
    if (action == 5) {
        // 切换置顶过滤（setHidePinned:forTabId: 取反 + toast）
        BOOL nv = !tab.hidePinned;
        [SessionGroupsTab setHidePinned:nv forTabId:tab.tabId];
        WPShowToast(nv ? @"已隐藏置顶会话" : @"已显示置顶会话");
        return;
    }
    // 默认 2：打开分组管理（长按直达路径无 sheet 收起上下文，可直接 present）
    SGOpenGroupManager();
}

#pragma mark - 滑动手势（FUN__part13.c:16571-16853）

@implementation SGHomeGestureSink
- (void)sgHandlePan:(UIPanGestureRecognizer *)pan {
    // 手势挂 vc.view 根视图（WCR 同款），经响应链找 NMFVC，再取主表做位移参照
    UIView *host = pan.view;
    if (!host) return;
    id vc = nil;
    UIResponder *r = host.nextResponder;
    while (r) {
        if (SGIsMainFrameVC(r)) { vc = r; break; }
        r = r.nextResponder;
    }
    if (!SGActive(vc)) return;
    SessionGroupsConfig *cfg = [SessionGroupsConfig shared];
    if (!cfg.sgFullscreenSwipe) return;

    SessionGroupsStripView *strip = objc_getAssociatedObject(vc, kSGAssocStrip);
    if (!strip || strip.tabCount < 2) return;

    UITableView *table = SGMainTableView(vc);
    if (!table) return;
    CGPoint trans = [pan translationInView:table];
    CGFloat vel = [pan velocityInView:table].x;
    CGFloat dx = trans.x;

    if (pan.state == UIGestureRecognizerStateChanged) {
        // dir = (Δx<0)?+1:-1；反向则取反（FUN__part13.c:16698-16705）
        NSInteger dir = (dx < 0) ? +1 : -1;
        if (!cfg.sgSwipeReverse) dir = -dir;
        NSInteger count = strip.tabCount;
        NSInteger idx = strip.selectedIndex + dir;
        if (cfg.sgSwipeLoop) {
            idx = ((idx % count) + count) % count; // 循环取模，16723-16729
        } else if (idx < 0 || idx >= count) {
            idx = strip.selectedIndex;
        }
        CGFloat W = table.bounds.size.width;
        CGFloat denom = MAX(W * 0.35, 100.0);        // 16766-16772
        CGFloat progress = MIN(ABS(dx) / denom, 1.0);
        if (idx != strip.selectedIndex) [strip previewIndex:idx progress:progress];
    } else if (pan.state == UIGestureRecognizerStateEnded ||
               pan.state == UIGestureRecognizerStateCancelled) {
        NSInteger dir = (dx < 0) ? +1 : -1;
        if (!cfg.sgSwipeReverse) dir = -dir;
        NSInteger count = strip.tabCount;
        NSInteger idx = strip.selectedIndex + dir;
        if (cfg.sgSwipeLoop) idx = ((idx % count) + count) % count;
        BOOL sameDir = (vel * dx > 0);
        // 提交阈值（16789-16807）：|Δx|>50 或 (|Δx|>12 且 |vel|>450) 或 |vel|>800，需同向
        BOOL commit = sameDir && (ABS(dx) > 50 || (ABS(dx) > 12 && ABS(vel) > 450) || ABS(vel) > 800);
        commit = commit && idx != strip.selectedIndex;
        if (pan.state == UIGestureRecognizerStateCancelled) commit = NO;
        [strip cancelPreview];
        if (commit) SGSelectTabIndex(vc, idx, vel, YES);
    }
}
@end

#pragma mark - 滑动切换仲裁 delegate（WCR WCRTGSwipeSwitchDelegate 同构）

@implementation SGSwipeSwitchDelegate {
    __weak id _vc;
}
- (instancetype)initWithVC:(id)vc {
    if ((self = [super init])) _vc = vc;
    return self;
}

// Misc.c:43447 gestureRecognizerShouldBegin:
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer *)ges {
    id vc = _vc;
    if (!vc || ![ges isKindOfClass:UIPanGestureRecognizer.class]) return NO;
    UIView *view = ges.view;
    if (!view) return NO;
    UIPanGestureRecognizer *pan = (UIPanGestureRecognizer *)ges;
    CGPoint vel = [pan velocityInView:view];
    CGPoint trans = [pan translationInView:view];
    // 横向占优门闩：横（速度或位移）必须 > 竖×1.2，否则让表格滚动（16766-16772 同参）
    CGFloat ax = fabs(vel.x) > 1.0 ? vel.x : trans.x;
    CGFloat ay = fabs(vel.y) > 1.0 ? vel.y : trans.y;
    if (fabs(ax) <= fabs(ay) * 1.2) return NO;
    // 条区域内直接开始（Misc.c locationInView:strip + CGRectContainsPoint）
    SessionGroupsStripView *strip = objc_getAssociatedObject(vc, kSGAssocStrip);
    if (strip && CGRectContainsPoint(strip.bounds, [pan locationInView:strip])) return YES;
    if (![SessionGroupsConfig shared].sgFullscreenSwipe) return NO;
    // 边缘 60pt 排除，让位系统侧滑返回（Misc.c: local_b8 < 60 || width-60 < local_b8 → NO）
    CGFloat w = view.bounds.size.width;
    CGPoint loc = [pan locationInView:view];
    if (loc.x < 60.0 || loc.x > w - 60.0) return NO;
    // 编辑态（多选/搜索编辑）不抢手势（Misc.c: isEditing 检查）
    if ([vc respondsToSelector:@selector(isEditing)] && [(id)vc isEditing]) return NO;
    return YES;
}

// Misc.c:43661 shouldRecognizeSimultaneouslyWithGestureRecognizer:
// 只对条内子 pan（条的横向滚动）放同时识别，其余（表格滚动 pan）一律互斥
- (BOOL)gestureRecognizer:(UIGestureRecognizer *)ges shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)other {
    id vc = _vc;
    if (!vc) return NO;
    SessionGroupsStripView *strip = objc_getAssociatedObject(vc, kSGAssocStrip);
    return strip && [other isKindOfClass:UIPanGestureRecognizer.class] && other.view &&
           [other.view isDescendantOfView:strip];
}

// Misc.c:43725 shouldBeRequiredToFailByGestureRecognizer:
// 中央区要求表格系 pan 先失败：横滑时表格无法横滚必 fail → 我们接管；竖滑表格 pan 成功 →
// 我们不出局也不抢（shouldBegin 已挡）；边缘 60pt 不设要求 → 系统侧滑返回优先
- (BOOL)gestureRecognizer:(UIGestureRecognizer *)ges shouldBeRequiredToFailByGestureRecognizer:(UIGestureRecognizer *)other {
    id vc = _vc;
    if (!vc) return NO;
    UITableView *table = SGMainTableView(vc);
    if (!table || ![other isKindOfClass:UIPanGestureRecognizer.class]) return NO;
    BOOL tablePan = (other == table.panGestureRecognizer) ||
                    (other.view && [other.view isDescendantOfView:table]);
    if (!tablePan) return NO;
    CGFloat w = ges.view ? ges.view.bounds.size.width : 0;
    CGPoint loc = [ges locationInView:ges.view];
    return loc.x > 60.0 && loc.x < w - 60.0;
}
@end

#pragma mark - Hook 实现（微信类方法替换体）

#define SG_TABLE_OK(table) (table && [table isKindOfClass:UITableView.class])
#define SG_CAN_FILTER(self, tableView) \
    (SGActive(self) && SG_TABLE_OK(tableView) && tableView == SGMainTableView(self))

static NSInteger hook_numberOfRows(id self, SEL _cmd, UITableView *tableView, NSInteger section) {
    if (SG_CAN_FILTER(self, tableView) && orig_numberOfRows) {
        @try {
            SGHomeSnapshot *snap = SGEnsureSnapshot(self, tableView);
            if (snap && section >= 0 && section < (NSInteger)snap.origCounts.count) {
                NSInteger origCnt = ((NSInteger (*)(id, SEL, id, NSInteger))orig_numberOfRows)(self, _cmd, tableView, section);
                if (snap.origCounts[section].integerValue == origCnt) {
                    if (snap.dirMode) {
                        // 目录模式（XOS numberOfRows = 当前计划 entries 数）：section 0 全量
                        // 由计划行驱动，其余 section 全隐藏（hiddenRows 已按全量填桶 → 同式得 0）
                        if (section == 0) return (NSInteger)snap.dirPlan.count;
                    }
                    return MAX(origCnt - (NSInteger)snap.hiddenRows[section].count, 0);
                }
                return origCnt; // 行数漂移：透传，下轮按新签名重建
            }
        } @catch (NSException *e) {
            WPLog(@"SG", @"[SgHook] rows err=%@", e);
        }
    }
    if (orig_numberOfRows) return ((NSInteger (*)(id, SEL, id, NSInteger))orig_numberOfRows)(self, _cmd, tableView, section);
    return 0;
}

// 目录计划行取行（XOS plan→entry 语义）：目录模式 section 0 的 displayed 行号 → 计划行；非目录行返回 nil
static SGPlanRow *SGDirPlanRow(id self, NSIndexPath *ip) {
    if (!ip || ip.section != 0 || ip.row < 0) return nil;
    SGHomeSnapshot *snap = objc_getAssociatedObject(self, kSGAssocSnapshot);
    if (!snap || !snap.dirMode || ip.row >= (NSInteger)snap.dirPlan.count) return nil;
    return snap.dirPlan[(NSUInteger)ip.row];
}

// 会话计划行 → 原生坐标（组头行无原生坐标，调用方各自处理）
static NSIndexPath *SGPlanNativeIndexPath(SGPlanRow *row) {
    return [NSIndexPath indexPathForRow:row.nativeRow inSection:row.nativeSection];
}

static UITableViewCell *hook_cellForRow(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    if (SG_CAN_FILTER(self, tableView) && orig_cellForRow) {
        @try {
            // 目录计划行（XOS cellForRow：isDivider → 组头 cell，会话 → entry 原生坐标重映射，
            // FUN__part4.c:16473-17100）
            SGPlanRow *pr = SGDirPlanRow(self, indexPath);
            if (pr) {
                if (pr.isHeader) {
                    SideGroupsDirCell *cell = [tableView dequeueReusableCellWithIdentifier:@"SGDirCell"];
                    if (!cell) cell = [[SideGroupsDirCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"SGDirCell"];
                    [cell configureTitle:pr.title count:pr.count unread:pr.unread expanded:!pr.folded];
                    cell.onLongPress = nil;
                    if (![pr.tabId isEqualToString:@"__sg_dir_other__"]) {
                        // 真实组：长按 → 侧边分组动作菜单（独立实现）；「其他」为目录聚合桶，无对应组
                        SGHomeSnapshot *snap = objc_getAssociatedObject(self, kSGAssocSnapshot);
                        for (SessionGroupsTab *tab in snap.tabs) {
                            if ([tab.tabId isEqualToString:pr.tabId]) {
                                cell.onLongPress = ^{ [SideGroupsActions showActionsForTab:tab]; };
                                break;
                            }
                        }
                    }
                    return cell;
                }
                return ((UITableViewCell *(*)(id, SEL, id, id))orig_cellForRow)(self, _cmd, tableView, SGPlanNativeIndexPath(pr));
            }
            if (SGIsDisplayedSpace(self, tableView, indexPath)) {
                NSIndexPath *native = SGNativeIndexPath(self, tableView, indexPath);
                return ((UITableViewCell *(*)(id, SEL, id, id))orig_cellForRow)(self, _cmd, tableView, native);
            }
        } @catch (NSException *e) {
            WPLog(@"SG", @"[SgHook] cell err=%@", e);
        }
    }
    if (orig_cellForRow) return ((UITableViewCell *(*)(id, SEL, id, id))orig_cellForRow)(self, _cmd, tableView, indexPath);
    return nil;
}

static CGFloat hook_heightForRow(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    if (SG_CAN_FILTER(self, tableView) && orig_heightForRow) {
        SGPlanRow *pr = SGDirPlanRow(self, indexPath);
        if (pr) {
            if (pr.isHeader) return 32.0; // 组头行高（XOS 实测 32pt 细条，Frida dump 证实）
            return ((CGFloat (*)(id, SEL, id, id))orig_heightForRow)(self, _cmd, tableView, SGPlanNativeIndexPath(pr));
        }
        if (SGIsDisplayedSpace(self, tableView, indexPath)) {
            NSIndexPath *native = SGNativeIndexPath(self, tableView, indexPath);
            return ((CGFloat (*)(id, SEL, id, id))orig_heightForRow)(self, _cmd, tableView, native);
        }
    }
    if (orig_heightForRow) return ((CGFloat (*)(id, SEL, id, id))orig_heightForRow)(self, _cmd, tableView, indexPath);
    return 0;
}

static void hook_didSelect(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    if (SG_CAN_FILTER(self, tableView) && orig_didSelect) {
        SGPlanRow *pr = SGDirPlanRow(self, indexPath);
        if (pr) {
            if (pr.isHeader) {
                // 组头点击 = 折叠切换（XOS FUN_001ccc14 点击链），不是跳组
                [tableView deselectRowAtIndexPath:indexPath animated:NO];
                SGToggleFold(self, pr.tabId);
                return;
            }
            ((void (*)(id, SEL, id, id))orig_didSelect)(self, _cmd, tableView, SGPlanNativeIndexPath(pr));
            return;
        }
        if (SGIsDisplayedSpace(self, tableView, indexPath)) {
            NSIndexPath *native = SGNativeIndexPath(self, tableView, indexPath);
            ((void (*)(id, SEL, id, id))orig_didSelect)(self, _cmd, tableView, native);
            return;
        }
    }
    if (orig_didSelect) ((void (*)(id, SEL, id, id))orig_didSelect)(self, _cmd, tableView, indexPath);
}

static BOOL hook_canEdit(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    if (SG_CAN_FILTER(self, tableView) && orig_canEdit) {
        if (SGDirPlanRow(self, indexPath)) return NO; // 计划行（组头/目录内会话行）不可编辑
        if (SGIsDisplayedSpace(self, tableView, indexPath)) {
            NSIndexPath *native = SGNativeIndexPath(self, tableView, indexPath);
            return ((BOOL (*)(id, SEL, id, id))orig_canEdit)(self, _cmd, tableView, native);
        }
    }
    if (orig_canEdit) return ((BOOL (*)(id, SEL, id, id))orig_canEdit)(self, _cmd, tableView, indexPath);
    return NO;
}

static UITableViewCellEditingStyle hook_editingStyle(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    if (SG_CAN_FILTER(self, tableView) && orig_editingStyle) {
        if (SGDirPlanRow(self, indexPath)) return UITableViewCellEditingStyleNone;
        if (SGIsDisplayedSpace(self, tableView, indexPath)) {
            NSIndexPath *native = SGNativeIndexPath(self, tableView, indexPath);
            return ((UITableViewCellEditingStyle (*)(id, SEL, id, id))orig_editingStyle)(self, _cmd, tableView, native);
        }
    }
    if (orig_editingStyle) return ((UITableViewCellEditingStyle (*)(id, SEL, id, id))orig_editingStyle)(self, _cmd, tableView, indexPath);
    return UITableViewCellEditingStyleNone;
}

static void hook_commitEditing(id self, SEL _cmd, UITableView *tableView, UITableViewCellEditingStyle style, NSIndexPath *indexPath) {
    if (SG_CAN_FILTER(self, tableView) && orig_commitEditing) {
        if (SGDirPlanRow(self, indexPath)) return; // 计划行无编辑提交
        if (SGIsDisplayedSpace(self, tableView, indexPath)) {
            NSIndexPath *native = SGNativeIndexPath(self, tableView, indexPath);
            ((void (*)(id, SEL, id, UITableViewCellEditingStyle, id))orig_commitEditing)(self, _cmd, tableView, style, native);
            return;
        }
    }
    if (orig_commitEditing) ((void (*)(id, SEL, id, UITableViewCellEditingStyle, id))orig_commitEditing)(self, _cmd, tableView, style, indexPath);
}

static void hook_willDisplay(id self, SEL _cmd, UITableView *tableView, UITableViewCell *cell, NSIndexPath *indexPath) {
    if (SG_CAN_FILTER(self, tableView) && orig_willDisplay) {
        SGPlanRow *pr = SGDirPlanRow(self, indexPath);
        if (pr) {
            if (pr.isHeader) return; // 组头 cell 自管外观，不走微信 willDisplay
            ((void (*)(id, SEL, id, id, id))orig_willDisplay)(self, _cmd, tableView, cell, SGPlanNativeIndexPath(pr));
            return;
        }
        if (SGIsDisplayedSpace(self, tableView, indexPath)) {
            NSIndexPath *native = SGNativeIndexPath(self, tableView, indexPath);
            ((void (*)(id, SEL, id, id, id))orig_willDisplay)(self, _cmd, tableView, cell, native);
            return;
        }
    }
    if (orig_willDisplay) ((void (*)(id, SEL, id, id, id))orig_willDisplay)(self, _cmd, tableView, cell, indexPath);
}

static void hook_didEndDisplaying(id self, SEL _cmd, UITableView *tableView, UITableViewCell *cell, NSIndexPath *indexPath) {
    if (SG_CAN_FILTER(self, tableView) && orig_didEndDisplaying) {
        SGPlanRow *pr = SGDirPlanRow(self, indexPath);
        if (pr) {
            if (pr.isHeader) return; // 组头 cell 无微信侧收尾
            ((void (*)(id, SEL, id, id, id))orig_didEndDisplaying)(self, _cmd, tableView, cell, SGPlanNativeIndexPath(pr));
            return;
        }
        if (SGIsDisplayedSpace(self, tableView, indexPath)) {
            NSIndexPath *native = SGNativeIndexPath(self, tableView, indexPath);
            ((void (*)(id, SEL, id, id, id))orig_didEndDisplaying)(self, _cmd, tableView, cell, native);
            return;
        }
    }
    if (orig_didEndDisplaying) ((void (*)(id, SEL, id, id, id))orig_didEndDisplaying)(self, _cmd, tableView, cell, indexPath);
}

// 分组条 = 置顶区 section header 接管（WCR 实证：FUN_003b53f4 接管谓词 FUN__part6.c:55286 要求
// section != targetSection 且 pinnedAreaTakenOver；快照字段 pinnedAreaTakenOver/pinnedSessionSignature
// 即"置顶区被接管"。条必须压在置顶会话上方 → 取 section 0；targetSection 只负责分组条目渲染）
// 条容器 = MMTableViewCell（WCR FUN_007ec688 + Frida dump 实证：strip 在 cell.contentView，
// cell 身份让微信原生画全宽底线 _UITableViewCellSeparatorView(0,43.7 393x0.3) 并自带背景管理）
static id hook_viewForHeader(id self, SEL _cmd, UITableView *tableView, NSInteger section) {
    if (SG_CAN_FILTER(self, tableView) && orig_viewForHeader) {
        @try {
            SGHomeSnapshot *snap = SGEnsureSnapshot(self, tableView);
            if (snap && section == 0 && !SGWantsStrip(self)) {
                // 条已不需要（电报分组关/侧边改纯侧栏）：清接管缓存，回落原生 header
                UITableViewCell *stale = objc_getAssociatedObject(self, kSGAssocHeaderCell);
                if (stale) [stale removeFromSuperview];
                objc_setAssociatedObject(self, kSGAssocHeaderCell, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                sHeaderHostCell = nil;
            }
            if (snap && section == 0 && SGWantsStrip(self)) {
                SessionGroupsStripView *strip = SGEnsureStrip(self, tableView);
                CGFloat w = tableView.bounds.size.width;
                CGFloat h = [SessionGroupsStripView preferredHeight];
                [strip setFrame:CGRectMake(0, 0, w, h)];
                // WCR FUN_007ec688 同款：header cell 关联缓存复用。每次新建 cell 会让微信
                // layout 反复拆建 _UITableViewCellSeparatorView（实测 dump #1 无线、#2 cell
                // 消失、#3 才有线），缓存后 separator 生命周期稳定
                UITableViewCell *cell = objc_getAssociatedObject(self, kSGAssocHeaderCell);
                if (!cell) {
                    cell = [[objc_getClass("MMTableViewCell") alloc]
                        initWithStyle:UITableViewCellStyleDefault reuseIdentifier:nil];
                    // 全宽底线三件套（WCR dump sepInset=(0,0) 全宽；实测只设 separatorInset 会被
                    // MMTableViewCell 按 layoutMargins(16pt) 重排成 (16,43.7 377x0.3)，必须 margins 链路清零）
                    cell.separatorInset = UIEdgeInsetsZero;
                    cell.layoutMargins = UIEdgeInsetsZero;
                    cell.preservesSuperviewLayoutMargins = NO;
                    cell.backgroundColor = UIColor.clearColor;
                    cell.tag = SG_HEADER_CELL_TAG;
                    [cell.contentView addSubview:strip];
                    // separator 上色不在本函数做：手动 alloc 的 cell 绕过了微信给原生 header
                    // 的包装与上色链路（cell 不经过微信的 header 复用/包装流程），这里只负责
                    // 把 cell 建好，上色由 SessionGroupsStripView.layoutSubviews 每次布局补
                    objc_setAssociatedObject(self, kSGAssocHeaderCell, cell, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                }
                cell.frame = CGRectMake(0, 0, w, h);
                SGReloadStrip(self, snap);
                sHeaderHostCell = cell; // 创建+复用两条路径都在此出口刷新缓存，防止复用实例更替后缓存陈旧
                return cell;
            }
        } @catch (NSException *e) {
            WPLog(@"SG", @"[SgHook] header err=%@", e);
        }
    }
    if (orig_viewForHeader) return ((id (*)(id, SEL, id, NSInteger))orig_viewForHeader)(self, _cmd, tableView, section);
    return nil;
}

static CGFloat hook_heightForHeader(id self, SEL _cmd, UITableView *tableView, NSInteger section) {
    if (SG_CAN_FILTER(self, tableView) && orig_heightForHeader) {
        @try {
            SGHomeSnapshot *snap = SGEnsureSnapshot(self, tableView);
            if (snap && section == 0 && SGWantsStrip(self)) {
                // 高度保持 44 占位（iOS 高度为 0 会跳过 viewForHeaderInSection 调用 → 条消失，
                // sgbadge10 实测）。钉顶由 SGUnstickHeader 去粘滞（跟随内容滚动，WCR unstick
                // 同款），避免与微信「Windows 已登录」浮层提示条同位重叠
                return [SessionGroupsStripView preferredHeight];
            }
        } @catch (NSException *e) {}
    }
    if (orig_heightForHeader) return ((CGFloat (*)(id, SEL, id, NSInteger))orig_heightForHeader)(self, _cmd, tableView, section);
    return 0;
}

static void hook_viewDidLoad(id self, SEL _cmd) {
    if (orig_viewDidLoad) ((void (*)(id, SEL))orig_viewDidLoad)(self, _cmd);
    if (SGIsMainFrameVC(self)) {
        [sSeenVCs addObject:self];
        if (SGActive(self)) {
            WPLog(@"SG", @"[SgHook] NMFVC viewDidLoad → refresh");
            SGScheduleRefresh(self);
        }
    }
}

static void hook_viewWillAppear(id self, SEL _cmd, BOOL animated) {
    if (orig_viewWillAppear) ((void (*)(id, SEL, BOOL))orig_viewWillAppear)(self, _cmd, animated);
    if (SGIsMainFrameVC(self)) {
        [sSeenVCs addObject:self];
        SGScheduleRefresh(self); // 回首页合并窗口刷新（wcrGrouping_.c:3910 语义）
    }
}

static void hook_viewDidAppear(id self, SEL _cmd, BOOL animated) {
    if (orig_viewDidAppear) ((void (*)(id, SEL, BOOL))orig_viewDidAppear)(self, _cmd, animated);
    if (SGActive(self)) SGScheduleRefresh(self);
}

static void hook_reloadSessions(id self, SEL _cmd) {
    if (orig_reloadSessions) ((void (*)(id, SEL))orig_reloadSessions)(self, _cmd);
    if (SGActive(self)) SGScheduleRefresh(self);
}

static void hook_reloadAll(id self, SEL _cmd) {
    if (orig_reloadAll) ((void (*)(id, SEL))orig_reloadAll)(self, _cmd);
    if (SGActive(self)) SGScheduleRefresh(self);
}

// 插入/删除 hook：WCR 同款（wcrGrouping_.c:4463-4578）
// 关键教训：deleteSessionCell:atSection:withUser: 真实签名为 (unsigned int row, long long section, id user)，
// 前两个参数是整数。hook 绝不能把 x2/x3 当对象接——错位消息派发时编译器对 x2 做 objc_retain 会
// retain 垃圾指针 → SIGSEGV（退群闪退根因，probe_segv 实测 lr=0x4c8c4）
static void hook_insertSessionCell(id self, SEL _cmd, NSArray *indexes) {
    if (!SGActive(self) || !orig_insertSessionCell) {
        if (orig_insertSessionCell) ((void (*)(id, SEL, id))orig_insertSessionCell)(self, _cmd, indexes);
        return;
    }
    SGScheduleRefresh(self); // WCR: scheduleRefreshForTrigger 先行
    // 注意：不能用 WCR 的 setDisableTableAnimation: 包裹——8.0.60 该属性是 id 类型
    // （NewMainFrameViewController.h:83），传 BOOL 会被 setter 当对象 retain(0x1) 崩溃
    [UIView performWithoutAnimation:^{
        ((void (*)(id, SEL, id))orig_insertSessionCell)(self, _cmd, indexes);
    }];
}

static void hook_deleteSessionCell(id self, SEL _cmd, NSArray *indexes) {
    if (!SGActive(self) || !orig_deleteSessionCell) {
        if (orig_deleteSessionCell) ((void (*)(id, SEL, id))orig_deleteSessionCell)(self, _cmd, indexes);
        return;
    }
    SGScheduleRefresh(self); // WCR: scheduleRefreshForTrigger 先行
    [UIView performWithoutAnimation:^{
        ((void (*)(id, SEL, id))orig_deleteSessionCell)(self, _cmd, indexes);
    }];
}

// 只刷新不透传（WCR 同款：wcrGrouping_.c:4523-4539）
static void hook_insertRow(id self, SEL _cmd, unsigned int row) {
    if (SGActive(self)) {
        SGScheduleRefresh(self);
        return;
    }
    if (orig_insertRow) ((void (*)(id, SEL, unsigned int))orig_insertRow)(self, _cmd, row);
}

// WCR 同款签名（wcrGrouping_.c:4549-4578）：(unsigned int row, long long section, id user)，x2/x3 为整数
static void hook_deleteSessionCellAt(id self, SEL _cmd, unsigned int row, long long section, id user) {
    if (SGActive(self)) {
        SGScheduleRefresh(self);
        return;
    }
    if (orig_deleteSessionCellAt) ((void (*)(id, SEL, unsigned int, long long, id))orig_deleteSessionCellAt)(self, _cmd, row, section, user);
}

#pragma mark - 安装

// header 去粘滞（WCR WCRefineHomeHeaderUnstick unstickIfNeededOnTableView: 同款，Misc_part4.c:1970-2264）：
// plain tableView 的 section header 会 sticky 悬停钉顶；WCR 在每次 layoutSubviews 后把
// header 容器 frame 用 rectForHeaderInSection: 的内容坐标理论位置摆回去 → header 跟随内容
// 滚动（下拉时被导航栏裁掉，与"写在内容上"一致）。Mio 的 cell 未被微信包装（直接在
// subviews），host 由 sHeaderHostCell 缓存直读（hook_viewForHeader 出口赋值），无 subviews 遍历。
// sticky 钉顶会与微信「Windows 已登录」浮层提示条同位重叠（sgbadge17d 实测），unstick 才是
// WCR 真实行为（此前"WCR 同款钉顶"为误判，sgbadge8 误删本机制）
static void SGUnstickHeader(UITableView *table) {
    UITableViewCell *host = sHeaderHostCell;
    if (!host) return;                              // 未接管：weak 空，立即返回
    if (![host isDescendantOfView:table]) return;   // 归属检查：其他 table 触发的 layout 跳过（孤儿 view 亦为 NO）
    CGRect target = [table rectForHeaderInSection:0];
    if (target.size.height <= 0) return;
    // 只在 frame 真不一致时才写，避免高频空写触发多余布局
    CGRect f = host.frame;
    if (fabs(f.origin.y - target.origin.y) < 0.5 &&
        fabs(f.size.height - target.size.height) < 0.5) {
        return;
    }
    host.frame = target;
}

static void hook_tableLayoutSubviews(UITableView *table, SEL _cmd) {
    if (orig_tableLayout) ((void (*)(id, SEL))orig_tableLayout)(table, _cmd);
    @try {
        SGUnstickHeader(table); // 未接管时 weak 缓存为 nil，立即空操作
        SGSideRailLayoutPass(table); // 侧边分组让位/定位（非主表或未启用时为空操作）
    } @catch (NSException *e) {
        WPLog(@"SG", @"[SgHook] unstick err=%@", e);
    }
}

static void SGHook(Class cls, SEL sel, IMP newIMP, IMP *origOut) {
    Method m = class_getInstanceMethod(cls, sel);
    if (!m) {
        WPLog(@"SG", @"[SgHook] skip missing %@ on %@", NSStringFromSelector(sel), cls);
        return;
    }
    if (origOut) *origOut = method_getImplementation(m);
    if (newIMP) MSHookMessageEx(cls, sel, newIMP, NULL);
}

@implementation SessionGroupsHook

+ (void)install {
    if (sInstalled) return;
    sInstalled = YES;
    sGestureSink = [[SGHomeGestureSink alloc] init];
    sSeenVCs = [NSHashTable weakObjectsHashTable];

    // 配置变更监听（ConfigManager 走 NSUserDefaults，saveAll 触发该通知；0.5s 防抖）
    __block NSTimeInterval lastCheck = 0;
    [[NSNotificationCenter defaultCenter] addObserverForName:NSUserDefaultsDidChangeNotification
                                                     object:nil queue:nil
                                                usingBlock:^(NSNotification *note) {
        NSTimeInterval now = [NSDate date].timeIntervalSince1970;
        if (now - lastCheck < 0.5) return;
        lastCheck = now;
        dispatch_async(dispatch_get_main_queue(), ^{
            for (id vc in sSeenVCs) {
                if (SGIsMainFrameVC(vc)) SGScheduleRefresh(vc); // 关→开会还原，开→关会重建
            }
        });
    }];

    Class cls = objc_getClass("NewMainFrameViewController");
    if (!cls) {
        WPLog(@"SG", @"[SgHook] NewMainFrameViewController not found, skip");
        return;
    }

    SEL s;
    #define HOOK(selName, impVar, impFn) \
        s = @selector(selName); \
        SGHook(cls, s, (IMP)impFn, &impVar);
    #define CAPTURE(selName, impVar) \
        s = @selector(selName); \
        SGHook(cls, s, NULL, &impVar);

    HOOK(viewDidLoad, orig_viewDidLoad, hook_viewDidLoad)
    HOOK(viewWillAppear:, orig_viewWillAppear, hook_viewWillAppear)
    HOOK(viewDidAppear:, orig_viewDidAppear, hook_viewDidAppear)
    CAPTURE(numberOfSectionsInTableView:, orig_numberOfSections)
    HOOK(tableView:numberOfRowsInSection:, orig_numberOfRows, hook_numberOfRows)
    HOOK(tableView:cellForRowAtIndexPath:, orig_cellForRow, hook_cellForRow)
    HOOK(tableView:heightForRowAtIndexPath:, orig_heightForRow, hook_heightForRow)
    HOOK(tableView:didSelectRowAtIndexPath:, orig_didSelect, hook_didSelect)
    HOOK(tableView:canEditRowAtIndexPath:, orig_canEdit, hook_canEdit)
    HOOK(tableView:editingStyleForRowAtIndexPath:, orig_editingStyle, hook_editingStyle)
    HOOK(tableView:commitEditingStyle:forRowAtIndexPath:, orig_commitEditing, hook_commitEditing)
    HOOK(tableView:willDisplayCell:forRowAtIndexPath:, orig_willDisplay, hook_willDisplay)
    HOOK(tableView:didEndDisplayingCell:forRowAtIndexPath:, orig_didEndDisplaying, hook_didEndDisplaying)
    HOOK(tableView:viewForHeaderInSection:, orig_viewForHeader, hook_viewForHeader)
    HOOK(tableView:heightForHeaderInSection:, orig_heightForHeader, hook_heightForHeader)
    HOOK(reloadSessions, orig_reloadSessions, hook_reloadSessions)
    HOOK(reloadAll, orig_reloadAll, hook_reloadAll)
    HOOK(insertSessionCellAtIndexes:, orig_insertSessionCell, hook_insertSessionCell)
    HOOK(deleteSessionCellAtIndexes:, orig_deleteSessionCell, hook_deleteSessionCell)
    HOOK(insertRow:, orig_insertRow, hook_insertRow)
    HOOK(deleteSessionCell:atSection:withUser:, orig_deleteSessionCellAt, hook_deleteSessionCellAt)
    CAPTURE(logicGetSessionAtIndexPath:, orig_logicGetSession)

    #undef HOOK
    #undef CAPTURE

    // header 去粘滞：swizzle MainFrameTableView.layoutSubviews（WCR installMainFrameTableHookIfNeeded
    // 同款，Misc_part4.c:2274-2363；类缺失时跳过，functionality 降级为原生 sticky）
    Class tableCls = objc_getClass("MainFrameTableView");
    if (tableCls) {
        SGHook(tableCls, @selector(layoutSubviews), (IMP)hook_tableLayoutSubviews, &orig_tableLayout);
        SGHook(tableCls, @selector(setFrame:), (IMP)hook_tableSetFrame, (IMP *)&orig_tableSetFrame);
    } else {
        WPLog(@"SG", @"[SgHook] MainFrameTableView not found, header will stick");
    }

    WPLog(@"SG", @"[SgHook] installed on NewMainFrameViewController");
}

@end
