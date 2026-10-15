//
//  BBMergeModel.m
//  MioPlugin
//
//  分组判定规则（语义零漂移，DB 存储层邻接）：
//    两条有效消息满足以下全部条件 → 合并为同一组（shouldJoinDB）：
//      ① senderUser 相等：m_nsFromUsr；若其以 @chatroom 结尾则改用 m_nsRealChatUsr
//      ② 两者均为可合并类型（m_uiMessageType < 10000，系统/状态消息断组）
//      ③ 均非分隔消息（mmMode==1 时按类型查分隔开关）/ 新邀请消息
//      ④ |Δ(m_uiCreateTime)| ≤ 299s（BubbleBox isNeedInsertTimeNode 同窗，
//        91 号日志实证：超窗断组，窗内分钟粒度时间行只是显示细节不断组）
//
//  查表架构 v6 · DB 单路径（预写层废弃见 BBMergeModel.h 头注释；UI 数组邻接
//  路径废弃，双路径语义漂移实证：UI 侧时间行一律断组 / DB 侧 299s 窗）：
//    rebuild 一次性预计算 entries + localID→entry 索引；读侧（measure:/昵称判定/
//    渲染/昵称断供钩）按 wrap 的 localID 直接 O(1) 查索引，不依赖 vm 对象——
//    微信整批重建 vm 时索引不受影响，测量瞬间查表即得正确值，零竞速零闪回。
//    重建触发点：切会话/进聊天/新消息轮询确认追加/滚动限频（100ms）/读侧
//    None-miss 限频保鲜（0.5s）/配置指纹变化；幂等守卫（同数组/同会话/同指纹）
//    保证重复触发退化为 O(1) 比对。rebuild 返回内容变化数（新增/变化/移除），
//    调用方仅在变化>0 时做可见刷新（表内容变化场景，不再有 vm 重建刷新需求）。
//
//  长文本切片合一（MioPlugin(82) 实证）：一条消息（同 localID 连续多节点）
//  仅一个 entry，lid 列表构建时去重；切片所有 vm 查表同 pos。
//

#import "BBMergeModel.h"
#import "MsgMergeConfig.h"
#import "../../Core/LogManager.h"
#import <objc/message.h>

// ============================================================
// MARK: - 工具函数（自 MsgMergeEngine 原样移植）
// ============================================================

/// 安全读取对象字段（KVC 自动装箱基本类型）
static id safeValue(id obj, NSString *key) {
    if (!obj) return nil;
    @try {
        return [obj valueForKey:key];
    } @catch (NSException *e) {
        return nil;
    }
}

/// 发送者身份归一化：m_nsFromUsr；群聊（@chatroom 结尾）改用 m_nsRealChatUsr
static NSString *senderIdentity(id wrap) {
    NSString *fromUsr = safeValue(wrap, @"m_nsFromUsr");
    if (![fromUsr isKindOfClass:[NSString class]] || fromUsr.length == 0) return nil;
    if ([fromUsr hasSuffix:@"@chatroom"]) {
        NSString *real = safeValue(wrap, @"m_nsRealChatUsr");
        if ([real isKindOfClass:[NSString class]] && real.length > 0) return real;
    }
    return fromUsr;
}

/// 是否可合并类型：排除系统/状态消息（m_uiMessageType >= 10000）
static BOOL isMergeableWrap(id wrap) {
    if (!wrap) return NO;
    id typeVal = safeValue(wrap, @"m_uiMessageType");
    if (![typeVal respondsToSelector:@selector(longLongValue)]) return NO;
    return [typeVal longLongValue] < 10000;
}

/// 消息 LocalID
static long long localIDOf(id wrap) {
    id v = safeValue(wrap, @"m_uiMesLocalID");
    if (![v respondsToSelector:@selector(longLongValue)]) return 0;
    return [v longLongValue];
}

/// 消息创建时间（秒级 unix；合并 299s 时间窗用）
static long long createTimeOf(id wrap) {
    id v = safeValue(wrap, @"m_uiCreateTime");
    if (![v respondsToSelector:@selector(longLongValue)]) return 0;
    return [v longLongValue];
}

/// 是否新邀请入群消息（状态转换消息，强制断组）
static BOOL isInviteesMsg(id wrap) {
    id inv = safeValue(wrap, @"isNewInviteesMsg");
    return [inv respondsToSelector:@selector(boolValue)] && [inv boolValue];
}

/// 从数据源节点提取 wrap（viewModel.messageWrap；ChatTimeViewModel 等时间节点无 wrap）
static id wrapOfNode(id node) {
    if (!node) return nil;
    id vm = safeValue(node, @"viewModel");
    if (vm) {
        id w = safeValue(vm, @"messageWrap");
        if (w) return w;
    }
    return safeValue(node, @"messageWrap");
}

// ------------------------------------------------------------
// 查表架构（v5）
// ------------------------------------------------------------

// ============================================================
// MARK: - 第二数据源：微信消息存储（BubbleBox findValidMsg 对齐）
// ============================================================
// 滚动加载历史时 m_arrMessageNodeData 有 ~1s 记账迟滞：测量先于节点到账 →
// 索引 miss → None 窗口 → 原生闪回。BubbleBox 的邻接判定不依赖 UI 数组：
// findValidMsg:startId:direction:（反编译 002ffcdc）从当前消息 localID ±1 步进
// 直查存储（GetMsg:LocalID:），上限 15 步跳过已删除消息空洞——这正是它无闪回
// 窗口的本质。本节照抄该路线作读侧兜底：索引 miss 时查存储补邻接，缓存进索引。
//
// mgr 实例捕获（frida 探针实证定论）：8.0.78 无 CMessageMgr 单例访问器，聊天
// VC ivar 树 2 层内也无其实例（ivar 自发现判死）；实证唯一稳定捕获点 = 微信
// 自己调 GetMsg:LocalID:（每次进聊天必调），MsgMergeHook 挂钩首调即记录
// receiver（noteMessageManager:）。API 可用性已实证：GetLastMsgLocalID: 取会话
// maxLID、GetMsg:LocalID: 邻接/深部历史（lid=5）均命中，字段齐全。

static id g_dbMgr = nil;            // CMessageMgr 实例（进程级服务对象，捕获即常驻）
static NSString *g_dbTalker = nil;  // 当前会话 talker（rebuild 记录，clear 置空防串会话查库）
static SEL g_selGetMsg = NULL;      // GetMsg:LocalID:

/// GetMsg:LocalID:（talker + localID → CMessageWrap；已删消息/越界返回 nil）
static id dbGetMsg(long long lid) {
    if (!g_dbMgr || !g_dbTalker || lid <= 0 || lid > 0xFFFFFFFFLL) return nil;
    if (!g_selGetMsg) g_selGetMsg = NSSelectorFromString(@"GetMsg:LocalID:");
    id (*send)(id, SEL, id, unsigned int) = (id (*)(id, SEL, id, unsigned int))objc_msgSend;
    @try {
        return send(g_dbMgr, g_selGetMsg, g_dbTalker, (unsigned int)lid);
    } @catch (NSException *e) {
        return nil;
    }
}

/// BubbleBox findValidMsg 语义（002ffcdc）：±1 步进，跳过已删除消息空洞（GetMsg
/// 为 nil 的 localID），上限 15 步，返回首个存在的消息 wrap
static id dbFindValidMsg(long long startLID, int direction) {
    for (int step = 1; step <= 15; step++) {
        long long lid = startLID + (long long)direction * step;
        if (lid < 1) return nil;
        id w = dbGetMsg(lid);
        if (w) return w;
    }
    return nil;
}

@implementation BBMergeModel {
    NSMutableDictionary<NSNumber *, BBMergeEntry *> *_index;   // localID → entry
    NSArray *_lastArray;      // 上次重建的数组引用（指针身份失效检测）
    NSUInteger _lastCount;
    NSString *_lastChatName;
    BOOL _fpEnable, _fpOnlyRoom, _fpSepMedia, _fpSepEmoticon;
    NSInteger _fpMode;
}

+ (instancetype)shared {
    static BBMergeModel *i;
    static dispatch_once_t t;
    dispatch_once(&t, ^{ i = [[BBMergeModel alloc] init]; });
    return i;
}

// ============================================================
// MARK: - 分组规则（自 MsgMergeEngine 原样移植）
// ============================================================

/// 该消息是否充当分隔符打断合并链（仅 mmMode==1 手动配置时按类型查开关，其余恒 NO）
/// 原版读侧实证只读 emoticon/media 两个键；system/time 属节点结构层（时间节点无 wrap
/// 天然断组、系统消息 >=10000 不可合并），不在此查表。
+ (BOOL)isSeparatorMessage:(id)wrap {
    if (!wrap) return NO;
    MsgMergeConfig *cfg = [MsgMergeConfig shared];
    if (cfg.mmMode != 1) return NO;
    id typeVal = safeValue(wrap, @"m_uiMessageType");
    if (![typeVal respondsToSelector:@selector(longLongValue)]) return NO;
    long long type = [typeVal longLongValue];
    if (type == 47) return cfg.mmSepEmoticon;           // 动画表情
    // 媒体消息：图片3/语音34/视频43/短视频62/App消息49（探针 #30 实证漏映射图片导致"打断无效果"）
    if (type == 3 || type == 34 || type == 43 || type == 49 || type == 62) return cfg.mmSepMedia;
    if (type >= 10000) return YES;                      // 系统/状态消息始终断组
    return NO;                                          // 文本等默认参与合并
}

/// 合并判定唯一入口（DB 单路径）：身份相等 + 均可合并 + 均非分隔符/新邀请
/// + 299s 时间窗。存储层无时间节点，时间窗按 BubbleBox isNeedInsertTimeNode:
/// current: 反编译实证（002fe49c）：|Δm_uiCreateTime| > 299s 断组；
/// isNewInviteesMsg 双向强制断组（type 可能 <10000 能穿过类型闸）。
+ (BOOL)shouldJoinDB:(id)wrapA wrapB:(id)wrapB {
    if (!wrapA || !wrapB) return NO;
    if (!isMergeableWrap(wrapA) || !isMergeableWrap(wrapB)) return NO;
    if ([self isSeparatorMessage:wrapA] || [self isSeparatorMessage:wrapB]) return NO;
    if (isInviteesMsg(wrapA) || isInviteesMsg(wrapB)) return NO;

    NSString *idA = senderIdentity(wrapA);
    NSString *idB = senderIdentity(wrapB);
    if (idA.length == 0 || idB.length == 0 || ![idA isEqualToString:idB]) return NO;

    long long ta = createTimeOf(wrapA);
    long long tb = createTimeOf(wrapB);
    if (ta <= 0 || tb <= 0) return NO;
    long long diff = ta > tb ? ta - tb : tb - ta;
    return diff <= 299;
}

// ============================================================
// MARK: - 重建（仅事件触发点调用，无查询期重建）
// ============================================================

- (NSUInteger)rebuildFromNodeArray:(NSArray *)nodeArray
                          chatName:(NSString *)chatName {
    MsgMergeConfig *cfg = [MsgMergeConfig shared];
    // talker 随 rebuild 记录（DB 邻接查询用；clear 已置空，防切会话窗口期串库查询）
    if (chatName.length > 0 && ![chatName isEqualToString:g_dbTalker]) {
#if !__has_feature(objc_arc)
        [g_dbTalker release];
#endif
        g_dbTalker = [chatName copy];
    }
    // 幂等守卫（防 rebuild 风暴）：同输入（数组指针/count/会话名/配置指纹）直接
    // 跳过。失效检测在查询高频路径上，若调用方混用多个数据源引用（如 KVC 实时读
    // 与 g_currentNodeArray 缓存身份不一致）会退化为每次查询全量重建（O(n) KVC），
    // 高频测量下即主线程卡死；幂等后失配重复触发退化为 O(1) 比对。
    if (nodeArray == _lastArray && nodeArray.count == _lastCount
        && (chatName == _lastChatName || [chatName isEqualToString:_lastChatName])
        && ![self configFingerprintChanged]) {
        return 0;
    }
    // 旧代次 pos 快照（内容变化数计算基准：新增/变化/移除）
    NSMutableDictionary<NSNumber *, NSNumber *> *oldPos = [NSMutableDictionary dictionaryWithCapacity:_index.count];
    [_index enumerateKeysAndObjectsUsingBlock:^(NSNumber *lid, BBMergeEntry *e, BOOL *stop) {
        oldPos[lid] = @(e.pos);
    }];
    // 记录重建身份（空结果同样记录，防同输入反复重建）
    _lastArray = nodeArray;
    _lastCount = nodeArray.count;
#if __has_feature(objc_arc)
    _lastChatName = chatName;
#else
    [_lastChatName release];
    _lastChatName = [chatName copy];
#endif
    _fpEnable = cfg.mmEnable;
    _fpOnlyRoom = cfg.mmOnlyRoom;
    _fpMode = cfg.mmMode;
    _fpSepMedia = cfg.mmSepMedia;
    _fpSepEmoticon = cfg.mmSepEmoticon;

    NSMutableArray<BBMergeEntry *> *tmp = [NSMutableArray array];
    _index = [NSMutableDictionary dictionary];

    // 前置条件不满足 → 空 entries（所有查询落 None，钩子不干预）
    BOOL active = cfg.mmEnable
               && !(cfg.mmOnlyRoom && ![chatName hasSuffix:@"@chatroom"])
               && nodeArray.count > 0;

    if (active) {
        // DB 单路径（BubbleBox 同构；UI 数组邻接路径已废弃——双路径语义漂移
        // 实证：UI 侧一律断组 / DB 侧 299s 窗，表情被分钟粒度时间行锯成组头）。
        // UI 数组仅提供屏上有序 lid 列表（渲染集合），邻接判定全部走存储层，
        // 与读侧 DB fill 同一套规则（shouldJoinDB），存储恒完整、步进跳已删
        // 空洞、无记账迟滞窗口，微信裁剪数组不影响逻辑邻接。
        //
        // mgr 未捕获时不建 entries（读侧全 None 原生渲染）：nodeArray 非空
        // 蕴含微信已调 GetMsg 加载消息（捕获必然完成），此分支仅理论保险；
        // 读侧 None-miss 保鲜 rebuild 兜自愈。
        if (!g_dbMgr || !g_dbTalker) {
            WPLog(@"MsgMerge", @"[Model] DB not ready, rebuild skipped chat=%@", chatName);
        } else {
            // 屏上有序 lid 列表。切片合一（MioPlugin(82) 实证）：长文本消息被
            // 微信拆成同 localID 连续多节点，一条消息一个 entry，否则切片互相
            // "自己 join 自己"伪造邻接、末片 entry 覆盖索引。
            NSMutableArray<NSNumber *> *lids = [NSMutableArray array];
            for (id node in nodeArray) {
                id w = wrapOfNode(node);
                if (!w || !isMergeableWrap(w)) continue;            // 时间行/系统消息无 entry
                if ([[self class] isSeparatorMessage:w]) continue;  // 分隔消息无 entry
                long long lid = localIDOf(w);
                if (lid <= 0) continue;
                if (lids.count && [lids lastObject].longLongValue == lid) continue;
                [lids addObject:@(lid)];
            }

            for (NSNumber *lidN in lids) {
                long long lid = lidN.longLongValue;
                id wrap = dbGetMsg(lid);
                if (!wrap) {
                    // UI 数组有而 DB 无：理论不可达（数组数据源自同一存储），
                    // 负缓存防同一 localID 反复查库
                    WPLog(@"MsgMerge", @"[Model][Diag] rDBmiss lid=%lld", lid);
                    [self dbCacheEntry:nil lid:lid pos:MOMergePositionSingle];
                    continue;
                }
                // 邻接 = findValidMsg 对齐（BubbleBox 002ffcdc）：±1 步进跳已删
                // 空洞，上限 15 步
                id prevWrap = dbFindValidMsg(lid, -1);
                id nextWrap = dbFindValidMsg(lid, +1);
                BOOL joinPrev = (prevWrap != nil) && [[self class] shouldJoinDB:wrap wrapB:prevWrap];
                BOOL joinNext = (nextWrap != nil) && [[self class] shouldJoinDB:wrap wrapB:nextWrap];

                MOMergePosition pos;
                if (joinPrev && joinNext)      pos = MOMergePositionMiddle;
                else if (joinPrev)             pos = MOMergePositionLast;
                else if (joinNext)             pos = MOMergePositionFirst;
                else                           pos = MOMergePositionSingle;

                WPLog(@"MsgMerge", @"[Model][Diag] r lid=%lld p=%lld(%d) n=%lld(%d) pos=%ld ct=%lld from=%@",
                      lid,
                      prevWrap ? localIDOf(prevWrap) : 0, joinPrev,
                      nextWrap ? localIDOf(nextWrap) : 0, joinNext,
                      (long)pos, createTimeOf(wrap), senderIdentity(wrap));

                BBMergeEntry *e = [[BBMergeEntry alloc] init];
                e.wrap = wrap;
                e.senderUser = senderIdentity(wrap);
                e.localID = lid;
                e.type = [safeValue(wrap, @"m_uiMessageType") longLongValue];
                e.pos = pos;
                [tmp addObject:e];
                _index[@(lid)] = e;
#if !__has_feature(objc_arc)
                [e release];
#endif
            }
        }
    }

    self.entries = tmp;
    // 内容变化数 = 新增 lid + pos 变化（调用方仅在 >0 时可见刷新）。
    // 移除不计数：微信会裁剪渲染数组（90 号日志实证 nodes 24↔39 震荡），被裁
    // 都是屏外条目，行高无变化；移除导致某条 pos 变化已由新索引 pos 对比覆盖。
    __block NSUInteger changed = 0;
    [_index enumerateKeysAndObjectsUsingBlock:^(NSNumber *lid, BBMergeEntry *e, BOOL *stop) {
        NSNumber *old = oldPos[lid];
        if (!old) { changed++; return; }
        if ([old unsignedIntegerValue] != (NSUInteger)e.pos) changed++;
    }];
    WPLog(@"MsgMerge", @"[Model] rebuild chat=%@ nodes=%lu entries=%lu active=%d changed=%lu",
          chatName ?: @"?", (unsigned long)nodeArray.count, (unsigned long)tmp.count, active,
          (unsigned long)changed);
    return changed;
}

- (BBMergeEntry *)entryForLocalID:(long long)lid {
    return lid > 0 ? _index[@(lid)] : nil;
}

// ============================================================
// MARK: - 第二数据源（存储层邻接，BubbleBox 对齐）
// ============================================================

/// DB 查询结果缓存进索引（负缓存 wrap=nil，防空洞 localID 反复查库）
- (void)dbCacheEntry:(id)wrap lid:(long long)lid pos:(MOMergePosition)pos {
    BBMergeEntry *e = [[BBMergeEntry alloc] init];
    e.wrap = wrap;
    e.senderUser = wrap ? senderIdentity(wrap) : nil;
    e.type = wrap ? [safeValue(wrap, @"m_uiMessageType") longLongValue] : 0;
    e.localID = lid;
    e.pos = pos;
    _index[@(lid)] = e;
#if !__has_feature(objc_arc)
    [e release];
#endif
}

- (void)noteMessageManager:(id)mgr {
    if (!mgr || mgr == (id)g_dbMgr) return;
    g_dbMgr = mgr;
#if !__has_feature(objc_arc)
    [mgr retain];
#endif
    WPLog(@"MsgMerge", @"[Model] DB source ready mgr=%@ (%@)", mgr, NSStringFromClass(object_getClass(mgr)));
}

// 新消息入库直写：AsyncOnAddMsg 回调即刻判定（不等 UI 节点记账的 30ms 轮询）。
// BubbleBox 发出瞬间即正确的本质 = apply 从存储层即时算，微信建行（~30ms 后）
// 首测时标志已就位；我们 rebuild 输入依赖 nodeArray 恒晚于建行，此处补齐同款
// 时序。只写索引（自持、跨 vm 重建恒真），不做任何可见刷新——新消息自己是组
// 生长端点（Last/Single）行高本就原生，需要重排的是上一条（Last→Middle），
// 由随后轮询 rebuild 的 changed>0 → refreshFlaggedCells 覆盖。
- (void)noteIncomingMsgLocalID:(long long)lid {
    if (lid <= 0 || !g_dbMgr || !g_dbTalker) return;
    if (_index[@(lid)]) return;        // rebuild/fill 已覆盖，重复回调幂等
    id wrap = dbGetMsg(lid);
    if (!wrap) return;                 // DB 未就绪（罕见）——轮询 rebuild 兜底
    id prevWrap = dbFindValidMsg(lid, -1);
    BOOL joinPrev = (prevWrap != nil) && [[self class] shouldJoinDB:wrap wrapB:prevWrap];
    MOMergePosition pos = joinPrev ? MOMergePositionLast : MOMergePositionSingle;
    [self dbCacheEntry:wrap lid:lid pos:pos];
    WPLog(@"MsgMerge", @"[Model] note lid=%lld pos=%ld", lid, (long)pos);
}

- (MOMergePosition)posForLocalID:(long long)lid {
    BBMergeEntry *e = lid > 0 ? _index[@(lid)] : nil;
    if (e) return e.pos;
    // 第二数据源兜底：数组记账迟滞窗口（~1s）内索引 miss → 直查存储补邻接
    //（BubbleBox isPrevSameUser/isNextSameUser 即此路线，无数组依赖 → 无 None 窗口）。
    // 存储不可用/未激活 = None（v5 行为，不留死代码分支）。
    if (lid <= 0 || !g_dbMgr || !g_dbTalker) return MOMergePositionNone;
    MsgMergeConfig *cfg = [MsgMergeConfig shared];
    if (!(cfg.mmEnable && !(cfg.mmOnlyRoom && ![g_dbTalker hasSuffix:@"@chatroom"]))) {
        return MOMergePositionNone;
    }
    id wrap = dbGetMsg(lid);
    if (!wrap) {
        [self dbCacheEntry:nil lid:lid pos:MOMergePositionNone];
        return MOMergePositionNone;
    }
    id prev = dbFindValidMsg(lid, -1);
    id next = dbFindValidMsg(lid, +1);
    BOOL joinPrev = (prev != nil) && [[self class] shouldJoinDB:wrap wrapB:prev];
    BOOL joinNext = (next != nil) && [[self class] shouldJoinDB:wrap wrapB:next];
    MOMergePosition pos;
    if (joinPrev && joinNext)      pos = MOMergePositionMiddle;
    else if (joinPrev)             pos = MOMergePositionLast;
    else if (joinNext)             pos = MOMergePositionFirst;
    else                           pos = MOMergePositionSingle;
    [self dbCacheEntry:wrap lid:lid pos:pos];
    WPLog(@"MsgMerge", @"[Model] DB fill lid=%lld pos=%lu prev=%d next=%d",
          lid, (unsigned long)pos, prev != nil, next != nil);
    return pos;
}

// ============================================================
// MARK: - 配置指纹与清空
// ============================================================

/// 分组配置指纹变化检测（影响分组的开关才参与；渲染参数是钩子内读值）
- (BOOL)configFingerprintChanged {
    MsgMergeConfig *cfg = [MsgMergeConfig shared];
    return cfg.mmEnable != _fpEnable || cfg.mmOnlyRoom != _fpOnlyRoom
        || cfg.mmMode != _fpMode || cfg.mmSepMedia != _fpSepMedia
        || cfg.mmSepEmoticon != _fpSepEmoticon;
}

- (void)clear {
    _lastArray = nil;
    _lastCount = 0;
#if !__has_feature(objc_arc)
    [_lastChatName release];
#endif
    _lastChatName = nil;
    // DB talker 一并置空：切会话窗口期（新 rebuild 未跑）读侧不得拿旧会话查库
#if !__has_feature(objc_arc)
    [g_dbTalker release];
#endif
    g_dbTalker = nil;
    _index = [NSMutableDictionary dictionary];
    self.entries = @[];
}

@end
