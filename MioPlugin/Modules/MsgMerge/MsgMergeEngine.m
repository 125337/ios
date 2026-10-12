//
//  MsgMergeEngine.m
//  MioPlugin
//
//  消息合并分组引擎实现（MRC）
//
//  判定规则（对齐 BubbleBox 反编译证据）：
//    相邻两条有效消息满足以下全部条件 → 合并为同一组：
//      ① senderUser 相等：m_nsFromUsr；若其以 @chatroom 结尾则改用 m_nsRealChatUsr
//      ② 两者均为可合并类型（m_uiMessageType < 10000，系统/状态消息断组）
//    时间打断 = 微信自身时间分隔行（BubbleBox isNeedInsertTimeNode 同语义）：
//    渲染数组中 ChatTimeViewModel 无 wrap，天然断组，无秒数窗。
//
//  邻接数据源（8.0.78 实证，Frida 探针 #5/#8/#9）：
//    CMessageMgr 无单例访问器（9 个类方法全是 CDN 路径，defaultMgr/sharedInstance
//    均不存在，MMServiceCenter defaultCenter 调用直接 abort），GetMsg:LocalID: 邻接
//    查询方案不可用。改用聊天 VC 的 m_arrMessageNodeData（消息表数据源数组）：
//    元素为 ChatTimeViewModel（时间节点，无 wrap）/ TextMessageViewModel 等 viewModel，
//    经 viewModel.messageWrap 取 wrap；数组顺序即渲染顺序，localID 定位后只看
//    紧邻节点即邻居，紧邻时间节点（无 wrap）即断组。
//

#import "MsgMergeEngine.h"
#import "MsgMergeConfig.h"
#import "../../Core/LogManager.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <stdlib.h>

// ============================================================
// MARK: - 常量
// ============================================================

static const NSTimeInterval kCacheTTL        = 5.0;  // 位置缓存有效期（秒）
static const NSUInteger kCacheCapacity       = 2048; // 缓存容量上限（超过整体清空）

static id kNullNode(void) { return [NSNull null]; }  // 时间节点占位（无 wrap）

// ============================================================
// MARK: - 工具函数
// ============================================================

/// 安全读取对象字段（KVC 自动装箱基本类型，避免头文件 id 类型标注误导）
static id safeValue(id obj, NSString *key) {
    if (!obj) return nil;
    @try {
        return [obj valueForKey:key];
    } @catch (NSException *e) {
        return nil;
    }
}

/// 发送者身份归一化（对齐 +senderUser: 的 hasSuffix 分支）
static NSString *senderIdentity(id wrap) {
    NSString *fromUsr = safeValue(wrap, @"m_nsFromUsr");
    if (![fromUsr isKindOfClass:[NSString class]] || fromUsr.length == 0) return nil;
    if ([fromUsr hasSuffix:@"@chatroom"]) {
        // 群消息 fromUsr 为 chatroom 时，真实发送者在 m_nsRealChatUsr
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

// ============================================================
// MARK: - 位置缓存
// ============================================================

static NSMutableDictionary<NSString *, NSDictionary *> *_positionCache(void) {
    static NSMutableDictionary *dict = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{ dict = [NSMutableDictionary dictionary]; });
    return dict;
}

// ============================================================
// MARK: - 引擎实现
// ============================================================

@implementation MsgMergeEngine

/// 两条消息是否满足合并条件（身份相等 + 均可合并；时间打断由渲染数组时间节点天然承担）
+ (BOOL)shouldJoin:(id)wrapA wrapB:(id)wrapB {
    if (!isMergeableWrap(wrapA) || !isMergeableWrap(wrapB)) return NO;

    NSString *idA = senderIdentity(wrapA);
    NSString *idB = senderIdentity(wrapB);
    if (idA.length == 0 || idB.length == 0) return NO;
    return [idA isEqualToString:idB];
}

+ (MOMergePosition)positionForWrap:(id)wrap
                          chatName:(nullable NSString *)chatName
                         nodeArray:(nullable NSArray *)nodeArray
                             depth:(nullable NSInteger *)depthOut {
    if (depthOut) *depthOut = 0;
    MsgMergeConfig *cfg = [MsgMergeConfig shared];
    if (!cfg.mmEnable) return MOMergePositionNone;
    if (!isMergeableWrap(wrap)) return MOMergePositionNone;
    if (cfg.mmOnlyRoom && ![chatName hasSuffix:@"@chatroom"]) return MOMergePositionNone;
    if (!nodeArray || nodeArray.count == 0) {
        WPLog(@"MsgMerge", @"[Engine] nodeArray 为空（VC 未找到或数组未加载）");
        return MOMergePositionNone;
    }

    long long localID = localIDOf(wrap);
    if (localID <= 0) return MOMergePositionNone;

    // ---- 缓存命中（TTL 内）直接返回 ----
    NSMutableDictionary *cache = _positionCache();
    NSString *cacheKey = [chatName ?: @"?" stringByAppendingFormat:@"|%lld", localID];
    NSDictionary *cached = cache[cacheKey];
    if (cached) {
        NSTimeInterval ts = [cached[@"ts"] doubleValue];
        if ([[NSDate date] timeIntervalSince1970] - ts < kCacheTTL) {
            if (depthOut) *depthOut = [cached[@"depth"] integerValue];
            return (MOMergePosition)[cached[@"pos"] unsignedIntegerValue];
        }
    }

    // ---- 渲染数组邻接判定：节点数组 → wrap 数组（NSNull 占位时间节点）----
    NSMutableArray *wraps = [NSMutableArray arrayWithCapacity:nodeArray.count];
    for (id node in nodeArray) {
        id w = wrapOfNode(node);
        [wraps addObject:(w ?: kNullNode())];
    }

    NSInteger targetIdx = -1;
    for (NSUInteger i = 0; i < wraps.count; i++) {
        if (wraps[i] == kNullNode()) continue;
        if (localIDOf(wraps[i]) == localID) { targetIdx = (NSInteger)i; break; }
    }
    if (targetIdx < 0) {
        WPLog(@"MsgMerge", @"[Engine] localID=%lld 不在渲染数组中", localID);
        return MOMergePositionNone;
    }

    // ---- 前后邻居：只看紧邻节点，紧邻是时间节点（NSNull）即断组 ----
    // 【实证】跳过时间节点找"最近有效邻居"会跨时间行合并：22:20 时间行后同发送者
    // 的组首被判成 Middle/Last，头像丢失（2026-10-13 截图实证）
    id prevWrap = nil;
    if (targetIdx > 0 && wraps[targetIdx - 1] != kNullNode()) prevWrap = wraps[targetIdx - 1];
    id nextWrap = nil;
    if ((NSUInteger)(targetIdx + 1) < wraps.count && wraps[targetIdx + 1] != kNullNode()) {
        nextWrap = wraps[targetIdx + 1];
    }

    BOOL joinPrev = (prevWrap != nil) && [self shouldJoin:wrap wrapB:prevWrap];
    BOOL joinNext = (nextWrap != nil) && [self shouldJoin:wrap wrapB:nextWrap];

    // ---- 组内深度：从本条往前数连续同发送者的步数（组首/独立=0）----
    // 递进位移用：第 k 条上移 k×间距，组内相邻气泡间隙统一收敛到 17−间距
    //（固定行高内等幅位移守恒：只缩组首→第二条，其余间隙不变，2026-10-13 截图实证）
    NSInteger depth = 0;
    if (joinPrev) {
        NSInteger cur = targetIdx;
        while (cur > 0 && depth < 32) {
            id p = wraps[cur - 1];
            if (p == kNullNode() || ![self shouldJoin:wraps[cur] wrapB:p]) break;
            depth++;
            cur--;
        }
    }

    MOMergePosition pos;
    if (joinPrev && joinNext)      pos = MOMergePositionMiddle;
    else if (joinPrev)             pos = MOMergePositionLast;
    else if (joinNext)             pos = MOMergePositionFirst;
    else                           pos = MOMergePositionSingle;

    // ---- 写缓存 ----
    if ([cache count] > kCacheCapacity) {
        [cache removeAllObjects];
        WPLog(@"MsgMerge", @"[Engine] position cache purged (>%lu)", (unsigned long)kCacheCapacity);
    }
    cache[cacheKey] = @{
        @"pos": @(pos),
        @"depth": @(depth),
        @"ts": @([[NSDate date] timeIntervalSince1970]),
    };
    if (depthOut) *depthOut = depth;

    WPLog(@"MsgMerge", @"[Engine] pos=%lu chat=%@ localID=%lld idx=%ld/%lu",
          (unsigned long)pos, chatName, localID, targetIdx, (unsigned long)wraps.count);
    return pos;
}

+ (void)clearCache {
    NSMutableDictionary *cache = _positionCache();
    [cache removeAllObjects];
    WPLog(@"MsgMerge", @"[Engine] cache cleared");
}

@end
