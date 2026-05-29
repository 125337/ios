#import "SettingChatTopBarController.h"
#import "ChatTopBarBlacklistEditorVC.h"
#import "../../Config/PluginConfig.h"
#import "../../Config/WPColors.h"
#import "../../Config/Constants.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"

@interface SettingChatTopBarController ()
@property (nonatomic, strong) NSMutableArray *inputFields;
@end

#pragma mark - 数值输入弹窗描述（仅用于弹窗message，列表项不显示）

static NSDictionary<NSString *, NSDictionary<NSString *, NSString *> *> *numericInputConfig(void) {
    return @{
        @"AvatarCornerRadius":      @{@"title": @"头像圆角程度", @"desc": @"请输入圆角百分比(0%-100%)", @"placeholder": @"100"},
        @"AvatarSize":              @{@"title": @"双方头像大小", @"desc": @"请输入头像大小(10px-44px)", @"placeholder": @"30"},
        @"SeparatorSize":           @{@"title": @"分隔符大小",   @"desc": @"请输入分隔符大小(10px-44px)", @"placeholder": @"30"},
        @"NicknameFontSize":        @{@"title": @"网名字体大小", @"desc": @"请输入网名字体大小(6px-20px)", @"placeholder": @"9"},
        @"AvatarSpacing":           @{@"title": @"双方头像间距", @"desc": @"请输入双方头像间距(2px-150px)", @"placeholder": @"6"},
        @"VerticalOffset":          @{@"title": @"整体上下偏移", @"desc": @"请输入整体上下偏移量(-50px到+50px)正值向上，负值向下", @"placeholder": @"0"},
        @"HorizontalOffset":        @{@"title": @"整体水平偏移", @"desc": @"请输入整体水平偏移量(-100px到+100px)正值向左，负值向右", @"placeholder": @"0"},
        @"NicknameVerticalOffset":  @{@"title": @"网名上下偏移", @"desc": @"请输入网名上下偏移量(-80px到+80px)正值向上，负值向下", @"placeholder": @"0"},
        @"NicknameHorizontalOffset":@{@"title": @"网名水平偏移", @"desc": @"请输入网名水平偏移量(-100px到+100px)正值向左，负值向右", @"placeholder": @"0"},
        @"ViewWidth":               @{@"title": @"视图宽度",     @"desc": @"请输入标题视图宽度(150px到300px)", @"placeholder": @"210"},
    };
}

/// tag → key 映射
static NSString *keyForTag(NSInteger tag) {
    switch (tag) {
        case 1001: return @"AvatarCornerRadius";
        case 1002: return @"AvatarSize";
        case 1003: return @"SeparatorSize";
        case 1004: return @"NicknameFontSize";
        case 1005: return @"AvatarSpacing";
        case 1006: return @"VerticalOffset";
        case 1007: return @"HorizontalOffset";
        case 1008: return @"NicknameVerticalOffset";
        case 1009: return @"NicknameHorizontalOffset";
        case 1010: return @"ViewWidth";
        default: return nil;
    }
}

@implementation SettingChatTopBarController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"聊天顶栏";
    [self buildUI];
}

/// 返回指定 key 对应的当前配置值（用于列表项 subtitle 显示）
- (NSString *)subtitleForKey:(NSString *)key {
    PluginConfig *c = [PluginConfig shared];
    CGFloat val = 0;
    if ([key isEqualToString:@"AvatarCornerRadius"])       val = c.chatAvatarCornerRadius;
    else if ([key isEqualToString:@"AvatarSize"])           val = c.chatAvatarSize;
    else if ([key isEqualToString:@"SeparatorSize"])        val = c.chatSeparatorSize;
    else if ([key isEqualToString:@"NicknameFontSize"])     val = c.chatNicknameFontSize;
    else if ([key isEqualToString:@"AvatarSpacing"])        val = c.chatAvatarSpacing;
    else if ([key isEqualToString:@"VerticalOffset"])       val = c.chatVerticalOffset;
    else if ([key isEqualToString:@"HorizontalOffset"])     val = c.chatHorizontalOffset;
    else if ([key isEqualToString:@"NicknameVerticalOffset"])  val = c.chatNicknameOffsetY;
    else if ([key isEqualToString:@"NicknameHorizontalOffset"]) val = c.chatNicknameOffsetX;
    else if ([key isEqualToString:@"ViewWidth"])            val = c.chatTitleViewWidth;
    else return @"";
    return [NSString stringWithFormat:@"%.0f", val];
}

#pragma mark - 头像显示模式

- (NSString *)avatarDisplayModeName:(NSInteger)mode {
    NSArray *names = @[
        @"显示自己头像",                    // mode 0
        @"显示对方头像",                    // mode 1
        @"显示双方头像",                    // mode 2
        @"显示双方头像(名字在下方)",         // mode 3
        @"显示自己头像(名字在下方)",         // mode 4
        @"显示对方头像(名字在左侧)",         // mode 5
        @"显示对方头像(名字在右侧)",         // mode 6
        @"显示双方头像(重叠)",              // mode 7
    ];
    if (mode >= 0 && mode < (NSInteger)names.count) {
        return names[mode];
    }
    return names[0];
}

- (void)onAvatarDisplayModeTap {
    NSArray *modeNames = @[
        @"显示自己头像",
        @"显示对方头像",
        @"显示双方头像",
        @"显示双方头像(名字在下方)",
        @"显示自己头像(名字在下方)",
        @"显示对方头像(名字在左侧)",
        @"显示对方头像(名字在右侧)",
        @"显示双方头像(重叠)",
    ];

    PluginConfig *config = [PluginConfig shared];
    NSInteger currentMode = config.chatDisplayMode;

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"选择显示模式"
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    for (NSInteger i = 0; i < (NSInteger)modeNames.count; i++) {
        NSString *title = modeNames[i];
        if (i == currentMode) {
            title = [NSString stringWithFormat:@"✓ %@", title];
        }
        [alert addAction:[UIAlertAction actionWithTitle:title
                                                 style:UIAlertActionStyleDefault
                                               handler:^(UIAlertAction *action) {
            config.chatDisplayMode = i;
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

#pragma mark - 头像分隔符号

- (void)onAvatarSeparatorTap {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"设置头像分隔符"
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    [alert addAction:[UIAlertAction actionWithTitle:@"输入文本"
                                             style:UIAlertActionStyleDefault
                                           handler:^(UIAlertAction *action) {
        [self onSeparatorTextInput];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:@"选择静态图片"
                                             style:UIAlertActionStyleDefault
                                           handler:^(UIAlertAction *action) {
        [self onPickStaticImage];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:@"选择GIF动图"
                                             style:UIAlertActionStyleDefault
                                           handler:^(UIAlertAction *action) {
        [self onPickGIFImage];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];

    if (@available(iOS 13.0, *)) {
        alert.popoverPresentationController.sourceView = self.view;
        alert.popoverPresentationController.sourceRect = CGRectMake(self.view.bounds.size.width / 2, self.view.bounds.size.height / 2, 1, 1);
    }

    [self presentViewController:alert animated:YES completion:nil];
}

- (void)onSeparatorTextInput {
    UIAlertController *inputAlert = [UIAlertController alertControllerWithTitle:@"输入分隔文本"
                                                                        message:nil
                                                                 preferredStyle:UIAlertControllerStyleAlert];

    [inputAlert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
        textField.placeholder = @"请输入分隔文本";
        textField.text = [PluginConfig shared].chatSeparatorText ?: @"";
    }];

    [inputAlert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        NSString *text = inputAlert.textFields.firstObject.text ?: @"";
        PluginConfig *config = [PluginConfig shared];
        config.chatSeparatorText = text;
        [config save];
        [self buildUI];
    }]];

    [inputAlert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];

    [self presentViewController:inputAlert animated:YES completion:nil];
}

- (void)onPickStaticImage {
    UIImagePickerController *picker = [[UIImagePickerController alloc] init];
    picker.sourceType = UIImagePickerControllerSourceTypePhotoLibrary;
    picker.mediaTypes = @[@"public.image"];
    picker.delegate = self;
    picker.view.tag = 100;
    [self presentViewController:picker animated:YES completion:nil];
}

- (void)onPickGIFImage {
    UIImagePickerController *picker = [[UIImagePickerController alloc] init];
    picker.sourceType = UIImagePickerControllerSourceTypePhotoLibrary;
    picker.mediaTypes = @[@"public.image"];
    picker.delegate = self;
    picker.view.tag = 200;
    [self presentViewController:picker animated:YES completion:nil];
}

#pragma mark - 后缀格式设置

- (void)onAddTimeSuffixTap {
    PluginConfig *config = [PluginConfig shared];
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"添加时间后缀格式"
                                                                   message:@"输入格式字符串，如 %%ld天"
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
        textField.placeholder = @"%ld天";
        textField.text = config.chatAddTimeSuffixFormat ?: @"";
    }];
    [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        NSString *text = alert.textFields.firstObject.text;
        config.chatAddTimeSuffixFormat = text.length > 0 ? text : nil;
        [config save];
        [self buildUI];
    }]];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [self presentViewController:alert animated:YES completion:nil];
}

- (void)onGroupCountSuffixTap {
    PluginConfig *config = [PluginConfig shared];
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"群成员数后缀格式"
                                                                   message:@"输入格式字符串，如 %%u人"
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
        textField.placeholder = @"%u人";
        textField.text = config.chatGroupMemberCountSuffix ?: @"";
    }];
    [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        NSString *text = alert.textFields.firstObject.text;
        config.chatGroupMemberCountSuffix = text.length > 0 ? text : nil;
        [config save];
        [self buildUI];
    }]];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [self presentViewController:alert animated:YES completion:nil];
}

#pragma mark - 管理显示黑名单

- (void)onBlacklistTap {
    ChatTopBarBlacklistEditorVC *vc = [[ChatTopBarBlacklistEditorVC alloc] init];
    NSString *key = [kPluginPrefix stringByAppendingString:@"ChatAvatarBlacklist"];
    vc.blacklist = [[NSUserDefaults standardUserDefaults] stringForKey:key];
    vc.saveBlock = ^(NSString *blacklist) {
        [[NSUserDefaults standardUserDefaults] setObject:blacklist forKey:key];
        [[NSUserDefaults standardUserDefaults] synchronize];
    };
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:vc];
    nav.modalPresentationStyle = UIModalPresentationPageSheet;
    [self presentViewController:nav animated:YES completion:nil];
}

#pragma mark - 数值输入弹窗（Card 2/3 点击触发）

- (void)onNumericRowTap:(UIButton *)sender {
    NSInteger tag = sender.tag;
    NSString *key = keyForTag(tag);
    if (!key) return;

    NSDictionary *cfg = numericInputConfig()[key];
    if (!cfg) return;

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:cfg[@"title"]
                                                                   message:cfg[@"desc"]
                                                            preferredStyle:UIAlertControllerStyleAlert];

    [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
        PluginConfig *cfg2 = [PluginConfig shared];
        CGFloat val = 0;
        if ([key isEqualToString:@"AvatarCornerRadius"])       val = cfg2.chatAvatarCornerRadius;
        else if ([key isEqualToString:@"AvatarSize"])           val = cfg2.chatAvatarSize;
        else if ([key isEqualToString:@"SeparatorSize"])        val = cfg2.chatSeparatorSize;
        else if ([key isEqualToString:@"NicknameFontSize"])     val = cfg2.chatNicknameFontSize;
        else if ([key isEqualToString:@"AvatarSpacing"])        val = cfg2.chatAvatarSpacing;
        else if ([key isEqualToString:@"VerticalOffset"])       val = cfg2.chatVerticalOffset;
        else if ([key isEqualToString:@"HorizontalOffset"])     val = cfg2.chatHorizontalOffset;
        else if ([key isEqualToString:@"NicknameVerticalOffset"])  val = cfg2.chatNicknameOffsetY;
        else if ([key isEqualToString:@"NicknameHorizontalOffset"]) val = cfg2.chatNicknameOffsetX;
        else if ([key isEqualToString:@"ViewWidth"])            val = cfg2.chatTitleViewWidth;

        textField.placeholder = cfg[@"placeholder"];
        if (val != 0) {
            textField.text = [NSString stringWithFormat:@"%.0f", val];
        }
        textField.keyboardType = UIKeyboardTypeNumbersAndPunctuation;
    }];

    [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        NSString *raw = alert.textFields.firstObject.text;
        NSString *text = (raw.length > 0) ? raw : cfg[@"placeholder"];
        PluginConfig *c = [PluginConfig shared];
        if ([key isEqualToString:@"AvatarCornerRadius"])       c.chatAvatarCornerRadius = [text floatValue];
        else if ([key isEqualToString:@"AvatarSize"])           c.chatAvatarSize = [text floatValue];
        else if ([key isEqualToString:@"SeparatorSize"])        c.chatSeparatorSize = [text floatValue];
        else if ([key isEqualToString:@"NicknameFontSize"])     c.chatNicknameFontSize = [text floatValue];
        else if ([key isEqualToString:@"AvatarSpacing"])        c.chatAvatarSpacing = [text floatValue];
        else if ([key isEqualToString:@"VerticalOffset"])       c.chatVerticalOffset = [text floatValue];
        else if ([key isEqualToString:@"HorizontalOffset"])     c.chatHorizontalOffset = [text floatValue];
        else if ([key isEqualToString:@"NicknameVerticalOffset"])  c.chatNicknameOffsetY = [text floatValue];
        else if ([key isEqualToString:@"NicknameHorizontalOffset"]) c.chatNicknameOffsetX = [text floatValue];
        else if ([key isEqualToString:@"ViewWidth"])            c.chatTitleViewWidth = [text floatValue];
        [c save];
        UILabel *valueLabel = objc_getAssociatedObject(sender, "editValueLabel");
        if (valueLabel) {
            valueLabel.text = [NSString stringWithFormat:@"%.0f", [text floatValue]];
        }
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

    // ========== Card 1: 显示聊天头像 ==========
    UIView *card1 = [self addTableGroupAtY:y width:w];
    CGFloat cy1 = 0;

    cy1 = [self addMasterSwitchRowInGroup:card1
                                    title:@"显示聊天头像"
                                      key:@"ShowChatAvatar"
                                     isOn:config.showChatAvatar
                               subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addSwitchRowInGroup:expand title:@"头像点击反馈" desc:nil key:@"AvatarTapFeedback" isOn:config.avatarTapFeedback cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSwitchRowInGroup:expand title:@"显示添加时间" desc:nil key:@"ShowAddTime" isOn:config.showAddTime cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        NSString *addTimeSuffix = config.chatAddTimeSuffixFormat.length > 0 ? config.chatAddTimeSuffixFormat : @"%ld天";
        *ecy = [self addNavRowInGroup:expand title:@"添加时间后缀格式" subtitle:addTimeSuffix tag:400 action:@selector(onAddTimeSuffixTap) cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSwitchRowInGroup:expand title:@"显示群聊人数" desc:nil key:@"ShowGroupMemberCount" isOn:config.showGroupMemberCount cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        NSString *groupCountSuffix = config.chatGroupMemberCountSuffix.length > 0 ? config.chatGroupMemberCountSuffix : @"%u人";
        *ecy = [self addNavRowInGroup:expand title:@"群成员数后缀格式" subtitle:groupCountSuffix tag:401 action:@selector(onGroupCountSuffixTap) cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addNavRowInGroup:expand title:@"头像显示模式" subtitle:[self avatarDisplayModeName:config.chatDisplayMode] tag:100 action:@selector(onAvatarDisplayModeTap) cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        NSString *sepSub = config.chatSeparatorText.length > 0 ? config.chatSeparatorText : @"未设置";
        *ecy = [self addNavRowInGroup:expand title:@"头像分隔符号" subtitle:sepSub tag:200 action:@selector(onAvatarSeparatorTap) cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addNavRowInGroup:expand title:@"管理显示黑名单" subtitle:@"" tag:300 action:@selector(onBlacklistTap) cy:*ecy width:w];
    } cy:cy1 width:w];

    y = [self finishGroup:card1 atY:y height:cy1];

    // ========== Card 2: 外观数值设置 ==========
    UIView *card2 = WPMakeCard(y, w);
    CGFloat cy2 = 0;
    CGFloat scale2 = [UIScreen mainScreen].scale;

    NSArray<NSDictionary *> *card2Items = @[
        @{@"title": @"头像圆角程度",   @"tag": @(1001), @"key": @"AvatarCornerRadius"},
        @{@"title": @"双方头像大小",   @"tag": @(1002), @"key": @"AvatarSize"},
        @{@"title": @"分隔符大小",     @"tag": @(1003), @"key": @"SeparatorSize"},
        @{@"title": @"网名字体大小",   @"tag": @(1004), @"key": @"NicknameFontSize"},
        @{@"title": @"双方头像间距",   @"tag": @(1005), @"key": @"AvatarSpacing"},
        @{@"title": @"整体上下偏移",   @"tag": @(1006), @"key": @"VerticalOffset"},
        @{@"title": @"整体水平偏移",   @"tag": @(1007), @"key": @"HorizontalOffset"},
        @{@"title": @"网名上下偏移",   @"tag": @(1008), @"key": @"NicknameVerticalOffset"},
        @{@"title": @"网名水平偏移",   @"tag": @(1009), @"key": @"NicknameHorizontalOffset"},
    ];

    for (NSUInteger i = 0; i < card2Items.count; i++) {
        NSDictionary *item = card2Items[i];
        if (i > 0) {
            WPAddSep(card2, cy2, w);
            cy2 = round((cy2 + 1.0 / scale2) * scale2) / scale2;
        }
        NSString *showVal = [self subtitleForKey:item[@"key"]];
        UIButton *row = WPAddEditableRowWithArrow(card2, cy2, w, item[@"title"], showVal, self);
        [row removeTarget:self action:@selector(onEditRowTap:) forControlEvents:UIControlEventTouchUpInside];
        row.tag = [item[@"tag"] integerValue];
        [row addTarget:self action:@selector(onNumericRowTap:) forControlEvents:UIControlEventTouchUpInside];
        cy2 += kRowH;
    }

    CGRect c2f = card2.frame; c2f.size.height = cy2; card2.frame = c2f;
    [self.contentView addSubview:card2];
    y += cy2 + 8;

    // ========== Card 3: 视图宽度 ==========
    UIView *card3 = WPMakeCard(y, w);
    CGFloat cy3 = 0;

    NSString *vwVal = [self subtitleForKey:@"ViewWidth"];
    UIButton *vwRow = WPAddEditableRowWithArrow(card3, cy3, w, @"视图宽度", vwVal, self);
    [vwRow removeTarget:self action:@selector(onEditRowTap:) forControlEvents:UIControlEventTouchUpInside];
    vwRow.tag = 1010;
    [vwRow addTarget:self action:@selector(onNumericRowTap:) forControlEvents:UIControlEventTouchUpInside];
    cy3 += kRowH;

    CGRect c3f = card3.frame; c3f.size.height = cy3; card3.frame = c3f;
    [self.contentView addSubview:card3];
    y += cy3 + 8;

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

#pragma mark - UIImagePickerControllerDelegate

- (void)imagePickerController:(UIImagePickerController *)picker
didFinishPickingMediaWithInfo:(NSDictionary<UIImagePickerControllerInfoKey, id> *)info {
    UIImage *image = info[UIImagePickerControllerOriginalImage];
    if (!image) {
        [picker dismissViewControllerAnimated:YES completion:nil];
        return;
    }

    PluginConfig *config = [PluginConfig shared];

    if (picker.view.tag == 100) {
        // 保存 PNG 到文件，存储路径
        NSData *pngData = UIImagePNGRepresentation(image);
        NSString *iconPath = [NSHomeDirectory() stringByAppendingPathComponent:@"Documents/MioChatSeparatorIcon.png"];
        [pngData writeToFile:iconPath atomically:YES];
        [[NSUserDefaults standardUserDefaults] setObject:iconPath
                                                  forKey:[kPluginPrefix stringByAppendingString:@"ChatSeparatorIcon"]];
    } else if (picker.view.tag == 200) {
        // GIF 直接使用原文件路径
        NSURL *gifURL = info[UIImagePickerControllerImageURL];
        if (gifURL) {
            [[NSUserDefaults standardUserDefaults] setObject:gifURL.path
                                                      forKey:[kPluginPrefix stringByAppendingString:@"ChatSeparatorGIF"]];
        }
    }

    [[NSUserDefaults standardUserDefaults] synchronize];
    [picker dismissViewControllerAnimated:YES completion:^{
        [self buildUI];
    }];
}

- (void)imagePickerControllerDidCancel:(UIImagePickerController *)picker {
    [picker dismissViewControllerAnimated:YES completion:nil];
}

@end