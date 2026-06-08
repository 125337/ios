#import "SettingNameColorController.h"
#import "../../Config/PluginConfig.h"
#import "../../Config/WPColors.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"

@interface SettingNameColorController ()
@property (nonatomic, strong) NSMutableArray *inputFields;
@end

static NSString *keyForTag(NSInteger tag) {
    switch (tag) {
        case 2001: return @"ChatNameFontSize";
        case 2002: return @"MomentsNameFontSize";
        default: return nil;
    }
}

static NSString *fontSizeForKey(NSString *key) {
    PluginConfig *c = [PluginConfig shared];
    CGFloat val = 0;
    if ([key isEqualToString:@"ChatNameFontSize"])         val = c.chatNameFontSize;
    else if ([key isEqualToString:@"MomentsNameFontSize"])  val = c.momentsNameFontSize;
    return [NSString stringWithFormat:@"%.0fpt", val];
}

@implementation SettingNameColorController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"名字颜色";
    [self buildUI];
}

#pragma mark - 字体大小输入弹窗

- (void)onNumericRowTap:(UIButton *)sender {
    NSString *key = keyForTag(sender.tag);
    if (!key) return;

    NSDictionary *configMap = @{
        @"ChatNameFontSize":    @{@"title": @"字体大小", @"desc": @"请输入字体大小(10pt-24pt)", @"placeholder": @"16"},
        @"MomentsNameFontSize": @{@"title": @"字体大小", @"desc": @"请输入字体大小(10pt-24pt)", @"placeholder": @"16"},
    };

    NSDictionary *cfg = configMap[key];
    if (!cfg) return;

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:cfg[@"title"]
                                                                   message:cfg[@"desc"]
                                                            preferredStyle:UIAlertControllerStyleAlert];

    [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
        CGFloat val = 0;
        if ([key isEqualToString:@"ChatNameFontSize"])         val = [PluginConfig shared].chatNameFontSize;
        else if ([key isEqualToString:@"MomentsNameFontSize"])  val = [PluginConfig shared].momentsNameFontSize;
        if (val == 0) val = 16;
        textField.placeholder = cfg[@"placeholder"];
        textField.text = [NSString stringWithFormat:@"%.0f", val];
        textField.keyboardType = UIKeyboardTypeNumbersAndPunctuation;
    }];

    [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        NSString *text = alert.textFields.firstObject.text ?: cfg[@"placeholder"];
        CGFloat val = [text floatValue];
        if (val < 10 || val > 24) val = 16;

        PluginConfig *c = [PluginConfig shared];
        if ([key isEqualToString:@"ChatNameFontSize"])         c.chatNameFontSize = val;
        else if ([key isEqualToString:@"MomentsNameFontSize"])  c.momentsNameFontSize = val;
        [c save];

        UILabel *valueLabel = objc_getAssociatedObject(sender, "editValueLabel");
        if (valueLabel) valueLabel.text = [NSString stringWithFormat:@"%.0fpt", val];
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
                                      key:@"enableChatNameColor"
                                     isOn:config.enableChatNameColor
                               subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addDualColorRowInGroup:expand
                                      title:@"聊天名字颜色"
                                   lightKey:@"chatNameLightColor"
                                    darkKey:@"chatNameDarkColor"
                                   lightHex:config.senderTextColorHex
                                    darkHex:config.senderTextColorDarkHex
                                          cy:*ecy width:w];
    } cy:cy1 width:w];

    cy1 = [self addSeparatorInGroup:card1 cy:cy1 width:w];

    // 2. 启用聊天界面名称大小
    cy1 = [self addMasterSwitchRowInGroup:card1
                                    title:@"启用聊天界面名称大小"
                                      key:@"enableChatNameSize"
                                     isOn:config.enableChatNameSize
                               subBuilder:^(UIView *expand, CGFloat *ecy) {
        NSString *preview = fontSizeForKey(@"ChatNameFontSize");
        *ecy = [self addNavRowInGroup:expand title:@"字体大小" subtitle:preview tag:2001 action:@selector(onNumericRowTap:) cy:*ecy width:w];
    } cy:cy1 width:w];

    y = [self finishGroup:card1 atY:y height:cy1];

    // ========== Card 2: 朋友圈设置 ==========
    UIView *card2 = [self addTableGroupAtY:y width:w];
    CGFloat cy2 = 0;

    // 1. 启用朋友圈名称颜色
    cy2 = [self addMasterSwitchRowInGroup:card2
                                    title:@"启用朋友圈名称颜色"
                                      key:@"enableMomentsNameColor"
                                     isOn:config.enableMomentsNameColor
                               subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addDualColorRowInGroup:expand
                                      title:@"朋友圈名字颜色"
                                   lightKey:@"momentsNameLightColor"
                                    darkKey:@"momentsNameDarkColor"
                                   lightHex:config.receiverTextColorHex
                                    darkHex:config.receiverTextColorDarkHex
                                          cy:*ecy width:w];
    } cy:cy2 width:w];

    cy2 = [self addSeparatorInGroup:card2 cy:cy2 width:w];

    // 2. 启用朋友圈名称大小
    cy2 = [self addMasterSwitchRowInGroup:card2
                                    title:@"启用朋友圈名称大小"
                                      key:@"enableMomentsNameSize"
                                     isOn:config.enableMomentsNameSize
                               subBuilder:^(UIView *expand, CGFloat *ecy) {
        NSString *preview = fontSizeForKey(@"MomentsNameFontSize");
        *ecy = [self addNavRowInGroup:expand title:@"字体大小" subtitle:preview tag:2002 action:@selector(onNumericRowTap:) cy:*ecy width:w];
    } cy:cy2 width:w];

    y = [self finishGroup:card2 atY:y height:cy2];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

@end