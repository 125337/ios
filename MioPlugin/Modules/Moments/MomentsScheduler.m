#import "MomentsScheduler.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import "MomentsConfig.h"
#import "../../Core/LogManager.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"

// ─────────────────────────────────────────────────────────────
// 朋友圈定时发送引擎（WCR MomentsScheduled 同款机制，逐条对应实证）：
//  存储：元数据数组存 NSUserDefaults；内容体归档写文件（Application Support/MioSched/<id>/）
//  驱动：15s 主线程 NSTimer + UIApplicationDidBecomeActiveNotification → tick（防重入）
//  状态机：pending→firing→(triggered|failed)；triggered 超 86400s 清理；firing 卡死重置
//  发布：重建 WCUploadTask/WCMediaItem（saveDataFromData: 等持久化接口，8.0.60 头文件实证）
//        → [MMContext currentContext getService:[WCFacade class]].uploadMgr addUploadTask:
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

// 拷贝单个媒体对象的数据文件+预览图（发帖页 dismiss 后临时文件会被清理，必须自留拷贝，WCR 同款）
// outPrev 传出预览拷贝路径（可缺失）；返回数据拷贝路径，nil=该媒体无效
// 探测链（WCMediaItem.h 头文件实证）：发表瞬间主文件可能尚未落盘，按存在性逐级兜底
static NSString *MioSchedCopyMedia(id item, NSString *dir, NSInteger idx, BOOL *outSight, NSString **outPrev, NSMutableDictionary *pathMap) {
    *outSight = NO;
    *outPrev = nil;
    SEL dataSels[] = { NSSelectorFromString(@"pathForData"), NSSelectorFromString(@"tmpPathForData"),
                       NSSelectorFromString(@"pathForExistData"), NSSelectorFromString(@"pathForHdData"),
                       NSSelectorFromString(@"pathForUhdData") };
    SEL sightSels[] = { NSSelectorFromString(@"pathForSightData"), NSSelectorFromString(@"tempPathForSightData"),
                        NSSelectorFromString(@"pathForAttachVideoData"), NSSelectorFromString(@"pathForTempAttachVideoData") };
    SEL prevSels[2] = { NSSelectorFromString(@"pathForPreview"), NSSelectorFromString(@"tmpPathForPreview") };
    SEL hasSightSel = NSSelectorFromString(@"hasSight");
    BOOL sight = NO;
    if ([item respondsToSelector:hasSightSel]) {
        sight = ((BOOL(*)(id, SEL))objc_msgSend)(item, hasSightSel);
    }
    *outSight = sight;
    NSString *dataPath = nil;
    if (sight) {
        int sn = (int)(sizeof(sightSels) / sizeof(sightSels[0]));
        for (int i = 0; i < sn && !dataPath; i++) {
            if (![item respondsToSelector:sightSels[i]]) continue;
            NSString *src = ((id(*)(id, SEL))objc_msgSend)(item, sightSels[i]);
            dataPath = MioSchedCopyFile(src, [dir stringByAppendingFormat:@"sight_%ld.dat", (long)idx]);
            if (dataPath && src.length) pathMap[src] = dataPath;
        }
    } else {
        int dn = (int)(sizeof(dataSels) / sizeof(dataSels[0]));
        for (int i = 0; i < dn && !dataPath; i++) {
            if (![item respondsToSelector:dataSels[i]]) continue;
            NSString *src = ((id(*)(id, SEL))objc_msgSend)(item, dataSels[i]);
            dataPath = MioSchedCopyFile(src, [dir stringByAppendingFormat:@"data_%ld.dat", (long)idx]);
            if (dataPath && src.length) pathMap[src] = dataPath;
        }
    }
    for (int i = 0; i < 2 && !*outPrev; i++) {
        if (![item respondsToSelector:prevSels[i]]) continue;
        NSString *src = ((id(*)(id, SEL))objc_msgSend)(item, prevSels[i]);
        *outPrev = MioSchedCopyFile(src, [dir stringByAppendingFormat:@"prev_%ld.dat", (long)idx]);
        if (*outPrev && src.length) pathMap[src] = *outPrev;
    }
    return dataPath;
}

// 深遍历树，字符串值命中 pathMap 的替换为自留拷贝路径（WCR applyArchivedMediaPathsToDataItem 同款语义）
static id MioSchedRewritePaths(id obj, NSDictionary<NSString *, NSString *> *map) {
    if ([obj isKindOfClass:[NSDictionary class]]) {
        NSMutableDictionary *out = [NSMutableDictionary dictionaryWithCapacity:obj.count];
        for (id k in obj) {
            id v = MioSchedRewritePaths(obj[k], map);
            if (v) out[k] = v;
        }
        return out;
    }
    if ([obj isKindOfClass:[NSArray class]]) {
        NSMutableArray *out = [NSMutableArray arrayWithCapacity:obj.count];
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

        // 原帖字段抽取（WCUploadTask 头文件实证：contentDesc/type/isPrivate/locationInfo/withUserList/extBean 均存在）
        SEL cdSel = NSSelectorFromString(@"contentDesc");
        SEL typeSel = NSSelectorFromString(@"type");
        SEL privSel = NSSelectorFromString(@"isPrivate");
        SEL locSel = NSSelectorFromString(@"locationInfo");
        SEL withSel = NSSelectorFromString(@"withUserList");
        SEL extSel = NSSelectorFromString(@"extBean");
        SEL mlSel = NSSelectorFromString(@"mediaList");

        NSString *contentDesc = @"";
        if ([task respondsToSelector:cdSel]) {
            id v = ((id(*)(id, SEL))objc_msgSend)(task, cdSel);
            if ([v isKindOfClass:[NSString class]]) contentDesc = v;
        }
        // 原帖 task 是微信发帖页构造的完整对象：type 保真存档，发布原样回填（自猜字段已被实测打脸）
        id typeVal = ([task respondsToSelector:typeSel]) ? ((id(*)(id, SEL))objc_msgSend)(task, typeSel) : nil;
        id privVal = ([task respondsToSelector:privSel]) ? ((id(*)(id, SEL))objc_msgSend)(task, privSel) : nil;
        id locVal = ([task respondsToSelector:locSel]) ? ((id(*)(id, SEL))objc_msgSend)(task, locSel) : nil;
        id withVal = ([task respondsToSelector:withSel]) ? ((id(*)(id, SEL))objc_msgSend)(task, withSel) : nil;
        id extVal = ([task respondsToSelector:extSel]) ? ((id(*)(id, SEL))objc_msgSend)(task, extSel) : nil;

        // 发帖数据本体是 WCDataItem（WCR WCRefineMomentsMonitor 实证）：task.dataItem 保真归档，
        // 发布端解档后 setDataItem: 回灌，addUploadTask 流水线才认
        SEL diSel = NSSelectorFromString(@"dataItem");
        id dataItem = ([task respondsToSelector:diSel]) ? ((id(*)(id, SEL))objc_msgSend)(task, diSel) : nil;
        if (!dataItem) {
            WPLog(@"Moments", @"[Sched] capture aborted: task has no dataItem, fallback to native publish");
            WPShowToast(@"该帖子类型暂不支持定时");
            return NO;
        }

        // 媒体拷贝（WCR FUN_0058b544 同款：拦截时自留拷贝防 dismiss 清理），同时收集 src→dst 路径映射
        NSString *taskId = [[NSUUID UUID] UUIDString];
        NSString *dir = [self taskDir:taskId];
        NSMutableDictionary<NSString *, NSString *> *pathMap = [NSMutableDictionary dictionary];
        NSMutableArray<NSDictionary *> *mediaDicts = [NSMutableArray array];
        NSInteger origMediaCount = 0;
        if ([task respondsToSelector:mlSel]) {
            NSArray *ml = ((id(*)(id, SEL))objc_msgSend)(task, mlSel);
            if ([ml isKindOfClass:[NSArray class]]) {
                origMediaCount = ml.count;
                NSInteger idx = 0;
                for (id item in ml) {
                    BOOL isSight = NO;
                    NSString *prevPath = nil;
                    NSString *dp = MioSchedCopyMedia(item, dir, idx, &isSight, &prevPath, pathMap);
                    if (!dp) {
                        WPLog(@"Moments", @"[Sched] media %ld copy failed, skip", (long)idx);
                        idx++;
                        continue;
                    }
                    [mediaDicts addObject:@{ @"dataPath": dp, @"prevPath": prevPath ?: @"", @"sight": @(isSight) }];
                    idx++;
                }
            }
        }
        // 原帖有媒体但一条都没保住 → 绝不生成残缺任务（实测残缺任务被微信静默丢弃、假成功），
        // 放行原生发表链让帖子立刻发出
        if (origMediaCount > 0 && mediaDicts.count == 0) {
            MioSchedDeleteTaskDir(taskId);
            WPLog(@"Moments", @"[Sched] capture aborted: %ld medias all unreadable, fallback to native publish", (long)origMediaCount);
            WPShowToast(@"媒体读取失败，已按正常发表");
            return NO;
        }

        // 无媒体且无文字 → 无效不接管（放行让微信正常报错）
        if (mediaDicts.count == 0 && contentDesc.length == 0) return NO;

        // dataItem 的 contentObj 深遍历回写自留拷贝路径（WCR applyArchivedMediaPathsToDataItem 同款）
        if (pathMap.count > 0) {
            id contentObj = nil;
            @try {
                contentObj = [dataItem valueForKey:@"contentObj"] ?: [dataItem valueForKey:@"content"];
            } @catch (NSException *e) {
                contentObj = nil;
            }
            if (contentObj) {
                id rewritten = MioSchedRewritePaths(contentObj, pathMap);
                @try {
                    [dataItem setValue:rewritten forKey:@"contentObj"];
                } @catch (NSException *e) {
                    WPLog(@"Moments", @"[Sched] contentObj rewrite failed: %@", e.name);
                }
            }
        }

        // payload 归档（NSKeyedArchiver：NSString/NSData/原 task 附属对象，发布端原样恢复）
        NSMutableDictionary *payload = [NSMutableDictionary dictionary];
        payload[@"type"] = typeVal ?: @(mediaDicts.count > 0 ? 1 : 2); // 原帖 type 保真；缺失时才按媒体数推断
        payload[@"contentDesc"] = contentDesc;
        payload[@"medias"] = mediaDicts;
        if (privVal) payload[@"isPrivate"] = privVal;
        if (locVal) payload[@"locationInfo"] = locVal;
        if (withVal) payload[@"withUserList"] = withVal;
        if (extVal) payload[@"extBean"] = extVal;
        NSData *payloadData = [NSKeyedArchiver archivedDataWithRootObject:payload requiringSecureCoding:NO error:nil];
        if (!payloadData || ![payloadData writeToFile:[dir stringByAppendingPathComponent:@"payload.archived"] atomically:YES]) {
            MioSchedDeleteTaskDir(taskId);
            WPShowToast(@"定时任务创建失败");
            return NO;
        }

        // dataItem 归档（发帖数据本体，WCR 同款；NSKeyedArchiver 原样保真）
        NSData *diData = [NSKeyedArchiver archivedDataWithRootObject:dataItem requiringSecureCoding:NO error:nil];
        if (!diData || ![diData writeToFile:[dir stringByAppendingPathComponent:@"dataitem.archived"] atomically:YES]) {
            MioSchedDeleteTaskDir(taskId);
            WPLog(@"Moments", @"[Sched] capture aborted: dataItem archive failed");
            WPShowToast(@"该帖子类型暂不支持定时");
            return NO;
        }

        // 预览文本（列表显示；按 UTF-16 截断，最多切坏 emoji 显示无害）
        NSString *preview = contentDesc.length > 0 ? contentDesc : [NSString stringWithFormat:@"[媒体 x%lu]", (unsigned long)mediaDicts.count];
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
        WPLog(@"Moments", @"[Sched] task created id=%@ fireAt=%.0f medias=%lu", taskId, fireAt, (unsigned long)mediaDicts.count);
        return YES;
    } @catch (NSException *e) {
        WPLog(@"Moments", @"[Sched] capture error: %@", e);
        return NO;
    }
}

#pragma mark - 发布器（tick 到时调用）

// 重建 WCUploadTask → 原生发布链（MMContext→WCFacade→uploadMgr→addUploadTask:）
// 此刻发帖页会话为空（capture 时已清标记），不会触发自家 hook 自拦截
static BOOL MioSchedPublishTask(NSDictionary *t, NSDictionary *payload, NSString *dir) {
    @try {
    Class taskCls = objc_getClass("WCUploadTask");
    Class mediaCls = objc_getClass("WCMediaItem");
    if (!taskCls || !mediaCls) { WPLog(@"Moments", @"[Sched] publish refused: WCUploadTask/WCMediaItem class missing"); return NO; }

    id newTask = [[taskCls alloc] init];
    if (!newTask) { WPLog(@"Moments", @"[Sched] publish refused: WCUploadTask alloc failed"); return NO; }
    void (^set)(NSString *, id) = ^(NSString *prop, id v) {
        SEL s = NSSelectorFromString(prop);
        if ([newTask respondsToSelector:s]) ((void(*)(id, SEL, id))objc_msgSend)(newTask, s, v);
    };

    NSString *contentDesc = payload[@"contentDesc"] ?: @"";
    NSArray *medias = [payload[@"medias"] isKindOfClass:[NSArray class]] ? payload[@"medias"] : @[];
    NSMutableArray *newMediaList = [NSMutableArray array];
    for (NSDictionary *m in medias) {
        if (![m isKindOfClass:[NSDictionary class]]) continue;
        NSString *dp = m[@"dataPath"];
        if (dp.length == 0) continue;
        id mi = [[mediaCls alloc] init];
        if (!mi) continue;
        if ([m[@"sight"] boolValue]) {
            // 视频：源路径直存（大文件不进内存），封面走 savePreviewFromPath:
            if (![mi respondsToSelector:NSSelectorFromString(@"saveSightDataFromSourcePath:")]) continue;
            ((void(*)(id, SEL, id))objc_msgSend)(mi, NSSelectorFromString(@"saveSightDataFromSourcePath:"), dp);
        } else {
            NSData *data = [NSData dataWithContentsOfFile:dp];
            if (!data) continue;
            ((void(*)(id, SEL, id))objc_msgSend)(mi, NSSelectorFromString(@"saveDataFromData:"), data);
        }
        NSString *pp = m[@"prevPath"];
        if (pp.length && [mi respondsToSelector:NSSelectorFromString(@"savePreviewFromPath:")]) {
            ((void(*)(id, SEL, id))objc_msgSend)(mi, NSSelectorFromString(@"savePreviewFromPath:"), pp);
        }
        [newMediaList addObject:mi];
    }
    if (medias.count > 0 && newMediaList.count == 0) {
        WPLog(@"Moments", @"[Sched] publish refused: %lu medias in payload but none rebuilt (data files lost)", (unsigned long)medias.count);
        return NO;
    }

    // 字段回填：仅设已验证安全的表面字段；发布数据本体走 dataItem（tail24 深字段实测引发微信内部 BAD_ACCESS）
    set(@"setContentDesc:", contentDesc);
    set(@"setType:", payload[@"type"] ?: @(medias.count > 0 ? 1 : 2));
    set(@"setPostSource:", @1);
    set(@"setIsSyncToWeibo:", @0);
    set(@"setIsSyncToFacebook:", @0);
    if (newMediaList.count > 0) set(@"setMediaList:", newMediaList);
    if (payload[@"isPrivate"]) set(@"setIsPrivate:", payload[@"isPrivate"]);
    if (payload[@"locationInfo"]) set(@"setLocationInfo:", payload[@"locationInfo"]);
    if (payload[@"withUserList"]) set(@"setWithUserList:", payload[@"withUserList"]);
    if (payload[@"extBean"]) set(@"setExtBean:", payload[@"extBean"]);

    // 发帖数据本体：解档原帖 WCDataItem（路径已在 capture 时回写为自留拷贝），回灌 task
    NSString *diFile = [dir stringByAppendingPathComponent:@"dataitem.archived"];
    NSData *diData = [NSData dataWithContentsOfFile:diFile];
    if (!diData) {
        WPLog(@"Moments", @"[Sched] publish refused: dataitem.archived missing");
        return NO;
    }
    id dataItem = [NSKeyedUnarchiver unarchiveObjectWithData:diData];
    if (!dataItem) {
        WPLog(@"Moments", @"[Sched] publish refused: dataItem unarchive invalid");
        return NO;
    }
    set(@"setDataItem:", dataItem);
    WPLog(@"Moments", @"[Sched] publish task: type=%@ medias=%lu text=%lu withDataItem=YES",
          payload[@"type"] ?: @"?", (unsigned long)newMediaList.count, (unsigned long)contentDesc.length);

    // 发布链（WCR 同款实证）：MMContext currentContext → getService:WCFacade → uploadMgr → addUploadTask:
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
    ((void(*)(id, SEL, id))objc_msgSend)(uploadMgr, addSel, newTask);
    WPLog(@"Moments", @"[Sched] published id=%@", t[@"id"]);
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

            // 发布（读归档 → 重建 task → 原生链）
            NSString *dir = [[MomentsScheduler schedRootDir] stringByAppendingPathComponent:t[@"id"] ?: @""];
            NSData *pd = [NSData dataWithContentsOfFile:[dir stringByAppendingPathComponent:@"payload.archived"]];
            NSDictionary *payload = nil;
            if (!pd) {
                WPLog(@"Moments", @"[Sched] publish FAILED id=%@: payload.archived missing", t[@"id"]);
            } else {
                payload = (NSDictionary *)[NSKeyedUnarchiver unarchiveObjectWithData:pd];
                if (![payload isKindOfClass:[NSDictionary class]]) {
                    payload = nil;
                    WPLog(@"Moments", @"[Sched] publish FAILED id=%@: payload unarchive invalid", t[@"id"]);
                }
            }
            BOOL ok = (payload != nil) && MioSchedPublishTask(t, payload, dir);

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
