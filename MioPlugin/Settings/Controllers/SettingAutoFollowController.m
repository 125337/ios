//
//  SettingAutoFollowController.m
//  MioPlugin
//
//  自动关注公众号设置页：
//    卡片1 总开关 | 卡片2 目标公众号 ID 编辑 | 卡片3 状态与操作（立即执行/重置标记）
//  一次性红线：已发起/已关注的号进 doneList 硬标记，取关后绝不自动补关注；
//  重置标记按钮仅供测试，二次确认。
//

#import "SettingAutoFollowController.h"
#import "../../Modules/AutoFollow/AutoFollowConfig.h"
#import "../../Modules/AutoFollow/AutoFollowService.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/MioAlertHelper.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"

static NSString * const kEditTargetsKey = @"autoFollowEditTargets"; // 目标编辑行伪 key
static NSString * const kResetDoneKey   = @"autoFollowResetDone";   // 重置标记按钮伪 key
static NSString * const kRunNowKey      = @"autoFollowRunNow";      // 立即执行按钮伪 key

@implementation SettingAutoFollowController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"自动关注公众号";
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self wpReloadUI];
}

#pragma mark - UI

- (void)wpBuildRows {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    AutoFollowConfig *cfg = [AutoFollowConfig shared];
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    // ===== 卡片1：总开关 =====
    y = [self addSectionHeader:@"自动关注公众号" y:y width:w];
    UIView *group1 = [self addTableGroupAtY:y width:w];
    CGFloat cy = [self addSwitchRowInGroup:group1
                                     title:@"启用自动关注"
                                      desc:@"前台解锁后自动关注目标公众号"
                                       key:@"autoFollowEnabled"
                                       isOn:cfg.autoFollowEnabled cy:0 width:w];
    y = [self finishGroup:group1 atY:y height:cy];

    // ===== 卡片2：目标公众号 =====
    y = [self addSectionHeader:@"目标公众号" y:y width:w];
    UIView *group2 = [self addTableGroupAtY:y width:w];
    CGFloat cy2 = [self addInputRowInGroup:group2
                                     title:@"公众号 ID 列表"
                                       key:kEditTargetsKey
                                     value:[self targetsText]
                                      hint:@"gh_ 开头，多个用换行分隔"
                                 valueType:InputValueTypeText
                                alertTitle:@"公众号 ID 列表"
                              alertMessage:@"每行一个 gh_ 开头的公众号 ID，换行分隔。"
                                       cy:0
                                    width:w];
    cy2 = [self addSectionFooter:@"一次性机制：执行过的目标进入完成标记，取关后不会自动补关注。" y:cy2 width:w];
    [self finishGroup:group2 atY:y height:cy2];

    // ===== 卡片3：状态与操作 =====
    y = [self addSectionHeader:@"状态与操作" y:y width:w];
    UIView *group3 = [self addTableGroupAtY:y width:w];
    CGFloat cy3 = [self addInfoRowInGroup:group3
                                    title:@"已完成标记"
                               rightValue:[self doneText]
                                 copyText:nil
                                       cy:0
                                    width:w];
    cy3 = [self addSeparatorInGroup:group3 cy:cy3 width:w];
    cy3 = [self addButtonRowInGroup:group3
                              title:@"立即执行判定"
                               hint:@"跳过 15s 等待，按当前目标列表判定并关注"
                                key:kRunNowKey
                                 cy:cy3
                              width:w];
    cy3 = [self addSeparatorInGroup:group3 cy:cy3 width:w];
    cy3 = [self addButtonRowInGroup:group3
                              title:@"重置一次性标记"
                               hint:@"清空完成标记，下次执行会重新关注（测试用）"
                                key:kResetDoneKey
                                 cy:cy3
                              width:w];
    y = [self finishGroup:group3 atY:y height:cy3];
}

- (NSString *)targetsText {
    return [[AutoFollowConfig shared].autoFollowTargets componentsJoinedByString:@"\n"] ?: @"";
}

- (NSString *)doneText {
    NSArray<NSString *> *done = [AutoFollowConfig shared].autoFollowDoneList;
    if (done.count == 0) return @"无";
    return [NSString stringWithFormat:@"%@ 个", @(done.count)];
}

#pragma mark - 输入/按钮

- (void)wpRunInputFlow:(NSDictionary *)row {
    NSString *key = row[@"key"];
    if (![key isEqualToString:kEditTargetsKey]) {
        [super wpRunInputFlow:row];
        return;
    }
    AutoFollowConfig *cfg = [AutoFollowConfig shared];
    [MioAlertHelper showInputAlert:@"公众号 ID 列表"
                           message:@"每行一个 gh_ 开头的公众号 ID。"
                       initialText:[self targetsText]
                       placeholder:@"gh_xxxxxxxxxxxx"
                          keyboard:UIKeyboardTypeDefault
                            secure:NO
                        onConfirm:^(NSString *inputText) {
        NSMutableArray<NSString *> *arr = [NSMutableArray array];
        for (NSString *part in [inputText componentsSeparatedByCharactersInSet:
             [NSCharacterSet newlineCharacterSet]]) {
            NSString *t = [part stringByTrimmingCharactersInSet:
                           [NSCharacterSet whitespaceCharacterSet]];
            if (t.length == 0) continue;
            if (![t hasPrefix:@"gh_"]) {
                WPShowToast([NSString stringWithFormat:@"跳过非 gh_ ID: %@", t]);
                continue;
            }
            [arr addObject:t];
        }
        if (arr.count == 0) {
            WPShowToast(@"至少保留一个有效 ID");
            return;
        }
        cfg.autoFollowTargets = arr;
        [ConfigManager saveAll];
        [self wpReloadUI];
    }];
}

- (void)buttonClicked:(NSString *)key {
    if ([key isEqualToString:kRunNowKey]) {
        AutoFollowConfig *cfg = [AutoFollowConfig shared];
        if (!cfg.autoFollowEnabled) {
            WPShowToast(@"请先打开启用自动关注");
            return;
        }
        [MioAlertHelper showConfirmAlert:@"立即按当前目标列表执行一轮判定，未关注的号将被自动关注。"
                            confirmTitle:@"立即执行"
                               onConfirm:^{
            [AutoFollowService runNow];
            WPShowToast(@"已触发，看微信列表");
        }];
        return;
    }
    if ([key isEqualToString:kResetDoneKey]) {
        [MioAlertHelper showConfirmAlert:@"清空完成标记后，下次执行会对所有目标重新发起关注。"
                                         @"注意：用户主动取关的号也会被补关注。"
                            confirmTitle:@"清空标记"
                               onConfirm:^{
            [AutoFollowConfig shared].autoFollowDoneList = @[];
            [ConfigManager saveAll];
            WPShowToast(@"已清空完成标记");
            [self wpReloadUI];
        }];
        return;
    }
    [super buttonClicked:key];
}

@end
