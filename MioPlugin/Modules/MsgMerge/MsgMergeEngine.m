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
#import <math.h>

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

/// 文本行宽估算（全角单位数）：CJK 及全角区段记 1、ASCII 等半角记 0.6、代理对（emoji/生僻字）记 1
/// （ASCII 0.6 而非 0.5：数字串实测每行约 19-20 个而非 26+，宁可用宽估多一行也不可裁切）
static CGFloat textWidthUnits(NSString *s) {
    CGFloat w = 0;
    NSUInteger i = 0, n = s.length;
    while (i < n) {
        unichar c = [s characterAtIndex:i];
        if (c >= 0xD800 && c <= 0xDBFF) { w += 1.0; i += 2; continue; }  // 高代理：按一个全角
        w += (c >= 0x2E80) ? 1.0 : 0.6;
        i++;
    }
    return w;
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

/// 复刻 +isSeparatorMessage:：手动配置模式（mmMode==1）下按消息类型查分隔开关，
/// 决定该消息是否打断合并链。原版读侧实证只读 emoticon/media 两个键 + m_uiMessageType/
/// m_uiAppMsgInnerType，不读 system/time 两个键（那两个属节点结构层，当前实现里
/// 系统消息 >=10000 与时间节点始终断组）。全部合并模式（mmMode==0）忽略全部开关。
+ (BOOL)mmIsSeparatorMessage:(id)wrap {
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

/// 两条消息是否满足合并条件（身份相等 + 均可合并；时间打断由渲染数组时间节点天然承担）
+ (BOOL)shouldJoin:(id)wrapA wrapB:(id)wrapB {
    if (!isMergeableWrap(wrapA) || !isMergeableWrap(wrapB)) return NO;
    if ([self mmIsSeparatorMessage:wrapA] || [self mmIsSeparatorMessage:wrapB]) return NO;

    NSString *idA = senderIdentity(wrapA);
    NSString *idB = senderIdentity(wrapB);
    if (idA.length == 0 || idB.length == 0) return NO;
    return [idA isEqualToString:idB];
}

+ (MOMergePosition)positionForWrap:(id)wrap
                          chatName:(nullable NSString *)chatName
                         nodeArray:(nullable NSArray *)nodeArray {
    // 单元化：位置判定收口到切片信息（vm=nil 时 sliceIndex 恒 0，cell 渲染层只用 pos）
    return [self sliceInfoForWrap:wrap chatName:chatName nodeArray:nodeArray vm:nil].pos;
}

+ (MOMergeSliceInfo)sliceInfoForWrap:(id)wrap
                            chatName:(NSString *)chatName
                           nodeArray:(NSArray *)nodeArray
                                  vm:(id)vm {
    MOMergeSliceInfo bad = { MOMergePositionNone, 0, 1 };
    MsgMergeConfig *cfg = [MsgMergeConfig shared];
    if (!cfg.mmEnable) return bad;
    if (!isMergeableWrap(wrap)) return bad;
    if ([self mmIsSeparatorMessage:wrap]) return bad;   // 分隔消息独立，不参与任何组
    if (cfg.mmOnlyRoom && ![chatName hasSuffix:@"@chatroom"]) return bad;
    if (!nodeArray || nodeArray.count == 0) {
        WPLog(@"MsgMerge", @"[Engine] nodeArray 为空（VC 未找到或数组未加载）");
        return bad;
    }

    long long localID = localIDOf(wrap);
    if (localID <= 0) return bad;

    // ---- 缓存命中（TTL 内）直接返回（按 chat|lid|vm 指针键控：同 lid 各切片
    //      的 sliceIndex 不同，必须按 viewModel 指针区分）----
    NSMutableDictionary *cache = _positionCache();
    NSString *cacheKey = [chatName ?: @"?" stringByAppendingFormat:@"|%lld|%@",
                          localID, vm ? [NSString stringWithFormat:@"%p", vm] : @"-"];
    NSDictionary *cached = cache[cacheKey];
    if (cached) {
        NSTimeInterval ts = [cached[@"ts"] doubleValue];
        if ([[NSDate date] timeIntervalSince1970] - ts < kCacheTTL) {
            MOMergeSliceInfo si;
            si.pos = (MOMergePosition)[cached[@"pos"] unsignedIntegerValue];
            si.sliceIndex = [cached[@"sliceIndex"] integerValue];
            si.sliceCount = [cached[@"sliceCount"] integerValue];
            return si;
        }
    }

    // ---- 渲染数组邻接判定：节点数组 → wrap 数组（NSNull 占位时间节点）----
    NSMutableArray *wraps = [NSMutableArray arrayWithCapacity:nodeArray.count];
    for (id node in nodeArray) {
        id w = wrapOfNode(node);
        [wraps addObject:(w ?: kNullNode())];
    }

    // ---- 定位同 localID 的连续 run（长文本切片）----
    NSInteger firstMatch = -1;
    for (NSUInteger i = 0; i < wraps.count; i++) {
        if (wraps[i] == kNullNode()) continue;
        if (localIDOf(wraps[i]) == localID) { firstMatch = (NSInteger)i; break; }
    }
    if (firstMatch < 0) {
        WPLog(@"MsgMerge", @"[Engine] localID=%lld 不在渲染数组中", localID);
        return bad;
    }
    NSUInteger runStart = (NSUInteger)firstMatch, runEnd = (NSUInteger)firstMatch;
    while (runStart > 0 && wraps[runStart - 1] != kNullNode() &&
           localIDOf(wraps[runStart - 1]) == localID) runStart--;
    while (runEnd + 1 < wraps.count && wraps[runEnd + 1] != kNullNode() &&
           localIDOf(wraps[runEnd + 1]) == localID) runEnd++;
    NSInteger sliceCount = (NSInteger)(runEnd - runStart + 1);

    // ---- 切片序号：节点即 viewModel，按指针在 run 内定位 ----
    // vm 匹配不上且确有多片时放弃干预（宁可无补偿也不可每片都减撕开接缝）
    NSInteger sliceIndex = 0;
    BOOL foundVM = NO;
    if (vm) {
        for (NSUInteger i = runStart; i <= runEnd; i++) {
            id node = nodeArray[i];
            id nvm = safeValue(node, @"viewModel");
            if (node == vm || nvm == vm) {
                sliceIndex = (NSInteger)(i - runStart);
                foundVM = YES;
                break;
            }
        }
    }
    if (!foundVM && sliceCount > 1 && vm) {
        return bad;
    }

    // ---- 消息级邻居：run 两侧紧邻节点，紧邻时间节点（NSNull）即断组 ----
    // 【实证】跳过时间节点找"最近有效邻居"会跨时间行合并：22:20 时间行后同发送者
    // 的组首被判成 Middle/Last，头像丢失（2026-10-13 截图实证）
    id prevWrap = nil;
    if (runStart > 0 && wraps[runStart - 1] != kNullNode()) prevWrap = wraps[runStart - 1];
    id nextWrap = nil;
    if (runEnd + 1 < wraps.count && wraps[runEnd + 1] != kNullNode()) nextWrap = wraps[runEnd + 1];

    BOOL joinPrev = (prevWrap != nil) && [self shouldJoin:wrap wrapB:prevWrap];
    BOOL joinNext = (nextWrap != nil) && [self shouldJoin:wrap wrapB:nextWrap];

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
        @"sliceIndex": @(sliceIndex),
        @"sliceCount": @(sliceCount),
        @"ts": @([[NSDate date] timeIntervalSince1970]),
    };

    WPLog(@"[Engine] pos=%lu chat=%@ localID=%lld run=%lu-%lu slice=%ld/%ld",
          (unsigned long)pos, chatName, localID,
          (unsigned long)runStart, (unsigned long)runEnd,
          (long)sliceIndex, (long)sliceCount);
    return (MOMergeSliceInfo){ pos, sliceIndex, sliceCount };
}

/// 昵称块采样入样门槛：type==1 文本、无换行、估行数=1（字宽 ≤14 全角单位）
+ (BOOL)isSingleLineShortText:(id)wrap {
    if (!wrap) return NO;
    id typeVal = safeValue(wrap, @"m_uiMessageType");
    if (![typeVal respondsToSelector:@selector(longLongValue)] ||
        [typeVal longLongValue] != 1) return NO;
    NSString *content = safeValue(wrap, @"m_nsContent");
    if (![content isKindOfClass:[NSString class]]) return NO;
    if ([content rangeOfString:@"\n"].location != NSNotFound) return NO;
    return textWidthUnits(content) <= 14.0;
}

+ (void)clearCache {
    NSMutableDictionary *cache = _positionCache();
    [cache removeAllObjects];
    WPLog(@"MsgMerge", @"[Engine] cache cleared");
}

@end
