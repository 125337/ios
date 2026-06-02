#import "SettingCardBackgroundController.h"
#import "../../Config/PluginConfig.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"
#import <objc/runtime.h>
#import <PhotosUI/PhotosUI.h>
#import <MobileCoreServices/MobileCoreServices.h>

@interface SettingCardBackgroundController () <PHPickerViewControllerDelegate>
@end

@implementation SettingCardBackgroundController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"卡片背景";
    [self buildUI];
}

#pragma mark - 自定义输入行

- (CGFloat)addCustomInputRow:(UIView *)group
                       title:(NSString *)title
                         key:(NSString *)key
                       value:(NSString *)value
                        hint:(NSString *)hint
                  alertTitle:(NSString *)alertTitle
                alertMessage:(NSString *)alertMessage
                          cy:(CGFloat)cy
                       width:(CGFloat)w {
    Class handlerClass = objc_getClass("MioPluginSwitchHandler");
    id handler = [handlerClass performSelector:@selector(sharedInstance)];
    NSString *displayValue = (value && value.length > 0) ? value : hint;
    UIButton *row = WPAddEditableRowWithArrow(group, cy, w, title, displayValue, handler);
    objc_setAssociatedObject(row, "editConfigKey", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    if (hint) objc_setAssociatedObject(row, "editConfigHint", hint, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    if (alertTitle) objc_setAssociatedObject(row, "editTitle", alertTitle, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    if (alertMessage) objc_setAssociatedObject(row, "editMessage", alertMessage, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return cy + kRowH;
}

#pragma mark - buildUI

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    PluginConfig *config = [PluginConfig shared];
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    y = [self addSectionHeader:@"卡片背景设置" y:y width:w];

    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addMasterSwitchRowInGroup:group
                                   title:@"信息卡片背景"
                                     key:@"cardBgEnabled"
                                    isOn:config.cardBgEnabled
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        PluginConfig *cfg = [PluginConfig shared];

        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"隐藏信息卡片"
                                        key:@"cardBgHidden"
                                       isOn:cfg.cardBgHidden
                                         cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        CGFloat h = cfg.cardBgHeight > 0 ? cfg.cardBgHeight : 144.0;
        *ecy = [self addCustomInputRow:expand
                                 title:@"信息卡片高度"
                                   key:@"cardBgHeight"
                                 value:[NSString stringWithFormat:@"%.0f", h]
                                  hint:@"144"
                            alertTitle:@"设置信息卡片高度"
                          alertMessage:@"请输入高度值(144-500像素)"
                                    cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        CGFloat sp = cfg.cardBgListSpacing > 0 ? cfg.cardBgListSpacing : 9.0;
        *ecy = [self addCustomInputRow:expand
                                 title:@"列表向下间距"
                                   key:@"cardBgListSpacing"
                                 value:[NSString stringWithFormat:@"%.0f", sp]
                                  hint:@"9"
                            alertTitle:@"设置列表向下间距"
                          alertMessage:@"请输入间距值(1-550像素)\n调整卡片下方列表相对原生位置的间距"
                                    cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        NSString *lightSub = cfg.cardBgLightImagePath.length > 0 ? @"已设置" : @"未设置";
        *ecy = [self addNavRowInGroup:expand title:@"浅色背景图" subtitle:lightSub tag:200 action:@selector(onLightImageTap) cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        NSString *darkSub = cfg.cardBgDarkImagePath.length > 0 ? @"已设置" : @"未设置";
        *ecy = [self addNavRowInGroup:expand title:@"深色背景图" subtitle:darkSub tag:201 action:@selector(onDarkImageTap) cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        NSArray *fillNames = @[@"填充模式", @"适应模式", @"拉伸填充", @"顶部填充"];
        NSString *fillSub = (cfg.cardBgFillMode >= 0 && cfg.cardBgFillMode < (NSInteger)fillNames.count) ? fillNames[cfg.cardBgFillMode] : @"填充模式";
        *ecy = [self addNavRowInGroup:expand title:@"背景填充模式" subtitle:fillSub tag:202 action:@selector(onFillModeTap) cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        NSArray *layerNames = @[@"底层显示", @"顶层显示"];
        NSString *lightLayerSub = (cfg.cardBgLightLayer >= 0 && cfg.cardBgLightLayer < (NSInteger)layerNames.count) ? layerNames[cfg.cardBgLightLayer] : @"底层显示";
        *ecy = [self addNavRowInGroup:expand title:@"浅色背景显示层级" subtitle:lightLayerSub tag:203 action:@selector(onLightLayerTap) cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        NSString *darkLayerSub = (cfg.cardBgDarkLayer >= 0 && cfg.cardBgDarkLayer < (NSInteger)layerNames.count) ? layerNames[cfg.cardBgDarkLayer] : @"底层显示";
        *ecy = [self addNavRowInGroup:expand title:@"深色背景显示层级" subtitle:darkLayerSub tag:204 action:@selector(onDarkLayerTap) cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        CGFloat loy = cfg.cardBgLightOffsetY;
        *ecy = [self addCustomInputRow:expand
                                 title:@"浅色背景Y轴偏移"
                                   key:@"cardBgLightOffsetY"
                                 value:loy != 0 ? [NSString stringWithFormat:@"%.0f", loy] : nil
                                  hint:@"0"
                            alertTitle:@"设置浅色背景Y轴偏移"
                          alertMessage:@"请输入Y轴偏移值(-500~500像素)\n正值向上偏移，负值向下偏移"
                                    cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        CGFloat doy = cfg.cardBgDarkOffsetY;
        *ecy = [self addCustomInputRow:expand
                                 title:@"深色背景Y轴偏移"
                                   key:@"cardBgDarkOffsetY"
                                 value:doy != 0 ? [NSString stringWithFormat:@"%.0f", doy] : nil
                                  hint:@"0"
                            alertTitle:@"设置深色背景Y轴偏移"
                          alertMessage:@"请输入Y轴偏移值(-500~500像素)\n正值向上偏移，负值向下偏移"
                                    cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        CGFloat lox = cfg.cardBgLightOffsetX;
        *ecy = [self addCustomInputRow:expand
                                 title:@"浅色背景X轴偏移"
                                   key:@"cardBgLightOffsetX"
                                 value:lox != 0 ? [NSString stringWithFormat:@"%.0f", lox] : nil
                                  hint:@"0"
                            alertTitle:@"设置浅色背景X轴偏移"
                          alertMessage:@"请输入X轴偏移值(-500~500像素)\n正值向右偏移，负值向左偏移"
                                    cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        CGFloat dox = cfg.cardBgDarkOffsetX;
        *ecy = [self addCustomInputRow:expand
                                 title:@"深色背景X轴偏移"
                                   key:@"cardBgDarkOffsetX"
                                 value:dox != 0 ? [NSString stringWithFormat:@"%.0f", dox] : nil
                                  hint:@"0"
                            alertTitle:@"设置深色背景X轴偏移"
                          alertMessage:@"请输入X轴偏移值(-500~500像素)\n正值向右偏移，负值向左偏移"
                                    cy:*ecy width:w];
    } cy:cy width:w];

    y = [self finishGroup:group atY:y height:cy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

#pragma mark - 浅色背景图选择

- (void)onLightImageTap {
    PluginConfig *config = [PluginConfig shared];
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"浅色背景图"
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    [alert addAction:[UIAlertAction actionWithTitle:@"选择浅色静态图片"
                                             style:UIAlertActionStyleDefault
                                           handler:^(UIAlertAction *action) {
        [self pickImageForMode:100];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:@"选择浅色GIF动图"
                                             style:UIAlertActionStyleDefault
                                           handler:^(UIAlertAction *action) {
        [self pickImageForMode:101];
    }]];

    if (config.cardBgLightImagePath.length > 0) {
        [alert addAction:[UIAlertAction actionWithTitle:@"删除浅色背景"
                                                 style:UIAlertActionStyleDestructive
                                               handler:^(UIAlertAction *action) {
            config.cardBgLightImagePath = nil;
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

#pragma mark - 深色背景图选择

- (void)onDarkImageTap {
    PluginConfig *config = [PluginConfig shared];
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"深色背景图"
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    [alert addAction:[UIAlertAction actionWithTitle:@"选择深色静态图片"
                                             style:UIAlertActionStyleDefault
                                           handler:^(UIAlertAction *action) {
        [self pickImageForMode:200];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:@"选择深色GIF动图"
                                             style:UIAlertActionStyleDefault
                                           handler:^(UIAlertAction *action) {
        [self pickImageForMode:201];
    }]];

    if (config.cardBgDarkImagePath.length > 0) {
        [alert addAction:[UIAlertAction actionWithTitle:@"删除深色背景"
                                                 style:UIAlertActionStyleDestructive
                                               handler:^(UIAlertAction *action) {
            config.cardBgDarkImagePath = nil;
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

#pragma mark - 图片选择器

- (void)pickImageForMode:(NSInteger)mode {
    PHPickerConfiguration *config = [[PHPickerConfiguration alloc] init];
    config.selectionLimit = 1;
    config.filter = [PHPickerFilter imagesFilter];

    PHPickerViewController *picker = [[PHPickerViewController alloc] initWithConfiguration:config];
    picker.delegate = self;
    picker.view.tag = mode;
    [self presentViewController:picker animated:YES completion:nil];
}

#pragma mark - PHPickerViewControllerDelegate

- (void)picker:(PHPickerViewController *)picker didFinishPicking:(NSArray<PHPickerResult *> *)results {
    if (results.count == 0) {
        [picker dismissViewControllerAnimated:YES completion:nil];
        return;
    }

    PHPickerResult *result = results.firstObject;
    PluginConfig *config = [PluginConfig shared];
    NSInteger mode = picker.view.tag;

    if (mode == 100 || mode == 200) {
        [result.itemProvider loadObjectOfClass:[UIImage class] completionHandler:^(__kindof id<NSItemProviderReading> object, NSError *error) {
            if (error || ![object isKindOfClass:[UIImage class]]) return;
            dispatch_async(dispatch_get_main_queue(), ^{
                UIImage *image = (UIImage *)object;
                NSData *pngData = UIImagePNGRepresentation(image);
                NSString *filename = mode == 100 ? @"MioCardBgLight.png" : @"MioCardBgDark.png";
                NSString *path = [NSHomeDirectory() stringByAppendingPathComponent:[NSString stringWithFormat:@"Documents/%@", filename]];
                [pngData writeToFile:path atomically:YES];
                if (mode == 100) {
                    config.cardBgLightImagePath = path;
                } else {
                    config.cardBgDarkImagePath = path;
                }
                [config save];
                [picker dismissViewControllerAnimated:YES completion:^{
                    [self buildUI];
                }];
            });
        }];
    } else if (mode == 101 || mode == 201) {
        [result.itemProvider loadFileRepresentationForTypeIdentifier:(__bridge NSString *)kUTTypeGIF completionHandler:^(NSURL *url, NSError *error) {
            if (error || !url) return;
            dispatch_async(dispatch_get_main_queue(), ^{
                if (mode == 101) {
                    config.cardBgLightImagePath = url.path;
                } else {
                    config.cardBgDarkImagePath = url.path;
                }
                [config save];
                [picker dismissViewControllerAnimated:YES completion:^{
                    [self buildUI];
                }];
            });
        }];
    }
}

#pragma mark - 背景填充模式

- (void)onFillModeTap {
    PluginConfig *config = [PluginConfig shared];
    NSArray *modeNames = @[@"填充模式", @"适应模式", @"拉伸填充", @"顶部填充"];

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"背景填充模式"
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    for (NSInteger i = 0; i < (NSInteger)modeNames.count; i++) {
        NSString *title = modeNames[i];
        if (i == config.cardBgFillMode) {
            title = [NSString stringWithFormat:@"✓ %@", title];
        }
        [alert addAction:[UIAlertAction actionWithTitle:title
                                                 style:UIAlertActionStyleDefault
                                               handler:^(UIAlertAction *action) {
            config.cardBgFillMode = i;
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

#pragma mark - 浅色背景显示层级

- (void)onLightLayerTap {
    PluginConfig *config = [PluginConfig shared];
    NSArray *layerNames = @[@"底层显示", @"顶层显示"];

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"浅色背景显示层级"
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    for (NSInteger i = 0; i < (NSInteger)layerNames.count; i++) {
        NSString *title = layerNames[i];
        if (i == config.cardBgLightLayer) {
            title = [NSString stringWithFormat:@"✓ %@", title];
        }
        [alert addAction:[UIAlertAction actionWithTitle:title
                                                 style:UIAlertActionStyleDefault
                                               handler:^(UIAlertAction *action) {
            config.cardBgLightLayer = i;
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

#pragma mark - 深色背景显示层级

- (void)onDarkLayerTap {
    PluginConfig *config = [PluginConfig shared];
    NSArray *layerNames = @[@"底层显示", @"顶层显示"];

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"深色背景显示层级"
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    for (NSInteger i = 0; i < (NSInteger)layerNames.count; i++) {
        NSString *title = layerNames[i];
        if (i == config.cardBgDarkLayer) {
            title = [NSString stringWithFormat:@"✓ %@", title];
        }
        [alert addAction:[UIAlertAction actionWithTitle:title
                                                 style:UIAlertActionStyleDefault
                                               handler:^(UIAlertAction *action) {
            config.cardBgDarkLayer = i;
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