//
//  BBMergeModel.m
//  MioPlugin
//
//  分组判定规则（语义零漂移，DB 存储层邻接）：
//    两条有效消息满足以下全部条件 → 合并为同一组（shouldJoinDB）：
//      ① senderUser 相等：m_nsFromUsr；若其以 @chatroom 结尾则改用 m_nsRealChatUsr
//      ② 两者均为可合并类型（m_uiMessageType < 10000，系统/状态消息断组）
//      ③ 均非分隔消息（mmMode==1 时按类型查分隔开关）/ 新邀请消息
//      ④ |Δ(m_uiCreateTime)| ≤ 299s（BubbleBox isNeedInsertTimeNode 同窗：
//        窗内分钟粒度时间行只是显示细节不断组，超窗断组）
//
//  查表架构 · DB 单路径：
//    rebuild 一次性预计算 entries + localID→entry 索引；读侧（measure:/昵称判定/
//    渲染/昵称断供钩）按 wrap 的 localID 直接 O(1) 查索引，不依赖 vm 对象——
//    微信整批重建 vm 时索引不受影响，测量瞬间查表即得正确值，零竞速零闪回。
//    邻接判定全走微信存储层（GetMsg:LocalID: ±1 步进跳已删空洞，BubbleBox
//    findValidMsg 同构）；UI 数组仅提供屏上 lid 渲染集合（UI 数组邻接已废弃：
//    双路径语义漂移——UI 侧时间行一律断组 / DB 侧 299s 窗）。
//    【禁止复活预写层】vm 生命周期归微信管：进聊天/滚动整批重建 vm 并立刻
//    测量，预写标志随旧对象死亡 → 测量读 None → 原生闪回（89 号日志实证）。
//    重建触发点（事件驱动）：切会话/进聊天/新消息轮询确认追加/滚动限频
//    （100ms）/读侧 None-miss 限频保鲜（0.15s）/配置指纹变化；幂等守卫保证
//    重复触发退化为 O(1) 比对。rebuild 返回内容变化数，调用方仅在变化>0 时
//    做可见刷新。
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

// ============================================================
// MARK: - 存储层数据源（BubbleBox findValidMsg 对齐）
// ============================================================
// 滚动加载历史时 UI 数组有 ~1s 记账迟滞：索引 miss 时直查存储补邻接（±1
// 步进跳已删空洞，上限 15 步），结果缓存进索引——存储恒完整，无 None 窗口。
//
// 【铁律】mgr 实例只能在 AddMsg/AsyncOnAddMsg 钩捕获（self 即 mgr，MsgMergeHook
// 侧调用）：8.0.78 无 CMessageMgr 单例访问器，聊天 VC ivar 树 2 层内也无其实例。
// 捕获钩绝不能挂 GetMsg 查询簇：MSHook trampoline 无 unwind info，查询踩坏
// 消息抛异常展开到跳板帧必 terminate（2参/4参/CMessageDB 三种挂法均崩实证）；
// BubbleBox 查 DB 不死正因其查询栈无自家跳板。插件查询直调不被 hook 的 4 参版
// GetMsg:LocalID:hasError:needOriginContent:（邻接/深部历史均命中，字段齐全）。

static id g_dbMgr = nil;            // CMessageMgr 实例（进程级服务对象，捕获即常驻）
static NSString *g_dbTalker = nil;  // 当前会话 talker（rebuild 记录，clear 置空防串会话查库）
static SEL g_selGetMsg = NULL;      // GetMsg:LocalID:hasError:needOriginContent:（4 参版）

/// GetMsg（talker + localID → CMessageWrap；已删消息/越界返回 nil）。
/// 4 参版直调（不经任何 hook——查询栈零跳板，异常 unwind 全链 FDE 完整）。
/// needOriginContent:YES：邻接判定只需 sender/type/createTime，原始内容足够。
/// 群历史存在扩展数据损坏的 App 消息，查询内部（HandleMessage→ChangeForDisplay
/// →protobuf）解析它抛 ObjC 异常——@try 接住返回 nil（该 lid 当已删除，
/// dbFindValidMsg 步进下一跳）。
static id dbGetMsg(long long lid) {
    if (!g_dbMgr || !g_dbTalker || lid <= 0 || lid > 0xFFFFFFFFLL) return nil;
    if (!g_selGetMsg) g_selGetMsg = NSSelectorFromString(@"GetMsg:LocalID:hasError:needOriginContent:");
    id (*send)(id, SEL, id, unsigned int, BOOL *, BOOL) = (id (*)(id, SEL, id, unsigned int, BOOL *, BOOL))objc_msgSend;
    BOOL hasErr = NO;
    @try {
        return send(g_dbMgr, g_selGetMsg, g_dbTalker, (unsigned int)lid, &hasErr, YES);
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
        // DB 单路径：UI 数组仅提供屏上有序 lid 列表（渲染集合），邻接判定全部
        // 走存储层（与读侧 DB fill 同一套 shouldJoinDB 规则）——存储恒完整、
        // 步进跳已删空洞、无记账迟滞窗口，微信裁剪数组不影响逻辑邻接。
        // 屏上有序 lid 列表。切片合一（MioPlugin(82) 实证）：长文本消息被微信
        // 拆成同 localID 连续多节点，一条消息一个 entry，否则切片互相
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
                // UI 数组有而 DB 无（理论不可达）：负缓存防同一 localID 反复查库
                [self dbCacheEntry:nil lid:lid pos:MOMergePositionSingle];
                continue;
            }
            // 邻接 = findValidMsg 对齐（BubbleBox 002ffcdc）：±1 步进跳已删空洞
            id prevWrap = dbFindValidMsg(lid, -1);
            id nextWrap = dbFindValidMsg(lid, +1);
            BOOL joinPrev = (prevWrap != nil) && [[self class] shouldJoinDB:wrap wrapB:prevWrap];
            BOOL joinNext = (nextWrap != nil) && [[self class] shouldJoinDB:wrap wrapB:nextWrap];

            MOMergePosition pos;
            if (joinPrev && joinNext)      pos = MOMergePositionMiddle;
            else if (joinPrev)             pos = MOMergePositionLast;
            else if (joinNext)             pos = MOMergePositionFirst;
            else                           pos = MOMergePositionSingle;

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
// MARK: - 存储层邻接（BubbleBox 对齐）
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

- (BOOL)noteMessageManager:(id)mgr {
    // DB 查询路径（dbGetMsg 直调 4 参 GetMsg，查询栈零跳板）实证无罪——98 号
    // 日志"功能全灭"真凶是按类扫描补挂的递归环，已在 MsgMergeHook 删净。
    if (!mgr) return NO;
    // 快路径（每消息高频）：指针比较原子，现行 mgr 直接早退，零锁零计数开销
    if (mgr == (id)g_dbMgr) return NO;
    // 慢路径（仅首捕）双检查单飞：AddMsg/AsyncOnAddMsg 双线程同时首捕时，
    // 无锁「检查-赋值-retain」会双跑（多出的 retain 永久泄漏），锁内重查消灭
    @synchronized ([BBMergeModel class]) {
        if (mgr == (id)g_dbMgr) return NO;
#if !__has_feature(objc_arc)
        [g_dbMgr release];   // 进程级常驻服务对象实际不换人，配对释放仅为语义完备
        g_dbMgr = [mgr retain];
#endif
        WPLog(@"MsgMerge", @"[Model] DB source ready mgr=%@ (%@) (via AddMsg pipeline)",
              mgr, NSStringFromClass(object_getClass(mgr)));
        // 新捕获 = DB 查询能力从无到有：失效幂等守卫，调用方（Hook）据此调度
        // rebuild——冷启动首次进聊天的 entries=0 空结果由这次重算自愈
        [self invalidateRebuildGuard];
    }
    return YES;
}

- (void)invalidateRebuildGuard {
    _lastArray = nil;   // 裸指针 ivar（无所有权），置 nil 零成本
    _lastCount = 0;
}

// 新消息入库直写：AddMsg 管道回调同步判定（不等 UI 节点记账的 30ms 轮询）。
// BubbleBox 发出瞬间即正确的本质 = addNewMessage 钩点同步 merge: 写标志 +
// updateLayouts，微信建行首测时标志已就位。只写索引（自持、跨 vm 重建恒真），
// 并同步修正上一条 pos（新消息 join 后上一条 Last→Middle/Single→First）——
// 不修则上一条保持组尾原生行高迟一拍；可见刷新（标脏+kick vm）由调用方
// mergeImmediateRefresh 同步完成（BubbleBox 同款收尾）。
- (void)noteIncomingMsgLocalID:(long long)lid {
    // 契约：主线程同步调用（AddMsg 管道回调里直接执行，先于微信建行首测——
    // dispatch_async 会把直写排到首测之后，首测仍 miss → 原生帧固化，实证）。
    if (lid <= 0 || !g_dbMgr || !g_dbTalker) return;
    if (_index[@(lid)]) return;        // rebuild/fill 已覆盖，重复回调幂等
    id wrap = dbGetMsg(lid);
    if (!wrap) return;
    id prevWrap = dbFindValidMsg(lid, -1);
    BOOL joinPrev = (prevWrap != nil) && [[self class] shouldJoinDB:wrap wrapB:prevWrap];
    MOMergePosition pos = joinPrev ? MOMergePositionLast : MOMergePositionSingle;
    [self dbCacheEntry:wrap lid:lid pos:pos];
    // 上一条 pos 同步修正（BubbleBox merge: 语义）：新消息 join 后上一条有了
    // 后继——Last→Middle / Single→First。不修则上一条保持组尾原生行高直到
    // 30ms 轮询 rebuild，上一条与新行之间的间距迟一拍（「跳变」残余来源）。
    NSString *prevFix = @"-";
    if (joinPrev) {
        long long plid = localIDOf(prevWrap);
        BBMergeEntry *pe = plid > 0 ? _index[@(plid)] : nil;
        if (pe && pe.pos == MOMergePositionLast) {
            pe.pos = MOMergePositionMiddle; prevFix = @"L->M";
        } else if (pe && pe.pos == MOMergePositionSingle) {
            pe.pos = MOMergePositionFirst; prevFix = @"S->F";
        }
    }
    WPLog(@"MsgMerge", @"[Model] note lid=%lld pos=%ld prevFix=%@", lid, (long)pos, prevFix);
}

- (MOMergePosition)posForLocalID:(long long)lid {
    BBMergeEntry *e = lid > 0 ? _index[@(lid)] : nil;
    if (e) return e.pos;
    // 存储层兜底：数组记账迟滞窗口（~1s）内索引 miss → 直查存储补邻接
    //（BubbleBox isPrevSameUser/isNextSameUser 即此路线，无数组依赖 → 无 None 窗口）。
    // 存储不可用/未激活 = None。
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
    return pos;
}

// ============================================================
// MARK: - 时间行收起判定（isNeedInsertTimeNode 显示语义接管）
// ============================================================

// 微信按「显示分钟变化」插时间行（分钟粒度），同 299s 窗内会重复插行——
// 时间行收起判定 = !isNeedInsertTimeNode(prev, current)，判定式完全对照
// BubbleBox isNeedInsertTimeNode:current:（002fe49c 反编译一手）：
//   ③ current.isNewInviteesMsg → 不收起（其语义 = 强制插行）
//   ④ |Δm_uiCreateTime| ≤ 299 → 收起（其语义 = 不插行）；>299 → 不收起
//   prev/current 的类型、sender 均不感知（它也不查）——不加发明。
// 边界安全网（BubbleBox 序列构建中不存在的场景，渲染层方案的生存条件）：
//   找不到时间行位置/管辖消息/DB 前驱 → 显示（宁多勿错，不比原生差）。

- (BOOL)shouldCollapseTimeNode:(id)timeVM inNodes:(NSArray *)nodes {
    if (!timeVM || nodes.count == 0 || !g_dbMgr || !g_dbTalker) return NO;
    MsgMergeConfig *cfg = [MsgMergeConfig shared];
    if (!(cfg.mmEnable && !(cfg.mmOnlyRoom && ![g_dbTalker hasSuffix:@"@chatroom"]))) return NO;
    // 配置门对应关系：BubbleBox mergeMode==0 恒插行（不收起）；我们 mmEnable==0
    // 时本函数不被调用（mmPruneTimeNodes 调用侧已挡），恒显示，语义一致。

    // 定位时间行：node 数组元素是 wrapper 节点（有 viewModel 属性，wrapOfNode
    // 即为此设计），rowHeight override 收到的 self 是 vm 本身——必须遍历比对
    // wrapper.viewModel，indexOfObjectIdenticalTo 找 vm 身份恒 NSNotFound
    //（frida 探针实证：63 次调用全穿透基类 = 旧定位恒 NO）。
    NSUInteger tIdx = NSNotFound;
    for (NSUInteger i = 0; i < nodes.count; i++) {
        id node = nodes[i];
        if (node == timeVM || safeValue(node, @"viewModel") == timeVM) { tIdx = i; break; }
    }
    if (tIdx == NSNotFound) return NO;

    // current = 时间行之下首条有效消息（跳过连续时间行/空节点）
    long long lid = 0;
    long long ct = 0;
    for (NSUInteger i = tIdx + 1; i < nodes.count; i++) {
        id w = wrapOfNode(nodes[i]);
        if (!w || !isMergeableWrap(w)) continue;
        lid = localIDOf(w);
        ct = createTimeOf(w);
        // ③ 管辖消息是新邀请 → BubbleBox 强制插行 → 不收起
        if (isInviteesMsg(w)) return NO;
        break;
    }
    if (lid <= 0) return NO;

    // prev = DB 前驱（±1 步进跳已删空洞，= BubbleBox 序列中的相邻上一条）
    id prev = dbFindValidMsg(lid, -1);
    if (!prev) return NO;
    long long prevCt = createTimeOf(prev);
    if (prevCt <= 0 || ct <= 0) return NO;
    // ④ 时间窗：Δ≤299 → 收起（= BubbleBox 不插行）；>299 → 显示
    long long diff = ct - prevCt;
    if (diff < 0) diff = -diff;
    if (diff <= 299) {
        WPLog(@"MsgMerge", @"[Time] collapse lid=%lld Δ=%llds", lid, diff);
        return YES;
    }
    return NO;
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
