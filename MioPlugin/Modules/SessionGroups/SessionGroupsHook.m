#import "SessionGroupsHook.h"
#import "SessionGroupsConfig.h"
#import "SessionGroupsTab.h"
#import "SessionGroupsStripView.h"
#import "SessionGroupManagerVC.h"
#import "../SideGroups/SideGroupsConfig.h"
#import "../SideGroups/SideGroupsRailView.h"
#import "../SideGroups/SideGroupsDirView.h"
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
static const void *kSGAssocDir      = &kSGAssocDir;      // 侧边分组列表内目录页（挂 vc）
static const void *kSGAssocRailNative = &kSGAssocRailNative; // 列表原生 frame（挂 table，NSValue）
static const void *kSGAssocRailWanted = &kSGAssocRailWanted; // 上轮让位 frame（挂 table，区分自触发与原生变更）

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

@interface SGHomeSnapshot : NSObject
@property (nonatomic, assign) NSInteger sectionCount;
@property (nonatomic, strong) NSArray<NSNumber *> *origCounts;             // 每 section 原行数
@property (nonatomic, strong) NSArray<NSArray<NSNumber *> *> *hiddenRows;  // 每 section 隐藏的原行号（升序）
@property (nonatomic, assign) NSInteger targetSection;                     // 会话最多的 section
@property (nonatomic, copy) NSString *signature;
@property (nonatomic, strong) NSArray<SessionGroupsTab *> *tabs;
@property (nonatomic, strong) NSArray<NSNumber *> *tabUnread;              // 每组未读数（all 恒 0）
@property (nonatomic, strong) NSArray<NSNumber *> *tabRedDot;
@property (nonatomic, strong) NSArray<NSNumber *> *tabSessionCounts;       // 每组会话数（侧边分组目录页用）
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
static BOOL SGMatchesTab(id session, NSString *username, NSUInteger scope, SessionGroupsTab *tab, SessionGroupsConfig *cfg) {
    if (tab.kind == 0) {
        if ((cfg.sgFilterPinned || tab.hidePinned) && SGIsTopOf(session)) return NO;
        return YES;
    }
    if (tab.kind == 3) {
        // 最近 N 天（Misc_part6.c:8537-8800 kind3 路径）：tab 自带天数优先，回落全局 sgRecentDays
        if ((cfg.sgFilterPinned || tab.hidePinned) && SGIsTopOf(session)) return NO;
        NSInteger days = tab.recentDays > 0 ? tab.recentDays : (cfg.sgRecentDays > 0 ? cfg.sgRecentDays : 3);
        NSTimeInterval last = SGLastTimeOf(session);
        if (last <= 0) return NO;
        NSTimeInterval dt = [NSDate date].timeIntervalSince1970 - last;
        return dt >= 0 && dt <= (NSTimeInterval)days * 86400.0;
    }
    if (tab.kind != 1) return NO;

    // 置顶过滤：全局 sgFilterPinned 或本组 hidePinned（长按动作 5 落点，homeTelegramGroupingFilterPinned
    // Misc_part6.c:8946-8958 + tab.hidePinned per-tab 开关）
    if ((cfg.sgFilterPinned || tab.hidePinned) && SGIsTopOf(session)) return NO;

    // effectiveScopeMaskForTab：other 组补公众号位 bit2(4)（Misc_part6.c:7886-7913）
    NSUInteger eff = tab.scopeMask;
    if ([tab.tabId isEqualToString:@"other"]) eff |= 4;

    // scope==0（未知）落 other 兜底（Misc_part6.c:8755-8780）
    BOOL match = (scope == 0) ? ((eff & 0x18) != 0) : ((scope & eff & 0x1f) != 0);

    // 附加位（Misc_part6.c:8722-8748）：0x20 置顶 / 0x40 未读 / 0x80 @我
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

// 条接管显隐（XOS 单一位置模式语义）：侧边分组开启时由「分组显示位置」全权决定——
// 纯侧栏（右侧/左侧）= 条不显示（侧栏取代条）；「+列表内」= 条与侧栏共存。
// 侧边分组关闭时回落电报分组总开关。
static BOOL SGWantsStrip(id vc) {
    SideGroupsConfig *sd = [SideGroupsConfig shared];
    if (sd.sdEnabled) {
        return sd.sdPosition == SDSidePositionLeftInList || sd.sdPosition == SDSidePositionRightInList;
    }
    return [SessionGroupsConfig shared].sgEnabled;
}

static SessionGroupsTab *SGSelectedTab(NSArray<SessionGroupsTab *> *tabs) {
    NSString *tid = [SessionGroupsTab currentSelectedTabId];
    if (tid.length) {
        for (SessionGroupsTab *t in tabs) if ([t.tabId isEqualToString:tid]) return t;
    }
    return tabs.firstObject; // 无选中记录时回落第一组（WCR Misc_part6.c:4444-4462；启动即此分支）
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
    [parts addObject:SGSelectedTab([SessionGroupsTab visibleTabs]).tabId];
    [parts addObject:cfg.sgFilterPinned ? @"p1" : @"p0"];
    [parts addObject:cfg.sgFilterDuplicate ? @"d1" : @"d0"];
    return [parts componentsJoinedByString:@"|"];
}

static SGHomeSnapshot *SGBuildSnapshot(id vc, UITableView *table) {
    if (!orig_logicGetSession || !orig_numberOfRows) return nil;

    SGHomeSnapshot *snap = [[SGHomeSnapshot alloc] init];
    SessionGroupsConfig *cfg = [SessionGroupsConfig shared];
    // 分组条数据源 = 管理页维护的可见分组（disabled 过滤后；空回落默认四组）
    NSArray<SessionGroupsTab *> *tabs = [SessionGroupsTab visibleTabs];
    snap.tabs = tabs;

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
    NSMutableArray<NSNumber *> *countPerTab = [NSMutableArray arrayWithCapacity:tabs.count];
    for (NSUInteger t = 0; t < tabs.count; t++) {
        NSMutableArray<NSMutableArray<NSNumber *> *> *perSection = [NSMutableArray arrayWithCapacity:sections];
        for (NSInteger s = 0; s < sections; s++) [perSection addObject:[NSMutableArray array]];
        [hiddenPerTab addObject:perSection];
        [unreadPerTab addObject:@(0)]; // all 组恒 0（Misc_part6.c:10348-10353）
        [dotPerTab addObject:@(NO)];
        [countPerTab addObject:@(0)];
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

            for (NSUInteger t = 0; t < tabs.count; t++) {
                SessionGroupsTab *tab = tabs[t];
                BOOL keep = SGMatchesTab(sess, username, scope, tab, cfg);
                if (cfg.sgFilterDuplicate && dup) keep = NO;
                if (!keep) {
                    [hiddenPerTab[t][s] addObject:@(r)]; // 记入本 section 的桶（WCR BySection 语义）
                    continue;
                }
                countPerTab[t] = @([countPerTab[t] integerValue] + 1); // 每组会话数（目录页 XOS「未读 · 15」同语义）
                if (tab.kind == 0) continue; // all 组未读恒 0（Misc_part6.c:10348-10353）
                if (unread == 0) continue;
                // 逐组独立统计（unreadCountForTab 按 tab 遍历会话的语义；旧实现按默认
                // tab 序号 1/2/3 硬编码桶，自定义分组下序号与 scope 不再对齐）
                // 折叠群不红点：红点标记会话不计入数字（Misc_part6.c:10512-10523 config
                // 开 → FUN_01576b80 查会话红点属性 → 命中不计）
                if (!redDotFlag || !cfg.sgFoldGroupNoRedDot) {
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
        }
        if (sessionRows > targetSessionRows) {
            targetSessionRows = sessionRows;
            targetSection = s;
        }
    }
    if (targetSection < 0) targetSection = 0;

    // 选中组的隐藏行（每 section 取自己的桶）
    SessionGroupsTab *sel = SGSelectedTab(tabs);
    NSUInteger selIdx = 0;
    for (NSUInteger t = 0; t < tabs.count; t++) if (tabs[t] == sel) { selIdx = t; break; }
    for (NSInteger s = 0; s < sections; s++) {
        [hidden addObject:[hiddenPerTab[selIdx][s] sortedArrayUsingSelector:@selector(compare:)]];
    }

    snap.origCounts = [counts copy];
    snap.hiddenRows = [hidden copy];
    snap.targetSection = targetSection;
    snap.tabUnread = [unreadPerTab copy];
    snap.tabRedDot = [dotPerTab copy];
    snap.tabSessionCounts = [countPerTab copy];
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

// displayed 行空间校验：行号是否落在快照的过滤后行数内
static BOOL SGIsDisplayedSpace(id self, UITableView *table, NSIndexPath *ip) {
    SGHomeSnapshot *snap = objc_getAssociatedObject(self, kSGAssocSnapshot);
    if (!snap || !ip) return NO;
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
    if (!snap || !ip) return ip;
    if (ip.section < 0 || ip.section >= (NSInteger)snap.hiddenRows.count) return ip;
    NSInteger native = SGNativeRow(snap, ip.section, ip.row);
    if (native == ip.row) return ip;
    return [NSIndexPath indexPathForRow:native inSection:ip.section];
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

// 关闭时还原：摘侧栏/目录页 + 恢复列表原生 frame
static void SGRemoveSideRail(id vc, UITableView *table) {
    SideGroupsRailView *rail = objc_getAssociatedObject(vc, kSGAssocRail);
    if (rail) {
        [rail removeFromSuperview];
        objc_setAssociatedObject(vc, kSGAssocRail, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    SideGroupsDirView *dir = objc_getAssociatedObject(vc, kSGAssocDir);
    if (dir) {
        [dir removeFromSuperview];
        objc_setAssociatedObject(vc, kSGAssocDir, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    NSValue *nativeV = objc_getAssociatedObject(table, kSGAssocRailNative);
    if (nativeV && !CGRectEqualToRect(table.frame, [nativeV CGRectValue])) {
        table.frame = [nativeV CGRectValue];
    }
    objc_setAssociatedObject(table, kSGAssocRailNative, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(table, kSGAssocRailWanted, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

// MainFrameTableView.layoutSubviews 收尾调用（对齐 XOS FUN_0020a174 在每次布局后重摆侧栏）：
// 1) 原生帧追踪（区分微信原生变更 vs 自己上轮写帧，防双重让位/布局风暴）
// 2) 让位帧写回：左模式 x+=w/width-=w，右模式 width-=w（0.5pt 阈值防空写）
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

    // ── 原生帧追踪 ──
    CGRect cur = table.frame;
    NSValue *lastWantedV = objc_getAssociatedObject(table, kSGAssocRailWanted);
    NSValue *nativeV = objc_getAssociatedObject(table, kSGAssocRailNative);
    CGRect native = nativeV ? [nativeV CGRectValue] : cur;
    if (!lastWantedV || !CGRectEqualToRect(cur, [lastWantedV CGRectValue])) {
        native = cur; // 与上轮让位帧不一致 → 微信原生布局变更，重捕获
    }
    objc_setAssociatedObject(table, kSGAssocRailNative, [NSValue valueWithCGRect:native], OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    // ── 让位帧计算（XOS FUN__part4.c:19995-20060 同语义；参数钳位同设置项范围） ──
    CGFloat w = MIN(MAX(sd.sdRailWidth, 40), 90);
    CGFloat off = MIN(MAX(sd.sdRailXOffset, -30), 30);
    BOOL left = (sd.sdPosition == SDSidePositionLeft || sd.sdPosition == SDSidePositionLeftInList);
    CGRect want = native;
    CGRect railFrame; // table.superview 坐标系
    if (left) {
        want.origin.x = native.origin.x + w;
        want.size.width = native.size.width - w;
        railFrame = CGRectMake(native.origin.x + off, native.origin.y, w, native.size.height);
    } else {
        want.size.width = native.size.width - w;
        railFrame = CGRectMake(native.origin.x + native.size.width - w + off, native.origin.y, w, native.size.height);
    }
    if (want.size.width < 100) return; // 极窄屏保护，宁可不出侧栏
    if (fabs(cur.origin.x - want.origin.x) > 0.5 || fabs(cur.size.width - want.size.width) > 0.5) {
        table.frame = want; // 写帧触发下一轮 layout；下轮 cur==want 走跳过分支
    }
    objc_setAssociatedObject(table, kSGAssocRailWanted, [NSValue valueWithCGRect:want], OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    // ── 侧栏挂载与定位 ──
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
            SGDispatchLongPress(weakVC, tabs[idx]);
        };
        objc_setAssociatedObject(vc, kSGAssocRail, rail, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    UIView *host = [vc view];
    if (!host) return;
    if (rail.superview != host) {
        [rail removeFromSuperview];
        [host addSubview:rail];
    }
    [host bringSubviewToFront:rail];
    rail.frame = [table.superview convertRect:railFrame toView:host];
    [rail applyConfig];

    // ── 数据同步（标题/角标/选中态，快照签名缓存，热路径开销同条刷新） ──
    SGHomeSnapshot *snap = SGEnsureSnapshot(vc, table);
    if (!snap) return;
    NSMutableArray<NSString *> *titles = [NSMutableArray array];
    for (SessionGroupsTab *t in snap.tabs) [titles addObject:t.title ?: @""];
    [rail reloadTitles:titles badges:snap.tabUnread];
    SessionGroupsTab *sel = SGSelectedTab(snap.tabs);
    NSInteger idx = 0;
    for (NSUInteger t = 0; t < snap.tabs.count; t++) if (snap.tabs[t] == sel) { idx = (NSInteger)t; break; }
    if (rail.selectedIndex != idx) rail.selectedIndex = idx;

    // ── 列表内目录页（XOS「+列表内」形态）：选中「全部」组时列表区显示分组目录， ──
    //    点行切入该组；显示条件 = 位置含列表内 && 当前选中组是 all（kind==0）
    BOOL wantDir = (sd.sdPosition == SDSidePositionLeftInList || sd.sdPosition == SDSidePositionRightInList)
                   && snap.tabs.count > 0 && sel.kind == 0;
    SideGroupsDirView *dir = objc_getAssociatedObject(vc, kSGAssocDir);
    if (!wantDir) {
        if (dir) dir.hidden = YES;
        return;
    }
    if (!dir) {
        dir = [[SideGroupsDirView alloc] initWithFrame:CGRectZero];
        __weak id weakVC = vc;
        dir.onSelectIndex = ^(NSInteger rowIdx) {
            NSArray<SessionGroupsTab *> *tabs = [SessionGroupsTab visibleTabs];
            NSInteger off = (tabs.count && tabs[0].kind == 0) ? 1 : 0;
            SGSelectTabIndex(weakVC, rowIdx + off, 0, YES); // 目录行跳过 all 组行
        };
        dir.onLongPressIndex = ^(NSInteger rowIdx) {
            NSArray<SessionGroupsTab *> *tabs = [SessionGroupsTab visibleTabs];
            NSInteger off = (tabs.count && tabs[0].kind == 0) ? 1 : 0;
            NSInteger tIdx = rowIdx + off;
            if (tIdx < 0 || tIdx >= (NSInteger)tabs.count) return;
            SGDispatchLongPress(weakVC, tabs[tIdx]);
        };
        objc_setAssociatedObject(vc, kSGAssocDir, dir, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    if (dir.superview != host) {
        [dir removeFromSuperview];
        [host addSubview:dir];
    }
    dir.backgroundColor = table.backgroundColor; // 跟随列表底色（明暗主题一致）
    dir.frame = [table.superview convertRect:table.frame toView:host]; // 占据让位后的列表区
    dir.hidden = NO;
    [host bringSubviewToFront:dir];
    [host bringSubviewToFront:rail]; // 侧栏保持最上层

    // 目录数据 = 跳过 all 组行
    NSInteger dirOff = (snap.tabs.count && snap.tabs[0].kind == 0) ? 1 : 0;
    NSMutableArray<NSString *> *dirTitles = [NSMutableArray array];
    for (NSUInteger t = (NSUInteger)dirOff; t < snap.tabs.count; t++) [dirTitles addObject:snap.tabs[t].title ?: @""];
    NSArray<NSNumber *> *dirCounts = dirOff < (NSInteger)snap.tabSessionCounts.count
        ? [snap.tabSessionCounts subarrayWithRange:NSMakeRange((NSUInteger)dirOff, snap.tabSessionCounts.count - (NSUInteger)dirOff)]
        : @[];
    NSArray<NSNumber *> *dirUnread = dirOff < (NSInteger)snap.tabUnread.count
        ? [snap.tabUnread subarrayWithRange:NSMakeRange((NSUInteger)dirOff, snap.tabUnread.count - (NSUInteger)dirOff)]
        : @[];
    [dir reloadGroups:dirTitles counts:dirCounts unread:dirUnread];
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

static UITableViewCell *hook_cellForRow(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    if (SG_CAN_FILTER(self, tableView) && orig_cellForRow) {
        @try {
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
    if (SG_CAN_FILTER(self, tableView) && orig_heightForRow && SGIsDisplayedSpace(self, tableView, indexPath)) {
        NSIndexPath *native = SGNativeIndexPath(self, tableView, indexPath);
        return ((CGFloat (*)(id, SEL, id, id))orig_heightForRow)(self, _cmd, tableView, native);
    }
    if (orig_heightForRow) return ((CGFloat (*)(id, SEL, id, id))orig_heightForRow)(self, _cmd, tableView, indexPath);
    return 0;
}

static void hook_didSelect(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    if (SG_CAN_FILTER(self, tableView) && orig_didSelect && SGIsDisplayedSpace(self, tableView, indexPath)) {
        NSIndexPath *native = SGNativeIndexPath(self, tableView, indexPath);
        ((void (*)(id, SEL, id, id))orig_didSelect)(self, _cmd, tableView, native);
        return;
    }
    if (orig_didSelect) ((void (*)(id, SEL, id, id))orig_didSelect)(self, _cmd, tableView, indexPath);
}

static BOOL hook_canEdit(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    if (SG_CAN_FILTER(self, tableView) && orig_canEdit && SGIsDisplayedSpace(self, tableView, indexPath)) {
        NSIndexPath *native = SGNativeIndexPath(self, tableView, indexPath);
        return ((BOOL (*)(id, SEL, id, id))orig_canEdit)(self, _cmd, tableView, native);
    }
    if (orig_canEdit) return ((BOOL (*)(id, SEL, id, id))orig_canEdit)(self, _cmd, tableView, indexPath);
    return NO;
}

static UITableViewCellEditingStyle hook_editingStyle(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    if (SG_CAN_FILTER(self, tableView) && orig_editingStyle && SGIsDisplayedSpace(self, tableView, indexPath)) {
        NSIndexPath *native = SGNativeIndexPath(self, tableView, indexPath);
        return ((UITableViewCellEditingStyle (*)(id, SEL, id, id))orig_editingStyle)(self, _cmd, tableView, native);
    }
    if (orig_editingStyle) return ((UITableViewCellEditingStyle (*)(id, SEL, id, id))orig_editingStyle)(self, _cmd, tableView, indexPath);
    return UITableViewCellEditingStyleNone;
}

static void hook_commitEditing(id self, SEL _cmd, UITableView *tableView, UITableViewCellEditingStyle style, NSIndexPath *indexPath) {
    if (SG_CAN_FILTER(self, tableView) && orig_commitEditing && SGIsDisplayedSpace(self, tableView, indexPath)) {
        NSIndexPath *native = SGNativeIndexPath(self, tableView, indexPath);
        ((void (*)(id, SEL, id, UITableViewCellEditingStyle, id))orig_commitEditing)(self, _cmd, tableView, style, native);
        return;
    }
    if (orig_commitEditing) ((void (*)(id, SEL, id, UITableViewCellEditingStyle, id))orig_commitEditing)(self, _cmd, tableView, style, indexPath);
}

static void hook_willDisplay(id self, SEL _cmd, UITableView *tableView, UITableViewCell *cell, NSIndexPath *indexPath) {
    if (SG_CAN_FILTER(self, tableView) && orig_willDisplay && SGIsDisplayedSpace(self, tableView, indexPath)) {
        NSIndexPath *native = SGNativeIndexPath(self, tableView, indexPath);
        ((void (*)(id, SEL, id, id, id))orig_willDisplay)(self, _cmd, tableView, cell, native);
        return;
    }
    if (orig_willDisplay) ((void (*)(id, SEL, id, id, id))orig_willDisplay)(self, _cmd, tableView, cell, indexPath);
}

static void hook_didEndDisplaying(id self, SEL _cmd, UITableView *tableView, UITableViewCell *cell, NSIndexPath *indexPath) {
    if (SG_CAN_FILTER(self, tableView) && orig_didEndDisplaying && SGIsDisplayedSpace(self, tableView, indexPath)) {
        NSIndexPath *native = SGNativeIndexPath(self, tableView, indexPath);
        ((void (*)(id, SEL, id, id, id))orig_didEndDisplaying)(self, _cmd, tableView, cell, native);
        return;
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
    } else {
        WPLog(@"SG", @"[SgHook] MainFrameTableView not found, header will stick");
    }

    WPLog(@"SG", @"[SgHook] installed on NewMainFrameViewController");
}

@end
