#import "MioMomentsSchedListController.h"
#import "../../Modules/Moments/MomentsConfig.h"
#import "../../Core/MioAlertHelper.h"

// 朋友圈定时发送任务列表页（微信引擎渲染；数据源 MomentsScheduler）
// 每任务一组：预览/状态 + 循环模式选择 + 改期/启停/删除；单次与循环任务均可改期（改后循环任务当轮生效，下轮按模式重排）
@implementation MioMomentsSchedListController {
    NSInteger _editingIdx; // 当前改期任务索引
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"定时任务";
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self wpRebuildWeChatTable];
    [self buildUI];
}

- (void)reloadTable {
    [self wpRebuildWeChatTable];
    [self buildUI];
}

#pragma mark - 状态文案

- (NSString *)stateTextForDict:(NSDictionary *)t {
    NSString *st = t[@"state"] ?: @"";
    if ([st isEqualToString:@"triggered"]) return @"已发表"; // triggered 恒为停用态，需优先于「已停用」展示
    if (![t[@"enabled"] boolValue]) return @"已停用";
    if ([st isEqualToString:@"firing"]) return @"发布中";
    if ([st isEqualToString:@"failed"]) return @"失败";
    return @"等待发表";
}

#pragma mark - UI

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    NSArray<NSDictionary *> *tasks = [[MomentsScheduler shared] allTasks];
    // 逆序展示（新任务在上），tag 用原始索引定位
    CGFloat y = 0;
    CGFloat w = 0;

    y = [self addSectionHeader:[NSString stringWithFormat:@"定时任务（%lu）", (unsigned long)tasks.count] y:y width:w];
    if (tasks.count == 0) {
        [self addSectionFooter:@"发朋友圈时在发帖页点「定时发送」选择时间\n照常点发表后即转为定时任务" y:y width:w];
        return;
    }

    for (NSInteger si = (NSInteger)tasks.count - 1; si >= 0; si--) {
        NSDictionary *t = tasks[si];
        if (![t isKindOfClass:[NSDictionary class]]) continue;
        NSString *taskId = t[@"id"] ?: @"";
        if (taskId.length == 0) continue;

        y = [self addSectionHeader:
            [NSString stringWithFormat:@"%@ · %@",
                [MomentsScheduler formatFireDate:[t[@"fireAt"] doubleValue]],
                [self stateTextForDict:t]] y:y width:w];
        UIView *group = [self addTableGroupAtY:y width:w];
        CGFloat cy = 0;

        cy = [self addInfoRowInGroup:group
                               title:(t[@"preview"] ?: @"（无预览）")
                          rightValue:[MomentsScheduler repeatSummaryForDict:t]
                            copyText:nil
                                  cy:cy
                               width:w];
        cy = [self addSeparatorInGroup:group cy:cy width:w];
        cy = [self addNavRowInGroup:group
                              title:@"循环模式"
                           subtitle:@"点击切换 单次/每天/每周/每月/间隔"
                                tag:si
                             action:@selector(onLoopTap:)
                                 cy:cy
                              width:w];
        cy = [self addSeparatorInGroup:group cy:cy width:w];
        cy = [self addButtonRowInGroup:group title:@"改期" hint:@"修改发表时间"
                                     key:[NSString stringWithFormat:@"resched_%@", taskId] cy:cy width:w];
        cy = [self addSeparatorInGroup:group cy:cy width:w];
        cy = [self addButtonRowInGroup:group title:([t[@"enabled"] boolValue] ? @"停用" : @"启用")
                                     hint:nil
                                     key:[NSString stringWithFormat:@"toggle_%@", taskId] cy:cy width:w];
        cy = [self addSeparatorInGroup:group cy:cy width:w];
        cy = [self addButtonRowInGroup:group title:@"删除" hint:@"删除任务及其内容"
                                     key:[NSString stringWithFormat:@"del_%@", taskId] cy:cy width:w];
        y = [self finishGroup:group atY:y height:cy];
    }
    [self addSectionFooter:@"等待中的任务按 15 秒粒度轮询触发\n完成/失败的任务保留 1 天后自动清理" y:y width:w];
}

#pragma mark - 改期

- (void)runReschedForTask:(NSDictionary *)t {
    if (![t isKindOfClass:[NSDictionary class]]) return;
    NSString *taskId = t[@"id"];
    double cur = [t[@"fireAt"] doubleValue];
    NSDate *initial = (cur > 0) ? [NSDate dateWithTimeIntervalSince1970:cur]
                                : [NSDate dateWithTimeIntervalSinceNow:300];
    __weak typeof(self) wself = self;
    [MioAlertHelper showDateTimePickerPanel:@"修改发表时间"
                                initialDate:initial
                                     onPick:^(NSDate *date) {
        __strong typeof(wself) sself = wself;
        if (!sself) return;
        NSArray<NSDictionary *> *tasks = [[MomentsScheduler shared] allTasks];
        NSMutableArray *ts = [tasks mutableCopy];
        NSUInteger idx = [tasks indexOfObjectPassingTest:^BOOL(NSDictionary *d, NSUInteger i, BOOL *stop) {
            return [d[@"id"] isEqualToString:taskId];
        }];
        if (idx == NSNotFound) return;
        NSMutableDictionary *nt = [ts[idx] mutableCopy];
        nt[@"fireAt"] = @(date.timeIntervalSince1970);
        nt[@"state"] = @"pending"; // 改期即复活（failed/triggered 任务改期可重跑）
        nt[@"enabled"] = @YES;
        ts[idx] = nt;
        [[MomentsScheduler shared] saveTasks:ts];
        WPShowToast(@"已修改发表时间");
        [sself reloadTable];
    }];
}

#pragma mark - 循环模式（两级 ActionSheet）

- (void)onLoopTap:(UIButton *)sender {
    NSInteger idx = sender.tag;
    NSArray<NSDictionary *> *tasks = [[MomentsScheduler shared] allTasks];
    if (idx < 0 || idx >= (NSInteger)tasks.count) return;
    NSDictionary *t = tasks[idx];
    __weak typeof(self) wself = self;
    [MioAlertHelper showMenuAlert:[NSString stringWithFormat:@"循环模式 · 当前：%@",
                                       [MomentsScheduler repeatSummaryForDict:t]]
                          buttons:@[@"单次", @"每天", @"每 N 小时", @"每 N 分钟", @"每周", @"每月", @"循环间隔"]
                         onButton:^(NSInteger index) {
        __strong typeof(wself) sself = wself;
        if (!sself) return;
        switch (index) {
            case 0: [sself applyLoopMode:0 toIndex:idx]; break;
            case 1: [sself applyLoopMode:1 toIndex:idx]; break;
            case 2: [sself presentIntervalSheet:@"每小时隔"
                                        titles:@[@"每 1 小时", @"每 2 小时", @"每 3 小时", @"每 6 小时", @"每 12 小时"]
                                         values:@[@1, @2, @3, @6, @12]
                                            key:@"intervalHours"
                                           mode:2
                                          index:idx];
                    break;
            case 3: [sself presentIntervalSheet:@"每分钟隔"
                                        titles:@[@"每 15 分钟", @"每 30 分钟", @"每 45 分钟"]
                                         values:@[@15, @30, @45]
                                            key:@"intervalMinutes"
                                           mode:3
                                          index:idx];
                    break;
            case 4: [sself applyLoopMode:4 toIndex:idx]; break;
            case 5: [sself applyLoopMode:5 toIndex:idx]; break;
            case 6: [sself presentIntervalSheet:@"循环间隔"
                                        titles:@[@"每 60 分钟", @"每 2 小时", @"每 6 小时", @"每 1 天"]
                                         values:@[@60, @120, @360, @1440]
                                            key:@"loopIntervalMinutes"
                                           mode:6
                                          index:idx];
                    break;
            default: break; // 取消
        }
    }];
}

// 间隔档位二级选择（mode 2/3/6）
- (void)presentIntervalSheet:(NSString *)title titles:(NSArray<NSString *> *)titles
                      values:(NSArray<NSNumber *> *)values key:(NSString *)key mode:(int)mode index:(NSInteger)idx {
    NSArray<NSDictionary *> *tasks = [[MomentsScheduler shared] allTasks];
    if (idx < 0 || idx >= (NSInteger)tasks.count) return;
    NSDictionary *t = tasks[idx];
    __weak typeof(self) wself = self;
    [MioAlertHelper showMenuAlert:[NSString stringWithFormat:@"%@ · 当前：%@",
                                       title, [MomentsScheduler repeatSummaryForDict:t]]
                          buttons:titles
                         onButton:^(NSInteger index) {
        __strong typeof(wself) sself = wself;
        if (!sself || index >= (NSInteger)values.count) return;
        [sself updateTask:idx withBlock:^(NSMutableDictionary *nt) {
            nt[@"scheduleMode"] = @(mode);
            nt[key] = values[index];
        }];
    }];
}

- (void)applyLoopMode:(int)mode toIndex:(NSInteger)idx {
    [self updateTask:idx withBlock:^(NSMutableDictionary *nt) {
        nt[@"scheduleMode"] = @(mode);
        if (mode == 0) {
            nt[@"repeatLimit"] = @0;
            return;
        }
        // 循环锚点沿用当前 fireAt 的时分/星期/日；fireAt 重算到下一轮
        double anchor = [nt[@"fireAt"] doubleValue] ?: [NSDate date].timeIntervalSince1970;
        NSDate *ad = [NSDate dateWithTimeIntervalSince1970:anchor];
        NSCalendar *cal = [NSCalendar currentCalendar];
        NSDateComponents *c = [cal components:NSCalendarUnitHour|NSCalendarUnitMinute|NSCalendarUnitWeekday|NSCalendarUnitDay fromDate:ad];
        nt[@"hour"] = @((int)c.hour);
        nt[@"minute"] = @((int)c.minute);
        if (mode == 4) nt[@"weekday"] = @((int)c.weekday);
        if (mode == 5) nt[@"dayOfMonth"] = @((int)c.day);
        if (mode == 1 && [nt[@"hour"] intValue] == 0 && [nt[@"minute"] intValue] == 0) {
            nt[@"hour"] = @9; nt[@"minute"] = @0; // 0:00 误触锚点回落 09:00
        }
    }];
}

// 统一任务更新入口：block 内改字段 → 若循环模式重算 fireAt → 落盘 → 重建 UI
- (void)updateTask:(NSInteger)idx withBlock:(void (^)(NSMutableDictionary *nt))block {
    NSArray<NSDictionary *> *tasks = [[MomentsScheduler shared] allTasks];
    if (idx < 0 || idx >= (NSInteger)tasks.count) return;
    NSMutableArray *ts = [tasks mutableCopy];
    NSMutableDictionary *nt = [tasks[idx] mutableCopy];
    block(nt);
    int mode = [nt[@"scheduleMode"] intValue];
    if (mode != 0) {
        double now = [NSDate date].timeIntervalSince1970;
        double next = [MomentsScheduler nextFireAtForTask:nt fromTime:now];
        nt[@"fireAt"] = @(next);
    }
    nt[@"state"] = @"pending";
    nt[@"enabled"] = @YES;
    ts[idx] = nt;
    [[MomentsScheduler shared] saveTasks:ts];
    WPShowToast([NSString stringWithFormat:@"已切换：%@", [MomentsScheduler repeatSummaryForDict:nt]]);
    [self reloadTable];
}

#pragma mark - 按钮回调

- (void)buttonClicked:(NSString *)key {
    if (![key isKindOfClass:[NSString class]]) return;
    NSArray<NSDictionary *> *tasks = [[MomentsScheduler shared] allTasks];
    NSString *prefix = [key componentsSeparatedByString:@"_"].firstObject;
    NSString *taskId = (key.length > prefix.length + 1) ? [key substringFromIndex:prefix.length + 1] : nil;
    if (taskId.length == 0) return;
    NSUInteger idx = [tasks indexOfObjectPassingTest:^BOOL(NSDictionary *d, NSUInteger i, BOOL *stop) {
        return [d[@"id"] isEqualToString:taskId];
    }];
    if (idx == NSNotFound) return;
    NSDictionary *t = tasks[idx];

    if ([prefix isEqualToString:@"resched"]) {
        [self runReschedForTask:t];
        return;
    }
    if ([prefix isEqualToString:@"toggle"]) {
        // 已发表的单次任务不允许复活（曾致同一任务二次发布）
        if ([t[@"state"] isEqualToString:@"triggered"]) {
            WPShowToast(@"该任务已发表");
            return;
        }
        NSMutableArray *ts = [tasks mutableCopy];
        NSMutableDictionary *nt = [ts[idx] mutableCopy];
        BOOL toEnable = ![nt[@"enabled"] boolValue];
        nt[@"enabled"] = @(toEnable);
        if (toEnable && [nt[@"state"] isEqualToString:@"failed"]) nt[@"state"] = @"pending"; // 仅失败任务可启用复活
        ts[idx] = nt;
        [[MomentsScheduler shared] saveTasks:ts];
        WPShowToast(toEnable ? @"已启用" : @"已停用");
        [self reloadTable];
        return;
    }
    if ([prefix isEqualToString:@"del"]) {
        __weak typeof(self) wself = self;
        [MioAlertHelper showConfirmAlert:[NSString stringWithFormat:@"删除定时任务？\n%@", (t[@"preview"] ?: @"")]
                            confirmTitle:@"删除"
                               onConfirm:^{
            __strong typeof(wself) sself = wself;
            if (!sself) return;
            [[MomentsScheduler shared] removeTaskWithId:taskId];
            WPShowToast(@"已删除");
            [sself reloadTable];
        }];
        return;
    }
}

@end
