#import "SessionGroupsHook.h"
#import "SessionGroupsConfig.h"
#import "SessionGroupsTab.h"
#import "SessionGroupsStripView.h"
#import "../../Core/LogManager.h"
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
//  - 头部接管:           Misc_part19.c:4618-4655 + wcrGrouping_.c:5133-5224；高度 44（Misc_part19.c:5673-5679）
//  - 滑动手势:           FUN__part13.c:16571-16853（dir 取反/循环/分母 max(W*0.35,100)/阈值 50·12+450·800）
//  - 触感映射:           Misc_part4.c:1755-1784（1→Soft(3) 2→Medium(1) 3→Heavy(2)）
//  - 记忆选中:           homeTelegramGroupingSelectedTabId（Misc_part21.c:41181；RememberSelection 缺省开 41215）
// ─────────────────────────────────────────────────────────────

static NSString * const kSGSelectedTabKey = @"mio_sg_selected_tab_id";
// 关联对象键用自指指针（objc_*AssociatedObject 要求 const void *，不能用 NSString）
static const void *kSGAssocSnapshot = &kSGAssocSnapshot;
static const void *kSGAssocStrip    = &kSGAssocStrip;
static const void *kSGAssocRefresh  = &kSGAssocRefresh;
static const void *kSGAssocPan      = &kSGAssocPan;

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

static BOOL sInstalled = NO;
static NSHashTable *sSeenVCs = nil; // weak，记录出现过的 NMFVC

static void SGSelectTabIndex(id vc, NSInteger idx, CGFloat velocity, BOOL animated);
static BOOL SGIsMainFrameVC(id vc);
static UITableView *SGMainTableView(id vc);
static BOOL SGActive(id vc);

// 手势落点（不给微信类 addMethod，用独立 sink 对象）
@interface SGHomeGestureSink : NSObject
- (void)sgHandlePan:(UIPanGestureRecognizer *)pan;
@end
static SGHomeGestureSink *sGestureSink = nil;

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

// session:matchesTab: kind0/kind1 路径（Misc_part6.c:8596-8790）；scope 由调用方预算传入
static BOOL SGMatchesTab(id session, NSString *username, NSUInteger scope, SessionGroupsTab *tab, SessionGroupsConfig *cfg) {
    if (tab.kind == 0) {
        if (cfg.sgFilterPinned && SGIsTopOf(session)) return NO;
        return YES;
    }
    if (tab.kind != 1) return NO;

    // 置顶过滤（homeTelegramGroupingFilterPinned，Misc_part6.c:8946-8958）
    if (cfg.sgFilterPinned && SGIsTopOf(session)) return NO;

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

// active（对应 wcrGrouping_active，wcrGrouping_.c:2586-2677，去云控保留本地开关）
static BOOL SGActive(id vc) {
    if (!SGIsMainFrameVC(vc)) return NO;
    return [SessionGroupsConfig shared].sgEnabled;
}

static SessionGroupsTab *SGSelectedTab(NSArray<SessionGroupsTab *> *tabs) {
    NSString *tid = [[NSUserDefaults standardUserDefaults] stringForKey:kSGSelectedTabKey];
    if (tid.length) {
        for (SessionGroupsTab *t in tabs) if ([t.tabId isEqualToString:tid]) return t;
    }
    return tabs.firstObject; // 缺省回 "all"（Misc_part6.c:4444-4462）
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
    [parts addObject:SGSelectedTab([SessionGroupsTab defaultTabs]).tabId];
    [parts addObject:cfg.sgFilterPinned ? @"p1" : @"p0"];
    [parts addObject:cfg.sgFilterDuplicate ? @"d1" : @"d0"];
    return [parts componentsJoinedByString:@"|"];
}

static SGHomeSnapshot *SGBuildSnapshot(id vc, UITableView *table) {
    if (!orig_logicGetSession || !orig_numberOfRows) return nil;

    SGHomeSnapshot *snap = [[SGHomeSnapshot alloc] init];
    SessionGroupsConfig *cfg = [SessionGroupsConfig shared];
    NSArray<SessionGroupsTab *> *tabs = [SessionGroupsTab defaultTabs];
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
    NSMutableSet *seenUser = [NSMutableSet set];
    NSMutableArray<NSMutableArray<NSNumber *> *> *hiddenPerTab = [NSMutableArray arrayWithCapacity:tabs.count];
    NSMutableArray<NSNumber *> *unreadPerTab = [NSMutableArray arrayWithCapacity:tabs.count];
    NSMutableArray<NSNumber *> *dotPerTab = [NSMutableArray arrayWithCapacity:tabs.count];
    for (NSUInteger t = 0; t < tabs.count; t++) {
        [hiddenPerTab addObject:[NSMutableArray array]];
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

            for (NSUInteger t = 0; t < tabs.count; t++) {
                SessionGroupsTab *tab = tabs[t];
                BOOL keep = SGMatchesTab(sess, username, scope, tab, cfg);
                if (cfg.sgFilterDuplicate && dup) keep = NO;
                if (!keep) {
                    [hiddenPerTab[t] addObject:@(r)];
                } else if (t > 0 && unread > 0) {
                    // 未读入桶：scope 1→私聊 2→群聊 其余→其他（snapshot friend/chatRoom/other 三桶语义）
                    NSUInteger bucket = (scope == 1) ? 1 : (scope == 2 ? 2 : 3);
                    if (bucket == t) {
                        // 折叠群不红点：红点标记会话不计入（Misc_part6.c:10508-10531）
                        if (!redDotFlag || !cfg.sgFoldGroupNoRedDot) {
                            unreadPerTab[t] = @([unreadPerTab[t] integerValue] + 1);
                        }
                    }
                }
            }
        }
        if (sessionRows > targetSessionRows) {
            targetSessionRows = sessionRows;
            targetSection = s;
        }
    }
    if (targetSection < 0) targetSection = 0;

    // 选中组的隐藏行
    SessionGroupsTab *sel = SGSelectedTab(tabs);
    NSUInteger selIdx = 0;
    for (NSUInteger t = 0; t < tabs.count; t++) if (tabs[t] == sel) { selIdx = t; break; }
    for (NSInteger s = 0; s < sections; s++) {
        [hidden addObject:[hiddenPerTab[selIdx] sortedArrayUsingSelector:@selector(compare:)]];
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
        objc_setAssociatedObject(vc, kSGAssocStrip, strip, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    // 全屏滑动手势挂主表（FUN__part13.c:16571-16853；挂载点 WCR 未逐行证实，取主 tableView）
    if ([SessionGroupsConfig shared].sgFullscreenSwipe && !objc_getAssociatedObject(vc, kSGAssocPan)) {
        UIPanGestureRecognizer *pan = [[UIPanGestureRecognizer alloc] initWithTarget:sGestureSink action:@selector(sgHandlePan:)];
        pan.cancelsTouchesInView = NO;
        [table addGestureRecognizer:pan];
        objc_setAssociatedObject(vc, kSGAssocPan, pan, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return strip;
}

static void SGReloadStrip(id vc, SGHomeSnapshot *snap) {
    SessionGroupsStripView *strip = objc_getAssociatedObject(vc, kSGAssocStrip);
    if (!strip) return;
    NSMutableArray *titles = [NSMutableArray array];
    for (SessionGroupsTab *t in snap.tabs) [titles addObject:t.title];
    [strip reloadTabTitles:[titles copy]];
    [strip updateBadges:snap.tabUnread redDots:snap.tabRedDot];
    SessionGroupsTab *sel = SGSelectedTab(snap.tabs);
    NSInteger idx = 0;
    for (NSUInteger t = 0; t < snap.tabs.count; t++) if (snap.tabs[t] == sel) { idx = (NSInteger)t; break; }
    if (strip.selectedIndex != idx) {
        [strip setSelectedIndex:idx velocity:0 animated:NO];
    }
}

#pragma mark - 切组

// FUN_007f320c 提交链：持久化 → 触感 → 失效快照 → 无动画 reloadData → 条动画（Misc.c:21326-21446）
static void SGSelectTabIndex(id vc, NSInteger idx, CGFloat velocity, BOOL animated) {
    if (!SGActive(vc)) return;
    UITableView *table = SGMainTableView(vc);
    if (!table) return;

    NSArray<SessionGroupsTab *> *tabs = [SessionGroupsTab defaultTabs];
    if (idx < 0 || idx >= (NSInteger)tabs.count) return;
    SessionGroupsTab *tab = tabs[idx];

    // 记忆选中组（homeTelegramGroupingSelectedTabId，Misc_part21.c:41181）
    [[NSUserDefaults standardUserDefaults] setObject:tab.tabId forKey:kSGSelectedTabKey];

    SessionGroupsConfig *cfg = [SessionGroupsConfig shared];
    // 切组触感（triggerHapticFeedbackWithIndex:，Misc_part4.c:1755-1784：1→Soft 2→Medium 3→Heavy）
    if (cfg.sgSwitchHaptic > 0 && @available(iOS 10.0, *)) {
        UIImpactFeedbackStyle style = UIImpactFeedbackStyleLight;   // index==1 → style 3(Soft)
        if (cfg.sgSwitchHaptic == 2) style = UIImpactFeedbackStyleMedium; // index==2 → style 1(Medium)
        else if (cfg.sgSwitchHaptic >= 3) style = UIImpactFeedbackStyleHeavy; // 其他 → Heavy(2)
        UIImpactFeedbackGenerator *gen = [[UIImpactFeedbackGenerator alloc] initWithStyle:style];
        [gen impactOccurred];
    }

    SGInvalidateSnapshot(vc);
    [UIView performWithoutAnimation:^{
        [table reloadData];
    }];

    SessionGroupsStripView *strip = objc_getAssociatedObject(vc, kSGAssocStrip);
    if (strip) {
        [strip setSelectedIndex:idx velocity:velocity animated:animated];
    }
    WPLog(@"SG", @"[SgHook] select tab %ld (%@)", (long)idx, tab.tabId);
}

#pragma mark - 滑动手势（FUN__part13.c:16571-16853）

@implementation SGHomeGestureSink
- (void)sgHandlePan:(UIPanGestureRecognizer *)pan {
    UITableView *table = (UITableView *)pan.view;
    if (![table isKindOfClass:UITableView.class]) return;
    // 经响应链找到持有该表的 NMFVC
    id vc = nil;
    UIResponder *r = table.nextResponder;
    while (r) {
        if (SGIsMainFrameVC(r)) { vc = r; break; }
        r = r.nextResponder;
    }
    if (!SGActive(vc)) return;
    SessionGroupsConfig *cfg = [SessionGroupsConfig shared];
    if (!cfg.sgFullscreenSwipe) return;

    SessionGroupsStripView *strip = objc_getAssociatedObject(vc, kSGAssocStrip);
    if (!strip || strip.tabCount < 2) return;

    CGPoint trans = [pan translationInView:table];
    CGFloat dx = trans.x;
    CGFloat vel = [pan velocityInView:table].x;

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

// 分组条 = 目标 section header 接管（Misc_part19.c:4618-4655 + wcrGrouping_.c:5133-5224）
static id hook_viewForHeader(id self, SEL _cmd, UITableView *tableView, NSInteger section) {
    if (SG_CAN_FILTER(self, tableView) && orig_viewForHeader) {
        @try {
            SGHomeSnapshot *snap = SGEnsureSnapshot(self, tableView);
            if (snap && section == snap.targetSection) {
                SessionGroupsStripView *strip = SGEnsureStrip(self, tableView);
                [strip setFrame:CGRectMake(0, 0, tableView.bounds.size.width, [SessionGroupsStripView preferredHeight])];
                UIView *container = [[UIView alloc] initWithFrame:CGRectMake(0, 0, tableView.bounds.size.width, [SessionGroupsStripView preferredHeight])];
                container.autoresizingMask = UIViewAutoresizingFlexibleWidth;
                container.backgroundColor = UIColor.clearColor;
                [container addSubview:strip];
                SGReloadStrip(self, snap);
                return container;
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
            if (snap && section == snap.targetSection) {
                return [SessionGroupsStripView preferredHeight]; // 44，Misc_part19.c:5673-5679
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

// 插入/删除：关动画透传 + 刷新（wcrGrouping_.c:4419-4616）
static void hook_insertSessionCell(id self, SEL _cmd, NSArray *indexes) {
    if (SGActive(self) && SGMainTableView(self) && orig_insertSessionCell) {
        [UIView performWithoutAnimation:^{
            ((void (*)(id, SEL, id))orig_insertSessionCell)(self, _cmd, indexes);
        }];
        SGScheduleRefresh(self);
        return;
    }
    if (orig_insertSessionCell) ((void (*)(id, SEL, id))orig_insertSessionCell)(self, _cmd, indexes);
}

static void hook_deleteSessionCell(id self, SEL _cmd, NSArray *indexes) {
    if (SGActive(self) && SGMainTableView(self) && orig_deleteSessionCell) {
        [UIView performWithoutAnimation:^{
            ((void (*)(id, SEL, id))orig_deleteSessionCell)(self, _cmd, indexes);
        }];
        SGScheduleRefresh(self);
        return;
    }
    if (orig_deleteSessionCell) ((void (*)(id, SEL, id))orig_deleteSessionCell)(self, _cmd, indexes);
}

// 只刷新不透传（WCR 同款：wcrGrouping_.c:4523-4539/4549-4578）
static void hook_insertRow(id self, SEL _cmd, long row) {
    if (SGActive(self)) {
        SGScheduleRefresh(self);
        return;
    }
    if (orig_insertRow) ((void (*)(id, SEL, long))orig_insertRow)(self, _cmd, row);
}

static void hook_deleteSessionCellAt(id self, SEL _cmd, id cellData, NSInteger section, NSString *username) {
    if (SGActive(self)) {
        SGScheduleRefresh(self);
        return;
    }
    if (orig_deleteSessionCellAt) ((void (*)(id, SEL, id, NSInteger, id))orig_deleteSessionCellAt)(self, _cmd, cellData, section, username);
}

#pragma mark - 安装

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

    WPLog(@"SG", @"[SgHook] installed on NewMainFrameViewController");
}

@end
