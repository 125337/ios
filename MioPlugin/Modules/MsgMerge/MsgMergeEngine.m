//
//  MsgMergeEngine.m
//  MioPlugin
//
//  消息合并分组引擎实现（MRC）
//
//  判定规则（对齐 BubbleBox 反编译证据，见 消息合并实现分析.md v3）：
//    相邻两条有效消息满足以下全部条件 → 合并为同一组：
//      ① senderUser 相等：m_nsFromUsr；若其以 @chatroom 结尾则改用 m_nsRealChatUsr
//      ② 两者均为可合并类型（m_uiMessageType < 10000，系统/状态消息断组）
//      ③ 时间间隔 ≤ mmTimeWindow（0=不按时间断组）
//  邻接遍历：CMessageMgr GetMsg:LocalID: 按 m_uiMesLocalID ±1 步进（BubbleBox
//  +findValidMsg:startId:direction: 同款，GetMsg/GetLastMsgLocalID 为微信消息库 API）。
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

static const NSInteger kMaxNeighborWalkSteps = 30;   // 邻接遍历最大步数（防死循环/远距离扫库）
static const NSTimeInterval kCacheTTL        = 5.0;  // 位置缓存有效期（秒）
static const NSUInteger kCacheCapacity       = 2048; // 缓存容量上限（超过整体清空）

// ============================================================
// MARK: - 工具函数
// ============================================================

/// CMessageMgr 单例（defaultMgr 优先，sharedInstance 兜底）
static id msgMgrInstance(void) {
    Class cls = objc_getClass("CMessageMgr");
    if (!cls) return nil;
    @try {
        id inst = ((id (*)(id, SEL))objc_msgSend)(cls, NSSelectorFromString(@"defaultMgr"));
        if (!inst) {
            inst = ((id (*)(id, SEL))objc_msgSend)(cls, NSSelectorFromString(@"sharedInstance"));
        }
        return inst;
    } @catch (NSException *e) {
        WPLog(@"MsgMerge", @"[Engine] msgMgr exception: %@", e.reason);
        return nil;
    }
}

/// 安全读取对象字段（KVC 自动装箱基本类型，避免头文件 id 类型标注误导）
static id safeValue(id obj, NSString *key) {
    if (!obj) return nil;
    @try {
        return [obj valueForKey:key];
    } @catch (NSException *e) {
        return nil;
    }
}

/// 发送者身份归一化（对齐 +senderUser: @ 002ff2a0 的 hasSuffix 分支）
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

/// 消息创建时间（秒级时间戳）
static long long createTimeOf(id wrap) {
    id t = safeValue(wrap, @"m_uiCreateTime");
    if (![t respondsToSelector:@selector(longLongValue)]) return 0;
    return [t longLongValue];
}

/// 取会话内指定 LocalID 的消息：见 +neighborWrapOfChat:fromLocal:direction: 内的 GetMsg:LocalID: 调用

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

/// 查找相邻的可判定消息：从 startLocalID ± 1 开始按 direction 步进
/// 返回：找到的消息 wrap；未找到返回 nil
+ (id)neighborWrapOfChat:(NSString *)chatName
               fromLocal:(long long)startLocalID
               direction:(NSInteger)direction {
    id mgr = msgMgrInstance();
    if (!mgr || chatName.length == 0) return nil;

    SEL getMsgSel = NSSelectorFromString(@"GetMsg:LocalID:");
    if (![mgr respondsToSelector:getMsgSel]) {
        WPLog(@"MsgMerge", @"[Engine] CMessageMgr 未响应 GetMsg:LocalID:");
        return nil;
    }

    for (NSInteger step = 1; step <= kMaxNeighborWalkSteps; step++) {
        long long probeID = startLocalID + direction * step;
        if (probeID <= 0) return nil;
        id neighbor = nil;
        @try {
            neighbor = ((id (*)(id, SEL, id, long long))objc_msgSend)(
                mgr, getMsgSel, chatName, probeID);
        } @catch (NSException *e) {
            WPLog(@"MsgMerge", @"[Engine] GetMsg exception: %@", e.reason);
            return nil;
        }
        if (neighbor) return neighbor;   // 找到最近的有效消息（含系统消息，由调用方判定是否同组）
        // localID 空洞（撤回/删除），继续步进
    }
    return nil;
}

/// 两条消息是否满足合并条件（身份相等 + 均可合并 + 时间窗）
+ (BOOL)shouldJoin:(id)wrapA wrapB:(id)wrapB {
    if (!isMergeableWrap(wrapA) || !isMergeableWrap(wrapB)) return NO;

    NSString *idA = senderIdentity(wrapA);
    NSString *idB = senderIdentity(wrapB);
    if (idA.length == 0 || idB.length == 0) return NO;
    if (![idA isEqualToString:idB]) return NO;

    NSInteger window = [MsgMergeConfig shared].mmTimeWindow;
    if (window > 0) {
        long long gap = llabs(createTimeOf(wrapA) - createTimeOf(wrapB));
        if (gap > (long long)window) return NO;
    }
    return YES;
}

+ (MOMergePosition)positionForWrap:(id)wrap chatName:(nullable NSString *)chatName {
    MsgMergeConfig *cfg = [MsgMergeConfig shared];
    if (!cfg.mmEnable) return MOMergePositionNone;
    if (!isMergeableWrap(wrap)) return MOMergePositionNone;
    if (cfg.mmOnlyRoom && ![chatName hasSuffix:@"@chatroom"]) return MOMergePositionNone;

    id localIDVal = safeValue(wrap, @"m_uiMesLocalID");
    if (![localIDVal respondsToSelector:@selector(longLongValue)]) return MOMergePositionNone;
    long long localID = [localIDVal longLongValue];
    if (localID <= 0) return MOMergePositionNone;

    // ---- 缓存命中（TTL 内）直接返回 ----
    NSString *cacheKey = [chatName ?: @"?" stringByAppendingFormat:@"|%lld", localID];
    NSDictionary *cached = [_positionCache()][cacheKey];
    if (cached) {
        NSTimeInterval ts = [cached[@"ts"] doubleValue];
        if ([[NSDate date] timeIntervalSince1970] - ts < kCacheTTL) {
            return (MOMergePosition)[cached[@"pos"] unsignedIntegerValue];
        }
    }

    // ---- 前后邻接判定 ----
    id prevWrap = [self neighborWrapOfChat:chatName fromLocal:localID direction:-1];
    id nextWrap = [self neighborWrapOfChat:chatName fromLocal:localID direction:1];

    BOOL joinPrev = (prevWrap != nil) && [self shouldJoin:wrap wrapB:prevWrap];
    BOOL joinNext = (nextWrap != nil) && [self shouldJoin:wrap wrapB:nextWrap];

    MOMergePosition pos;
    if (joinPrev && joinNext)      pos = MOMergePositionMiddle;
    else if (joinPrev)             pos = MOMergePositionLast;
    else if (joinNext)             pos = MOMergePositionFirst;
    else                           pos = MOMergePositionSingle;

    // ---- 写缓存 ----
    if ([_positionCache() count] > kCacheCapacity) {
        [_positionCache() removeAllObjects];
        WPLog(@"MsgMerge", @"[Engine] position cache purged (>%lu)", (unsigned long)kCacheCapacity);
    }
    _positionCache()[cacheKey] = @{
        @"pos": @(pos),
        @"ts": @([[NSDate date] timeIntervalSince1970]),
    };

    WPLog(@"MsgMerge", @"[Engine] pos=%lu chat=%@ localID=%lld",
          (unsigned long)pos, chatName, localID);
    return pos;
}

+ (void)clearCache {
    [_positionCache() removeAllObjects];
    WPLog(@"MsgMerge", @"[Engine] cache cleared");
}

@end
