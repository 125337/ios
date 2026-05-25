#import "../Common/SettingController.h"
#import "SettingMessageTimeController.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/WeChatAlertHelper.h"
#import <objc/runtime.h>

@implementation SettingLayoutFunctionController
@end

@implementation SettingGeneralFunctionController {
    BOOL _isLayoutPage;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _isLayoutPage = [self isKindOfClass:[SettingLayoutFunctionController class]];
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    if (_isLayoutPage) {
        self.title = @"界面布局";
        [self buildUI];
        return;
    }
    self.title = @"通用功能";
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
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

    if (_isLayoutPage) {
        // ===== 界面布局页 =====
        UIView *group = [self addTableGroupAtY:y width:w];
        CGFloat cy = 0;

        cy = [self addNavRowInGroup:group
                               title:@"隐藏头像"
                            subtitle:@"私聊/群聊/公众号"
                                 tag:500
                              action:@selector(onAvatarHideTap)
                                  cy:cy
                               width:w];

        y = [self finishGroup:group atY:y height:cy];
    }

    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    NSString *revokeStatus = config.preventRecall ? @"已开启" : @"已关闭";
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

    cy = [self addSeparatorInGroup:group cy:cy width:w];

    NSString *timeStatus = config.showMessageTime ? @"已开启" : @"已关闭";
    cy = [self addNavRowInGroup:group
                             title:@"显示消息时间"
                          subtitle:timeStatus
                               tag:300
                            action:@selector(onMessageTimeSettingTap)
                                cy:cy
                             width:w];

    y = [self finishGroup:group atY:y height:cy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

- (void)onMessageTimeSettingTap {
    SettingMessageTimeController *vc = [[SettingMessageTimeController alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
    [vc release];
}

- (void)onRevokeSettingTap {
    SettingRevokeController *vc = [[SettingRevokeController alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
    [vc release];
}

- (void)onAvatarHideTap {
    SettingAvatarHideController *vc = [[SettingAvatarHideController alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
    [vc release];
}

@end
