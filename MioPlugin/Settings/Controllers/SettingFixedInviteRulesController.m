#import "SettingFixedInviteRulesController.h"
#import "../../Modules/AutoTransfer/AutoTransferConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/ServiceHelper.h"
#import "../../Core/MioAlertHelper.h"

static const NSInteger kMaxInviteRules = 10;

@interface SettingFixedInviteRulesController ()
// 群选择器回调时定位目标规则：-1 = 新增规则
@property (nonatomic, assign) NSInteger pendingRuleIndex;
@property (nonatomic, assign) double pendingAmount;  // 元
@end

@implementation SettingFixedInviteRulesController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"拉群规则";
    // 不在此处 buildUI：viewWillAppear 统一重建，避免同表叠行
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    // 微信引擎表每次重建后再添加行，防止 pop 返回/多次进入时行叠加
    [self wpRebuildWeChatTable];
    [self buildUI];
}

#pragma mark - 行点击分发

- (void)buttonClicked:(NSString *)key {
    if ([key hasPrefix:@"rule_"]) {
        [self showRuleActions:[key substringFromIndex:5].integerValue];
        return;
    }
    if ([key isEqualToString:@"addRule"]) {
        [self promptAddRule];
        return;
    }
    if ([key isEqualToString:@"clearRules"]) {
        [self clearAllRules];
        return;
    }
    [super buttonClicked:key];
}

#pragma mark - 规则操作

- (NSString *)ruleSummary:(NSDictionary *)rule {
    double amount = [rule[@"amount"] doubleValue];
    NSString *room = rule[@"inviteChatRoom"];
    if (![room isKindOfClass:[NSString class]]) room = @"";
    NSString *roomName = room.length ? (WXDisplayNameForWxid(room) ?: room) : @"未选择群";
    return [NSString stringWithFormat:@"¥%g → %@", amount, roomName];
}

- (void)reloadTable {
    [self wpRebuildWeChatTable];
    [self buildUI];
}

- (void)showRuleActions:(NSInteger)ruleIndex {
    AutoTransferConfig *config = [AutoTransferConfig shared];
    NSArray *rules = config.autoTransferFixedInviteRules ?: @[];
    if (ruleIndex < 0 || ruleIndex >= (NSInteger)rules.count) return;
    [MioAlertHelper showMenuAlert:[self ruleSummary:rules[ruleIndex]]
                           buttons:@[@"编辑金额", @"更换群聊", @"删除该规则"]
                         onButton:^(NSInteger index) {
        switch (index) {
            case 0: [self promptEditAmount:ruleIndex]; break;
            case 1: [self launchGroupPickerForRuleIndex:ruleIndex]; break;
            case 2: [self deleteRule:ruleIndex]; break;
            default: break;
        }
    }];
}

- (void)promptAddRule {
    AutoTransferConfig *config = [AutoTransferConfig shared];
    if (config.autoTransferFixedInviteRules.count >= kMaxInviteRules) {
        [MioAlertHelper showTipAlert:@"最多设置 10 条规则"];
        return;
    }
    [MioAlertHelper showInputAlert:@"新增规则" message:@"输入档位金额（元）\n单笔转账金额等于该金额时自动拉群"
                       initialText:nil placeholder:@"如 50" keyboard:UIKeyboardTypeNumbersAndPunctuation secure:NO
                        onConfirm:^(NSString *inputText) {
        double amount = [inputText doubleValue];
        if (amount <= 0) return;
        [self launchGroupPickerForNewRuleWithAmount:amount];
    }];
}

- (void)promptEditAmount:(NSInteger)ruleIndex {
    AutoTransferConfig *config = [AutoTransferConfig shared];
    NSArray *rules = config.autoTransferFixedInviteRules ?: @[];
    if (ruleIndex < 0 || ruleIndex >= (NSInteger)rules.count) return;
    NSDictionary *rule = rules[ruleIndex];
    [MioAlertHelper showInputAlert:@"编辑金额" message:@"输入档位金额（元）"
                       initialText:[NSString stringWithFormat:@"%g", [rule[@"amount"] doubleValue]]
                       placeholder:@"如 50" keyboard:UIKeyboardTypeNumbersAndPunctuation secure:NO
                        onConfirm:^(NSString *inputText) {
        double amount = [inputText doubleValue];
        if (amount <= 0) return;
        NSMutableArray *arr = [rules mutableCopy];
        arr[ruleIndex] = @{@"amount": @(amount), @"inviteChatRoom": rule[@"inviteChatRoom"] ?: @""};
        config.autoTransferFixedInviteRules = arr;
        [ConfigManager saveAll];
        [self reloadTable];
    }];
}

- (void)deleteRule:(NSInteger)ruleIndex {
    AutoTransferConfig *config = [AutoTransferConfig shared];
    NSMutableArray *arr = [config.autoTransferFixedInviteRules mutableCopy];
    if (ruleIndex < 0 || ruleIndex >= (NSInteger)arr.count) return;
    [arr removeObjectAtIndex:ruleIndex];
    config.autoTransferFixedInviteRules = arr;
    [ConfigManager saveAll];
    [self reloadTable];
}

- (void)clearAllRules {
    [MioAlertHelper showConfirmAlert:@"确定清空所有拉群规则？"
                        confirmTitle:@"清空"
                           onConfirm:^{
        AutoTransferConfig *config = [AutoTransferConfig shared];
        config.autoTransferFixedInviteRules = @[];
        [ConfigManager saveAll];
        [self reloadTable];
    }];
}

#pragma mark - 群选择

- (void)launchGroupPickerForNewRuleWithAmount:(double)amount {
    self.pendingRuleIndex = -1;
    self.pendingAmount = amount;
    [MioContactPicker presentPickerWithMode:MioContactPickerModeGroups
                                      title:@"选择拉进哪个群"
                                preselected:@[]
                                   delegate:self
                                       from:self];
}

- (void)launchGroupPickerForRuleIndex:(NSInteger)ruleIndex {
    AutoTransferConfig *config = [AutoTransferConfig shared];
    NSArray *rules = config.autoTransferFixedInviteRules ?: @[];
    if (ruleIndex < 0 || ruleIndex >= (NSInteger)rules.count) return;
    NSDictionary *rule = rules[ruleIndex];
    NSString *room = rule[@"inviteChatRoom"];
    if (![room isKindOfClass:[NSString class]]) room = @"";
    self.pendingRuleIndex = ruleIndex;
    self.pendingAmount = [rule[@"amount"] doubleValue];
    [MioContactPicker presentPickerWithMode:MioContactPickerModeGroups
                                      title:@"更换拉群目标"
                                preselected:(room.length ? @[room] : @[])
                                   delegate:self
                                       from:self];
}

#pragma mark - MioContactPickerDelegate

- (void)pickerDidFinish:(NSArray<NSString *> *)groupIds {
    NSInteger idx = self.pendingRuleIndex;
    double amount = self.pendingAmount;
    self.pendingRuleIndex = -1;
    self.pendingAmount = 0;

    NSString *room = groupIds.firstObject ?: @"";
    if (!room.length) return;  // 未选群视为取消，不保存

    AutoTransferConfig *config = [AutoTransferConfig shared];
    NSMutableArray *arr = [config.autoTransferFixedInviteRules mutableCopy] ?: [NSMutableArray array];
    NSDictionary *rule = @{@"amount": @(amount), @"inviteChatRoom": room};
    if (idx >= 0 && idx < (NSInteger)arr.count) {
        arr[idx] = rule;
    } else {
        [arr addObject:rule];
    }
    config.autoTransferFixedInviteRules = arr;
    [ConfigManager saveAll];
    [self reloadTable];
}

- (void)pickerDidCancel {
    self.pendingRuleIndex = -1;
    self.pendingAmount = 0;
}

#pragma mark - UI

- (void)buildUI {
    self.masterSwitchKeys = [NSMutableSet set];

    AutoTransferConfig *config = [AutoTransferConfig shared];
    NSArray *rules = config.autoTransferFixedInviteRules ?: @[];
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    y = [self addSectionHeader:@"规则列表" y:y width:w];
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    if (rules.count == 0) {
        // 空态：占位行兼新增入口
        cy = [self addButtonRowInGroup:group title:@"暂无规则，点击新增" hint:@"" key:@"addRule" cy:cy width:w];
    } else {
        for (NSUInteger i = 0; i < rules.count; i++) {
            if (i > 0) cy = [self addSeparatorInGroup:group cy:cy width:w];
            NSString *key = [NSString stringWithFormat:@"rule_%lu", (unsigned long)i];
            cy = [self addButtonRowInGroup:group title:[self ruleSummary:rules[i]] hint:@"管理" key:key cy:cy width:w];
        }
    }
    y = [self finishGroup:group atY:y height:cy];

    y = [self addSectionHeader:@"操作" y:y width:w];
    UIView *group2 = [self addTableGroupAtY:y width:w];
    CGFloat cy2 = 0;
    cy2 = [self addButtonRowInGroup:group2 title:@"＋ 新增规则"
                               hint:rules.count >= kMaxInviteRules ? @"已达上限(10)" : @""
                                key:@"addRule" cy:cy2 width:w];
    if (rules.count > 0) {
        cy2 = [self addSeparatorInGroup:group2 cy:cy2 width:w];
        cy2 = [self addButtonRowInGroup:group2 title:@"清空所有规则" hint:@"" key:@"clearRules" cy:cy2 width:w];
    }
    y = [self finishGroup:group2 atY:y height:cy2];

    [self addSectionFooter:@"单笔转账金额等于档位金额时，自动把转账人拉进指定群\n仅私聊转账触发，与自动收款开关互不影响" y:y width:w];
}

@end
