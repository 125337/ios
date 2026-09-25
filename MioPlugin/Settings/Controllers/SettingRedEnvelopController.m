#import "SettingRedEnvelopController.h"
#import "../../Modules/RedEnvelop/RedEnvelopConfig.h"
#import "../../Modules/AutoTransfer/AutoTransferConfig.h"
#import "../../Core/ConfigManager.h"
#import "MioTweakGroupSelectsController.h"
#import <objc/runtime.h>
#import "../../Core/LogManager.h"
#import "../../Config/WPColors.h"

@interface SettingRedEnvelopController ()
@end

@implementation SettingRedEnvelopController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"自动抢红包";
    [self buildUI];
}

- (void)buttonClicked:(NSString *)key {
    WPLog(@"Setting", @"[BUTTON] SettingRedEnvelopController buttonClicked: called with key=%@", key);
    if ([key isEqualToString:@"selectGroupFilter"]) {
        WPLog(@"Setting", @"[BUTTON] key is SelectGroupFilter, calling showGroupSelectController");
        [self showGroupSelectController];
        WPLog(@"Setting", @"[BUTTON] showGroupSelectController returned");
        return;
    }
    if ([key isEqualToString:@"selectSyncTarget"]) {
        [self showSyncTargetPicker];
        return;
    }
    WPLog(@"Setting", @"[BUTTON] key not SelectGroupFilter, calling super");
    [super buttonClicked:key];
}

#pragma mark - 红包信息同步到窗口

- (NSString *)syncModeHintText {
    RedEnvelopConfig *config = [RedEnvelopConfig shared];
    switch (config.redEnvelopSyncMode) {
        case 1: return @"个人窗口";
        case 2: return @"文件助手";
        case 3: return @"当前窗口";
        case 4: return config.redEnvelopSyncCustomTarget.length
                     ? [NSString stringWithFormat:@"自定义: %@", config.redEnvelopSyncCustomTarget]
                     : @"自定义窗口";
        default: return @"不同步";
    }
}

- (void)showSyncTargetPicker {
    RedEnvelopConfig *config = [RedEnvelopConfig shared];
    UIAlertController *sheet = [UIAlertController alertControllerWithTitle:@"红包消息同步"
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];
    void (^select)(NSInteger) = ^(NSInteger mode) {
        config.redEnvelopSyncMode = mode;
        [ConfigManager saveAll];
        // 等 action sheet 完全退场后重建（与 wpHandleSwitchKey 同款组合：
        // 只调 buildUI 行进旧表引擎不刷新，必须先 wpRebuildWeChatTable 重建表容器）
        [self dismissViewControllerAnimated:YES completion:^{
            dispatch_async(dispatch_get_main_queue(), ^{
                [self wpRebuildWeChatTable];
                [self buildUI];
            });
        }];
    };
    [sheet addAction:[UIAlertAction actionWithTitle:@"不同步" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) { select(0); }]];
    [sheet addAction:[UIAlertAction actionWithTitle:@"同步到个人窗口" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) { select(1); }]];
    [sheet addAction:[UIAlertAction actionWithTitle:@"同步到文件助手" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) { select(2); }]];
    [sheet addAction:[UIAlertAction actionWithTitle:@"同步到当前窗口" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) { select(3); }]];
    [sheet addAction:[UIAlertAction actionWithTitle:@"同步到自定义窗口" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) { [self promptCustomSyncTarget]; }]];
    [sheet addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [self presentViewController:sheet animated:YES completion:nil];
}

- (void)promptCustomSyncTarget {
    RedEnvelopConfig *config = [RedEnvelopConfig shared];
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"自定义同步窗口"
                                                                  message:@"输入目标会话的 wxid（如 wxid_xxx）"
                                                           preferredStyle:UIAlertControllerStyleAlert];
    [alert addTextFieldWithConfigurationHandler:^(UITextField *tf) {
        tf.text = config.redEnvelopSyncCustomTarget;
        tf.placeholder = @"wxid_xxx";
    }];
    [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
        NSString *input = [alert.textFields.firstObject.text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (!input.length) return;
        config.redEnvelopSyncCustomTarget = input;
        config.redEnvelopSyncMode = 4;
        [ConfigManager saveAll];
        [self dismissViewControllerAnimated:YES completion:^{
            dispatch_async(dispatch_get_main_queue(), ^{
                [self wpRebuildWeChatTable];
                [self buildUI];
            });
        }];
    }]];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [self presentViewController:alert animated:YES completion:nil];
}

- (void)showGroupSelectController {
    WPLog(@"Setting", @"[GroupSelect] showGroupSelectController called");
    RedEnvelopConfig *config = [RedEnvelopConfig shared];
    WPLog(@"Setting", @"[GroupSelect] config.redEnvelopGroupFilterList=%@", config.redEnvelopGroupFilterList);
    
    @try {
        MioTweakGroupSelectsController *vc = [[MioTweakGroupSelectsController alloc] 
            initWithSelectedGroups:config.redEnvelopGroupFilterList 
            title:@"选择不抢红包的群"];
        WPLog(@"Setting", @"[GroupSelect] vc created: %@", vc);
        vc.delegate = self;
        WPLog(@"Setting", @"[GroupSelect] delegate set");
        [self.navigationController pushViewController:vc animated:YES];
        WPLog(@"Setting", @"[GroupSelect] pushViewController called");
    } @catch (NSException *e) {
        WPLog(@"Setting", @"[GroupSelect] exception: %@", e);
    }
}

#pragma mark - MioTweakGroupSelectsDelegate

- (void)onGroupSelectReturn:(NSArray<NSString *> *)groupIds {
    RedEnvelopConfig *config = [RedEnvelopConfig shared];
    config.redEnvelopGroupFilterList = groupIds;
    [ConfigManager saveAll];
    // 与 wpHandleSwitchKey 同款组合：只 buildUI 行进旧表，引擎表不重载 hint 不刷新
    [self wpRebuildWeChatTable];
    [self buildUI];
}

- (void)onGroupSelectCancel {
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    RedEnvelopConfig *config = [RedEnvelopConfig shared];
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    y = [self addSectionHeader:@"红包设置" y:y width:w];
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addMasterSwitchRowInGroup:group
                                    title:@"启用自动抢红包"
                                      key:@"autoRedEnvelop"
                                     isOn:config.autoRedEnvelop
                               subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSubSwitchRowInGroup:expand title:@"抢自己发的红包" key:@"redEnvelopCatchMe" isOn:config.redEnvelopCatchMe cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSubSwitchRowInGroup:expand title:@"抢私聊红包" key:@"personalRedEnvelopEnable" isOn:config.personalRedEnvelopEnable cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSubSwitchRowInGroup:expand title:@"显示红包详情" key:@"redEnvelopeDetail" isOn:config.redEnvelopeDetail cy:*ecy width:w];

        *ecy = [self addSubSectionLabelInGroup:expand text:@"延迟设置" cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"延迟时间" key:@"redEnvelopDelay" value:[NSString stringWithFormat:@"%u", config.redEnvelopDelay] hint:@"秒" valueType:InputValueTypeNumber cy:*ecy width:w];

        *ecy = [self addSubSectionLabelInGroup:expand text:@"过滤设置" cy:*ecy width:w];
        *ecy = [self addSubSwitchRowInGroup:expand title:@"过滤红包关键词" key:@"redEnvelopTextFilterEnabled" isOn:config.redEnvelopTextFilterEnabled cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"关键词" key:@"redEnvelopTextFilter" value:config.redEnvelopTextFilter hint:@"逗号分隔，如: 拼多多,京东" valueType:InputValueTypeText cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSubSwitchRowInGroup:expand title:@"过滤不抢的群" key:@"redEnvelopGroupFilterEnabled" isOn:config.redEnvelopGroupFilterEnabled cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        
        NSString *groupFilterHint = config.redEnvelopGroupFilterList.count > 0
            ? [NSString stringWithFormat:@"已选择 %lu 个群", (unsigned long)config.redEnvelopGroupFilterList.count]
            : @"点击选择群聊";
        *ecy = [self addButtonRowInGroup:expand title:@"选择群聊" hint:groupFilterHint key:@"selectGroupFilter" cy:*ecy width:w];

        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addButtonRowInGroup:expand title:@"红包信息同步到窗口" hint:[self syncModeHintText] key:@"selectSyncTarget" cy:*ecy width:w];

        *ecy = [self addSubSectionLabelInGroup:expand text:@"自动回复" cy:*ecy width:w];
        *ecy = [self addSubSwitchRowInGroup:expand title:@"抢红包后自动回复" key:@"redEnvelopAutoReply" isOn:config.redEnvelopAutoReply cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSubSwitchRowInGroup:expand title:@"群聊中也自动回复" key:@"redEnvelopAutoReplyInGroup" isOn:config.redEnvelopAutoReplyInGroup cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"回复内容" key:@"redEnvelopAutoReplyStr" value:config.redEnvelopAutoReplyStr hint:@"谢谢老板" valueType:InputValueTypeText cy:*ecy width:w];

        *ecy = [self addHintRowInGroup:expand text:@"关键词过滤: 红包消息中包含指定关键词则不抢\n群过滤: 指定群聊中不自动抢红包\n延迟时间建议设为 1-3 秒" cy:*ecy width:w];
    } cy:cy width:w];

    y = [self finishGroup:group atY:y height:cy];

    if (!config.autoRedEnvelop) {
        [self addSectionFooter:@"开启自动抢红包后可配置详细选项" y:y width:w];
    }

    y = [self addSectionHeader:@"自动收款" y:y width:w];
    UIView *group2 = [self addTableGroupAtY:y width:w];
    CGFloat cy2 = 0;
    AutoTransferConfig *transferConfig = [AutoTransferConfig shared];

    cy2 = [self addMasterSwitchRowInGroup:group2
                                     title:@"启用自动收款"
                                       key:@"autoConfirmTransfer"
                                      isOn:transferConfig.autoConfirmTransfer
                                subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSubSwitchRowInGroup:expand title:@"私聊转账自动收款" key:@"autoConfirmTransferPersonal" isOn:transferConfig.autoConfirmTransferPersonal cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSubSwitchRowInGroup:expand title:@"群聊转账自动收款" key:@"autoConfirmTransferGroup" isOn:transferConfig.autoConfirmTransferGroup cy:*ecy width:w];

        *ecy = [self addSubSectionLabelInGroup:expand text:@"安全设置" cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"确认延迟" key:@"autoConfirmTransferDelay" value:[NSString stringWithFormat:@"%u", transferConfig.autoConfirmTransferDelay] hint:@"秒" valueType:InputValueTypeNumber cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"金额上限(分)" key:@"autoConfirmTransferMaxAmount" value:transferConfig.autoConfirmTransferMaxAmount > 0 ? [NSString stringWithFormat:@"%lld", transferConfig.autoConfirmTransferMaxAmount] : @"" hint:@"0=不限" valueType:InputValueTypeNumber cy:*ecy width:w];

        *ecy = [self addSubSectionLabelInGroup:expand text:@"收款后自动回复" cy:*ecy width:w];
        *ecy = [self addSubSwitchRowInGroup:expand title:@"启用自动回复" key:@"autoConfirmTransferAutoReply" isOn:transferConfig.autoConfirmTransferAutoReply cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"回复内容" key:@"autoConfirmTransferAutoReplyStr" value:transferConfig.autoConfirmTransferAutoReplyStr hint:@"已收到款项，谢谢！" valueType:InputValueTypeText cy:*ecy width:w];

        *ecy = [self addHintRowInGroup:expand text:@"自动收款: 收到转账后自动确认收款\n金额上限: 超过设定金额的转账不会自动收款\n延迟时间建议设为 1-3 秒" cy:*ecy width:w];
    } cy:cy2 width:w];

    y = [self finishGroup:group2 atY:y height:cy2];

    if (!transferConfig.autoConfirmTransfer) {
        [self addSectionFooter:@"开启自动收款后可配置详细选项" y:y width:w];
    }

    WPLog(@"UI", @"[Sub] SettingRedEnvelopController buildUI done");
}

@end