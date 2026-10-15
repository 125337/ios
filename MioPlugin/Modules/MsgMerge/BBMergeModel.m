//
//  BBMergeModel.m
//  MioPlugin
//
//  分组判定规则自 MsgMergeEngine 原样移植（语义零漂移）：
//    相邻两条有效消息满足以下全部条件 → 合并为同一组：
//      ① senderUser 相等：m_nsFromUsr；若其以 @chatroom 结尾则改用 m_nsRealChatUsr
//      ② 两者均为可合并类型（m_uiMessageType < 10000，系统/状态消息断组）
//      ③ 均非分隔消息（mmMode==1 时按类型查分隔开关）
//    时间打断 = 渲染数组中 ChatTimeViewModel 无 wrap（NSNull 占位），天然断组；
//    邻居只看紧邻节点（跳过时间节点找"最近有效邻居"会跨时间行合并，实证判死）。
//
//  BubbleBox 同构预写层（本架构核心）：
//    rebuild 完成后 apply 阶段把分组位置（MOMergePosition）用关联对象写到
//    每个消息 viewModel 上（对齐 BubbleBox 把 b_isFirstMessage 等 objc_msgSend
//    直写到 viewModel 的模式）。measure:（测量层）/ 昵称判定 / 渲染 / 昵称断供钩子
//    一律 posFromVM O(1) 读标志，不引用节点数组、不查模型、不在读路径重建。
//    写标志与重建同函数同刻完成（rebuildAndApply），不存在「标志已变但测量
//    消费旧值」的窗口；rebuild 幂等守卫（同数组/同会话/同配置指纹跳过）+
//    apply 全量重写（vm 可能被微信重建，缺席 = None = 原生直通）。
//
//  重建+预写触发（事件驱动，唯一入口 rebuildAndApplyWithNodeArray）：
//    切会话 / 进聊天 / 新消息轮询确认追加 / 读侧 None-miss 限频保鲜（0.5s）。
//    配置指纹只含影响分组的开关（mmEnable/mmOnlyRoom/mmMode/mmSepMedia/
//    mmSepEmoticon），间距/偏移等渲染参数是钩子内读值，不参与指纹。
//
//  长文本切片 run 合并（MioPlugin(82) 实证）：一条消息（同 localID 连续多节点）
//  仅一个 entry，pos 取首片 prev 邻接 + 末片 next 邻接；切片所有 vm 写同一 pos。
//

#import "BBMergeModel.h"
#import "MsgMergeConfig.h"
#import "../../Core/LogManager.h"
#import <objc/runtime.h>

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
// 预写层（BubbleBox 同构）
// ------------------------------------------------------------

/// 分组位置关联对象 key（写在消息 viewModel 上，读侧 posFromVM 消费）
static void *kBBPosKey = &kBBPosKey;

/// 标志写入目标 = 读侧钩子里的 vm 本体（measure:/昵称判定钩的 self、
/// cellView.viewModel）。与 wrapOfNode 同构：节点带 viewModel 层时写 viewModel，
/// 节点本身是 viewModel（ChatTimeViewModel 等）时写节点自己。
static id flagTargetOfNode(id node) {
    if (!node) return nil;
    id vm = safeValue(node, @"viewModel");
    return vm ?: node;
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

/// 两条消息是否满足合并条件（身份相等 + 均可合并 + 均非分隔符）
+ (BOOL)shouldJoin:(id)wrapA wrapB:(id)wrapB {
    if (!isMergeableWrap(wrapA) || !isMergeableWrap(wrapB)) return NO;
    if ([self isSeparatorMessage:wrapA] || [self isSeparatorMessage:wrapB]) return NO;

    NSString *idA = senderIdentity(wrapA);
    NSString *idB = senderIdentity(wrapB);
    if (idA.length == 0 || idB.length == 0) return NO;
    return [idA isEqualToString:idB];
}

// ============================================================
// MARK: - 重建（仅 rebuildAndApplyWithNodeArray 内部调用，无查询期重建）
// ============================================================

- (void)rebuildWithNodeArray:(NSArray *)nodeArray
                    chatName:(NSString *)chatName {
    MsgMergeConfig *cfg = [MsgMergeConfig shared];
    // 幂等守卫（防 rebuild 风暴）：同输入（数组指针/count/会话名/配置指纹）直接
    // 跳过。失效检测在查询高频路径上，若调用方混用多个数据源引用（如 KVC 实时读
    // 与 g_currentNodeArray 缓存身份不一致）会退化为每次查询全量重建（O(n) KVC），
    // 高频测量下即主线程卡死；幂等后失配重复触发退化为 O(1) 比对。
    if (nodeArray == _lastArray && nodeArray.count == _lastCount
        && (chatName == _lastChatName || [chatName isEqualToString:_lastChatName])
        && ![self configFingerprintChanged]) {
        return;
    }
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
        // 节点数组 → wrap 数组（NSNull 占位时间节点等无 wrap 节点，天然断组）
        NSMutableArray *wraps = [NSMutableArray arrayWithCapacity:nodeArray.count];
        for (id node in nodeArray) {
            id w = wrapOfNode(node);
            [wraps addObject:(w ?: [NSNull null])];
        }

        // 切片 run 合并（MioPlugin(82) 实证）：长文本消息被微信拆成同 localID 的
        // 连续多节点（共享同一 wrap 对象）。逐节点建 entry 有两个毒点：
        //   ① 切片节点互相"自己 join 自己"（同 wrap → 同 sender → shouldJoin 恒
        //      YES）→ 伪造邻接；
        //   ② 后片 entry 覆盖 _index[lid] → 切片消息 pos 恒落在末片上。
        // 正确语义：一条消息一个 entry，pos = 首片的 prev 邻接 + 末片的 next 邻接。
        NSUInteger i = 0;
        while (i < wraps.count) {
            id wrap = wraps[i];
            if (wrap == [NSNull null]) { i++; continue; }
            if (!isMergeableWrap(wrap)) { i++; continue; }
            if ([[self class] isSeparatorMessage:wrap]) { i++; continue; }
            long long lid = localIDOf(wrap);
            if (lid <= 0) { i++; continue; }

            // 吞并同 lid 的连续切片节点（run 内不参与对外邻接）
            NSUInteger runEnd = i;
            while (runEnd + 1 < wraps.count) {
                id nw = wraps[runEnd + 1];
                if (nw == [NSNull null] || !isMergeableWrap(nw)) break;
                if (localIDOf(nw) != lid) break;
                runEnd++;
            }

            // 邻居 = run 外紧邻节点，紧邻 NSNull（时间行）即断组
            id prevWrap = nil;
            if (i > 0 && wraps[i - 1] != [NSNull null]) prevWrap = wraps[i - 1];
            id nextWrap = nil;
            if (runEnd + 1 < wraps.count && wraps[runEnd + 1] != [NSNull null]) {
                nextWrap = wraps[runEnd + 1];
            }

            BOOL joinPrev = (prevWrap != nil) && [[self class] shouldJoin:wrap wrapB:prevWrap];
            BOOL joinNext = (nextWrap != nil) && [[self class] shouldJoin:wrap wrapB:nextWrap];

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

            i = runEnd + 1;
        }
    }

    self.entries = tmp;
    WPLog(@"MsgMerge", @"[Model] rebuild chat=%@ nodes=%lu entries=%lu active=%d",
          chatName ?: @"?", (unsigned long)nodeArray.count, (unsigned long)tmp.count, active);
}

- (BBMergeEntry *)entryForLocalID:(long long)lid {
    return lid > 0 ? _index[@(lid)] : nil;
}

// ============================================================
// MARK: - 预写层（BubbleBox 同构）
// ============================================================

/// 分组配置指纹变化检测（影响分组的开关才参与；渲染参数是钩子内读值）
- (BOOL)configFingerprintChanged {
    MsgMergeConfig *cfg = [MsgMergeConfig shared];
    return cfg.mmEnable != _fpEnable || cfg.mmOnlyRoom != _fpOnlyRoom
        || cfg.mmMode != _fpMode || cfg.mmSepMedia != _fpSepMedia
        || cfg.mmSepEmoticon != _fpSepEmoticon;
}

/// apply 阶段：把 entries 的位置用关联对象写到节点数组每个 vm 上。
/// 全量重写（rebuild 幂等跳过时仍执行——vm 可能被微信整表重建，旧标志随对象
/// 消失，必须补写）；查不到 entry 的 vm 清标志（缺席 = None = 原生直通）。
/// 功能未激活（entries 空）时全清，等价于「关闭立即生效」。
- (void)applyToNodeArray:(NSArray *)nodeArray {
    NSUInteger written = 0;
    for (id node in nodeArray) {
        id vm = flagTargetOfNode(node);
        if (!vm) continue;
        id wrap = wrapOfNode(node);
        BBMergeEntry *e = wrap ? [self entryForLocalID:localIDOf(wrap)] : nil;
        if (e) {
            objc_setAssociatedObject(vm, kBBPosKey, @(e.pos),
                                     OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            written++;
        } else {
            objc_setAssociatedObject(vm, kBBPosKey, nil,
                                     OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
    }
    WPLog(@"MsgMerge", @"[Model] apply nodes=%lu written=%lu",
          (unsigned long)nodeArray.count, (unsigned long)written);
}

/// 事件驱动触发点的唯一入口：rebuild（幂等守卫）+ apply（全量重写）同刻完成
- (void)rebuildAndApplyWithNodeArray:(NSArray *)nodeArray
                            chatName:(NSString *)chatName {
    [self rebuildWithNodeArray:nodeArray chatName:chatName];
    [self applyToNodeArray:nodeArray];
}

+ (MOMergePosition)posFromVM:(id)vm {
    if (!vm) return MOMergePositionNone;
    NSNumber *v = objc_getAssociatedObject(vm, kBBPosKey);
    return v ? (MOMergePosition)[v unsignedIntegerValue] : MOMergePositionNone;
}

- (void)clear {
    _lastArray = nil;
    _lastCount = 0;
#if !__has_feature(objc_arc)
    [_lastChatName release];
#endif
    _lastChatName = nil;
    _index = [NSMutableDictionary dictionary];
    self.entries = @[];
}

@end
