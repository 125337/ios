#import "MioFriendDetector.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

static NSString * const kSummaryKey = @"com.mio.wechat.plugin.FriendDetection.summary_v2";

// ============================================================
// MARK: - 全局检测状态（供 Hook 回调使用）
// ============================================================
dispatch_semaphore_t g_fdSemaphore = NULL;
NSString             *g_fdCurrentWxID = nil;
NSDictionary         *g_fdCurrentResponse = nil;
volatile BOOL         g_fdDetectionActive = NO;

// ============================================================
// MARK: - 好友列表获取
// ============================================================
static NSArray<NSDictionary *> *fdGetAllFriends(void) {
    id contactMgr = WXGetService(objc_getClass("CContactMgr"));
    if (!contactMgr) { WPLog(@"FriendDetect", @"[Friends] CContactMgr not found"); return @[]; }

    SEL sel = sel_registerName("getContactList:contactType:");
    if (![contactMgr respondsToSelector:sel]) { WPLog(@"FriendDetect", @"[Friends] getContactList: not found"); return @[]; }

    NSArray *contacts = nil;
    contacts = ((NSArray *(*)(id, SEL, int, int))objc_msgSend)(contactMgr, sel, 0, 8);
    if (!contacts || contacts.count == 0) contacts = ((NSArray *(*)(id, SEL, int, int))objc_msgSend)(contactMgr, sel, 0, 0);
    if (!contacts || contacts.count == 0) contacts = ((NSArray *(*)(id, SEL, int, int))objc_msgSend)(contactMgr, sel, 1, 0);
    if (!contacts || contacts.count == 0) { WPLog(@"FriendDetect", @"[Friends] All params returned nil"); return @[]; }

    // 获取自己的 wxid
    NSString *selfWxID = nil;
    if ([contactMgr respondsToSelector:sel_registerName("getSelfContact")]) {
        id sc = ((id (*)(id, SEL))objc_msgSend)(contactMgr, sel_registerName("getSelfContact"));
        if ([sc respondsToSelector:sel_registerName("m_nsUsrName")])
            selfWxID = ((id (*)(id, SEL))objc_msgSend)(sc, sel_registerName("m_nsUsrName"));
    }

    SEL wxidSel  = sel_registerName("m_nsUsrName");
    SEL nickSel  = sel_registerName("m_nsNickName");
    SEL remkSel  = sel_registerName("m_nsRemark");

    NSMutableArray *friends = [NSMutableArray array];
    for (id c in contacts) {
        @try {
            NSString *wxID = ((id (*)(id, SEL))objc_msgSend)(c, wxidSel);
            if (!wxID || wxID.length == 0) continue;
            if ([wxID containsString:@"@chatroom"]) continue;
            if ([wxID hasPrefix:@"gh_"]) continue;
            if (selfWxID && [wxID isEqualToString:selfWxID]) continue;

            NSString *nick = nil;
            if ([c respondsToSelector:nickSel]) nick = ((id (*)(id, SEL))objc_msgSend)(c, nickSel);
            NSString *remk = nil;
            if ([c respondsToSelector:remkSel]) remk = ((id (*)(id, SEL))objc_msgSend)(c, remkSel);

            [friends addObject:@{@"wxID": wxID, @"nickname": nick ?: @"", @"remark": remk ?: @""}];
        } @catch (NSException *e) {}
    }
    WPLog(@"FriendDetect", @"[Friends] %lu real friends filtered", (unsigned long)friends.count);
    return [friends copy];
}

// ============================================================
// MARK: - 构造转账预下单请求（严格参照微信优化 行 20297-20324）
// ============================================================
static id _Nullable fdCreateTransferRequest(NSString *receiverWxID) {
    Class reqCls = objc_getClass("WCPayTransferPrepayRequestStruct");
    if (!reqCls) { WPLog(@"FriendDetect", @"[Req] Class not found"); return nil; }

    id req = ((id (*)(Class, SEL))objc_msgSend)(reqCls, sel_registerName("alloc"));
    if (!req) return nil;
    req = ((id (*)(id, SEL))objc_msgSend)(req, @selector(init));
    if (!req) return nil;

    // 微信优化唯一守卫: respondsToSelector("setM_nsReceiverUserName:")
    SEL guardSel = sel_registerName("setM_nsReceiverUserName:");
    if (![req respondsToSelector:guardSel]) { WPLog(@"FriendDetect", @"[Req] Missing setM_nsReceiverUserName:"); return nil; }

    // m_nsReceiverUserName = wxID (行 20302)
    ((void (*)(id, SEL, id))objc_msgSend)(req, guardSel, receiverWxID);

    // m_uiAmount = 1 (行 20303)
    SEL amtSel = sel_registerName("setM_uiAmount:");
    if ([req respondsToSelector:amtSel]) ((void (*)(id, SEL, unsigned int))objc_msgSend)(req, amtSel, 1);

    // m_uiFee = 1 (行 20304)
    SEL feeSel = sel_registerName("setM_uiFee:");
    if ([req respondsToSelector:feeSel]) ((void (*)(id, SEL, unsigned int))objc_msgSend)(req, feeSel, 1);

    // m_uiFeeType = 31 (行 20305: 0x1f)
    SEL ftSel = sel_registerName("setM_uiFeeType:");
    if ([req respondsToSelector:ftSel]) ((void (*)(id, SEL, unsigned int))objc_msgSend)(req, ftSel, 31);

    // m_transferScene = 2 (行 20306-20309)
    SEL sceneSel = sel_registerName("setM_transferScene:");
    if ([req respondsToSelector:sceneSel]) ((void (*)(id, SEL, unsigned int))objc_msgSend)(req, sceneSel, 2);

    // m_uiPayScene = 11 (行 20312: 0xb)
    SEL psSel = sel_registerName("setM_uiPayScene:");
    if ([req respondsToSelector:psSel]) ((void (*)(id, SEL, unsigned int))objc_msgSend)(req, psSel, 11);

    // m_nsTraceInfo = "WeChatFriendDetector" (行 20313 — 严格匹配微信优化)
    SEL traceSel = sel_registerName("setM_nsTraceInfo:");
    if ([req respondsToSelector:traceSel]) ((void (*)(id, SEL, id))objc_msgSend)(req, traceSel, @"WeChatFriendDetector");

    // placeorderReserves = 当前时间戳 (行 20314-20323)
    SEL resvSel = sel_registerName("setPlaceorderReserves:");
    if ([req respondsToSelector:resvSel]) {
        NSString *ts = [NSString stringWithFormat:@"%ld", (long)[[NSDate date] timeIntervalSince1970]];
        ((void (*)(id, SEL, id))objc_msgSend)(req, resvSel, ts);
    }

    WPLog(@"FriendDetect", @"[Req] Created for %@", receiverWxID);
    return req;
}

// ============================================================
// MARK: - 发送转账预下单请求（严格参照微信优化 行 20325-20333）
// 关键修改：dispatch_sync 到主线程，确保 WCPayLogicMgr 在有 RunLoop 的线程执行
// 微信优化使用 NSOperationQueue（行 20079），其线程自带 RunLoop
// ============================================================
static BOOL fdSendRequest(id request) {
    Class payCls = objc_getClass("WCPayLogicMgr");
    if (!payCls) { WPLog(@"FriendDetect", @"[Send] WCPayLogicMgr class not found"); return NO; }

    id payMgr = WXGetService(payCls);
    if (!payMgr) { WPLog(@"FriendDetect", @"[Send] WCPayLogicMgr service nil"); return NO; }

    SEL sendSel = sel_registerName("GetTransferPrepayRequest:");
    if (![payMgr respondsToSelector:sendSel]) {
        WPLog(@"FriendDetect", @"[Send] GetTransferPrepayRequest: not found on WCPayLogicMgr");
        return NO;
    }

    // dispatch_sync 到主线程：确保在有 RunLoop 的线程上调用
    // 避免多开微信上 WCPayLogicMgr 因缺少 RunLoop 而本地超时
    __block BOOL sent = YES;
    if ([NSThread isMainThread]) {
        ((void (*)(id, SEL, id))objc_msgSend)(payMgr, sendSel, request);
    } else {
        dispatch_sync(dispatch_get_main_queue(), ^{
            ((void (*)(id, SEL, id))objc_msgSend)(payMgr, sendSel, request);
        });
    }
    WPLog(@"FriendDetect", @"[Send] Request sent ✓ (thread=%@)", [NSThread isMainThread] ? @"main" : @"bg");
    return sent;
}

// ============================================================
// MARK: - 结果判定（严格匹配微信优化 行 20379-20399）
// 微信优化逻辑:
//   1. retmsg == "ok"              → 正常好友
//   2. retcode == "268502017"      → 账号异常 (invalidFriends)
//   3. 其他                         → 已被删除 (notFriends)
// ============================================================
static MioFriendStatus fdDetermineStatus(NSDictionary *response) {
    if (!response) return MioFriendStatusInvalid;

    // 微信优化 行 20379-20383: 先检查 retmsg == "ok"
    id retmsgRaw = response[@"retmsg"];
    NSString *retmsg = nil;
    if ([retmsgRaw isKindOfClass:[NSString class]]) {
        retmsg = retmsgRaw;
    } else if (retmsgRaw) {
        retmsg = [retmsgRaw description];
    }

    // 微信优化: retmsg == "ok" → 正常好友
    if (retmsg && [retmsg isEqualToString:@"ok"]) {
        return MioFriendStatusNormal;
    }

    // 获取 retcode（兼容 NSNumber/NSString）
    id rcRaw = response[@"retcode"];
    NSString *rcStr = nil;
    NSInteger rc = -1;
    if ([rcRaw isKindOfClass:[NSNumber class]]) {
        rc = [(NSNumber *)rcRaw integerValue];
        rcStr = [(NSNumber *)rcRaw stringValue];
    } else if ([rcRaw isKindOfClass:[NSString class]]) {
        rc = [(NSString *)rcRaw integerValue];
        rcStr = rcRaw;
    }

    // 微信优化 行 20386: retcode == "268502017" → 账号异常
    if (rcStr && [rcStr isEqualToString:@"268502017"]) {
        return MioFriendStatusInvalid;
    }

    // 微信优化 行 20388-20393: 其他 → notFriends (已被删除)
    WPLog(@"FriendDetect", @"[Judge] retcode=%@ retmsg=%@ → Deleted", rcStr, retmsg);
    return MioFriendStatusDeleted;
}

// ============================================================
// MARK: - MioFriendDetector
// ============================================================
@interface MioFriendDetector ()
@property (nonatomic, assign, readwrite) BOOL isDetecting;
@property (nonatomic, assign, readwrite) BOOL isStopped;
@property (nonatomic, assign) NSInteger runToken;  // 防止 stop+start 产生并发 dispatch block
@end

@implementation MioFriendDetector

#pragma mark - Init

- (instancetype)init {
    if (self = [super init]) {
        _isDetecting = NO;
        _isStopped = NO;
    }
    return self;
}

#pragma mark - Start / Resume / Stop

- (void)startNewDetection:(MioFDProgressBlock)progress completion:(MioFDCompletionBlock)completion {
    if (self.isDetecting) {
        if (completion) dispatch_async(dispatch_get_main_queue(), ^{
            completion(nil, [NSError errorWithDomain:@"FD" code:-1 userInfo:@{NSLocalizedDescriptionKey:@"检测正在进行中"}]);
        });
        return;
    }
    [MioFriendDetector clearSavedSummary];
    [self _runWithProgress:progress completion:completion resume:nil];
}

- (void)resumeDetection:(MioFDProgressBlock)progress completion:(MioFDCompletionBlock)completion {
    if (self.isDetecting) {
        if (completion) dispatch_async(dispatch_get_main_queue(), ^{
            completion(nil, [NSError errorWithDomain:@"FD" code:-1 userInfo:@{NSLocalizedDescriptionKey:@"检测正在进行中"}]);
        });
        return;
    }
    MioFriendDetectSummary *saved = [MioFriendDetector loadSavedSummary];
    if (!saved || saved.checkedWxIDs.count == 0) {
        [self startNewDetection:progress completion:completion];
        return;
    }
    [self _runWithProgress:progress completion:completion resume:saved];
}

- (void)retestFriends:(NSArray<NSString *> *)wxIDs
             progress:(MioFDProgressBlock)progress
           completion:(MioFDCompletionBlock)completion {
    if (self.isDetecting) {
        if (completion) dispatch_async(dispatch_get_main_queue(), ^{
            completion(nil, [NSError errorWithDomain:@"FD" code:-1 userInfo:@{NSLocalizedDescriptionKey:@"检测正在进行中"}]);
        });
        return;
    }
    if (wxIDs.count == 0) {
        if (completion) dispatch_async(dispatch_get_main_queue(), ^{
            completion(nil, [NSError errorWithDomain:@"FD" code:-2 userInfo:@{NSLocalizedDescriptionKey:@"未选择好友"}]);
        });
        return;
    }

    // 从全量好友中筛选出指定的 wxIDs
    NSArray<NSDictionary *> *all = fdGetAllFriends();
    NSMutableArray<NSDictionary *> *target = [NSMutableArray array];
    for (NSDictionary *f in all) {
        if ([wxIDs containsObject:f[@"wxID"]]) {
            [target addObject:f];
        }
    }

    if (target.count == 0) {
        if (completion) dispatch_async(dispatch_get_main_queue(), ^{
            completion(nil, [NSError errorWithDomain:@"FD" code:-3 userInfo:@{NSLocalizedDescriptionKey:@"未找到匹配的好友"}]);
        });
        return;
    }

    // 复用 _runWithTargetFriends: 只检测这些好友
    [self _runWithTargetFriends:target progress:progress completion:completion];
}

- (void)stopDetection {
    self.isStopped = YES;
    self.isDetecting = NO;
    g_fdDetectionActive = NO;
    ++self.runToken;  // 使旧 dispatch block 失效，防止 stop 后立即 start 产生并发

    // 必须唤醒可能正在 semaphore_wait 中的检测线程
    // 否则旧的 semaphore 被 ARC 释放时仍在 wait → "deallocated while in use" crash
    if (g_fdSemaphore) {
        dispatch_semaphore_signal(g_fdSemaphore);
        g_fdSemaphore = NULL;
    }
    g_fdCurrentWxID = nil;
    g_fdCurrentResponse = nil;
    WPLog(@"FriendDetect", @"[Stop] runToken=%ld, signaled semaphore", (long)self.runToken);
}

#pragma mark - Core Loop

/// 只检测指定的好友列表（用于 retestFriends）
- (void)_runWithTargetFriends:(NSArray<NSDictionary *> *)friends
                     progress:(MioFDProgressBlock)progress
                   completion:(MioFDCompletionBlock)completion {
    self.isDetecting = YES;
    self.isStopped = NO;
    g_fdDetectionActive = YES;
    NSInteger myToken = ++self.runToken;
    WPLog(@"FriendDetect", @"[Run] targetFriends token=%ld count=%lu", (long)myToken, (unsigned long)friends.count);

    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        if (self.isStopped || myToken != self.runToken || !g_fdDetectionActive) {
            self.isDetecting = NO; g_fdDetectionActive = NO; return;
        }

        // 加载已有结果并移除这些 wxID（重新检测会用新结果覆盖）
        MioFriendDetectSummary *saved = [MioFriendDetector loadSavedSummary];
        NSMutableArray<MioFriendDetectResult *> *deleted = saved ? [saved.deletedFriends mutableCopy] : [NSMutableArray array];
        NSMutableArray<MioFriendDetectResult *> *invalid = saved ? [saved.invalidFriends mutableCopy] : [NSMutableArray array];
        NSMutableSet<NSString *> *allChecked = saved ? [saved.checkedWxIDs mutableCopy] : [NSMutableSet set];

        // 移除旧结果（这些好友将被重新检测）
        NSSet *wxSet = [NSSet setWithArray:[friends valueForKey:@"wxID"]];
        [deleted filterUsingPredicate:[NSPredicate predicateWithBlock:^BOOL(MioFriendDetectResult *r, id _) { return ![wxSet containsObject:r.wxID]; }]];
        [invalid filterUsingPredicate:[NSPredicate predicateWithBlock:^BOOL(MioFriendDetectResult *r, id _) { return ![wxSet containsObject:r.wxID]; }]];
        [allChecked minusSet:wxSet];

        NSInteger total = (NSInteger)friends.count;
        for (NSInteger i = 0; i < total; i++) {
            if (self.isStopped || myToken != self.runToken) { WPLog(@"FriendDetect", @"[Retest] Token %ld stopped at %ld/%ld", (long)myToken, (long)i, (long)total); break; }

            NSDictionary *f = friends[i];
            NSString *wx = f[@"wxID"], *nk = f[@"nickname"], *rk = f[@"remark"];

            @autoreleasepool {
                if (progress) dispatch_async(dispatch_get_main_queue(), ^{ progress(wx, nk.length ? nk : wx, i + 1, total); });

                id req = fdCreateTransferRequest(wx);
                g_fdCurrentResponse = nil;
                g_fdSemaphore = dispatch_semaphore_create(0);
                g_fdCurrentWxID = wx;

                BOOL ok = fdSendRequest(req);
                long wr = ok ? 1 : -1;
                if (ok && g_fdSemaphore) {
                    wr = dispatch_semaphore_wait(g_fdSemaphore, dispatch_time(DISPATCH_TIME_NOW, (int64_t)(3.5 * NSEC_PER_SEC)));
                }

                // 微信优化 行 20425-20431：超时则重试一次
                if (wr != 0) {
                    WPLog(@"FriendDetect", @"[Retest] Timeout for %@, retry once (行20426)", wx);
                    fdSendRequest(req);
                    if (g_fdSemaphore) {
                        wr = dispatch_semaphore_wait(g_fdSemaphore, dispatch_time(DISPATCH_TIME_NOW, (int64_t)(3.5 * NSEC_PER_SEC)));
                    }
                }

                NSDictionary *resp = nil;
                @synchronized (g_fdCurrentResponse ?: [NSNull null]) { resp = g_fdCurrentResponse; }

                MioFriendStatus st = (wr == 0 && resp) ? fdDetermineStatus(resp) : MioFriendStatusInvalid;

                MioFriendDetectResult *r = [[MioFriendDetectResult alloc] init];
                r.wxID = wx; r.nickname = nk; r.remark = rk; r.status = st;
                if (resp) {
                    id rcRaw = resp[@"retcode"];
                    if ([rcRaw isKindOfClass:[NSNumber class]]) r.retcode = [(NSNumber *)rcRaw integerValue];
                    else if ([rcRaw isKindOfClass:[NSString class]]) r.retcode = [(NSString *)rcRaw integerValue];
                    else r.retcode = -1;
                    id rmRaw = resp[@"retmsg"];
                    r.retmsg = [rmRaw isKindOfClass:[NSString class]] ? rmRaw : (rmRaw ? [rmRaw description] : @"");
                } else { r.retcode = -1; r.retmsg = @""; }

                if (st == MioFriendStatusDeleted) [deleted addObject:r];
                else if (st == MioFriendStatusInvalid) [invalid addObject:r];

                [allChecked addObject:wx];
                WPLog(@"FriendDetect", @"[Retest] %ld/%ld %@ → %@", (long)(i+1), (long)total, wx, r);

                g_fdSemaphore = NULL; g_fdCurrentWxID = nil; g_fdCurrentResponse = nil;
            }
            [NSThread sleepForTimeInterval:0.1];
        }

        MioFriendDetectSummary *sum = [[MioFriendDetectSummary alloc] init];
        sum.timestamp = [[NSDate date] timeIntervalSince1970];
        sum.totalCount = (NSInteger)(saved ? saved.totalCount : total);
        sum.deletedFriends = [deleted copy];
        sum.invalidFriends = [invalid copy];
        sum.checkedWxIDs = [allChecked copy];

        [MioFriendDetector _saveSummary:sum];

        g_fdDetectionActive = NO;
        self.isDetecting = NO;
        WPLog(@"FriendDetect", @"[Retest] Done: %lu deleted, %lu invalid", (unsigned long)deleted.count, (unsigned long)invalid.count);

        if (completion) dispatch_async(dispatch_get_main_queue(), ^{ completion(sum, nil); });
    });
}

- (void)_runWithProgress:(MioFDProgressBlock)progress
              completion:(MioFDCompletionBlock)completion
                  resume:(MioFriendDetectSummary *)resume {
    self.isDetecting = YES;
    self.isStopped = NO;
    g_fdDetectionActive = YES;
    NSInteger myToken = ++self.runToken;
    WPLog(@"FriendDetect", @"[Run] token=%ld", (long)myToken);

    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        WPLog(@"FriendDetect", @"========================================");
        WPLog(@"FriendDetect", @" Detection loop start (token=%ld)", (long)myToken);
        WPLog(@"FriendDetect", @"========================================");

        // 检查是否已被作废（stop+start 场景）
        if (self.isStopped || myToken != self.runToken || !g_fdDetectionActive) {
            WPLog(@"FriendDetect", @"[Loop] Token %ld invalidated before start, exiting", (long)myToken);
            self.isDetecting = NO;
            g_fdDetectionActive = NO;
            return;
        }

        // ① 获取好友列表
        NSArray<NSDictionary *> *all = fdGetAllFriends();
        if (all.count == 0) {
            g_fdDetectionActive = NO;
            self.isDetecting = NO;
            if (completion) dispatch_async(dispatch_get_main_queue(), ^{
                completion(nil, [NSError errorWithDomain:@"FD" code:-3 userInfo:@{NSLocalizedDescriptionKey:@"未找到好友列表"}]);
            });
            return;
        }

        // ② 断点续传：过滤已检测
        NSSet *checked = resume ? resume.checkedWxIDs : [NSSet set];
        NSMutableArray<NSDictionary *> *toCheck = [NSMutableArray array];
        for (NSDictionary *f in all) {
            if (![checked containsObject:f[@"wxID"]]) [toCheck addObject:f];
        }
        WPLog(@"FriendDetect", @"[Loop] %lu checked, %lu remaining", (unsigned long)checked.count, (unsigned long)toCheck.count);

        // ③ 累积结果
        NSMutableArray<MioFriendDetectResult *> *deleted = resume
            ? [resume.deletedFriends mutableCopy] : [NSMutableArray array];
        NSMutableArray<MioFriendDetectResult *> *invalid = resume
            ? [resume.invalidFriends mutableCopy] : [NSMutableArray array];
        NSMutableSet<NSString *> *allChecked = [checked mutableCopy];

        NSInteger total = toCheck.count;

        for (NSInteger i = 0; i < total; i++) {
            if (self.isStopped || myToken != self.runToken) { WPLog(@"FriendDetect", @"[Loop] Token %ld stopped/invalidated at %ld/%ld", (long)myToken, (long)i, (long)total); break; }

            NSDictionary *f = toCheck[i];
            NSString *wx = f[@"wxID"], *nk = f[@"nickname"], *rk = f[@"remark"];

            @autoreleasepool {
                // 进度回调
                if (progress) dispatch_async(dispatch_get_main_queue(), ^{
                    progress(wx, nk.length ? nk : wx, i + 1 + (NSInteger)checked.count, (NSInteger)all.count);
                });

                // ③-a 构造请求
                id req = fdCreateTransferRequest(wx);
                if (!req) { [allChecked addObject:wx]; continue; }

                // ③-b 设置全局状态
                g_fdCurrentWxID = wx;
                g_fdCurrentResponse = nil;
                g_fdSemaphore = dispatch_semaphore_create(0);

                // ③-c 发送请求
                if (!fdSendRequest(req)) {
                    g_fdSemaphore = NULL;
                    g_fdCurrentWxID = nil;
                    [allChecked addObject:wx];
                    continue;
                }

                // ③-d 等待回调（超时 3.5 秒，同微信优化行 20339: 3500000000ns）
                dispatch_time_t timeout = dispatch_time(DISPATCH_TIME_NOW, (int64_t)(3.5 * NSEC_PER_SEC));
                long wr = dispatch_semaphore_wait(g_fdSemaphore, timeout);

                // 微信优化 行 20425-20431：超时则重试一次
                if (wr != 0) {
                    WPLog(@"FriendDetect", @"[Loop] Timeout for %@, retry once (行20426)", wx);
                    fdSendRequest(req);
                    if (g_fdSemaphore) {
                        wr = dispatch_semaphore_wait(g_fdSemaphore, dispatch_time(DISPATCH_TIME_NOW, (int64_t)(3.5 * NSEC_PER_SEC)));
                    }
                }

                // ③-e 判定结果（微信优化行 20379-20399）
                NSDictionary *resp = nil;
                @synchronized (g_fdCurrentResponse ?: [NSNull null]) { resp = g_fdCurrentResponse; }

                MioFriendStatus st = (wr == 0 && resp) ? fdDetermineStatus(resp) : MioFriendStatusInvalid;

                MioFriendDetectResult *r = [[MioFriendDetectResult alloc] init];
                r.wxID = wx; r.nickname = nk; r.remark = rk; r.status = st;
                // retcode/retmsg 从原始字典读取（兼容 NSNumber/NSString）
                if (resp) {
                    id rcRaw = resp[@"retcode"];
                    if ([rcRaw isKindOfClass:[NSNumber class]]) r.retcode = [(NSNumber *)rcRaw integerValue];
                    else if ([rcRaw isKindOfClass:[NSString class]]) r.retcode = [(NSString *)rcRaw integerValue];
                    else r.retcode = -1;
                    id rmRaw = resp[@"retmsg"];
                    r.retmsg = [rmRaw isKindOfClass:[NSString class]] ? rmRaw : (rmRaw ? [rmRaw description] : @"");
                } else {
                    r.retcode = -1;
                    r.retmsg = @"";
                }

                if (st == MioFriendStatusDeleted) [deleted addObject:r];
                else if (st == MioFriendStatusInvalid) [invalid addObject:r];

                [allChecked addObject:wx];
                WPLog(@"FriendDetect", @"[Loop] %ld/%ld %@ → %@", (long)(i+1), (long)total, wx, r);

                // 清理
                g_fdSemaphore = NULL;
                g_fdCurrentWxID = nil;
                g_fdCurrentResponse = nil;
            }

            // 间隔 100ms
            [NSThread sleepForTimeInterval:0.1];
        }

        // ④ 组装结果
        MioFriendDetectSummary *sum = [[MioFriendDetectSummary alloc] init];
        sum.timestamp = [[NSDate date] timeIntervalSince1970];
        sum.totalCount = (NSInteger)all.count;
        sum.deletedFriends = [deleted copy];
        sum.invalidFriends = [invalid copy];
        sum.checkedWxIDs = [allChecked copy];

        // ⑤ 持久化
        [MioFriendDetector _saveSummary:sum];

        g_fdDetectionActive = NO;
        self.isDetecting = NO;

        WPLog(@"FriendDetect", @"========================================");
        WPLog(@"FriendDetect", @" Done: %lu deleted, %lu invalid", (unsigned long)deleted.count, (unsigned long)invalid.count);
        WPLog(@"FriendDetect", @"========================================");

        if (completion) dispatch_async(dispatch_get_main_queue(), ^{ completion(sum, nil); });
    });
}

#pragma mark - Persistence

+ (void)_saveSummary:(MioFriendDetectSummary *)sum {
    if (!sum) return;
    NSData *d = nil;
    @try { d = [NSKeyedArchiver archivedDataWithRootObject:sum requiringSecureCoding:YES error:nil]; }
    @catch (NSException *e) { WPLog(@"FriendDetect", @"[Save] Error: %@", e); return; }
    if (d) { [[NSUserDefaults standardUserDefaults] setObject:d forKey:kSummaryKey]; [[NSUserDefaults standardUserDefaults] synchronize]; }
}

+ (MioFriendDetectSummary *)loadSavedSummary {
    NSData *d = [[NSUserDefaults standardUserDefaults] objectForKey:kSummaryKey];
    if (!d) return nil;
    @try { return [NSKeyedUnarchiver unarchivedObjectOfClass:[MioFriendDetectSummary class] fromData:d error:nil]; }
    @catch (NSException *e) { return nil; }
}

+ (void)clearSavedSummary {
    [[NSUserDefaults standardUserDefaults] removeObjectForKey:kSummaryKey];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

+ (NSInteger)friendsCount {
    return (NSInteger)fdGetAllFriends().count;
}

@end