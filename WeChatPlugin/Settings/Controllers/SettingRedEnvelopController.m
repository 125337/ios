#import "../Common/SettingController.h"
#import "../../Config/PluginConfig.h"
#import "WeChatTweakGroupSelectsController.h"
#import <objc/runtime.h>

__attribute__((unused))
static void configLog(NSString *format, ...) {
    @try {
        va_list args;
        va_start(args, format);
        NSString *content = [[NSString alloc] initWithFormat:format arguments:args];
        va_end(args);
        
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath withIntermediateDirectories:YES attributes:nil error:nil];
        NSString *filePath = [folderPath stringByAppendingPathComponent:@"redenvelop.log"];
        NSString *line = [NSString stringWithFormat:@"[%@] %@\n", [NSDate date], content];
        NSFileHandle *handle = [NSFileHandle fileHandleForWritingAtPath:filePath];
        if (handle) {
            [handle seekToEndOfFile];
            [handle writeData:[line dataUsingEncoding:NSUTF8StringEncoding]];
            [handle closeFile];
        } else {
            [line writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:nil];
        }
    } @catch (NSException *e) {}
}

@implementation SettingRedEnvelopController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"自动抢红包";
    [self buildUI];
}

- (void)buttonClicked:(NSString *)key {
    configLog([NSString stringWithFormat:@"[BUTTON] SettingRedEnvelopController buttonClicked: called with key=%@", key]);
    if ([key isEqualToString:@"SelectGroupFilter"]) {
        configLog(@"[BUTTON] key is SelectGroupFilter, calling showGroupSelectController");
        [self showGroupSelectController];
        configLog(@"[BUTTON] showGroupSelectController returned");
        return;
    }
    configLog(@"[BUTTON] key not SelectGroupFilter, calling super");
    [super buttonClicked:key];
}

- (void)showGroupSelectController {
    configLog(@"[GroupSelect] showGroupSelectController called");
    PluginConfig *config = [PluginConfig shared];
    configLog([NSString stringWithFormat:@"[GroupSelect] config.redEnvelopGroupFilterList=%@", config.redEnvelopGroupFilterList]);
    
    @try {
        WeChatTweakGroupSelectsController *vc = [[WeChatTweakGroupSelectsController alloc] 
            initWithSelectedGroups:config.redEnvelopGroupFilterList 
            title:@"选择不抢红包的群"];
        configLog([NSString stringWithFormat:@"[GroupSelect] vc created: %@", vc]);
        vc.delegate = self;
        configLog(@"[GroupSelect] delegate set");
        [self.navigationController pushViewController:vc animated:YES];
        configLog(@"[GroupSelect] pushViewController called");
    } @catch (NSException *e) {
        configLog([NSString stringWithFormat:@"[GroupSelect] exception: %@", e]);
    }
}

#pragma mark - WeChatTweakGroupSelectsDelegate

- (void)onGroupSelectReturn:(NSArray<NSString *> *)groupIds {
    PluginConfig *config = [PluginConfig shared];
    config.redEnvelopGroupFilterList = groupIds;
    [config save];
    [self buildUI];
}

- (void)onGroupSelectCancel {
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    [self.inputFields removeAllObjects];
    self.masterSwitchKeys = [NSMutableSet set];

    PluginConfig *config = [PluginConfig shared];
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    y = [self addSectionHeader:@"红包设置" y:y width:w];
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addMasterSwitchRowInGroup:group
                                    title:@"启用自动抢红包"
                                      key:@"AutoRedEnvelop"
                                     isOn:config.autoRedEnvelop
                               subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSubSwitchRowInGroup:expand title:@"抢自己发的红包" key:@"RedEnvelopCatchMe" isOn:config.redEnvelopCatchMe cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSubSwitchRowInGroup:expand title:@"抢私聊红包" key:@"PersonalRedEnvelopEnable" isOn:config.personalRedEnvelopEnable cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSubSwitchRowInGroup:expand title:@"显示红包详情" key:@"RedEnvelopeDetail" isOn:config.redEnvelopeDetail cy:*ecy width:w];

        *ecy = [self addSubSectionLabelInGroup:expand text:@"延迟设置" cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"延迟时间" key:@"RedEnvelopDelay" value:[NSString stringWithFormat:@"%u", config.redEnvelopDelay] hint:@"秒" cy:*ecy width:w];

        *ecy = [self addSubSectionLabelInGroup:expand text:@"过滤设置" cy:*ecy width:w];
        *ecy = [self addSubSwitchRowInGroup:expand title:@"过滤红包关键词" key:@"RedEnvelopTextFilterEnabled" isOn:config.redEnvelopTextFilterEnabled cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"关键词" key:@"RedEnvelopTextFilter" value:config.redEnvelopTextFilter hint:@"逗号分隔，如: 拼多多,京东" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSubSwitchRowInGroup:expand title:@"过滤不抢的群" key:@"RedEnvelopGroupFilterEnabled" isOn:config.redEnvelopGroupFilterEnabled cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        
        NSString *groupFilterHint = config.redEnvelopGroupFilterList.count > 0 
            ? [NSString stringWithFormat:@"已选择 %lu 个群", (unsigned long)config.redEnvelopGroupFilterList.count] 
            : @"点击选择群聊";
        *ecy = [self addButtonRowInGroup:expand title:@"选择群聊" hint:groupFilterHint key:@"SelectGroupFilter" cy:*ecy width:w];

        *ecy = [self addSubSectionLabelInGroup:expand text:@"自动回复" cy:*ecy width:w];
        *ecy = [self addSubSwitchRowInGroup:expand title:@"抢红包后自动回复" key:@"RedEnvelopAutoReply" isOn:config.redEnvelopAutoReply cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSubSwitchRowInGroup:expand title:@"群聊中也自动回复" key:@"RedEnvelopAutoReplyInGroup" isOn:config.redEnvelopAutoReplyInGroup cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"回复内容" key:@"RedEnvelopAutoReplyStr" value:config.redEnvelopAutoReplyStr hint:@"谢谢老板" cy:*ecy width:w];

        *ecy = [self addHintRowInGroup:expand text:@"关键词过滤: 红包消息中包含指定关键词则不抢\n群过滤: 指定群聊中不自动抢红包\n延迟时间建议设为 1-3 秒" cy:*ecy width:w];
    } cy:cy width:w];

    y = [self finishGroup:group atY:y height:cy];

    if (!config.autoRedEnvelop) {
        y = [self addHintRowInGroup:[UIView new] text:@"开启自动抢红包后可配置详细选项" cy:y width:w];
    }

    y = [self addSectionHeader:@"自动收款" y:y width:w];
    UIView *group2 = [self addTableGroupAtY:y width:w];
    CGFloat cy2 = 0;

    cy2 = [self addMasterSwitchRowInGroup:group2
                                     title:@"启用自动收款"
                                       key:@"AutoConfirmTransfer"
                                      isOn:config.autoConfirmTransfer
                                subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSubSwitchRowInGroup:expand title:@"私聊转账自动收款" key:@"AutoConfirmTransferPersonal" isOn:config.autoConfirmTransferPersonal cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSubSwitchRowInGroup:expand title:@"群聊转账自动收款" key:@"AutoConfirmTransferGroup" isOn:config.autoConfirmTransferGroup cy:*ecy width:w];

        *ecy = [self addSubSectionLabelInGroup:expand text:@"安全设置" cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"确认延迟" key:@"AutoConfirmTransferDelay" value:[NSString stringWithFormat:@"%u", config.autoConfirmTransferDelay] hint:@"秒" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"金额上限(分)" key:@"AutoConfirmTransferMaxAmount" value:config.autoConfirmTransferMaxAmount > 0 ? [NSString stringWithFormat:@"%lld", config.autoConfirmTransferMaxAmount] : @"" hint:@"0=不限" cy:*ecy width:w];

        *ecy = [self addSubSectionLabelInGroup:expand text:@"收款后自动回复" cy:*ecy width:w];
        *ecy = [self addSubSwitchRowInGroup:expand title:@"启用自动回复" key:@"AutoConfirmTransferAutoReply" isOn:config.autoConfirmTransferAutoReply cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"回复内容" key:@"AutoConfirmTransferAutoReplyStr" value:config.autoConfirmTransferAutoReplyStr hint:@"已收到款项，谢谢！" cy:*ecy width:w];

        *ecy = [self addHintRowInGroup:expand text:@"自动收款: 收到转账后自动确认收款\n金额上限: 超过设定金额的转账不会自动收款\n延迟时间建议设为 1-3 秒" cy:*ecy width:w];
    } cy:cy2 width:w];

    y = [self finishGroup:group2 atY:y height:cy2];

    if (!config.autoConfirmTransfer) {
        y = [self addHintRowInGroup:[UIView new] text:@"开启自动收款后可配置详细选项" cy:y width:w];
    }

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

- (void)autoSaveTextField:(UITextField *)tf {
    NSString *key = objc_getAssociatedObject(tf, "key");
    if (!key) return;
    NSString *value = tf.text.length > 0 ? tf.text : nil;
    PluginConfig *config = [PluginConfig shared];
    @try {
        if ([key isEqualToString:@"RedEnvelopDelay"]) {
            NSInteger v = [value integerValue];
            config.redEnvelopDelay = v >= 0 ? (unsigned int)v : 0;
        } else if ([key isEqualToString:@"RedEnvelopTextFilter"]) {
            config.redEnvelopTextFilter = value ?: @"";
        } else if ([key isEqualToString:@"RedEnvelopAutoReplyStr"]) {
            config.redEnvelopAutoReplyStr = value ?: @"谢谢老板";
        } else if ([key isEqualToString:@"AutoConfirmTransferDelay"]) {
            NSInteger v = [value integerValue];
            config.autoConfirmTransferDelay = v >= 0 ? (unsigned int)v : 0;
        } else if ([key isEqualToString:@"AutoConfirmTransferMaxAmount"]) {
            config.autoConfirmTransferMaxAmount = [value longLongValue];
        } else if ([key isEqualToString:@"AutoConfirmTransferAutoReplyStr"]) {
            config.autoConfirmTransferAutoReplyStr = value ?: @"已收到款项，谢谢！";
        } else {
            [super autoSaveTextField:tf];
            return;
        }
    } @catch (NSException *e) {
        return;
    }
    [config save];
}

@end
