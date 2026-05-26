#import "SettingChatTopBarController.h"
#import "ChatTopBarBlacklistEditorVC.h"
#import "../../Config/PluginConfig.h"
#import "../../Config/WPColors.h"
#import "../../Config/Constants.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"

#pragma mark - 数值输入弹窗描述

static NSDictionary<NSString *, NSDictionary<NSString *, NSString *> *> *numericInputConfig(void) {
    return @{
        @"AvatarCornerRadius":      @{@"title": @"头像圆角程度", @"desc": @"请输入圆角百分比(0%-100%)", @"placeholder": @"50"},
        @"AvatarSize":              @{@"title": @"双方头像大小", @"desc": @"请输入头像大小(10px-44px)", @"placeholder": @"34"},
        @"SeparatorSize":           @{@"title": @"分隔符大小",   @"desc": @"请输入分隔符大小(10px-44px)", @"placeholder": @"16"},
        @"NicknameFontSize":        @{@"title": @"网名字体大小", @"desc": @"请输入网名字体大小(6px-20px)", @"placeholder": @"12"},
        @"AvatarSpacing":           @{@"title": @"双方头像间距", @"desc": @"请输入双方头像间距(2px-150px)", @"placeholder": @"4"},
        @"VerticalOffset":          @{@"title": @"整体上下偏移", @"desc": @"请输入整体上下偏移量(-50px到+50px)正值向上，负值向下", @"placeholder": @"0"},
        @"HorizontalOffset":        @{@"title": @"整体水平偏移", @"desc": @"请输入整体水平偏移量(-100px到+100px)正值向左，负值向右", @"placeholder": @"0"},
        @"NicknameVerticalOffset":  @{@"title": @"网名上下偏移", @"desc": @"请输入网名上下偏移量(-80px到+80px)正值向上，负值向下", @"placeholder": @"0"},
        @"NicknameHorizontalOffset":@{@"title": @"网名水平偏移", @"desc": @"请输入网名水平偏移量(-100px到+100px)正值向左，负值向右", @"placeholder": @"0"},
        @"ViewWidth":               @{@"title": @"视图宽度",     @"desc": @"请输入标题视图宽度(150px到300px)", @"placeholder": @"200"},
    };
}

@implementation SettingChatTopBarController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"聊天顶栏";
    [self buildUI];
}

#pragma mark - 头像显示模式

- (NSString *)avatarDisplayModeName:(NSInteger)mode {
    NSArray *names = @[
        @"显示自己头像",
        @"显示对方头像",
        @"显示双方头像",
        @"显示双方头像(名字在下方)",
        @"显示对方头像(名字在下方)",
        @"显示对方头像(名字在左侧)",
        @"显示对方头像(名字在右侧)",
        @"显示双方头像(左侧堆叠名字居中)",
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
        @"显示对方头像(名字在下方)",
        @"显示对方头像(名字在左侧)",
        @"显示对方头像(名字在右侧)",
        @"显示双方头像(左侧堆叠名字居中)",
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
        textField.text = @"";
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
    [picker release];
}

- (void)onPickGIFImage {
    UIImagePickerController *picker = [[UIImagePickerController alloc] init];
    picker.sourceType = UIImagePickerControllerSourceTypePhotoLibrary;
    picker.mediaTypes = @[@"public.image"];
    picker.delegate = self;
    picker.view.tag = 200;
    [self presentViewController:picker animated:YES completion:nil];
    [picker release];
}

#pragma mark - 管理显示黑名单

- (void)onBlacklistTap {
    ChatTopBarBlacklistEditorVC *editor = [[ChatTopBarBlacklistEditorVC alloc] init];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:editor];
    nav.modalPresentationStyle = UIModalPresentationPageSheet;
    [self presentViewController:nav animated:YES completion:nil];
    [editor release];
    [nav release];
}

#pragma mark - 数值输入弹窗

- (void)buttonClicked:(NSString *)key {
    NSDictionary *config = numericInputConfig()[key];
    if (!config) return;

    NSString *alertTitle = config[@"title"];
    NSString *alertDesc = config[@"desc"];
    NSString *placeholder = config[@"placeholder"];

    UIAlertController *inputAlert = [UIAlertController alertControllerWithTitle:alertTitle
                                                                        message:alertDesc
                                                                 preferredStyle:UIAlertControllerStyleAlert];

    [inputAlert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
        textField.placeholder = placeholder;
        textField.text = @"";
        textField.keyboardType = UIKeyboardTypeNumbersAndPunctuation;
    }];

    [inputAlert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        NSString *text = inputAlert.textFields.firstObject.text ?: placeholder;
        PluginConfig *cfg = [PluginConfig shared];
        if ([key isEqualToString:@"AvatarCornerRadius"])       cfg.messageTimeFontSize = [text floatValue];
        else if ([key isEqualToString:@"AvatarSize"])           cfg.messageTimeOffsetX = [text floatValue];
        else if ([key isEqualToString:@"SeparatorSize"])        cfg.messageTimeOffsetY = [text floatValue];
        else if ([key isEqualToString:@"NicknameFontSize"])     cfg.messageTimeBubbleExtWidth = [text floatValue];
        else if ([key isEqualToString:@"AvatarSpacing"])        cfg.messageTimeCornerRadius = [text floatValue];
        else if ([key isEqualToString:@"VerticalOffset"])       { /* placeholder */ }
        else if ([key isEqualToString:@"HorizontalOffset"])     { /* placeholder */ }
        else if ([key isEqualToString:@"NicknameVerticalOffset"])  { /* placeholder */ }
        else if ([key isEqualToString:@"NicknameHorizontalOffset"]){ /* placeholder */ }
        else if ([key isEqualToString:@"ViewWidth"])            { /* placeholder */ }
        [cfg save];
        [self buildUI];
    }]];

    [inputAlert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];

    [self presentViewController:inputAlert animated:YES completion:nil];
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
        *ecy = [self addSwitchRowInGroup:expand title:@"显示群聊人数" desc:nil key:@"ShowGroupMemberCount" isOn:config.showGroupMemberCount cy:*ecy width:w];
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
    UIView *card2 = [self addTableGroupAtY:y width:w];
    CGFloat cy2 = 0;

    NSArray<NSDictionary *> *card2Items = @[
        @{@"title": @"头像圆角程度",   @"key": @"AvatarCornerRadius"},
        @{@"title": @"双方头像大小",   @"key": @"AvatarSize"},
        @{@"title": @"分隔符大小",     @"key": @"SeparatorSize"},
        @{@"title": @"网名字体大小",   @"key": @"NicknameFontSize"},
        @{@"title": @"双方头像间距",   @"key": @"AvatarSpacing"},
        @{@"title": @"整体上下偏移",   @"key": @"VerticalOffset"},
        @{@"title": @"整体水平偏移",   @"key": @"HorizontalOffset"},
        @{@"title": @"网名上下偏移",   @"key": @"NicknameVerticalOffset"},
        @{@"title": @"网名水平偏移",   @"key": @"NicknameHorizontalOffset"},
    ];

    for (NSUInteger i = 0; i < card2Items.count; i++) {
        NSDictionary *item = card2Items[i];
        cy2 = [self addButtonRowInGroup:card2 title:item[@"title"] hint:@"" key:item[@"key"] cy:cy2 width:w];
        if (i < card2Items.count - 1) {
            cy2 = [self addSeparatorInGroup:card2 cy:cy2 width:w];
        }
    }

    y = [self finishGroup:card2 atY:y height:cy2];

    // ========== Card 3: 视图宽度 ==========
    UIView *card3 = [self addTableGroupAtY:y width:w];
    CGFloat cy3 = 0;

    cy3 = [self addButtonRowInGroup:card3 title:@"视图宽度" hint:@"" key:@"ViewWidth" cy:cy3 width:w];

    y = [self finishGroup:card3 atY:y height:cy3];

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
        // Static image
        NSData *pngData = UIImagePNGRepresentation(image);
        [[NSUserDefaults standardUserDefaults] setObject:pngData
                                                  forKey:[kPluginPrefix stringByAppendingString:@"ChatSeparatorIcon"]];
    } else if (picker.view.tag == 200) {
        // GIF
        NSData *gifData = [NSData dataWithContentsOfURL:info[UIImagePickerControllerImageURL]];
        if (gifData) {
            [[NSUserDefaults standardUserDefaults] setObject:gifData
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