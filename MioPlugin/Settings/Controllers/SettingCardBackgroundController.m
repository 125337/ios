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

    // ════════════════════════════════════
    // ★ 新增：资料卡片美化
    // ════════════════════════════════════
    y = [self addSectionHeader:@"资料卡片美化" y:y width:w];

    UIView *newGroup = [self addTableGroupAtY:y width:w];
    CGFloat ncy = 0;

    ncy = [self addMasterSwitchRowInGroup:newGroup
                                    title:@"资料卡片美化"
                                      key:@"cardBgBeautifyEnabled"
                                     isOn:config.cardBgBeautifyEnabled
                               subBuilder:^(UIView *expand, CGFloat *ecy) {

        PluginConfig *cfg = [PluginConfig shared];

        // ─── 子手风琴1：使用背景素材 ───
        *ecy = [self addMasterSwitchRowInGroup:expand
                                         title:@"使用背景素材"
                                           key:@"cardBgMaterialEnabled"
                                          isOn:cfg.cardBgMaterialEnabled
                                    subBuilder:^(UIView *e2, CGFloat *e2y) {

            CGFloat sp = cfg.cardBgListSpacing > 0 ? cfg.cardBgListSpacing : 9.0;
            *e2y = [self addInputRowInGroup:e2
                                      title:@"列表向下间距"
                                        key:@"cardBgListSpacing"
                                      value:[NSString stringWithFormat:@"%.0f", sp]
                                       hint:@"9"
                                 alertTitle:@"设置列表向下间距"
                               alertMessage:@"请输入间距值(1-550像素)"
                                         cy:*e2y width:w];
            *e2y = [self addSeparatorInGroup:e2 cy:*e2y width:w];

            NSString *imgSub = cfg.cardBgImagePath.length > 0 ? @"已设置" : @"未设置";
            *e2y = [self addNavRowInGroup:e2
                                    title:@"背景图"
                                  subtitle:imgSub
                                      tag:200
                                   action:@selector(onImageTap)
                                       cy:*e2y width:w];
            *e2y = [self addSeparatorInGroup:e2 cy:*e2y width:w];

            NSArray *fillNames = @[@"填充模式", @"适应模式", @"拉伸填充"];
            NSString *fillSub = (cfg.cardBgFillMode >= 0 && cfg.cardBgFillMode < (NSInteger)fillNames.count)
                ? fillNames[cfg.cardBgFillMode] : @"填充模式";
            *e2y = [self addNavRowInGroup:e2
                                    title:@"背景填充模式"
                                  subtitle:fillSub
                                      tag:202
                                   action:@selector(onFillModeTap)
                                       cy:*e2y width:w];
            *e2y = [self addSeparatorInGroup:e2 cy:*e2y width:w];

            NSArray *alignNames = @[@"底部对齐", @"居中对齐", @"顶部对齐"];
            NSString *alignSub = (cfg.cardBgAlignment >= 0 && cfg.cardBgAlignment < (NSInteger)alignNames.count)
                ? alignNames[cfg.cardBgAlignment] : @"底部对齐";
            *e2y = [self addNavRowInGroup:e2
                                    title:@"对齐方式"
                                  subtitle:alignSub
                                      tag:207
                                   action:@selector(onAlignmentTap)
                                       cy:*e2y width:w];
            *e2y = [self addSeparatorInGroup:e2 cy:*e2y width:w];

            // ── 背景显示层级 ──
            NSArray *layerNames = @[@"底层显示", @"顶层显示"];
            NSString *layerSub = (cfg.cardBgLayer >= 0 && cfg.cardBgLayer < (NSInteger)layerNames.count)
                ? layerNames[cfg.cardBgLayer] : @"底层显示";
            *e2y = [self addNavRowInGroup:e2
                                    title:@"背景显示层级"
                                  subtitle:layerSub
                                      tag:203
                                   action:@selector(onLayerTap)
                                       cy:*e2y width:w];
            *e2y = [self addSeparatorInGroup:e2 cy:*e2y width:w];

            // ── 背景 Y/X 偏移 ──
            CGFloat oy = cfg.cardBgOffsetY;
            *e2y = [self addInputRowInGroup:e2
                                      title:@"背景Y轴偏移"
                                        key:@"cardBgOffsetY"
                                      value:oy != 0 ? [NSString stringWithFormat:@"%.0f", oy] : nil
                                       hint:@"0"
                                 alertTitle:@"设置背景Y轴偏移"
                               alertMessage:@"请输入Y轴偏移值(-500~500像素)\n正值向上偏移，负值向下偏移"
                                         cy:*e2y width:w];
            *e2y = [self addSeparatorInGroup:e2 cy:*e2y width:w];

            CGFloat ox = cfg.cardBgOffsetX;
            *e2y = [self addInputRowInGroup:e2
                                      title:@"背景X轴偏移"
                                        key:@"cardBgOffsetX"
                                      value:ox != 0 ? [NSString stringWithFormat:@"%.0f", ox] : nil
                                       hint:@"0"
                                 alertTitle:@"设置背景X轴偏移"
                               alertMessage:@"请输入X轴偏移值(-500~500像素)\n正值向右偏移，负值向左偏移"
                                         cy:*e2y width:w];
        } cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // ─── 隐藏信息卡片（平铺开关，无子参数） ───
        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"隐藏信息卡片"
                                        key:@"cardBgHidden"
                                       isOn:cfg.cardBgHidden
                                         cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // ─── 子手风琴3：开启资料圆角 ───
        *ecy = [self addMasterSwitchRowInGroup:expand
                                         title:@"开启资料圆角"
                                           key:@"cardBgCornerEnabled"
                                          isOn:cfg.cardBgCornerEnabled
                                    subBuilder:^(UIView *e3, CGFloat *e3y) {

            PluginConfig *c3 = [PluginConfig shared];

            // ── 使用全局配置（平铺开关） ──
            *e3y = [self addSubSwitchRowInGroup:e3
                                          title:@"使用全局配置"
                                            key:@"cardBgCornerUseGlobal"
                                           isOn:c3.cardBgCornerUseGlobal
                                             cy:*e3y width:w];

            if (!c3.cardBgCornerUseGlobal) {
                *e3y = [self addSeparatorInGroup:e3 cy:*e3y width:w];

                CGFloat cr = cfg.cardBgCornerRadius > 0 ? cfg.cardBgCornerRadius : 18.0;
                *e3y = [self addInputRowInGroup:e3
                                          title:@"圆角大小"
                                            key:@"cardBgCornerRadius"
                                          value:[NSString stringWithFormat:@"%.0f", cr]
                                           hint:@"18"
                                     alertTitle:@"设置圆角大小"
                                   alertMessage:@"请输入圆角大小(5-30像素)"
                                             cy:*e3y width:w];
                *e3y = [self addSeparatorInGroup:e3 cy:*e3y width:w];

                CGFloat cm = cfg.cardBgCornerMargin > 0 ? cfg.cardBgCornerMargin : 9.0;
                *e3y = [self addInputRowInGroup:e3
                                          title:@"边距大小"
                                            key:@"cardBgCornerMargin"
                                          value:[NSString stringWithFormat:@"%.0f", cm]
                                           hint:@"9"
                                     alertTitle:@"设置边距大小"
                                   alertMessage:@"请输入边距值(0-30像素)"
                                             cy:*e3y width:w];
                *e3y = [self addSeparatorInGroup:e3 cy:*e3y width:w];

                *e3y = [self addDualColorRowInGroup:e3
                                              title:@"卡片背景颜色"
                                           lightKey:@"cardBgCornerBgColor"
                                            darkKey:@"cardBgCornerDarkBgColor"
                                           lightHex:cfg.cardBgCornerBgColor
                                            darkHex:cfg.cardBgCornerDarkBgColor
                                                  cy:*e3y width:w];
                *e3y = [self addSeparatorInGroup:e3 cy:*e3y width:w];

                CGFloat sw = cfg.cardBgStrokeWidth > 0 ? cfg.cardBgStrokeWidth : 2.0;
                *e3y = [self addInputRowInGroup:e3
                                          title:@"描边大小"
                                            key:@"cardBgStrokeWidth"
                                          value:[NSString stringWithFormat:@"%.1f", sw]
                                           hint:@"2.0"
                                     alertTitle:@"设置描边大小"
                                   alertMessage:@"请输入描边宽度(0.5-5.0)"
                                             cy:*e3y width:w];
            }
        } cy:*ecy width:w];
    } cy:ncy width:w];

    y = [self finishGroup:newGroup atY:y height:ncy];
    y += 8;

    // ════════════════════════════════════
    // ★ 我的页面美化
    // ════════════════════════════════════
    y = [self addSectionHeader:@"我的页面美化" y:y width:w];

    UIView *myGroup = [self addTableGroupAtY:y width:w];
    CGFloat mcy = 0;

    mcy = [self addSubSwitchRowInGroup:myGroup
                                 title:@"隐藏状态"
                                   key:@"cardBgHideStateEnabled"
                                  isOn:config.cardBgHideStateEnabled
                                    cy:mcy width:w];
    mcy = [self addSeparatorInGroup:myGroup cy:mcy width:w];

    mcy = [self addSubSwitchRowInGroup:myGroup
                             title:@"隐藏箭码"
                               key:@"myPageHideArrow"
                              isOn:config.myPageHideArrow
                                    cy:mcy width:w];

    y = [self finishGroup:myGroup atY:y height:mcy];
    y += 8;

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

#pragma mark - 背景图选择

- (void)onImageTap {
    PluginConfig *config = [PluginConfig shared];
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"背景图"
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    [alert addAction:[UIAlertAction actionWithTitle:@"选择静态图片"
                                             style:UIAlertActionStyleDefault
                                           handler:^(UIAlertAction *action) {
        [self pickImageForMode:100];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:@"选择GIF动图"
                                             style:UIAlertActionStyleDefault
                                           handler:^(UIAlertAction *action) {
        [self pickImageForMode:101];
    }]];

    if (config.cardBgImagePath.length > 0) {
        [alert addAction:[UIAlertAction actionWithTitle:@"删除背景图"
                                                 style:UIAlertActionStyleDestructive
                                               handler:^(UIAlertAction *action) {
            WPLog(@"CardBg-Diag", @"[PICKER] Deleting image path: %@", config.cardBgImagePath);
            if (config.cardBgImagePath.length > 0) {
                NSFileManager *fm = [NSFileManager defaultManager];
                if ([fm fileExistsAtPath:config.cardBgImagePath]) {
                    [fm removeItemAtPath:config.cardBgImagePath error:nil];
                    WPLog(@"CardBg-Diag", @"[PICKER] Deleted image file from disk");
                }
            }
            // 删除默认目录下的同名文件
            NSString *bgDir = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
            bgDir = [bgDir stringByAppendingPathComponent:@"MioCardBackground"];
            NSFileManager *fm = [NSFileManager defaultManager];
            [fm removeItemAtPath:[bgDir stringByAppendingPathComponent:@"MioCardBg.png"] error:nil];
            [fm removeItemAtPath:[bgDir stringByAppendingPathComponent:@"MioCardBg.gif"] error:nil];
            WPLog(@"CardBg-Diag", @"[PICKER] Removed default image files from MioCardBackground/");
            config.cardBgImagePath = nil;
            [config save];
            [self buildUI];
        }]];
    }

    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];

    if (@available(iOS 13.0, *)) {
        alert.popoverPresentationController.sourceView = self.view;
        alert.popoverPresentationController.sourceRect = CGRectMake(
            self.view.bounds.size.width / 2, self.view.bounds.size.height / 2, 1, 1);
    }
    [self presentViewController:alert animated:YES completion:nil];
}

#pragma mark - 图片选择器

- (void)pickImageForMode:(NSInteger)mode {
    PHPickerConfiguration *config = [[PHPickerConfiguration alloc] init];
    config.selectionLimit = 1;

    BOOL isGif = (mode == 101);
    config.filter = isGif ? [PHPickerFilter imagesFilter] : [PHPickerFilter imagesFilter];

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
    BOOL isGif = (mode == 101);

    WPLog(@"CardBg-Diag", @"[PICKER] mode=%ld, isGif=%d", (long)mode, isGif);

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

    NSString *targetFile = isGif ? @"MioCardBg.gif" : @"MioCardBg.png";
    NSString *altExt = isGif ? @"MioCardBg.png" : @"MioCardBg.gif";

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
                config.cardBgImagePath = targetPath;
                [config save];
                WPLog(@"CardBg-Diag", @"[PICKER] Saved config: cardBgImagePath=%@", targetPath);
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
                config.cardBgImagePath = targetPath;
                [config save];
                WPLog(@"CardBg-Diag", @"[PICKER] Saved config: cardBgImagePath=%@", targetPath);
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
    NSArray *modeNames = @[@"填充模式", @"适应模式", @"拉伸填充"];

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

#pragma mark - 背景显示层级

- (void)onLayerTap {
    PluginConfig *config = [PluginConfig shared];
    NSArray *layerNames = @[@"底层显示", @"顶层显示"];

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"背景显示层级"
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    for (NSInteger i = 0; i < (NSInteger)layerNames.count; i++) {
        NSString *title = layerNames[i];
        if (i == config.cardBgLayer) {
            title = [NSString stringWithFormat:@"✓ %@", title];
        }
        [alert addAction:[UIAlertAction actionWithTitle:title
                                                 style:UIAlertActionStyleDefault
                                               handler:^(UIAlertAction *action) {
            config.cardBgLayer = i;
            [config save];
            [self buildUI];
        }]];
    }

    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];

    if (@available(iOS 13.0, *)) {
        alert.popoverPresentationController.sourceView = self.view;
        alert.popoverPresentationController.sourceRect = CGRectMake(
            self.view.bounds.size.width / 2, self.view.bounds.size.height / 2, 1, 1);
    }
    [self presentViewController:alert animated:YES completion:nil];
}

#pragma mark - 对齐方式

- (void)onAlignmentTap {
    PluginConfig *config = [PluginConfig shared];
    NSArray *alignNames = @[@"底部对齐", @"居中对齐", @"顶部对齐"];

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"对齐方式"
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    for (NSInteger i = 0; i < (NSInteger)alignNames.count; i++) {
        NSString *title = alignNames[i];
        if (i == config.cardBgAlignment) {
            title = [NSString stringWithFormat:@"✓ %@", title];
        }
        [alert addAction:[UIAlertAction actionWithTitle:title
                                                 style:UIAlertActionStyleDefault
                                               handler:^(UIAlertAction *action) {
            config.cardBgAlignment = i;
            [config save];
            [self buildUI];
        }]];
    }

    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];

    if (@available(iOS 13.0, *)) {
        alert.popoverPresentationController.sourceView = self.view;
        alert.popoverPresentationController.sourceRect = CGRectMake(
            self.view.bounds.size.width / 2, self.view.bounds.size.height / 2, 1, 1);
    }
    [self presentViewController:alert animated:YES completion:nil];
}



#pragma mark - switchChanged

- (void)switchChanged:(UISwitch *)sender {
    [super switchChanged:sender];

    NSString *key = objc_getAssociatedObject(sender, "key");
    if (!key) return;

    // ★ 新增：新 UI 的开关需要 rebuild UI（展开/折叠子项）
    if ([key isEqualToString:@"cardBgBeautifyEnabled"]
        || [key isEqualToString:@"cardBgMaterialEnabled"]
        || [key isEqualToString:@"cardBgCornerEnabled"]
        || [key isEqualToString:@"cardBgCornerUseGlobal"]
        || [key isEqualToString:@"cardBgHidden"]
        || [key isEqualToString:@"myPageHideArrow"]
        || [key isEqualToString:@"cardBgHideStateEnabled"]) {   // ★ 新增
        [self buildUI];
        return;
    }
}

@end