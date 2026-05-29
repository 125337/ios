#import "SettingMessageTimeController.h"
#import "../../Config/PluginConfig.h"
#import "../../Modules/MessageTime/MessageTimeFormatEditorVC.h"

@interface SettingMessageTimeController ()
@property (nonatomic, strong) NSMutableArray *inputFields;
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

- (void)onMessageTimeCustomFormatTap {
    MessageTimeFormatEditorVC *editor = [[MessageTimeFormatEditorVC alloc] init];
    editor.initialFormat = [PluginConfig shared].messageTimeCustomFormat;
    editor.saveBlock = [^(NSString *newFormat) {
        PluginConfig *cfg = [PluginConfig shared];
        cfg.messageTimeCustomFormat = newFormat;
        [cfg save];
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
    [self.inputFields removeAllObjects];

    PluginConfig *config = [PluginConfig shared];
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addMasterSwitchRowInGroup:group
                                    title:@"启用消息时间显示"
                                      key:@"ShowMessageTime"
                                     isOn:config.showMessageTime
                               subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addNavRowInGroup:expand title:@"显示位置" subtitle:[self positionName:config.messageTimePosition] tag:100 action:@selector(onMessageTimePositionTap) cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"字体大小" key:@"MessageTimeFontSize" value:[NSString stringWithFormat:@"%.1f", config.messageTimeFontSize] hint:@"7.0" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSwitchRowInGroup:expand title:@"粗体字体" desc:nil key:@"MessageTimeBoldFont" isOn:config.messageTimeBoldFont cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        NSString *customFmtSub = config.messageTimeCustomFormat.length > 0
            ? config.messageTimeCustomFormat
            : @"{HH}:{mm}:{ss}";
        *ecy = [self addNavRowInGroup:expand title:@"自定义格式" subtitle:customFmtSub tag:200 action:@selector(onMessageTimeCustomFormatTap) cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addColorRowInGroup:expand title:@"发送方颜色" key:@"senderTextColorHex" value:config.senderTextColorHex cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addColorRowInGroup:expand title:@"发送方颜色(深色)" key:@"senderTextColorDarkHex" value:config.senderTextColorDarkHex cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addColorRowInGroup:expand title:@"接收方颜色" key:@"receiverTextColorHex" value:config.receiverTextColorHex cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addColorRowInGroup:expand title:@"接收方颜色(深色)" key:@"receiverTextColorDarkHex" value:config.receiverTextColorDarkHex cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"水平偏移" key:@"MessageTimeOffsetX" value:[NSString stringWithFormat:@"%.1f", config.messageTimeOffsetX] hint:@"0" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"垂直偏移" key:@"MessageTimeOffsetY" value:[NSString stringWithFormat:@"%.1f", config.messageTimeOffsetY] hint:@"0" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"气泡扩展宽度" key:@"MessageTimeBubbleExtWidth" value:[NSString stringWithFormat:@"%.1f", config.messageTimeBubbleExtWidth] hint:@"0" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSwitchRowInGroup:expand title:@"隐藏聊天时间分隔线" desc:nil key:@"HideChatTime" isOn:config.hideChatTime cy:*ecy width:w];
    } cy:cy width:w];

    y = [self finishGroup:group atY:y height:cy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

@end