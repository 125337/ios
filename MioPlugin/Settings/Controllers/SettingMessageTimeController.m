#import "SettingMessageTimeController.h"
#import "../../Modules/MessageTime/MessageTimeConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/MioAlertHelper.h"
#import "../../Modules/MessageTime/MessageTimeFormatEditorVC.h"

@interface SettingMessageTimeController ()
@end

@implementation SettingMessageTimeController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"消息时间设置";
    [self buildUI];
}

- (NSString *)positionName:(NSInteger)position {
    NSArray *names = @[
        @"头像上方", @"头像下方",
        @"消息旁边(远离头像)", @"消息下方(远离头像)",
        @"消息下方(靠近头像)", @"消息上方(远离头像)",
        @"消息上方(靠近头像)", @"消息旁边(=气泡外)"
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
        @"消息上方(靠近头像)", @"消息旁边(=气泡外)"
    ];

    MessageTimeConfig *config = [MessageTimeConfig shared];

    NSMutableArray<NSString *> *titles = [NSMutableArray array];
    for (NSInteger i = 0; i < (NSInteger)positionNames.count; i++) {
        NSString *title = positionNames[i];
        if (i == config.messageTimePosition) {
            title = [NSString stringWithFormat:@"✓ %@", title];
        }
        [titles addObject:title];
    }

    [MioAlertHelper showMenuAlert:@"请选择时间标签的显示位置" buttons:titles onButton:^(NSInteger index) {
        config.messageTimePosition = index;
        [ConfigManager saveAll];
        [self buildUI];
    }];
}

- (void)onMessageTimeCustomFormatTap {
    MessageTimeFormatEditorVC *editor = [[MessageTimeFormatEditorVC alloc] init];
    editor.initialFormat = [MessageTimeConfig shared].messageTimeCustomFormat;
    editor.saveBlock = [^(NSString *newFormat) {
        [MessageTimeConfig shared].messageTimeCustomFormat = newFormat;
        [ConfigManager saveAll];
        [self buildUI];
    } copy];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:editor];
    nav.modalPresentationStyle = UIModalPresentationPageSheet;
    [self presentViewController:nav animated:YES completion:nil];
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }

    MessageTimeConfig *config = [MessageTimeConfig shared];
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addMasterSwitchRowInGroup:group
                                    title:@"启用消息时间显示"
                                      key:@"showMessageTime"
                                     isOn:config.showMessageTime
                               subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addNavRowInGroup:expand title:@"显示位置" subtitle:[self positionName:config.messageTimePosition] tag:100 action:@selector(onMessageTimePositionTap) cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"字体大小" key:@"messageTimeFontSize" value:[NSString stringWithFormat:@"%.1f", config.messageTimeFontSize] hint:@"7.0" valueType:InputValueTypeNumber cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSwitchRowInGroup:expand title:@"粗体字体" desc:nil key:@"messageTimeBoldFont" isOn:config.messageTimeBoldFont cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        NSString *customFmtSub = config.messageTimeCustomFormat.length > 0
            ? config.messageTimeCustomFormat
            : @"{HH}:{mm}:{ss}";
        *ecy = [self addNavRowInGroup:expand title:@"自定义格式" subtitle:customFmtSub tag:200 action:@selector(onMessageTimeCustomFormatTap) cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addColorRowInGroup:expand
                                      title:@"发送方颜色"
                                        key:@"senderTextColorHex"
                                      value:config.senderTextColorHex
                                         cy:*ecy width:w
                                   darkKey:@"senderTextColorDarkHex"
                                 darkValue:config.senderTextColorDarkHex];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        *ecy = [self addColorRowInGroup:expand
                                      title:@"接收方颜色"
                                        key:@"receiverTextColorHex"
                                      value:config.receiverTextColorHex
                                         cy:*ecy width:w
                                   darkKey:@"receiverTextColorDarkHex"
                                 darkValue:config.receiverTextColorDarkHex];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"水平偏移" key:@"messageTimeOffsetX" value:[NSString stringWithFormat:@"%.1f", config.messageTimeOffsetX] hint:@"0" valueType:InputValueTypeNumber cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"垂直偏移" key:@"messageTimeOffsetY" value:[NSString stringWithFormat:@"%.1f", config.messageTimeOffsetY] hint:@"0" valueType:InputValueTypeNumber cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"气泡扩展宽度" key:@"messageTimeBubbleExtWidth" value:[NSString stringWithFormat:@"%.1f", config.messageTimeBubbleExtWidth] hint:@"0" valueType:InputValueTypeNumber cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSwitchRowInGroup:expand title:@"隐藏聊天时间分隔线" desc:nil key:@"hideChatTime" isOn:config.hideChatTime cy:*ecy width:w];
    } cy:cy width:w];

    y = [self finishGroup:group atY:y height:cy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

@end