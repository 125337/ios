#import "../Common/SettingController.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/WPAlert.h"
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
        [WPAlert showTip:@"修改文字"
                 message:@"已为你启用了修改文字功能\n长按聊天记录即可修改"
                    from:self];
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

    timeY = [self addMasterSwitchRowInGroup:timeGroup
                                        title:@"显示消息时间"
                                          key:@"ShowMessageTime"
                                         isOn:config.showMessageTime
                                   subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addNavRowInGroup:expand title:@"显示位置" subtitle:[self positionName:config.messageTimePosition] tag:100 action:@selector(onMessageTimePositionTap) cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"字体大小" key:@"MessageTimeFontSize" value:[NSString stringWithFormat:@"%.1f", config.messageTimeFontSize] hint:@"7.0" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSwitchRowInGroup:expand title:@"粗体字体" desc:nil key:@"MessageTimeBoldFont" isOn:config.messageTimeBoldFont cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"文字颜色" key:@"MessageTimeTextColor" value:config.messageTimeTextColor hint:@"#999999" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"水平偏移" key:@"MessageTimeOffsetX" value:[NSString stringWithFormat:@"%.1f", config.messageTimeOffsetX] hint:@"0" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"垂直偏移" key:@"MessageTimeOffsetY" value:[NSString stringWithFormat:@"%.1f", config.messageTimeOffsetY] hint:@"0" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"气泡扩展宽度" key:@"MessageTimeBubbleExtWidth" value:[NSString stringWithFormat:@"%.1f", config.messageTimeBubbleExtWidth] hint:@"0" cy:*ecy width:w];
    } cy:timeY width:w];

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

- (NSString *)positionName:(NSInteger)position {
    NSArray *names = @[
        @"头像上方", @"头像下方",
        @"消息旁边(远离头像)", @"消息下方(远离头像)",
        @"消息下方(靠近头像)", @"消息上方(远离头像)",
        @"消息上方(靠近头像)", @"消息内部(仅文本信息生效)"
    ];
    if (position >= 0 && position < (NSInteger)names.count) {
        return names[position];
    }
    return @"头像下方";
}

- (void)onMessageTimePositionTap {
    NSArray *positionNames = @[
        @"头像上方", @"头像下方",
        @"消息旁边(远离头像)", @"消息下方(远离头像)",
        @"消息下方(靠近头像)", @"消息上方(远离头像)",
        @"消息上方(靠近头像)", @"消息内部(仅文本信息生效)"
    ];

    PluginConfig *config = [PluginConfig shared];

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"请选择时间标签的显示位置"
                                                                  message:nil
                                                           preferredStyle:UIAlertControllerStyleActionSheet];

    for (NSInteger i = 0; i < (NSInteger)positionNames.count; i++) {
        NSString *title = positionNames[i];
        if (i == config.messageTimePosition) {
            title = [NSString stringWithFormat:@"✓ %@", title];
        }
        [alert addAction:[UIAlertAction actionWithTitle:title
                                                 style:UIAlertActionStyleDefault
                                               handler:^(UIAlertAction *action) {
            config.messageTimePosition = i;
            [config save];
            [self buildUI];
        }]];
    }

    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];

    if (@available(iOS 13.0, *)) {
        alert.popoverPresentationController.sourceView = self.view;
        alert.popoverPresentationController.sourceRect = CGRectMake(self.view.bounds.size.width / 2, self.view.bounds.size.height / 2, 1, 1);
    }

    [self presentViewController:alert animated:YES completion:nil];
}

@end
