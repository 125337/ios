#import "SettingGeneralFunctionController.h"
#import "SettingMessageTimeController.h"
#import "SettingRevokeController.h"
#import "SettingPageLockController.h"
#import "../../Modules/Revoke/RevokeConfig.h"
#import "../../Modules/Unread/ClearUnreadConfig.h"
#import "../../Modules/MessageTime/MessageTimeConfig.h"
#import "../../Modules/Joker/JokerConfig.h"
#import "../../Modules/GroupExit/GroupExitConfig.h"
#import "../../Modules/Privacy/PrivacyConfig.h"
#import "../../Core/MioAlertHelper.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/LogManager.h"
#import <objc/runtime.h>

@implementation SettingGeneralFunctionController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"通用功能";
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self buildUI];
}

- (void)switchChanged:(UISwitch *)sender {
    [super switchChanged:sender];

    NSString *key = objc_getAssociatedObject(sender, "key");
    if ([key isEqualToString:@"enableJoker"] && sender.on) {
        [MioAlertHelper showTipAlert:@"修改文字功能已启用\n长按文本/转账消息即可修改\n长按钱包余额可修改"];
    }

    // 微信加密：开启后弹出6位密码输入框
    if ([key isEqualToString:@"privacyEncryptEnabled"] && sender.on) {
        NSString *current = [PrivacyConfig shared].privacyEncryptPassword ?: @"";
        [MioAlertHelper showInputAlertWithInitialText:current
                                              message:@"请输入6位数密码"
                                               target:self
                                            onConfirm:^(NSString *input) {
            NSString *pwd = [input stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
            if (pwd.length != 6) {
                [MioAlertHelper showTipAlert:@"密码必须为6位"];
                return;
            }
            [ConfigManager setValue:pwd forKey:@"privacyEncryptPassword"];
            [ConfigManager saveAll];
            WPLog(@"Privacy", @"[Encrypt] 密码已保存");
        }];
    }
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }

    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 8;

    y = [self addSectionHeader:@"常用功能" y:y width:w];
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    NSString *revokeStatus = [RevokeConfig shared].preventRecall ? @"已开启" : @"已关闭";
    cy = [self addNavRowInGroup:group
                           title:@"消息防撤回"
                        subtitle:revokeStatus
                             tag:400
                          action:@selector(onRevokeSettingTap)
                              cy:cy
                           width:w];

    cy = [self addSeparatorInGroup:group cy:cy width:w];

    cy = [self addSwitchRowInGroup:group
                              title:@"启用一键已读消息"
                               desc:nil
                                key:@"clearUnreadEnabled"
                               isOn:[ClearUnreadConfig shared].clearUnreadEnabled
                                 cy:cy
                              width:w];

    cy = [self addSeparatorInGroup:group cy:cy width:w];

    cy = [self addSwitchRowInGroup:group
                              title:@"启用修改文字(小丑功能)"
                               desc:nil
                                key:@"enableJoker"
                               isOn:[JokerConfig shared].enableJoker
                                 cy:cy
                              width:w];

    cy = [self addSeparatorInGroup:group cy:cy width:w];

    cy = [self addSwitchRowInGroup:group
                              title:@"启用退群检测"
                               desc:nil
                                key:@"enableGroupExitMonitor"
                               isOn:[GroupExitConfig shared].enableGroupExitMonitor
                                 cy:cy
                              width:w];

    cy = [self addSeparatorInGroup:group cy:cy width:w];

    NSString *timeStatus = [MessageTimeConfig shared].showMessageTime ? @"已开启" : @"已关闭";
    cy = [self addNavRowInGroup:group
                             title:@"显示消息时间"
                          subtitle:timeStatus
                               tag:300
                            action:@selector(onMessageTimeSettingTap)
                                cy:cy
                             width:w];

    y = [self finishGroup:group atY:y height:cy];

    // ── 隐私保护卡片 ──
    y += 8;
    y = [self addSectionHeader:@"隐私保护" y:y width:w];
    UIView *pGroup = [self addTableGroupAtY:y width:w];
    CGFloat pcy = 0;
    PrivacyConfig *pc = [PrivacyConfig shared];

    // 1. 微信加密（开启后弹 6 位密码输入框，见 switchChanged）
    pcy = [self addSwitchRowInGroup:pGroup
                              title:@"微信加密"
                               desc:nil
                                key:@"privacyEncryptEnabled"
                               isOn:pc.privacyEncryptEnabled
                                 cy:pcy
                              width:w];

    pcy = [self addSeparatorInGroup:pGroup cy:pcy width:w];

    // 2. 后台模糊（手风琴：开启展开模糊度）
    pcy = [self addMasterSwitchRowInGroup:pGroup
                                    title:@"后台模糊"
                                      key:@"privacyBlurEnabled"
                                     isOn:pc.privacyBlurEnabled
                               subBuilder:^(UIView *expand, CGFloat *ecy) {
        PrivacyConfig *c = [PrivacyConfig shared];
        NSString *val = c.privacyBlurDegree > 0
            ? [NSString stringWithFormat:@"%ld", (long)c.privacyBlurDegree] : nil;
        *ecy = [self addInputRowInGroup:expand
                                  title:@"模糊度"
                                    key:@"privacyBlurDegree"
                                  value:val
                                   hint:@"80"
                              valueType:InputValueTypeNumber
                             alertTitle:@"模糊度"
                           alertMessage:@"请输入模糊度\n数值越高模糊效果越高"
                                     cy:*ecy
                                  width:w];
    } cy:pcy width:w];

    pcy = [self addSeparatorInGroup:pGroup cy:pcy width:w];

    // 3. 后台保活（手风琴：开启展开保活周期 + 掉线通知）
    pcy = [self addMasterSwitchRowInGroup:pGroup
                                    title:@"后台保活"
                                      key:@"privacyKeepAliveEnabled"
                                     isOn:pc.privacyKeepAliveEnabled
                               subBuilder:^(UIView *expand, CGFloat *ecy) {
        PrivacyConfig *c = [PrivacyConfig shared];
        NSString *val = c.privacyKeepAliveInterval > 0
            ? [NSString stringWithFormat:@"%ld", (long)c.privacyKeepAliveInterval] : nil;
        *ecy = [self addInputRowInGroup:expand
                                  title:@"保活周期"
                                    key:@"privacyKeepAliveInterval"
                                  value:val
                                   hint:@"25"
                              valueType:InputValueTypeNumber
                             alertTitle:@"保活周期"
                           alertMessage:@"请输入续命检查周期10-30秒"
                                     cy:*ecy
                                  width:w];
        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"掉线通知"
                                        key:@"privacyOfflineNotifyEnabled"
                                       isOn:c.privacyOfflineNotifyEnabled
                                         cy:*ecy
                                      width:w];
    } cy:pcy width:w];

    pcy = [self addSeparatorInGroup:pGroup cy:pcy width:w];

    // 4. 指定页面上锁 → 二级页面
    pcy = [self addNavRowInGroup:pGroup
                           title:@"指定页面上锁"
                        subtitle:nil
                              tag:900
                           action:@selector(onPageLockTap)
                               cy:pcy
                            width:w];

    y = [self finishGroup:pGroup atY:y height:pcy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

- (void)onPageLockTap {
    SettingPageLockController *vc = [[SettingPageLockController alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
    WPLog(@"Setting", @"[Nav] pushed SettingPageLockController");
}

- (void)onMessageTimeSettingTap {
    SettingMessageTimeController *vc = [[SettingMessageTimeController alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
}

- (void)onRevokeSettingTap {
    SettingRevokeController *vc = [[SettingRevokeController alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
}

@end