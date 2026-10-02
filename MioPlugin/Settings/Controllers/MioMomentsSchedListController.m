#import "MioMomentsSchedListController.h"
#import "../Common/WPWeChatTable.h"
#import "../../Modules/Moments/MomentsConfig.h"
#import "../../Core/MioAlertHelper.h"
#import <objc/message.h>

// 朋友圈定时任务列表页（WCR 同款紧凑布局）：
// 每任务独立一张卡，卡内一行两行式 cell（WCTableViewCellManager title:detail:——
// 预览粗体第一行 / 时间·状态灰色第二行），点击弹底部操作单。
// 操作单 = 微信原生 WCActionSheet（MMUIWindow 底部弹层，WCR 同款视觉）：
//   addButtonWithTitle:eventAction: 传 block（WCR FUN__part10 实锤 NSConcreteStackBlock），
//   showInView: 传当前 VC view（WCR FUN__part11 同款 respondsToSelector 守卫），
//   删除走 addDestructiveButtonWithTitle:eventAction:（红字）；
//   title:detail: 构造器缺失时行回退 WPWCNavCell、单缺失时操作单回退 showMenuAlert
@implementation MioMomentsSchedListController

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

- (NSString *)fireDateTextForDict:(NSDictionary *)t {
    double fireAt = [t[@"fireAt"] doubleValue];
    if (fireAt <= 0) return @"-";
    NSDateFormatter *f = [[NSDateFormatter alloc] init];
    f.dateFormat = @"M月dd日 HH:mm";
    return [f stringFromDate:[NSDate dateWithTimeIntervalSince1970:fireAt]];
}

#pragma mark - UI（WCR 同款：每任务一卡，卡内一行——预览在上 / 时间·状态灰色第二行，点击弹操作单）

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    NSArray<NSDictionary *> *tasks = [[MomentsScheduler shared] allTasks];
    [self addSectionHeader:@"定时任务" y:0 width:0];
    if (tasks.count == 0) {
        [self addSectionFooter:@"发朋友圈时在发帖页点「定时发送」选择时间\n照常点发表后即转为定时任务" y:0 width:0];
        return;
    }

    // 每任务独立分组（多任务=多卡片）；行 = WCTableViewCellManager title:detail: 两行布局
    // （switch desc 同族先例：detail 渲染为标题下方灰字；点击回调入参=cellManager，
    //   userInfo 带任务索引——WPWeChatTable.h 回调契约实证）
    for (NSInteger si = (NSInteger)tasks.count - 1; si >= 0; si--) {
        NSDictionary *t = tasks[si];
        if (![t isKindOfClass:[NSDictionary class]]) continue;
        NSString *taskId = t[@"id"] ?: @"";
        if (taskId.length == 0) continue;

        UIView *group = [self addTableGroupAtY:0 width:0];
        id cell = [self makeTaskCellForTask:t index:si];
        if (cell) {
            [(WPWGroup *)group addCell:cell];
        } else {
            // detail 构造器缺失回退：单行导航行（预览左 / 状态右 + 箭头）
            id nav = WPWCNavCell(@selector(wpWCTapRow:), self,
                                 (t[@"preview"] ?: @"（无预览）"), [self stateTextForDict:t]);
            if (nav) [(WPWGroup *)group addCell:nav];
        }
        [self finishGroup:group atY:0 height:0];
    }
    [self addSectionFooter:@"点任务可设循环：间隔多次、共发几次。次数到了自动停。\n微信需保持运行，被系统结束后无法到点触发。" y:0 width:0];
}

// 两行任务行：title=预览（粗体第一行）detail=时间 · 状态（灰色第二行）；userInfo 携带任务索引
- (id)makeTaskCellForTask:(NSDictionary *)t index:(NSInteger)si {
    Class cls = objc_getClass("WCTableViewCellManager");
    SEL s = NSSelectorFromString(@"normalCellForSel:target:title:detail:");
    if (!cls || ![cls respondsToSelector:s]) return nil;
    NSString *detail = [NSString stringWithFormat:@"%@ · %@",
                            [self fireDateTextForDict:t], [self stateTextForDict:t]];
    id cell = ((id(*)(id, SEL, SEL, id, id, id))objc_msgSend)(
        cls, s, NSSelectorFromString(@"onTaskCellTapped:"), self,
        (t[@"preview"] ?: @"（无预览）"), detail);
    if (!cell) return nil;
    SEL hs = NSSelectorFromString(@"setFCellHeight:");
    if ([cell respondsToSelector:hs]) ((void(*)(id, SEL, double))objc_msgSend)(cell, hs, 60.0);
    SEL us = NSSelectorFromString(@"setUserInfo:");
    if ([cell respondsToSelector:us]) ((void(*)(id, SEL, id))objc_msgSend)(cell, us, @(si));
    return cell;
}

// 点击回调（微信传入 cellManager，userInfo=任务索引）
- (void)onTaskCellTapped:(id)cellMgr {
    NSInteger idx = 0;
    @try { idx = [[cellMgr valueForKey:@"userInfo"] integerValue]; } @catch (NSException *e) {}
    NSArray<NSDictionary *> *tasks = [[MomentsScheduler shared] allTasks];
    if (idx < 0 || idx >= (NSInteger)tasks.count) return;
    [self showTaskSheetForTask:tasks[idx] index:idx];
}

#pragma mark - 任务操作单（微信原生 WCActionSheet 底部弹层）

- (void)showTaskSheetForTask:(NSDictionary *)t index:(NSInteger)idx {
    NSString *preview = t[@"preview"] ?: @"定时任务";
    BOOL enabled = [t[@"enabled"] boolValue];

    Class sheetCls = objc_getClass("WCActionSheet");
    SEL initSel = NSSelectorFromString(@"initWithTitle:cancelButtonTitle:");
    SEL addSel = NSSelectorFromString(@"addButtonWithTitle:eventAction:");
    SEL desSel = NSSelectorFromString(@"addDestructiveButtonWithTitle:eventAction:");
    SEL showSel = NSSelectorFromString(@"showInView:");
    if (!sheetCls || ![sheetCls instancesRespondToSelector:initSel]
        || ![sheetCls instancesRespondToSelector:addSel]
        || ![sheetCls instancesRespondToSelector:showSel]) {
        [self showFallbackMenuForTask:t index:idx];
        return;
    }
    id sheet = ((id(*)(id, SEL, id, id))objc_msgSend)((id)[sheetCls alloc], initSel, preview, @"取消");
    if (!sheet) {
        [self showFallbackMenuForTask:t index:idx];
        return;
    }
    __weak typeof(self) wself = self;

    // block 必须 copy：WeChat 按钮异步持有，栈块不拷会被释放（WCR 同款 _objc_retainBlock）
    void (^toggleBlock)(void) = [^{
        __strong typeof(wself) sself = wself;
        [sself toggleTaskAtIndex:idx];
    } copy];
    void (^reschedBlock)(void) = [^{
        __strong typeof(wself) sself = wself;
        [sself runReschedForTask:t];
    } copy];
    void (^loopBlock)(void) = [^{
        __strong typeof(wself) sself = wself;
        [sself onLoopMenuAtIndex:idx];
    } copy];
    void (^delBlock)(void) = [^{
        __strong typeof(wself) sself = wself;
        [sself confirmDeleteTaskAtIndex:idx];
    } copy];

    ((void(*)(id, SEL, id, id))objc_msgSend)(sheet, addSel, enabled ? @"暂停任务" : @"继续任务", toggleBlock);
    ((void(*)(id, SEL, id, id))objc_msgSend)(sheet, addSel, @"修改时间", reschedBlock);
    ((void(*)(id, SEL, id, id))objc_msgSend)(sheet, addSel, @"循环发布", loopBlock);
    if ([sheet respondsToSelector:desSel]) {
        ((void(*)(id, SEL, id, id))objc_msgSend)(sheet, desSel, @"删除任务", delBlock);
    } else {
        ((void(*)(id, SEL, id, id))objc_msgSend)(sheet, addSel, @"删除任务", delBlock);
    }
    ((void(*)(id, SEL, id))objc_msgSend)(sheet, showSel, self.view); // WCR 同款：showInView: 传 VC view
}

// WCActionSheet 缺失时的兜底（微信 alert 菜单，同款四项）
- (void)showFallbackMenuForTask:(NSDictionary *)t index:(NSInteger)idx {
    BOOL enabled = [t[@"enabled"] boolValue];
    __weak typeof(self) wself = self;
    [MioAlertHelper showMenuAlert:(t[@"preview"] ?: @"定时任务")
                          buttons:@[enabled ? @"暂停任务" : @"继续任务", @"修改时间", @"循环发布", @"删除任务"]
                         onButton:^(NSInteger index) {
        __strong typeof(wself) sself = wself;
        if (!sself) return;
        if (index == 0) [sself toggleTaskAtIndex:idx];
        else if (index == 1) [sself runReschedForTask:t];
        else if (index == 2) [sself onLoopMenuAtIndex:idx];
        else if (index == 3) [sself confirmDeleteTaskAtIndex:idx];
    }];
}

#pragma mark - 操作单动作

// 暂停/继续（已发表的单次任务不允许复活——曾致同一任务二次发布）
- (void)toggleTaskAtIndex:(NSInteger)idx {
    NSArray<NSDictionary *> *tasks = [[MomentsScheduler shared] allTasks];
    if (idx < 0 || idx >= (NSInteger)tasks.count) return;
    if ([tasks[idx][@"state"] isEqualToString:@"triggered"]) {
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
}

- (void)confirmDeleteTaskAtIndex:(NSInteger)idx {
    NSArray<NSDictionary *> *tasks = [[MomentsScheduler shared] allTasks];
    if (idx < 0 || idx >= (NSInteger)tasks.count) return;
    NSDictionary *t = tasks[idx];
    NSString *taskId = t[@"id"] ?: @"";
    if (taskId.length == 0) return;
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

- (void)onLoopMenuAtIndex:(NSInteger)idx {
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

@end
