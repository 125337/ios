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
#import "../../Modules/KeywordAlert/KeywordAlertConfig.h"
#import "SettingKeywordAlertController.h"
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

// 微信引擎开关落地钩子（替代旧 UISwitch switchChanged: 入口）
- (void)wpAfterSwitchChanged:(NSString *)key on:(BOOL)on {
    if ([key isEqualToString:@"enableJoker"] && on) {
        [MioAlertHelper showTipAlert:@"修改文字功能已启用\n长按文本/转账消息即可修改\n长按钱包余额可修改"];
    }

    // 微信加密：开启后弹出6位密码输入框（密码打点 + 数字键盘，与全项目统一走 WCUIAlertView）
    if ([key isEqualToString:@"privacyEncryptEnabled"] && on) {
        NSString *current = [PrivacyConfig shared].privacyEncryptPassword ?: @"";
        [MioAlertHelper showInputAlert:@"微信加密"
                               message:@"请输入6位数密码"
                           initialText:current
                           placeholder:@"6位数字密码"
                              keyboard:UIKeyboardTypeNumberPad
                                secure:YES
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

    cy = [self addSeparatorInGroup:group cy:cy width:w];

    NSString *kaStatus = [KeywordAlertConfig shared].keywordAlertEnabled ? @"已开启" : @"已关闭";
    cy = [self addNavRowInGroup:group
                             title:@"关键词提醒"
                          subtitle:kaStatus
                               tag:500
                            action:@selector(onKeywordAlertTap)
                                cy:cy
                             width:w];

    y = [self finishGroup:group atY:y height:cy];

    // ── 隐私保护卡片 ──
    y += 8;
    y = [self addSectionHeader:@"隐私保护" y:y width:w];
    UIView *pGroup = [self addTableGroupAtY:y width:w];
    CGFloat pcy = 0;
    PrivacyConfig *pc = [PrivacyConfig shared];

    // 1. 微信加密（手风琴：开启弹 6 位密码输入框见 wpAfterSwitchChanged，展开修改密码/面部识别/保护时间）
    pcy = [self addMasterSwitchRowInGroup:pGroup
                                    title:@"微信加密"
                                      key:@"privacyEncryptEnabled"
                                     isOn:pc.privacyEncryptEnabled
                               subBuilder:^(UIView *expand, CGFloat *ecy) {
        PrivacyConfig *c = [PrivacyConfig shared];
        NSString *pwd = c.privacyEncryptPassword ?: @"";
        *ecy = [self addInputRowInGroup:expand
                                  title:@"修改解锁密码"
                                    key:@"privacyEncryptPassword"
                                  value:pwd
                                   hint:@"6位数字"
                              valueType:InputValueTypeNumber
                             alertTitle:@"修改解锁密码"
                           alertMessage:@"请输入6位数密码"
                                     cy:*ecy
                                  width:w];
        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"面部识别解锁"
                                        key:@"privacyEncryptBiometricEnabled"
                                       isOn:c.privacyEncryptBiometricEnabled
                                         cy:*ecy
                                      width:w];
        NSString *prot = [NSString stringWithFormat:@"%ld", (long)c.privacyEncryptProtectionTime];
        *ecy = [self addInputRowInGroup:expand
                                  title:@"设置保护时间"
                                    key:@"privacyEncryptProtectionTime"
                                  value:prot
                                   hint:@"15"
                              valueType:InputValueTypeNumber
                             alertTitle:@"设置保护时间"
                           alertMessage:@"保护时间(5-60秒)\n保护时间是指退出微信后，多长时间不需要重新验证"
                                     cy:*ecy
                                  width:w];
    } cy:pcy width:w];

    pcy = [self addSeparatorInGroup:pGroup cy:pcy width:w];

    // 2. 后台模糊（手风琴：开启展开模糊度）
    pcy = [self addMasterSwitchRowInGroup:pGroup
                                    title:@"后台模糊"
                                      key:@"privacyBlurEnabled"
                                     isOn:pc.privacyBlurEnabled
                               subBuilder:^(UIView *expand, CGFloat *ecy) {
        PrivacyConfig *c = [PrivacyConfig shared];
        NSString *val = [NSString stringWithFormat:@"%ld", (long)c.privacyBlurDegree];
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
        NSString *val = [NSString stringWithFormat:@"%ld", (long)c.privacyKeepAliveInterval];
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

- (void)onKeywordAlertTap {
    WPLog(@"Setting", @"[Nav] pushed SettingKeywordAlertController");
    SettingKeywordAlertController *vc = [[SettingKeywordAlertController alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
}

@end