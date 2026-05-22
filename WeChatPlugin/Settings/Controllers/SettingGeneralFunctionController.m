#import "../Common/SettingController.h"
#import "SettingMessageTimeController.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/WPAlert.h"
#import "../../Core/WeChatAlertHelper.h"
#import <objc/runtime.h>

@implementation SettingGeneralFunctionController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"通用功能";
    [self buildUI];
}

- (void)switchChanged:(UISwitch *)sender {
    [super switchChanged:sender];

    NSString *key = objc_getAssociatedObject(sender, "key");
    if ([key isEqualToString:@"EnableJoker"] && sender.on) {
        [WeChatAlertHelper showTipAlert:@"修改文字功能已启用\n长按文本/转账消息即可修改\n长按钱包余额可修改"];
    }
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    [self.inputFields removeAllObjects];

    PluginConfig *config = [PluginConfig shared];
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addSwitchRowInGroup:group
                              title:@"启用消息防撤回"
                               desc:nil
                                key:@"PreventRecall"
                               isOn:config.preventRecall
                                 cy:cy
                              width:w];

    cy = [self addSeparatorInGroup:group cy:cy width:w];

    cy = [self addSwitchRowInGroup:group
                              title:@"启用一键已读消息"
                               desc:nil
                                key:@"ClearUnreadEnabled"
                               isOn:config.clearUnreadEnabled
                                 cy:cy
                              width:w];

    cy = [self addSeparatorInGroup:group cy:cy width:w];

    cy = [self addSwitchRowInGroup:group
                              title:@"启用修改文字(小丑功能)"
                               desc:nil
                                key:@"EnableJoker"
                               isOn:config.enableJoker
                                 cy:cy
                              width:w];

    cy = [self addSeparatorInGroup:group cy:cy width:w];

    cy = [self addSwitchRowInGroup:group
                              title:@"启用退群检测"
                               desc:nil
                                key:@"EnableGroupExitMonitor"
                               isOn:config.enableGroupExitMonitor
                                 cy:cy
                              width:w];

    y = [self finishGroup:group atY:y height:cy];

    UIView *timeGroup = [self addTableGroupAtY:y width:w];
    CGFloat timeY = 0;

    NSString *timeStatus = config.showMessageTime ? @"已开启" : @"已关闭";
    timeY = [self addNavRowInGroup:timeGroup
                             title:@"显示消息时间"
                          subtitle:timeStatus
                               tag:300
                            action:@selector(onMessageTimeSettingTap)
                                cy:timeY
                             width:w];

    timeY = [self addSeparatorInGroup:timeGroup cy:timeY width:w];
    timeY = [self addSwitchRowInGroup:timeGroup
                                  title:@"隐藏聊天时间分隔线"
                                   desc:nil
                                    key:@"HideChatTime"
                                   isOn:config.hideChatTime
                                     cy:timeY
                                  width:w];

    y = [self finishGroup:timeGroup atY:y height:timeY];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

- (void)onMessageTimeSettingTap {
    SettingMessageTimeController *vc = [[SettingMessageTimeController alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
}

@end
