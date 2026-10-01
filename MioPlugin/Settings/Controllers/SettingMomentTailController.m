#import "SettingMomentTailController.h"
#import <objc/message.h>
#import "../../Modules/Moments/MomentsConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/MioAlertHelper.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"

// 朋友圈小尾巴设置页（微信引擎渲染）
// 普通模式：卡片1 总开关（开启后才显示卡片2/卡片3）、卡片2 默认尾巴、卡片3 预设列表
// 单次模式（postSessionMode）：发帖页入口，复用卡片2/卡片3，选择写入 PostSession 不落盘
@implementation SettingMomentTailController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = self.postSessionMode ? @"选择本次小尾巴" : @"朋友圈小尾巴";
    // 不在此处 buildUI：viewWillAppear 统一重建，避免同表叠行
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self wpRebuildWeChatTable];
    [self buildUI];
}

// 单次模式 dismiss 回发帖页后刷新 cell 显示（WCR onPick block 同款：调 reloadData → 重注入）
- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
    if (self.postSessionMode && [self isBeingDismissed]) {
        UIViewController *t = self.mioCommitTarget;
        SEL r = NSSelectorFromString(@"reloadData");
        if (t && [t respondsToSelector:r]) ((void(*)(id, SEL))objc_msgSend)(t, r);
    }
}

#pragma mark - 状态/保存

- (void)reloadTable {
    [self wpRebuildWeChatTable];
    [self buildUI];
}

// appid → 预设名（未注册返回 nil）
- (NSString *)tailNameForAppId:(NSString *)appId {
    for (NSDictionary *p in [MomentsConfig shared].effectiveTailPresets) {
        if ([p isKindOfClass:[NSDictionary class]] && [appId isEqualToString:p[@"appId"]]) {
            NSString *n = p[@"name"];
            if ([n isKindOfClass:[NSString class]] && n.length > 0) return n;
        }
    }
    return nil;
}

- (void)applyTailAppId:(NSString *)appId {
    if (self.postSessionMode) {
        [self applyPostSessionAppId:appId];
        return;
    }
    MomentsConfig *config = [MomentsConfig shared];
    config.tailAppId = appId ?: @"";
    [ConfigManager saveAll];
    [self reloadTable];
}

// 单次模式：选择写入 PostSession（WCR applyAppID:name: 的 postSessionMode 分支同款），
// 留空 = 本次明确无尾巴（WCR onPickNone 实证 set 空串），不影响默认尾巴
- (void)applyPostSessionAppId:(NSString *)appId {
    NSString *v = appId ?: @"";
    [MomentsConfig tailSetPostSessionAppId:v];
    if (v.length > 0) {
        NSString *name = [self tailNameForAppId:v] ?: v;
        WPShowToast([NSString stringWithFormat:@"本次将使用 %@", name]);
    } else {
        WPShowToast(@"本次不使用尾巴");
    }
    [self reloadTable];
    // 主动推送刷新发帖页 cell 右值（不依赖 dismiss→reloadData 回调链，根治右值陈旧）
    UIViewController *t = self.mioCommitTarget;
    SEL sync = NSSelectorFromString(@"mioSyncTailCell");
    if (t && [t respondsToSelector:sync]) ((void(*)(id, SEL))objc_msgSend)(t, sync);
}

// 卡片1 开关切换后重建，显隐卡片2/卡片3
// 注意：微信引擎开关回调走 wpHandleSwitchKey → wpAfterSwitchChanged（switchChanged: 已不被引擎触发）
- (void)wpAfterSwitchChanged:(NSString *)key on:(BOOL)on {
    if ([key isEqualToString:@"tailEnabled"]) [self reloadTable];
}

// 输入行拦截：自定义 AppID 必须完美命中预设才保存；
// 未命中提示"未注册AppID"，不保存、不重建，不执行任何动作
- (void)wpRunInputFlow:(NSDictionary *)row {
    NSString *key = row[@"key"];
    if (![key isKindOfClass:[NSString class]] || ![key isEqualToString:@"tailAppId"]) {
        [super wpRunInputFlow:row];
        return;
    }
    MomentsConfig *config = [MomentsConfig shared];
    NSString *alertTitle = row[@"alertTitle"];
    if (![alertTitle isKindOfClass:[NSString class]] || alertTitle.length == 0) alertTitle = row[@"title"] ?: @"自定义尾巴";
    [MioAlertHelper showInputAlert:alertTitle
                           message:(row[@"alertMessage"] ?: @"")
                       initialText:(config.tailAppId ?: @"")
                       placeholder:(row[@"hint"] ?: @"")
                          keyboard:UIKeyboardTypeDefault
                            secure:NO
                        onConfirm:^(NSString *inputText) {
        NSString *nv = [inputText stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]] ?: @"";
        if (nv.length == 0) {           // 留空 = 无小尾巴（单次模式下为"本次无"）
            [self applyTailAppId:@""];
            return;
        }
        for (NSDictionary *p in [config effectiveTailPresets]) {
            if ([p isKindOfClass:[NSDictionary class]] && [nv isEqualToString:p[@"appId"]]) {
                [self applyTailAppId:nv];   // 完美命中才落盘
                return;
            }
        }
        WPShowToast(@"未注册AppID");
    }];
}

#pragma mark - 预设点选

- (void)onPickNone {
    [self applyTailAppId:@""];
}

- (void)onPickPreset:(UIButton *)sender {
    // 与卡片3渲染同源：effectiveTailPresets（自定义列表优先，回落内置 304 项）
    NSArray<NSDictionary *> *presets = [MomentsConfig shared].effectiveTailPresets;
    NSInteger idx = sender.tag;
    if (idx < 0 || idx >= (NSInteger)presets.count) return;
    NSDictionary *p = presets[idx];
    if (![p isKindOfClass:[NSDictionary class]]) return;
    NSString *appId = p[@"appId"];
    if (![appId isKindOfClass:[NSString class]] || appId.length == 0) return;
    [self applyTailAppId:appId];
}

#pragma mark - UI

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    MomentsConfig *config = [MomentsConfig shared];
    BOOL psMode = self.postSessionMode;
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;
    NSArray<NSDictionary *> *presets = [config effectiveTailPresets];

    if (!psMode) {
        // 卡片1：总开关（单次模式不显示，总开关开启后发帖页才有入口）
        y = [self addSectionHeader:@"朋友圈小尾巴" y:y width:w];
        UIView *group1 = [self addTableGroupAtY:y width:w];
        CGFloat cy1 = [self addSwitchRowInGroup:group1 title:@"开启小尾巴" desc:nil key:@"tailEnabled" isOn:config.tailEnabled cy:0 width:w];
        y = [self finishGroup:group1 atY:y height:cy1];
        [self addSectionFooter:@"开启后发朋友圈可携带自定义来源小尾巴\n发帖页可对本次单独选择" y:y width:w];

        if (!config.tailEnabled) return;

        // 自愈：历史版本基类空输入 fallback 会把 hint 文案"输入Appid"写进 tailAppId，
        // 进页面发现未注册值一律清空（tail5 起输入流程已拦截，正常不会再产生未注册值）
        if (config.tailAppId.length > 0) {
            BOOL registered = NO;
            for (NSDictionary *p in presets) {
                if ([p isKindOfClass:[NSDictionary class]] && [config.tailAppId isEqualToString:p[@"appId"]]) {
                    registered = YES;
                    break;
                }
            }
            if (!registered) {
                config.tailAppId = @"";
                [ConfigManager saveAll];
            }
        }
    }

    // 当前生效显示：单次模式优先本次（无本次显示默认，与发帖生效逻辑一致）
    NSString *currentName;
    if (psMode) {
        if ([MomentsConfig tailHasPostSession]) {
            NSString *v = [[MomentsConfig tailPostSessionAppId] ?: @""
                stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
            currentName = v.length ? ([self tailNameForAppId:v] ?: v) : @"无";
        } else {
            currentName = config.tailAppId.length ? [config tailDisplayName] : @"无";
        }
    } else {
        currentName = [config tailDisplayName];
    }

    // 卡片2：默认尾巴 / 本次尾巴（当前选择 + 自定义输入 AppID 两个独立行）
    // 输入行右值恒显 hint，不反显 tailAppId——预设点选不联动到输入行；
    // 仅当用户手动输入的 appid 命中预设时，"当前选择"行才显示对应预设名
    y = [self addSectionHeader:(psMode ? @"本次尾巴" : @"默认尾巴") y:y width:w];
    UIView *group2 = [self addTableGroupAtY:y width:w];
    CGFloat cy2 = 0;
    cy2 = [self addInfoRowInGroup:group2
                             title:@"当前生效"
                        rightValue:currentName
                          copyText:nil
                                cy:cy2
                             width:w];
    cy2 = [self addSeparatorInGroup:group2 cy:cy2 width:w];
    cy2 = [self addInputRowInGroup:group2
                             title:@"自定义输入AppID"
                               key:@"tailAppId"
                             value:nil
                              hint:@"输入Appid"
                         valueType:InputValueTypeText
                        alertTitle:(psMode ? @"本次尾巴" : @"自定义尾巴")
                      alertMessage:(psMode
                          ? @"输入 Appid\n留空表示本次无尾巴\n也可在下方预设列表中点选"
                          : @"输入 Appid\n留空表示无小尾巴\n也可在下方预设列表中点选")
                                cy:cy2
                             width:w];
    y = [self finishGroup:group2 atY:y height:cy2];

    // 选中标记：单次模式标"本次使用"（含"无小尾巴"行），普通模式标"使用中"；
    // 单次模式无本次时把默认项标"默认"，用户能看出不选会发生什么
    BOOL hasPS = [MomentsConfig tailHasPostSession];
    NSString *psValue = [[[MomentsConfig tailPostSessionAppId] ?: @""
        stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]] copy];

    // 卡片3：预设列表（固定项"无小尾巴" + 内置/自定义预设，标题带总数统计）
    y = [self addSectionHeader:[NSString stringWithFormat:@"预设列表（%lu）", (unsigned long)(presets.count + 1)] y:y width:w];
    UIView *group3 = [self addTableGroupAtY:y width:w];
    CGFloat cy3 = 0;
    NSString *noneMark = nil;
    if (psMode) {
        noneMark = (hasPS && psValue.length == 0) ? @"本次使用"
                 : (!hasPS && config.tailAppId.length == 0) ? @"默认" : nil;
    } else {
        noneMark = (config.tailAppId.length == 0) ? @"使用中" : nil;
    }
    cy3 = [self addNavRowInGroup:group3
                           title:@"无小尾巴"
                        subtitle:(noneMark ?: @"")
                             tag:-1
                          action:@selector(onPickNone)
                              cy:cy3
                           width:w];
    for (NSInteger i = 0; i < (NSInteger)presets.count; i++) {
        NSDictionary *p = presets[i];
        if (![p isKindOfClass:[NSDictionary class]]) continue;
        NSString *name = p[@"name"];
        NSString *appId = p[@"appId"];
        if (![name isKindOfClass:[NSString class]] || name.length == 0) continue;
        if (![appId isKindOfClass:[NSString class]]) appId = @"";
        NSString *mark = nil;
        BOOL isDefault = [config.tailAppId isEqualToString:appId];
        if (psMode) {
            if (hasPS && [psValue isEqualToString:appId]) mark = @"本次使用";
            else if (!hasPS && isDefault) mark = @"默认";
        } else if (isDefault) {
            mark = @"使用中";
        }
        cy3 = [self addSeparatorInGroup:group3 cy:cy3 width:w];
        // 只显示昵称；不展示 appid
        cy3 = [self addNavRowInGroup:group3
                               title:name
                            subtitle:(mark ?: @"")
                                 tag:(NSInteger)i
                              action:@selector(onPickPreset:)
                                  cy:cy3
                                   width:w];
    }
    y = [self finishGroup:group3 atY:y height:cy3];

    if (psMode) {
        [self addSectionFooter:@"只对本次发朋友圈生效\n下次发帖自动恢复默认尾巴" y:y width:w];
    } else {
        [self addSectionFooter:@"点击预设项切换默认尾巴\nappid 可后续在预设中补充" y:y width:w];
    }
}

@end
