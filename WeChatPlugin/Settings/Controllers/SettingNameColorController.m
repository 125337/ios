#import "SettingNameColorController.h"
#import "../../Config/PluginConfig.h"
#import "../../Config/WPColors.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"

@implementation SettingNameColorController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"名字颜色";
    [self buildUI];
}

#pragma mark - 字体大小输入弹窗

- (void)buttonClicked:(NSString *)key {
    NSDictionary *configMap = @{
        @"ChatNameFontSize":    @{@"title": @"字体大小", @"desc": @"请输入字体大小(10pt-24pt)", @"placeholder": @"15"},
        @"MomentsNameFontSize": @{@"title": @"字体大小", @"desc": @"请输入字体大小(10pt-24pt)", @"placeholder": @"15"},
    };

    NSDictionary *cfg = configMap[key];
    if (!cfg) return;

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:cfg[@"title"]
                                                                   message:cfg[@"desc"]
                                                            preferredStyle:UIAlertControllerStyleAlert];

    [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
        textField.placeholder = cfg[@"placeholder"];
        textField.text = @"";
        textField.keyboardType = UIKeyboardTypeNumbersAndPunctuation;
    }];

    [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        NSString *text = alert.textFields.firstObject.text ?: cfg[@"placeholder"];
        PluginConfig *cfg = [PluginConfig shared];
        if ([key isEqualToString:@"ChatNameFontSize"]) {
            cfg.messageTimeFontSize = [text floatValue];
        } else if ([key isEqualToString:@"MomentsNameFontSize"]) {
            cfg.messageTimeOffsetX = [text floatValue];
        }
        [cfg save];
        [self buildUI];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];

    [self presentViewController:alert animated:YES completion:nil];
}

#pragma mark - Build UI

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    [self.inputFields removeAllObjects];

    PluginConfig *config = [PluginConfig shared];
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 8;

    // ========== Card 1: 聊天界面设置 ==========
    UIView *card1 = [self addTableGroupAtY:y width:w];
    CGFloat cy1 = 0;

    // 1. 启用聊天界面名称颜色
    cy1 = [self addMasterSwitchRowInGroup:card1
                                    title:@"启用聊天界面名称颜色"
                                      key:@"EnableChatNameColor"
                                     isOn:config.enableChatNameColor
                               subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addColorRowInGroup:expand title:@"浅色模式文字颜色" key:@"ChatNameLightColor" value:config.senderTextColorHex cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addColorRowInGroup:expand title:@"深色模式文字颜色" key:@"ChatNameDarkColor" value:config.senderTextColorDarkHex cy:*ecy width:w];
    } cy:cy1 width:w];

    cy1 = [self addSeparatorInGroup:card1 cy:cy1 width:w];

    // 2. 启用聊天界面名称大小
    cy1 = [self addMasterSwitchRowInGroup:card1
                                    title:@"启用聊天界面名称大小"
                                      key:@"EnableChatNameSize"
                                     isOn:config.enableChatNameSize
                               subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addButtonRowInGroup:expand title:@"字体大小" hint:@"请输入字体大小(10pt-24pt)" key:@"ChatNameFontSize" cy:*ecy width:w];
    } cy:cy1 width:w];

    y = [self finishGroup:card1 atY:y height:cy1];

    // ========== Card 2: 朋友圈设置 ==========
    UIView *card2 = [self addTableGroupAtY:y width:w];
    CGFloat cy2 = 0;

    // 1. 启用朋友圈名称颜色
    cy2 = [self addMasterSwitchRowInGroup:card2
                                    title:@"启用朋友圈名称颜色"
                                      key:@"EnableMomentsNameColor"
                                     isOn:config.showAddTime
                               subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addColorRowInGroup:expand title:@"浅色模式文字颜色" key:@"MomentsNameLightColor" value:config.receiverTextColorHex cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addColorRowInGroup:expand title:@"深色模式文字颜色" key:@"MomentsNameDarkColor" value:config.receiverTextColorDarkHex cy:*ecy width:w];
    } cy:cy2 width:w];

    cy2 = [self addSeparatorInGroup:card2 cy:cy2 width:w];

    // 2. 启用朋友圈名称大小
    cy2 = [self addMasterSwitchRowInGroup:card2
                                    title:@"启用朋友圈名称大小"
                                      key:@"EnableMomentsNameSize"
                                     isOn:config.enableMomentsNameSize
                               subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addButtonRowInGroup:expand title:@"字体大小" hint:@"请输入字体大小(10pt-24pt)" key:@"MomentsNameFontSize" cy:*ecy width:w];
    } cy:cy2 width:w];

    y = [self finishGroup:card2 atY:y height:cy2];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

@end