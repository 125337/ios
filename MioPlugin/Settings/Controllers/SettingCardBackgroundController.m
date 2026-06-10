#import "SettingCardBackgroundController.h"
#import "../../Modules/ProfileCardBg/CardBgConfig.h"
#import "../../Modules/ListCornerRadius/ListCornerRadiusConfig.h"
#import "../../Core/ConfigManager.h"
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

    CardBgConfig *config = [CardBgConfig shared];
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    // ════════════════════════════════════
    // ★ 卡片背景
    // ════════════════════════════════════
    y = [self addSectionHeader:@"卡片背景" y:y width:w];

    // ─── 卡片1：使用背景素材 ───
    UIView *bgGroup = [self addTableGroupAtY:y width:w];
    CGFloat bgy = 0;

    bgy = [self addMasterSwitchRowInGroup:bgGroup
                                    title:@"使用背景素材"
                                      key:@"cardBgMaterialEnabled"
                                     isOn:config.cardBgMaterialEnabled
                               subBuilder:^(UIView *expand, CGFloat *ecy) {

        CardBgConfig *cfg = [CardBgConfig shared];

        CGFloat sp = cfg.cardBgListSpacing > 0 ? cfg.cardBgListSpacing : 9.0;
        *ecy = [self addInputRowInGroup:expand
                                  title:@"列表向下间距"
                                    key:@"cardBgListSpacing"
                                  value:[NSString stringWithFormat:@"%.0f", sp]
                                   hint:@"9"
                              valueType:InputValueTypeNumber
                             alertTitle:@"设置列表向下间距"
                           alertMessage:@"请输入间距值(1-550像素)"
                                     cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        NSString *imgSub = cfg.cardBgImagePath.length > 0 ? @"已设置" : @"未设置";
        *ecy = [self addNavRowInGroup:expand
                                title:@"背景图"
                              subtitle:imgSub
                                  tag:200
                               action:@selector(onImageTap)
                                   cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        NSArray *fillNames = @[@"填充模式", @"适应模式", @"拉伸填充"];
        NSString *fillSub = (cfg.cardBgFillMode >= 0 && cfg.cardBgFillMode < (NSInteger)fillNames.count)
            ? fillNames[cfg.cardBgFillMode] : @"填充模式";
        *ecy = [self addNavRowInGroup:expand
                                title:@"背景填充模式"
                              subtitle:fillSub
                                  tag:202
                               action:@selector(onFillModeTap)
                                   cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        NSArray *alignNames = @[@"底部对齐", @"居中对齐", @"顶部对齐"];
        NSString *alignSub = (cfg.cardBgAlignment >= 0 && cfg.cardBgAlignment < (NSInteger)alignNames.count)
            ? alignNames[cfg.cardBgAlignment] : @"底部对齐";
        *ecy = [self addNavRowInGroup:expand
                                title:@"对齐方式"
                              subtitle:alignSub
                                  tag:207
                               action:@selector(onAlignmentTap)
                                   cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        NSArray *layerNames = @[@"底层显示", @"顶层显示"];
        NSString *layerSub = (cfg.cardBgLayer >= 0 && cfg.cardBgLayer < (NSInteger)layerNames.count)
            ? layerNames[cfg.cardBgLayer] : @"底层显示";
        *ecy = [self addNavRowInGroup:expand
                                title:@"背景显示层级"
                              subtitle:layerSub
                                  tag:203
                               action:@selector(onLayerTap)
                                   cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        CGFloat oy = cfg.cardBgOffsetY;
        *ecy = [self addInputRowInGroup:expand
                                  title:@"背景Y轴偏移"
                                    key:@"cardBgOffsetY"
                                  value:oy != 0 ? [NSString stringWithFormat:@"%.0f", oy] : nil
                                   hint:@"0"
                              valueType:InputValueTypeNumber
                             alertTitle:@"设置背景Y轴偏移"
                           alertMessage:@"请输入Y轴偏移值(-500~500像素)\n正值向上偏移，负值向下偏移"
                                     cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        CGFloat ox = cfg.cardBgOffsetX;
        *ecy = [self addInputRowInGroup:expand
                                  title:@"背景X轴偏移"
                                    key:@"cardBgOffsetX"
                                  value:ox != 0 ? [NSString stringWithFormat:@"%.0f", ox] : nil
                                   hint:@"0"
                              valueType:InputValueTypeNumber
                             alertTitle:@"设置背景X轴偏移"
                           alertMessage:@"请输入X轴偏移值(-500~500像素)\n正值向右偏移，负值向左偏移"
                                     cy:*ecy width:w];

    } cy:bgy width:w];

    y = [self finishGroup:bgGroup atY:y height:bgy];
    y += 8;

    // ─── 卡片2：开启资料圆角 ───
    y = [self addSectionHeader:@"资料卡圆角" y:y width:w];

    UIView *crnGroup = [self addTableGroupAtY:y width:w];
    CGFloat crny = 0;

    crny = [self addMasterSwitchRowInGroup:crnGroup
                                     title:@"开启资料圆角"
                                       key:@"cardBgCornerEnabled"
                                      isOn:config.cardBgCornerEnabled
                                subBuilder:^(UIView *expand, CGFloat *ecy) {

        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"使用全局配置"
                                        key:@"cardBgCornerUseGlobal"
                                       isOn:config.cardBgCornerUseGlobal
                                         cy:*ecy width:w];

        if (!config.cardBgCornerUseGlobal) {
            *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

            CGFloat cr = config.cardBgCornerRadius > 0 ? config.cardBgCornerRadius : 18.0;
            *ecy = [self addInputRowInGroup:expand
                                      title:@"圆角大小"
                                        key:@"cardBgCornerRadius"
                                      value:[NSString stringWithFormat:@"%.0f", cr]
                                       hint:@"18"
                                  valueType:InputValueTypeNumber
                                 alertTitle:@"设置圆角大小"
                               alertMessage:@"请输入圆角大小(5-30像素)"
                                         cy:*ecy width:w];
            *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

            CGFloat cm = config.cardBgCornerMargin > 0 ? config.cardBgCornerMargin : 9.0;
            *ecy = [self addInputRowInGroup:expand
                                      title:@"边距大小"
                                        key:@"cardBgCornerMargin"
                                      value:[NSString stringWithFormat:@"%.0f", cm]
                                       hint:@"9"
                                  valueType:InputValueTypeNumber
                                 alertTitle:@"设置边距大小"
                               alertMessage:@"请输入边距值(0-30像素)"
                                         cy:*ecy width:w];
            *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

            *ecy = [self addColorRowInGroup:expand
                          title:@"卡片背景颜色"
                            key:@"cardBgCornerBgColor"
                          value:config.cardBgCornerBgColor
                             cy:*ecy width:w
                       darkKey:@"cardBgCornerDarkBgColor"
                     darkValue:config.cardBgCornerDarkBgColor];
            *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

            CGFloat sw = config.cardBgStrokeWidth > 0 ? config.cardBgStrokeWidth : 2.0;
            *ecy = [self addInputRowInGroup:expand
                                      title:@"描边大小"
                                        key:@"cardBgStrokeWidth"
                                      value:[NSString stringWithFormat:@"%.1f", sw]
                                       hint:@"2.0"
                                  valueType:InputValueTypeNumber
                                 alertTitle:@"设置描边大小"
                               alertMessage:@"请输入描边宽度(0.5-5.0)"
                                         cy:*ecy width:w];
        }

    } cy:crny width:w];

    y = [self finishGroup:crnGroup atY:y height:crny];
    y += 8;

    // ─── 卡片3：资料卡边框（手风琴，依赖资料圆角开关） ───
    UIView *pcBorderGroup = [self addTableGroupAtY:y width:w];
    CGFloat pcbcy = 0;

    pcbcy = [self addMasterSwitchRowInGroup:pcBorderGroup
                                      title:@"资料卡边框"
                                        key:@"listProfileCardBorderEnabled"
                                       isOn:[ListCornerRadiusConfig shared].listProfileCardBorderEnabled
                                 subBuilder:^(UIView *expand, CGFloat *ecy) {
        ListCornerRadiusConfig *c5 = [ListCornerRadiusConfig shared];

        // 边框宽度
        NSString *bwStr = c5.listProfileCardBorderWidth > 0
            ? [NSString stringWithFormat:@"%.1f", c5.listProfileCardBorderWidth] : nil;
        *ecy = [self addInputRowInGroup:expand
                                  title:@"边框宽度"
                                    key:@"listProfileCardBorderWidth"
                                  value:bwStr
                                   hint:@"2.0"
                              valueType:InputValueTypeNumber
                             alertTitle:@"设置资料卡边框宽度"
                           alertMessage:@"请输入边框宽度(0.5-5.0)"
                                     cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // 边框颜色（支持深色）
        *ecy = [self addColorRowInGroup:expand
                                  title:@"边框颜色"
                                    key:@"listProfileCardBorderColor"
                                  value:c5.listProfileCardBorderColor
                                     cy:*ecy width:w
                               darkKey:@"listProfileCardBorderColorDarkHex"
                             darkValue:c5.listProfileCardBorderColorDarkHex];

    } cy:pcbcy width:w];

    y = [self finishGroup:pcBorderGroup atY:y height:pcbcy];
    y += 8;

    // ════════════════════════════════════
    // ★ 我的页面美化
    // ════════════════════════════════════
    y = [self addSectionHeader:@"我的页面美化" y:y width:w];

    UIView *myGroup = [self addTableGroupAtY:y width:w];
    CGFloat mcy = 0;

    // ★ 隐藏信息卡片（从上面移过来的）
    mcy = [self addSubSwitchRowInGroup:myGroup
                                 title:@"隐藏信息卡片"
                                   key:@"cardBgHidden"
                                  isOn:config.cardBgHidden
                                    cy:mcy width:w];
    mcy = [self addSeparatorInGroup:myGroup cy:mcy width:w];

    // 隐藏状态
    mcy = [self addSubSwitchRowInGroup:myGroup
                                 title:@"隐藏状态"
                                   key:@"cardBgHideStateEnabled"
                                  isOn:config.cardBgHideStateEnabled
                                    cy:mcy width:w];
    mcy = [self addSeparatorInGroup:myGroup cy:mcy width:w];

    // 隐藏箭码
    mcy = [self addSubSwitchRowInGroup:myGroup
                                 title:@"隐藏箭码"
                                   key:@"myPageHideArrow"
                                  isOn:[ListCornerRadiusConfig shared].myPageHideArrow
                                    cy:mcy width:w];

    y = [self finishGroup:myGroup atY:y height:mcy];
    y += 8;

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

#pragma mark - 背景图选择

- (void)onImageTap {
    CardBgConfig *config = [CardBgConfig shared];
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
            [ConfigManager saveAll];
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
    CardBgConfig *config = [CardBgConfig shared];
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
                [ConfigManager saveAll];
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
                [ConfigManager saveAll];
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
    CardBgConfig *config = [CardBgConfig shared];
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
            [ConfigManager saveAll];
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
    CardBgConfig *config = [CardBgConfig shared];
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
            [ConfigManager saveAll];
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
    CardBgConfig *config = [CardBgConfig shared];
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
            [ConfigManager saveAll];
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
    if ([key isEqualToString:@"cardBgMaterialEnabled"]
        || [key isEqualToString:@"cardBgCornerEnabled"]
        || [key isEqualToString:@"cardBgCornerUseGlobal"]
        || [key isEqualToString:@"listProfileCardBorderEnabled"]) {
        [self buildUI];
        return;
    }
}

@end