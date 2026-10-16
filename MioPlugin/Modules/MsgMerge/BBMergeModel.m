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
//  数据先行 · 增量索引 · DB 单路径：
//    对齐 BubbleBox——分组判定永远发生在微信建 vm/测量之前。索引覆盖域 =
//    屏上 lid 渲染集合（refreshIndex 增量补建，已覆盖 O(1) 跳过）+ 历史方向
//    DB 预扩（extendHistoricalFromMinLid：屏上最小 lid 向 −1 预建 ~32 条，
//    滚动加载的批次插入数组前 entries 已就位）；读侧（measure:/昵称判定/
//    渲染/昵称断供钩）按 wrap 的 localID 直接 O(1) 查索引，不依赖 vm 对象——
//    微信整批重建 vm 时索引不受影响，测量瞬间查表即得正确值，零竞速零闪回。
//    邻接判定全走微信存储层（GetMsg:LocalID: ±1 步进跳已删空洞，BubbleBox
//    findValidMsg 同构）；UI 数组仅提供 lid 种子，不参与邻接判定。
//    【禁止复活预写层】vm 生命周期归微信管：进聊天/滚动整批重建 vm 并立刻
//    测量，预写标志随旧对象死亡 → 测量读 None → 原生闪回（89 号日志实证）。
//    刷新语义（BubbleBox scheduleUpdateNodes:scroll: 精髓）：refreshIndex 返回
//    的 changed 只统计「屏上已渲染 lid 的 pos 实变」；新 lid 进索引不计——
//    微信建行首测查表即真，无需事后刷新，滚动场景 changed 恒 0，永不跳动。
//    时间行零干预（BubbleBox 同款：全链无 ChatTime 引用）。
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
static NSString *g_dbTalker = nil;  // 当前会话 talker（refreshIndex 记录，clear 置空防串会话查库）
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
    NSArray *_lastArray;      // 上次刷新的数组引用（指针身份失效检测）
    NSUInteger _lastCount;
    NSString *_lastChatName;
    BOOL _fpEnable, _fpOnlyRoom, _fpSepMedia, _fpSepEmoticon;
    NSInteger _fpMode;
    long long _coveredMinLid; // 历史预扩已覆盖的最小 lid（0=未预扩，防重复步进）
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
// MARK: - 索引增量刷新（仅事件触发点调用，无查询期刷新）
// ============================================================

/// 建单条 entry（屏上 fill / 历史预扩 / 读侧兜底三路共用）：
/// wrap 入库 + DB 双向邻接判定 → pos 写索引。
/// 已覆盖 O(1) 返回；DB 未就绪（g_dbMgr/g_dbTalker 缺）不写任何缓存直接返回
/// None——防冷启动负缓存锁死 DB 捕获后的自愈重算（DB 未就绪时零缓存空转，
/// DB 捕获后 invalidateRebuildGuard 重算即自愈）；wrap=nil 且 DB 就绪 → 空洞负缓存 None。
- (MOMergePosition)fillEntryForLid:(long long)lid wrap:(id)wrap {
    if (lid <= 0) return MOMergePositionNone;
    BBMergeEntry *e = _index[@(lid)];
    if (e) return e.pos;
    if (!g_dbMgr || !g_dbTalker) return MOMergePositionNone;
    if (!wrap) wrap = dbGetMsg(lid);
    if (!wrap) {
        [self dbCacheEntry:nil lid:lid pos:MOMergePositionNone];
        return MOMergePositionNone;
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

    [self dbCacheEntry:wrap lid:lid pos:pos];
    return pos;
}

/// 历史方向预扩（数据先行核心）：从 minLid-1 向 −1 步进预建最多 32 条有效
/// entry，连续 15 个已删空洞即停（findValidMsg 语义：整段空洞 = 邻接链断）。
/// 目标区间已被覆盖（minLid-32 ≥ _coveredMinLid）时 O(1) 跳过——滚动钩 100ms
/// 限频下重复触发的常态路径。
- (NSInteger)extendHistoricalFromMinLid:(long long)minLid {
    if (minLid <= 1 || !g_dbMgr || !g_dbTalker) return 0;
    static const int kMaxBuild = 32;
    static const int kMaxHole = 15;
    if (_coveredMinLid > 0 && minLid - kMaxBuild >= _coveredMinLid) return 0;
    NSInteger built = 0;
    int holes = 0;
    long long lid = minLid - 1;
    while (built < kMaxBuild && holes < kMaxHole && lid >= 1) {
        id w = dbGetMsg(lid);
        if (!w) {
            holes++;
        } else {
            holes = 0;
            built++;
            [self fillEntryForLid:lid wrap:w];
        }
        lid--;
    }
    if (_coveredMinLid <= 0 || lid + 1 < _coveredMinLid) _coveredMinLid = lid + 1;
    return built;
}

- (NSUInteger)refreshIndexWithNodeArray:(NSArray *)nodeArray
                               chatName:(NSString *)chatName {
    MsgMergeConfig *cfg = [MsgMergeConfig shared];
    // talker 随刷新记录（DB 邻接查询用；clear 已置空，防切会话窗口期串库查询）
    if (chatName.length > 0 && ![chatName isEqualToString:g_dbTalker]) {
#if !__has_feature(objc_arc)
        [g_dbTalker release];
#endif
        g_dbTalker = [chatName copy];
    }
    // 幂等守卫（防刷新风暴）：同输入（数组指针/count/会话名/配置指纹）直接
    // 跳过。增量本体天然幂等（已覆盖 lid O(1) 跳过），守卫只省掉 lid 扫描的
    // KVC 成本。失效检测在查询高频路径上，若调用方混用多个数据源引用会退化
    // 为每次全扫，幂等后失配重复触发退化为 O(1) 比对。
    if (nodeArray == _lastArray && nodeArray.count == _lastCount
        && (chatName == _lastChatName || [chatName isEqualToString:_lastChatName])
        && ![self configFingerprintChanged]) {
        return 0;
    }
    // changed 基准：屏上 lid 的旧 pos 快照（须在指纹失效清索引之前取——指纹
    // 变化时全量重建，旧 pos 全部参与对比，翻转全计 changed）
    NSMutableArray<NSNumber *> *lids = [NSMutableArray array];
    for (id node in nodeArray) {
        id w = wrapOfNode(node);
        if (!w || !isMergeableWrap(w)) continue;            // 时间行/系统消息无 entry
        if ([[self class] isSeparatorMessage:w]) continue;  // 分隔消息无 entry
        long long lid = localIDOf(w);
        if (lid <= 0) continue;
        if (lids.count && [lids lastObject].longLongValue == lid) continue;  // 切片合一
        [lids addObject:@(lid)];
    }
    NSMutableDictionary<NSNumber *, NSNumber *> *oldPos = [NSMutableDictionary dictionaryWithCapacity:_index.count];
    for (NSNumber *lidN in lids) {
        BBMergeEntry *e = _index[lidN];
        if (e) oldPos[lidN] = @(e.pos);
    }
    // 配置指纹变化 → 全量失效（pos 规则已变，旧 entry 不可复用）
    if ([self configFingerprintChanged]) {
        _index = [NSMutableDictionary dictionary];
        _coveredMinLid = 0;
    }
    // 记录刷新身份（空结果同样记录，防同输入反复扫描）
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

    NSInteger filled = 0, extended = 0;
    BOOL active = cfg.mmEnable
               && !(cfg.mmOnlyRoom && ![chatName hasSuffix:@"@chatroom"])
               && nodeArray.count > 0;
    if (active) {
        // ① 屏上增量 fill：无 entry 的 lid 从存储层补建（DB 未就绪时零缓存空转，
        //    DB 捕获后 invalidateRebuildGuard 重算自愈）
        for (NSNumber *lidN in lids) {
            if (_index[lidN]) continue;
            [self fillEntryForLid:lidN.longLongValue wrap:nil];
            if (_index[lidN]) filled++;
        }
        // ② 历史方向预扩：屏上最小 lid 向 −1 预建（滚动批次插入前索引已就位）
        extended = [self extendHistoricalFromMinLid:lids.count ? lids.firstObject.longLongValue : 0];
    }

    // changed 只统计「屏上已渲染 lid 的 pos 实变」（None→有值 或 值翻转）：
    // 新 lid 进索引不计——微信建行首测查表即真（数据先行），事后刷新只会造成
    // 滚动/新消息场景的行高突变跳动（BubbleBox scroll 分支消灭的正是它）。
    __block NSUInteger changed = 0;
    for (NSNumber *lidN in lids) {
        BBMergeEntry *ne = _index[lidN];
        if (!ne || ne.pos == MOMergePositionNone) continue;
        NSNumber *old = oldPos[lidN];
        if (!old || [old unsignedIntegerValue] != (NSUInteger)ne.pos) changed++;
    }
    WPLog(@"MsgMerge", @"[Model] refresh chat=%@ nodes=%lu entries=%lu filled=%ld extended=%ld changed=%lu",
          chatName ?: @"?", (unsigned long)nodeArray.count, (unsigned long)_index.count,
          (long)filled, (long)extended, (unsigned long)changed);
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
    // 慢路径（仅首捕）双检查单飞：AddMsg/AsyncOnAddMsg 双线程同时首捕时防止
    // 双跑。5151f01e 教训：此处加 release/retain「配对释放」会拨动 mgr 引用
    // 计数（微信侧对 mgr 有 autorelease 波动），快路径比较失效 → 每条消息
    // 重捕获+失效守卫 → rebuild 永远处于中间态 → entries 恒空合并全灭
    // （探针实证 ret=1 恒真、rebuild changed=17 entries=0）。微信常驻服务
    // 对象进程级不换人，纯指针赋值即正确持有语义（40da0a8a 四轮验证）。
    @synchronized ([BBMergeModel class]) {
        if (mgr == (id)g_dbMgr) return NO;
        g_dbMgr = mgr;
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
// mergeDoReload 无条件刷新兜底完成（BubbleBox 同款收尾）。
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
    // 存储层兜底：索引未覆盖（预扩/refresh 未及）时直查存储补邻接（BubbleBox
    // isPrevSameUser/isNextSameUser 即此路线，无数组依赖），结果缓存进索引。
    // 未激活/存储不可用 = None。
    if (lid <= 0 || !g_dbMgr || !g_dbTalker) return MOMergePositionNone;
    MsgMergeConfig *cfg = [MsgMergeConfig shared];
    if (!(cfg.mmEnable && !(cfg.mmOnlyRoom && ![g_dbTalker hasSuffix:@"@chatroom"]))) {
        return MOMergePositionNone;
    }
    return [self fillEntryForLid:lid wrap:nil];
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
    // DB talker 一并置空：切会话窗口期（新刷新未跑）读侧不得拿旧会话查库
#if !__has_feature(objc_arc)
    [g_dbTalker release];
#endif
    g_dbTalker = nil;
    _coveredMinLid = 0;
    _index = [NSMutableDictionary dictionary];
}

@end
