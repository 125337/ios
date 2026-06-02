#import "SettingCardBackgroundController.h"
#import "../../Config/PluginConfig.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"
#import "../../Core/LogManager.h"
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
        *ecy = [self addInputRowInGroup:expand
                                  title:@"信息卡片高度"
                                    key:@"cardBgHeight"
                                  value:[NSString stringWithFormat:@"%.0f", h]
                                   hint:@"144"
                             alertTitle:@"设置信息卡片高度"
                           alertMessage:@"请输入高度值(144-500像素)"
                                     cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        CGFloat sp = cfg.cardBgListSpacing > 0 ? cfg.cardBgListSpacing : 9.0;
        *ecy = [self addInputRowInGroup:expand
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
        *ecy = [self addInputRowInGroup:expand
                                  title:@"浅色背景Y轴偏移"
                                    key:@"cardBgLightOffsetY"
                                 value:loy != 0 ? [NSString stringWithFormat:@"%.0f", loy] : nil
                                   hint:@"0"
                             alertTitle:@"设置浅色背景Y轴偏移"
                           alertMessage:@"请输入Y轴偏移值(-500~500像素)\n正值向上偏移，负值向下偏移"
                                     cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        CGFloat doy = cfg.cardBgDarkOffsetY;
        *ecy = [self addInputRowInGroup:expand
                                  title:@"深色背景Y轴偏移"
                                    key:@"cardBgDarkOffsetY"
                                 value:doy != 0 ? [NSString stringWithFormat:@"%.0f", doy] : nil
                                   hint:@"0"
                             alertTitle:@"设置深色背景Y轴偏移"
                           alertMessage:@"请输入Y轴偏移值(-500~500像素)\n正值向上偏移，负值向下偏移"
                                     cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        CGFloat lox = cfg.cardBgLightOffsetX;
        *ecy = [self addInputRowInGroup:expand
                                  title:@"浅色背景X轴偏移"
                                    key:@"cardBgLightOffsetX"
                                 value:lox != 0 ? [NSString stringWithFormat:@"%.0f", lox] : nil
                                   hint:@"0"
                             alertTitle:@"设置浅色背景X轴偏移"
                           alertMessage:@"请输入X轴偏移值(-500~500像素)\n正值向右偏移，负值向左偏移"
                                     cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        CGFloat dox = cfg.cardBgDarkOffsetX;
        *ecy = [self addInputRowInGroup:expand
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
            WPLog(@"CardBg-Diag", @"[PICKER] Deleting light image path: %@", config.cardBgLightImagePath);
            // 删除磁盘上的文件
            if (config.cardBgLightImagePath.length > 0) {
                NSFileManager *fm = [NSFileManager defaultManager];
                if ([fm fileExistsAtPath:config.cardBgLightImagePath]) {
                    [fm removeItemAtPath:config.cardBgLightImagePath error:nil];
                    WPLog(@"CardBg-Diag", @"[PICKER] Deleted light image file from disk");
                }
            }
            // 同时删除默认目录下的同名文件（防止自动扫描恢复）
            NSString *bgDir = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
            bgDir = [bgDir stringByAppendingPathComponent:@"MioCardBackground"];
            NSFileManager *fm = [NSFileManager defaultManager];
            [fm removeItemAtPath:[bgDir stringByAppendingPathComponent:@"MioCardBgLight.png"] error:nil];
            [fm removeItemAtPath:[bgDir stringByAppendingPathComponent:@"MioCardBgLight.gif"] error:nil];
            WPLog(@"CardBg-Diag", @"[PICKER] Removed default light image files from MioCardBackground/");
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
            WPLog(@"CardBg-Diag", @"[PICKER] Deleting dark image path: %@", config.cardBgDarkImagePath);
            // 删除磁盘上的文件
            if (config.cardBgDarkImagePath.length > 0) {
                NSFileManager *fm = [NSFileManager defaultManager];
                if ([fm fileExistsAtPath:config.cardBgDarkImagePath]) {
                    [fm removeItemAtPath:config.cardBgDarkImagePath error:nil];
                    WPLog(@"CardBg-Diag", @"[PICKER] Deleted dark image file from disk");
                }
            }
            // 同时删除默认目录下的同名文件（防止自动扫描恢复）
            NSString *bgDir = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
            bgDir = [bgDir stringByAppendingPathComponent:@"MioCardBackground"];
            NSFileManager *fm = [NSFileManager defaultManager];
            [fm removeItemAtPath:[bgDir stringByAppendingPathComponent:@"MioCardBgDark.png"] error:nil];
            [fm removeItemAtPath:[bgDir stringByAppendingPathComponent:@"MioCardBgDark.gif"] error:nil];
            WPLog(@"CardBg-Diag", @"[PICKER] Removed default dark image files from MioCardBackground/");
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
        WPLog(@"CardBg-Diag", @"[PICKER] No results selected");
        [picker dismissViewControllerAnimated:YES completion:nil];
        return;
    }

    PHPickerResult *result = results.firstObject;
    PluginConfig *config = [PluginConfig shared];
    NSInteger mode = picker.view.tag;
    BOOL isDark = (mode == 200 || mode == 201);
    BOOL isGif = (mode == 101 || mode == 201);

    WPLog(@"CardBg-Diag", @"[PICKER] mode=%ld, isDark=%d, isGif=%d", (long)mode, isDark, isGif);

    NSString *bgDir = [NSSearchPathForDirectoriesInDomains(
        NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
    bgDir = [bgDir stringByAppendingPathComponent:@"MioCardBackground"];

    NSFileManager *fm = [NSFileManager defaultManager];
    BOOL isDir = NO;
    if (![fm fileExistsAtPath:bgDir isDirectory:&isDir] || !isDir) {
        [fm createDirectoryAtPath:bgDir withIntermediateDirectories:YES
                        attributes:nil error:nil];
    }

    WPLog(@"CardBg-Diag", @"[PICKER] bgDir=%@", bgDir);
    WPLog(@"CardBg-Diag", @"[PICKER] dirExists=%d", [fm fileExistsAtPath:bgDir]);

    NSString *targetFile;
    NSString *altExt;
    if (isGif) {
        targetFile = isDark ? @"MioCardBgDark.gif" : @"MioCardBgLight.gif";
        altExt = isDark ? @"MioCardBgDark.png" : @"MioCardBgLight.png";
    } else {
        targetFile = isDark ? @"MioCardBgDark.png" : @"MioCardBgLight.png";
        altExt = isDark ? @"MioCardBgDark.gif" : @"MioCardBgLight.gif";
    }

    NSString *targetPath = [bgDir stringByAppendingPathComponent:targetFile];
    NSString *altPath = [bgDir stringByAppendingPathComponent:altExt];

    WPLog(@"CardBg-Diag", @"[PICKER] targetPath=%@", targetPath);
    WPLog(@"CardBg-Diag", @"[PICKER] altPath=%@", altPath);

    if ([fm fileExistsAtPath:altPath]) {
        [fm removeItemAtPath:altPath error:nil];
        WPLog(@"CardBg-Diag", @"[PICKER] Removed alt file: %@", altPath);
    }

    if (isGif) {
        [result.itemProvider loadDataRepresentationForTypeIdentifier:@"com.compuserve.gif"
                                               completionHandler:^(NSData *data, NSError *error) {
            if (error || !data) {
                WPLog(@"CardBg-Diag", @"[PICKER] GIF load FAILED: error=%@", error ?: @"data nil");
                return;
            }
            WPLog(@"CardBg-Diag", @"[PICKER] GIF data loaded, size=%lu bytes", (unsigned long)data.length);
            dispatch_async(dispatch_get_main_queue(), ^{
                BOOL written = [data writeToFile:targetPath atomically:YES];
                WPLog(@"CardBg-Diag", @"[PICKER] GIF write to %@: %@", targetPath, written ? @"SUCCESS" : @"FAILED");
                if (isDark) {
                    config.cardBgDarkImagePath = targetPath;
                } else {
                    config.cardBgLightImagePath = targetPath;
                }
                [config save];
                WPLog(@"CardBg-Diag", @"[PICKER] Saved config: %@=%@", isDark ? @"cardBgDarkImagePath" : @"cardBgLightImagePath", targetPath);
                WPLog(@"CardBg-Diag", @"[PICKER] Verify file exists: %d", [[NSFileManager defaultManager] fileExistsAtPath:targetPath]);
                [picker dismissViewControllerAnimated:YES completion:^{
                    [self buildUI];
                }];
            });
        }];
    } else {
        [result.itemProvider loadDataRepresentationForTypeIdentifier:@"public.image"
                                               completionHandler:^(NSData *data, NSError *error) {
            if (error || !data) {
                WPLog(@"CardBg-Diag", @"[PICKER] Image load FAILED: error=%@", error ?: @"data nil");
                return;
            }
            WPLog(@"CardBg-Diag", @"[PICKER] Image data loaded, size=%lu bytes", (unsigned long)data.length);
            dispatch_async(dispatch_get_main_queue(), ^{
                BOOL written = [data writeToFile:targetPath atomically:YES];
                WPLog(@"CardBg-Diag", @"[PICKER] Image write to %@: %@", targetPath, written ? @"SUCCESS" : @"FAILED");
                if (isDark) {
                    config.cardBgDarkImagePath = targetPath;
                } else {
                    config.cardBgLightImagePath = targetPath;
                }
                [config save];
                WPLog(@"CardBg-Diag", @"[PICKER] Saved config: %@=%@", isDark ? @"cardBgDarkImagePath" : @"cardBgLightImagePath", targetPath);
                WPLog(@"CardBg-Diag", @"[PICKER] Verify file exists: %d", [[NSFileManager defaultManager] fileExistsAtPath:targetPath]);
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