#import "MomentsScheduler.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import "MomentsConfig.h"
#import "../../Core/LogManager.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"

// ─────────────────────────────────────────────────────────────
// 朋友圈定时发送引擎（WCR MomentsScheduled 同款机制）：
//  存储：元数据数组存 NSUserDefaults；dataItem 本体归档写文件（Application Support/MioSched/<id>/）
//  驱动：15s 主线程 NSTimer + UIApplicationDidBecomeActiveNotification → tick（防重入）
//  状态机：pending→firing→(triggered|failed)；triggered 超 86400s 清理；firing 卡死重置
//  拦截：addUploadTask: 参数就是 WCDataItem 本体（tail26 frida 实锤，desc 含 username/createtime）
//        → 归档 dataItem + mediaList 路径回填自留拷贝 → return YES 接管（原生链不跑）
//  发布：解档 dataItem → 原样传回 addUploadTask:（重建 WCUploadTask 传参必被当 dataItem 误读
//        → 静默丢弃 = tail23 假成功根因）
// ─────────────────────────────────────────────────────────────

@implementation MomentsScheduler

+ (instancetype)shared {
    static MomentsScheduler *inst = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ inst = [[MomentsScheduler alloc] init]; });
    return inst;
}

static NSString * const kMioSchedTasksKey = @"com.mio.moments.scheduled.tasks.v1";
static const double kMioSchedMinLeadSeconds = 30;      // fireDate 距今下限（WCR 同款）
static const int    kMioSchedMaxTasks = 999;           // 活跃任务上限（WCR 同款）
static const double kMioSchedTriggeredTTL = 86400;     // triggered 保留 1 天后清理
static const double kMioSchedFiringStale = 300;        // firing 超 5 分钟视为卡死重置

static double MioSchedNextFireAt(NSDictionary *t, double now); // 前置声明（公开包装器在前）

#pragma mark - 发帖页会话（内存态；UI 线程写、上传线程读）

static NSDate *gSchedPendingFireDate = nil;
static NSLock *MioSchedSessionLock(void) {
    static NSLock *lock = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ lock = [[NSLock alloc] init]; });
    return lock;
}
+ (void)schedSetPendingFireDate:(NSDate *)date {
    [MioSchedSessionLock() lock];
    gSchedPendingFireDate = date;
    [MioSchedSessionLock() unlock];
}
+ (NSDate *)schedPendingFireDate {
    [MioSchedSessionLock() lock];
    NSDate *d = gSchedPendingFireDate;
    [MioSchedSessionLock() unlock];
    return d;
}

#pragma mark - 目录

+ (NSString *)schedRootDir {
    static NSString *root = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        NSString *base = NSSearchPathForDirectoriesInDomains(NSApplicationSupportDirectory, NSUserDomainMask, YES).firstObject;
        root = [base stringByAppendingPathComponent:@"MioSched"];
        [[NSFileManager defaultManager] createDirectoryAtPath:root withIntermediateDirectories:YES attributes:nil error:nil];
    });
    return root;
}
+ (NSString *)taskDir:(NSString *)taskId {
    NSString *d = [[self schedRootDir] stringByAppendingPathComponent:taskId];
    [[NSFileManager defaultManager] createDirectoryAtPath:d withIntermediateDirectories:YES attributes:nil error:nil];
    return d;
}
static void MioSchedDeleteTaskDir(NSString *taskId) {
    if (taskId.length == 0) return;
    NSString *root = [MomentsScheduler schedRootDir];
    NSString *d = [root stringByAppendingPathComponent:taskId];
    // 防越权删除：仅删 MioSched 一级子目录
    if (taskId.length > 0 && [d stringByDeletingLastPathComponent] &&
        [[d stringByDeletingLastPathComponent] isEqualToString:root]) {
        [[NSFileManager defaultManager] removeItemAtPath:d error:nil];
    }
}

#pragma mark - 工具

+ (NSString *)formatFireDate:(double)fireAt {
    if (fireAt <= 0) return @"-";
    NSDateFormatter *f = [[NSDateFormatter alloc] init];
    f.dateFormat = @"MM-dd HH:mm";
    return [f stringFromDate:[NSDate dateWithTimeIntervalSince1970:fireAt]];
}

// 循环模式摘要（scheduleMode：0 单次 1 每天 2 每N小时 3 每N分钟 4 每周 5 每月 6 循环间隔）
+ (NSString *)repeatSummaryForDict:(NSDictionary *)t {
    int mode = [t[@"scheduleMode"] intValue];
    switch (mode) {
        case 1: return [NSString stringWithFormat:@"每天 %02d:%02d", MAX(0, MIN(23, [t[@"hour"] intValue])), MAX(0, MIN(59, [t[@"minute"] intValue]))];
        case 2: return [NSString stringWithFormat:@"每 %ld 小时", (long)MAX(1, MIN(23, [t[@"intervalHours"] intValue] ?: 2))];
        case 3: return [NSString stringWithFormat:@"每 %ld 分钟", (long)MAX(1, MIN(59, [t[@"intervalMinutes"] intValue] ?: 30))];
        case 4: {
            NSArray *names = @[@"日", @"一", @"二", @"三", @"四", @"五", @"六"];
            int wd = MAX(1, MIN(7, [t[@"weekday"] intValue]));
            return [NSString stringWithFormat:@"每周%@", names[wd - 1]];
        }
        case 5: return [NSString stringWithFormat:@"每月 %d 日", MAX(1, MIN(31, [t[@"dayOfMonth"] intValue]))];
        case 6: return [NSString stringWithFormat:@"循环每 %ld 分钟", (long)MAX(2, MIN(10080, [t[@"loopIntervalMinutes"] intValue] ?: 60))];
        default: return @"单次";
    }
}

static int MioSchedWeekdayOf(double epoch) {
    NSDateComponents *c = [[NSCalendar currentCalendar] components:NSCalendarUnitWeekday fromDate:[NSDate dateWithTimeIntervalSince1970:epoch]];
    return (int)c.weekday; // 1=周日..7=周六
}

// 下轮触发时间（WCR 同款语义）：now 为基准
+ (double)nextFireAtForTask:(NSDictionary *)t fromTime:(double)now {
    return MioSchedNextFireAt(t, now);
}
static double MioSchedNextFireAt(NSDictionary *t, double now) {
    NSCalendar *cal = [NSCalendar currentCalendar];
    int mode = [t[@"scheduleMode"] intValue];
    if (mode == 1) { // 每天 hour:minute:00，已过则 +1 天
        NSDateComponents *d = [cal components:NSCalendarUnitYear|NSCalendarUnitMonth|NSCalendarUnitDay fromDate:[NSDate dateWithTimeIntervalSince1970:now]];
        d.hour = MAX(0, MIN(23, [t[@"hour"] intValue]));
        d.minute = MAX(0, MIN(59, [t[@"minute"] intValue]));
        d.second = 0;
        double cand = [cal dateFromComponents:d].timeIntervalSince1970;
        if (cand <= now) cand += 86400;
        return cand;
    }
    if (mode == 2) return now + MAX(1, MIN(23, [t[@"intervalHours"] intValue] ?: 2)) * 3600;
    if (mode == 3) return now + MAX(1, MIN(59, [t[@"intervalMinutes"] intValue] ?: 30)) * 60;
    if (mode == 4) { // 每周：往后找 weekday 匹配且未过的日子（最多 8 天，fallback +7 天）
        int wd = MAX(1, MIN(7, [t[@"weekday"] intValue]));
        for (int i = 0; i < 8; i++) {
            NSDateComponents *d = [cal components:NSCalendarUnitYear|NSCalendarUnitMonth|NSCalendarUnitDay fromDate:[NSDate dateWithTimeIntervalSince1970:now + i * 86400]];
            d.hour = MAX(0, MIN(23, [t[@"hour"] intValue]));
            d.minute = MAX(0, MIN(59, [t[@"minute"] intValue]));
            d.second = 0;
            double ts = [cal dateFromComponents:d].timeIntervalSince1970;
            if (ts > now && MioSchedWeekdayOf(ts) == wd) return ts;
        }
        return now + 604800;
    }
    if (mode == 5) { // 每月 dayOfMonth（该月无此日跳过，最多试 24 个月，fallback +30 天）
        int dom = MAX(1, MIN(31, [t[@"dayOfMonth"] intValue]));
        NSDateComponents *b = [cal components:NSCalendarUnitYear|NSCalendarUnitMonth fromDate:[NSDate dateWithTimeIntervalSince1970:now]];
        for (int i = 0; i < 24; i++) {
            NSDateComponents *d = [b copy];
            d.month += i;
            d.day = dom;
            d.hour = MAX(0, MIN(23, [t[@"hour"] intValue]));
            d.minute = MAX(0, MIN(59, [t[@"minute"] intValue]));
            d.second = 0;
            NSDate *dt = [cal dateFromComponents:d];
            if (!dt) continue;
            NSDateComponents *chk = [cal components:NSCalendarUnitDay fromDate:dt];
            if (chk.day != dom) continue; // 被进位=该月无此日
            if (dt.timeIntervalSince1970 > now) return dt.timeIntervalSince1970;
        }
        return now + 2592000;
    }
    if (mode == 6) return now + MAX(2, MIN(10080, [t[@"loopIntervalMinutes"] intValue] ?: 60)) * 60;
    return now; // mode 0 不走到这
}

#pragma mark - 存储（NSUserDefaults 元数据数组）

- (NSArray<NSDictionary *> *)allTasks {
    NSArray *v = [[NSUserDefaults standardUserDefaults] arrayForKey:kMioSchedTasksKey];
    NSMutableArray *out = [NSMutableArray array];
    for (NSDictionary *d in v) {
        if ([d isKindOfClass:[NSDictionary class]]) [out addObject:d];
    }
    return out;
}
- (void)saveTasks:(NSArray<NSDictionary *> *)tasks {
    [[NSUserDefaults standardUserDefaults] setObject:tasks forKey:kMioSchedTasksKey];
    [[NSUserDefaults standardUserDefaults] synchronize];
}
- (void)removeTaskWithId:(NSString *)taskId {
    NSMutableArray *ts = [[self allTasks] mutableCopy];
    NSMutableArray *kept = [NSMutableArray array];
    for (NSDictionary *d in ts) {
        if (![d[@"id"] isEqualToString:taskId]) [kept addObject:d];
    }
    [self saveTasks:kept];
    MioSchedDeleteTaskDir(taskId);
}
- (void)removeAllTasks {
    [self saveTasks:@[]];
    [[NSFileManager defaultManager] removeItemAtPath:[MomentsScheduler schedRootDir] error:nil];
    [[NSFileManager defaultManager] createDirectoryAtPath:[MomentsScheduler schedRootDir] withIntermediateDirectories:YES attributes:nil error:nil];
}

#pragma mark - 拦截：抽取 WCUploadTask → 拷媒体 → 建任务

static NSString *MioSchedCopyFile(NSString *src, NSString *dstPath) {
    if (src.length == 0) return nil;
    NSFileManager *fm = [NSFileManager defaultManager];
    if (![fm fileExistsAtPath:src]) return nil;
    NSData *data = [NSData dataWithContentsOfFile:src];
    if (!data) return nil;
    return [data writeToFile:dstPath atomically:YES] ? dstPath : nil;
}

// 判断是否本沙盒文件路径（微信媒体路径形态：/var/mobile/Containers/... Documents/tmp/Library）
static BOOL MioSchedLooksLikeSandboxPath(NSString *s) {
    if (s.length < 8 || s.length > 512) return NO;
    if (![s hasPrefix:@"/"]) return NO;
    return [s containsString:@"Containers/Data/Application/"] ||
           [s containsString:@"Containers/Shared/AppGroup/"] ||
           [s containsString:@"/Documents/"] || [s containsString:@"/tmp/"] ||
           [s containsString:@"/Library/"];
}

// mediaList 子树全扫：路径字符串 → 拷自留 → pathMap（WCR FUN_010c894c 同款语义：媒体项内
// 路径逐个回填；mediaList 为数组、元素为路径键值对 dict、live 子结构递归）。返回成功拷贝数
static NSUInteger MioSchedCollectMediaPaths(id obj, NSString *dir, NSUInteger seq, NSMutableDictionary *pathMap) {
    if ([obj isKindOfClass:[NSArray class]]) {
        NSUInteger n = 0;
        for (id v in obj) n += MioSchedCollectMediaPaths(v, dir, seq + n, pathMap);
        return n;
    }
    if ([obj isKindOfClass:[NSDictionary class]]) {
        NSUInteger n = 0;
        for (id k in obj) {
            id v = [(NSDictionary *)obj objectForKey:k];
            n += MioSchedCollectMediaPaths(v, dir, seq + n, pathMap);
        }
        return n;
    }
    if ([obj isKindOfClass:[NSString class]]) {
        NSString *src = obj;
        if (!MioSchedLooksLikeSandboxPath(src)) return 0;
        NSString *ext = src.pathExtension.length ? [NSString stringWithFormat:@".%@", src.pathExtension] : @"";
        NSString *dst = [dir stringByAppendingFormat:@"media_%lu%@", (unsigned long)seq, ext];
        NSString *cp = MioSchedCopyFile(src, dst);
        if (!cp) {
            WPLog(@"Moments", @"[Sched] media copy failed: %@", src.lastPathComponent);
            return 0;
        }
        pathMap[src] = cp;
        return 1;
    }
    return 0;
}

// 深遍历树，字符串值命中 pathMap 的替换为自留拷贝路径（WCR applyArchivedMediaPathsToDataItem 同款语义）
static id MioSchedRewritePaths(id obj, NSDictionary<NSString *, NSString *> *map) {
    if ([obj isKindOfClass:[NSDictionary class]]) {
        NSDictionary *d = obj;
        NSMutableDictionary *out = [NSMutableDictionary dictionaryWithCapacity:d.count];
        for (id k in obj) {
            id v = MioSchedRewritePaths(obj[k], map);
            if (v) out[k] = v;
        }
        return out;
    }
    if ([obj isKindOfClass:[NSArray class]]) {
        NSArray *a = obj;
        NSMutableArray *out = [NSMutableArray arrayWithCapacity:a.count];
        for (id v in obj) {
            id nv = MioSchedRewritePaths(v, map);
            if (nv) [out addObject:nv];
        }
        return out;
    }
    if ([obj isKindOfClass:[NSString class]]) {
        NSString *rep = map[obj];
        return rep ?: obj;
    }
    return obj;
}

+ (BOOL)captureUploadTask:(id)task {
    @try {
        if (![MomentsConfig shared].schedEnabled) return NO;
        NSDate *pending = [self schedPendingFireDate];
        if (!pending) return NO;
        double fireAt = pending.timeIntervalSince1970;
        double now = [NSDate date].timeIntervalSince1970;
        [self schedSetPendingFireDate:nil]; // 一进拦截先清标记（防循环，恢复发布走原生）
        if (fireAt < now + kMioSchedMinLeadSeconds) return NO; // 已过期：放行照常发
        if (!task) return NO;

        NSArray *exist = [[MomentsScheduler shared] allTasks];
        int active = 0;
        for (NSDictionary *d in exist) {
            NSString *st = d[@"state"] ?: @"";
            if ([st isEqualToString:@"pending"] || [st isEqualToString:@"firing"]) active++;
        }
        if (active >= kMioSchedMaxTasks) {
            WPShowToast(@"定时任务已达上限");
            return NO;
        }

        // tail26 frida 实锤：addUploadTask: 的参数就是 WCDataItem 本体（desc 含 username/createtime），
        // 非发帖数据项（其它业务的 DataItem）放行
        Class diCls = objc_getClass("WCDataItem");
        if (!diCls || ![task isKindOfClass:diCls]) return NO;

        NSString *taskId = [[NSUUID UUID] UUIDString];
        NSString *dir = [self taskDir:taskId];

        // contentObj（发帖内容树：contentDesc/mediaList/...，WCR applyArchivedMediaPaths 同款读取）
        id contentObj = nil;
        @try {
            contentObj = [task valueForKey:@"contentObj"] ?: [task valueForKey:@"content"];
        } @catch (NSException *e) { contentObj = nil; }

        // mediaList（数组，元素为路径键值对 dict，live 子结构递归——WCR FUN_010c894c 实证）
        id mediaList = nil;
        if ([contentObj isKindOfClass:[NSDictionary class]]) {
            id v = [(NSDictionary *)contentObj objectForKey:@"mediaList"];
            if ([v isKindOfClass:[NSArray class]] || [v isKindOfClass:[NSDictionary class]]) mediaList = v;
        }
        if (!mediaList) {
            @try {
                id v = [contentObj valueForKey:@"mediaList"];
                if ([v isKindOfClass:[NSArray class]] || [v isKindOfClass:[NSDictionary class]]) mediaList = v;
            } @catch (NSException *e) {}
        }
        NSUInteger mediaCount = ([mediaList respondsToSelector:@selector(count)] ? [(NSArray *)mediaList count] : 0);

        // 媒体自留拷贝（防发帖页 dismiss 后 tmp 清理，WCR 同款）：mediaList 子树全扫路径字符串
        NSMutableDictionary<NSString *, NSString *> *pathMap = [NSMutableDictionary dictionary];
        NSUInteger copied = MioSchedCollectMediaPaths(mediaList, dir, 0, pathMap);
        if (mediaCount > 0 && copied == 0) {
            MioSchedDeleteTaskDir(taskId);
            WPLog(@"Moments", @"[Sched] capture aborted: %lu medias all unreadable, fallback to native publish", (unsigned long)mediaCount);
            WPShowToast(@"媒体读取失败，已按正常发表");
            return NO; // 残缺任务必假成功（tail23 实证），宁可放行
        }

        // 自留路径深替换写回 contentObj（WCR applyArchivedMediaPathsToDataItem 同款）
        if (pathMap.count > 0 && contentObj) {
            id rewritten = MioSchedRewritePaths(contentObj, pathMap);
            @try {
                [task setValue:rewritten forKey:@"contentObj"];
            } @catch (NSException *e) {
                WPLog(@"Moments", @"[Sched] contentObj rewrite failed: %@", e.name);
            }
        }

        // dataItem 本体归档（encodeWithCoder: 头文件实证；文字/权限/媒体引用全在里面，零重建零失真）
        NSData *diData = [NSKeyedArchiver archivedDataWithRootObject:task requiringSecureCoding:NO error:nil];
        if (!diData || ![diData writeToFile:[dir stringByAppendingPathComponent:@"dataitem.archived"] atomically:YES]) {
            MioSchedDeleteTaskDir(taskId);
            WPLog(@"Moments", @"[Sched] capture aborted: dataItem archive failed");
            WPShowToast(@"该帖子类型暂不支持定时");
            return NO;
        }

        // 预览文本（列表显示；按 UTF-16 截断，最多切坏 emoji 显示无害）
        NSString *preview = nil;
        @try {
            id cd = [task valueForKey:@"contentDesc"];
            if ([cd isKindOfClass:[NSString class]]) preview = cd;
        } @catch (NSException *e) {}
        if (preview.length == 0) preview = [NSString stringWithFormat:@"[媒体 x%lu]", (unsigned long)mediaCount];
        if (preview.length > 40) preview = [preview substringToIndex:40];

        NSMutableArray *ts = [exist mutableCopy];
        [ts addObject:@{
            @"id": taskId,
            @"fireAt": @(fireAt),
            @"enabled": @YES,
            @"state": @"pending",
            @"preview": preview,
            @"scheduleMode": @0,   // 默认单次；列表页可改循环
            @"repeatLimit": @0,
            @"fireCount": @0,
            @"lastFiredAt": @0,
            @"triggeredAt": @0,
            @"hour": @9, @"minute": @0,
            @"intervalHours": @2, @"intervalMinutes": @30,
            @"weekday": @1, @"dayOfMonth": @1,
            @"loopIntervalMinutes": @60,
        }];
        [[MomentsScheduler shared] saveTasks:ts];
        NSDateFormatter *f = [[NSDateFormatter alloc] init];
        f.dateFormat = @"HH:mm";
        WPShowToast([NSString stringWithFormat:@"已加入定时发送 %@ 发表", [f stringFromDate:pending]]);
        WPLog(@"Moments", @"[Sched] task created id=%@ fireAt=%.0f medias=%lu copied=%lu", taskId, fireAt, (unsigned long)mediaCount, (unsigned long)copied);
        return YES; // 接管：本次不发表（原生 addUploadTask 不执行，原生链不跑）
    } @catch (NSException *e) {
        WPLog(@"Moments", @"[Sched] capture error: %@", e);
        return NO;
    }
}

#pragma mark - 发布器（tick 到时调用）

// 解档 dataItem → 原样传回 addUploadTask:（WCR 同款；tail25 frida 实锤 addUploadTask 参数类型
// 就是 WCDataItem，重建 WCUploadTask 传参必被当 dataItem 误读 → 静默丢弃 = tail23 假成功根因）
// 此刻发帖页会话为空（capture 时已清标记），不会触发自家 hook 自拦截
static BOOL MioSchedPublishTask(NSDictionary *t, NSString *dir) {
    @try {
        NSString *diFile = [dir stringByAppendingPathComponent:@"dataitem.archived"];
        NSData *diData = [NSData dataWithContentsOfFile:diFile];
        if (!diData) {
            WPLog(@"Moments", @"[Sched] publish refused: dataitem.archived missing");
            return NO;
        }
        id dataItem = [NSKeyedUnarchiver unarchiveObjectWithData:diData];
        Class diCls = objc_getClass("WCDataItem");
        if (!dataItem || !diCls || ![dataItem isKindOfClass:diCls]) {
            WPLog(@"Moments", @"[Sched] publish refused: dataItem unarchive invalid");
            return NO;
        }

        Class ctxCls = objc_getClass("MMContext");
        Class facadeCls = objc_getClass("WCFacade");
        if (!ctxCls || !facadeCls) { WPLog(@"Moments", @"[Sched] publish refused: MMContext/WCFacade class missing"); return NO; }
        id ctx = ((id(*)(id, SEL))objc_msgSend)((id)ctxCls, NSSelectorFromString(@"currentContext"));
        if (!ctx) { WPLog(@"Moments", @"[Sched] publish refused: currentContext nil"); return NO; }
        id facade = ((id(*)(id, SEL, id))objc_msgSend)(ctx, NSSelectorFromString(@"getService:"), facadeCls);
        if (!facade) { WPLog(@"Moments", @"[Sched] publish refused: WCFacade service nil"); return NO; }
        id uploadMgr = ((id(*)(id, SEL))objc_msgSend)(facade, NSSelectorFromString(@"uploadMgr"));
        if (!uploadMgr) { WPLog(@"Moments", @"[Sched] publish refused: uploadMgr nil"); return NO; }
        SEL addSel = NSSelectorFromString(@"addUploadTask:");
        if (![uploadMgr respondsToSelector:addSel]) { WPLog(@"Moments", @"[Sched] publish refused: no addUploadTask: selector"); return NO; }
        ((void(*)(id, SEL, id))objc_msgSend)(uploadMgr, addSel, dataItem);
        WPLog(@"Moments", @"[Sched] published id=%@ withDataItem=YES", t[@"id"]);
        return YES;
    } @catch (NSException *e) {
        WPLog(@"Moments", @"[Sched] publish EXCEPTION: %@", e);
        return NO;
    }
}

#pragma mark - tick 状态机（主线程，实例方法）

- (void)tick {
    @try {
        if (![MomentsConfig shared].schedEnabled) return;
        static BOOL ticking = NO;
        if (ticking) return;
        ticking = YES;

        double now = [NSDate date].timeIntervalSince1970;
        NSMutableArray *ts = [[self allTasks] mutableCopy];
        BOOL dirty = NO;

        // 1) 清理：triggered 超 TTL 删除；firing 卡死（超 5 分钟）重置 pending
        for (NSUInteger i = ts.count; i-- > 0;) {
            NSDictionary *t = ts[i];
            NSString *st = t[@"state"] ?: @"";
            if ([st isEqualToString:@"triggered"] && [t[@"triggeredAt"] doubleValue] > 0
                && now - [t[@"triggeredAt"] doubleValue] > kMioSchedTriggeredTTL) {
                [ts removeObjectAtIndex:i];
                MioSchedDeleteTaskDir(t[@"id"]);
                dirty = YES;
            } else if ([st isEqualToString:@"firing"] && now - [t[@"fireAt"] doubleValue] > kMioSchedFiringStale) {
                NSMutableDictionary *nt = [t mutableCopy];
                nt[@"state"] = @"pending";
                ts[i] = nt;
                dirty = YES;
            }
        }

        // 2) 首个到期任务（WCR 同款：一次 tick 只处理一个）
        NSUInteger fireIdx = NSNotFound;
        for (NSUInteger i = 0; i < ts.count; i++) {
            NSDictionary *t = ts[i];
            BOOL enabled = [t[@"enabled"] boolValue];
            NSString *st = t[@"state"] ?: @"";
            double fireAt = [t[@"fireAt"] doubleValue];
            if (enabled && [st isEqualToString:@"pending"] && fireAt <= now) {
                fireIdx = i;
                break;
            }
        }
        if (fireIdx != NSNotFound) {
            NSMutableDictionary *t = [ts[fireIdx] mutableCopy];
            t[@"state"] = @"firing";
            t[@"lastFiredAt"] = @(now);
            ts[fireIdx] = t;
            dirty = YES;

            // 发布（解档 dataItem → 原生链）
            NSString *dir = [[MomentsScheduler schedRootDir] stringByAppendingPathComponent:t[@"id"] ?: @""];
            BOOL ok = MioSchedPublishTask(t, dir);

            if (ok) {
                int mode = [t[@"scheduleMode"] intValue];
                int fireCount = [t[@"fireCount"] intValue] + 1;
                int repeatLimit = [t[@"repeatLimit"] intValue];
                if (mode != 0 && !(repeatLimit > 0 && fireCount >= repeatLimit)) {
                    t[@"state"] = @"pending";
                    t[@"fireCount"] = @(fireCount);
                    t[@"fireAt"] = @(MioSchedNextFireAt(t, now));
                } else {
                    t[@"state"] = @"triggered";
                    t[@"enabled"] = @NO;
                    t[@"triggeredAt"] = @(now);
                    t[@"fireCount"] = @(fireCount);
                }
                WPShowToast(@"定时朋友圈已发表");
            } else {
                t[@"state"] = @"failed";
                WPShowToast(@"定时朋友圈发布失败");
                WPLog(@"Moments", @"[Sched] publish FAILED id=%@", t[@"id"]);
            }
            ts[fireIdx] = t;
            dirty = YES;
        }

        if (dirty) [self saveTasks:ts];
        ticking = NO;
    } @catch (NSException *e) {
        WPLog(@"Moments", @"[Sched] tick error: %@", e);
    }
}

#pragma mark - 引擎启动

- (void)start {
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        [NSTimer scheduledTimerWithTimeInterval:15
                                         target:self
                                       selector:@selector(tick)
                                       userInfo:nil
                                        repeats:YES];
        [[NSNotificationCenter defaultCenter] addObserver:self
                                                 selector:@selector(tick)
                                                     name:UIApplicationDidBecomeActiveNotification
                                                   object:nil];
        WPLog(@"Moments", @"[Sched] engine started (15s tick)");
    });
}

@end
