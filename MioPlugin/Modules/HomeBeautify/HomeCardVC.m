#import "HomeCardVC.h"
#import "HomeCardConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/MioAlertHelper.h"
#import "../SettingEntry/WPCommonUI.h"
#import <PhotosUI/PhotosUI.h>
#import <MobileCoreServices/MobileCoreServices.h>

// 图片选择目标：0 = 浅色模式，1 = 深色模式
typedef NS_ENUM(NSInteger, HomeCardPickerTarget) {
    HomeCardPickerLight = 0,
    HomeCardPickerDark  = 1,
};

@interface HomeCardVC () <PHPickerViewControllerDelegate>
@property (nonatomic, assign) HomeCardPickerTarget pickerTarget;
@end

@implementation HomeCardVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"首页卡片";
    [self buildUI];
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    HomeCardConfig *config = [HomeCardConfig shared];
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    // ──── 卡片1：启用卡片（总开关，开启后下面的子配置才生效） ────
    y = [self addSectionHeader:@"基础设置" y:y width:w];
    UIView *g1 = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addMasterSwitchRowInGroup:g1
                                   title:@"启用卡片"
                                     key:@"hcEnabled"
                                    isOn:config.hcEnabled
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        HomeCardConfig *cfg = [HomeCardConfig shared];

        // 主页标题（默认留空）
        *ecy = [self addInputRowInGroup:expand
                                  title:@"主页标题"
                                    key:@"hcTitle"
                                  value:(cfg.hcTitle.length > 0 ? cfg.hcTitle : nil)
                                   hint:@""
                              valueType:InputValueTypeText
                             alertTitle:@"设置主页标题"
                           alertMessage:@"留空则不替换主页标题"
                                     cy:*ecy
                                  width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // 标题大小（默认 0 = 默认大小）
        *ecy = [self addInputRowInGroup:expand
                                  title:@"标题大小"
                                    key:@"hcTitleSize"
                                  value:cfg.hcTitleSize != 0 ? [self numText:cfg.hcTitleSize] : nil
                                   hint:@"0"
                              valueType:InputValueTypeNumber
                             alertTitle:@"设置标题大小"
                           alertMessage:@"标题大小，0 为跟随默认"
                                     cy:*ecy
                                  width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // 标题X偏移值（默认 0）
        *ecy = [self addInputRowInGroup:expand
                                  title:@"标题X偏移值"
                                    key:@"hcTitleOffsetX"
                                  value:cfg.hcTitleOffsetX != 0 ? [self numText:cfg.hcTitleOffsetX] : nil
                                   hint:@"0"
                              valueType:InputValueTypeNumber
                             alertTitle:@"设置标题X偏移值"
                           alertMessage:@"标题X偏移值，可为负，0 为默认位置"
                                     cy:*ecy
                                  width:w];
    } cy:cy width:w];

    y = [self finishGroup:g1 atY:y height:cy];
    y += 8;

    // ──── 卡片2：卡片图片（浅/深色独立，同卡片背景页的图片上传方式） ────
    y = [self addSectionHeader:@"卡片图片" y:y width:w];
    UIView *g2 = [self addTableGroupAtY:y width:w];
    cy = 0;

    NSString *lightSub = [HomeCardConfig hasLightImage] ? @"已设置" : @"未设置";
    cy = [self addNavRowInGroup:g2
                          title:@"浅色模式"
                       subtitle:lightSub
                            tag:0
                         action:@selector(onLightImageTap)
                             cy:cy
                          width:w];
    cy = [self addSeparatorInGroup:g2 cy:cy width:w];

    NSString *darkSub = [HomeCardConfig hasDarkImage] ? @"已设置" : @"未设置";
    cy = [self addNavRowInGroup:g2
                          title:@"深色模式"
                       subtitle:darkSub
                            tag:1
                         action:@selector(onDarkImageTap)
                             cy:cy
                          width:w];

    y = [self finishGroup:g2 atY:y height:cy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

#pragma mark - 卡片图片（浅/深色，同卡片背景页：菜单选图/删图 → PHPicker）

- (void)onLightImageTap {
    [self showImageMenuForTarget:HomeCardPickerLight];
}

- (void)onDarkImageTap {
    [self showImageMenuForTarget:HomeCardPickerDark];
}

- (void)showImageMenuForTarget:(HomeCardPickerTarget)target {
    BOOL hasImage = (target == HomeCardPickerLight) ? [HomeCardConfig hasLightImage]
                                                    : [HomeCardConfig hasDarkImage];
    NSString *modeName = (target == HomeCardPickerLight) ? @"浅色模式" : @"深色模式";

    NSMutableArray<NSString *> *buttons = [NSMutableArray arrayWithObject:@"选择静态图片"];
    if (hasImage) {
        [buttons addObject:@"删除图片"];
    }

    [MioAlertHelper showMenuAlert:modeName buttons:buttons onButton:^(NSInteger index) {
        if (index == 0) {
            [self pickImageWithTarget:target];
        } else if (index == 1) {
            if (target == HomeCardPickerLight) {
                [HomeCardConfig deleteLightImage];
            } else {
                [HomeCardConfig deleteDarkImage];
            }
            [ConfigManager saveAll];
            [self buildUI];
        }
    }];
}

#pragma mark - 图片选择器

- (void)pickImageWithTarget:(HomeCardPickerTarget)target {
    self.pickerTarget = target;

    PHPickerConfiguration *phConfig = [[PHPickerConfiguration alloc] init];
    phConfig.selectionLimit = 1;
    phConfig.filter = [PHPickerFilter imagesFilter];

    PHPickerViewController *picker = [[PHPickerViewController alloc] initWithConfiguration:phConfig];
    picker.delegate = self;
    [self presentViewController:picker animated:YES completion:nil];
}

#pragma mark - PHPickerViewControllerDelegate

- (void)picker:(PHPickerViewController *)picker didFinishPicking:(NSArray<PHPickerResult *> *)results {
    if (results.count == 0) {
        [picker dismissViewControllerAnimated:YES completion:nil];
        return;
    }

    PHPickerResult *result = results.firstObject;
    HomeCardPickerTarget target = self.pickerTarget;

    NSString *imgDir = [HomeCardConfig imageDirectory];

    NSFileManager *fm = [NSFileManager defaultManager];
    BOOL isDir = NO;
    if (![fm fileExistsAtPath:imgDir isDirectory:&isDir] || !isDir) {
        [fm createDirectoryAtPath:imgDir withIntermediateDirectories:YES
                        attributes:nil error:nil];
    }

    // 只保存为 PNG（同卡片背景页，只支持静态图片选择）
    NSString *targetPath = (target == HomeCardPickerLight)
        ? [imgDir stringByAppendingPathComponent:@"HomeCardLight.png"]
        : [imgDir stringByAppendingPathComponent:@"HomeCardDark.png"];

    [result.itemProvider loadDataRepresentationForTypeIdentifier:@"public.image"
                                               completionHandler:^(NSData *data, NSError *error) {
        if (error || !data) {
            dispatch_async(dispatch_get_main_queue(), ^{
                [picker dismissViewControllerAnimated:YES completion:nil];
            });
            return;
        }
        dispatch_async(dispatch_get_main_queue(), ^{
            [data writeToFile:targetPath atomically:YES];
            [ConfigManager saveAll];
            [picker dismissViewControllerAnimated:YES completion:^{
                [self buildUI];
            }];
        });
    }];
}

#pragma mark - 工具

- (NSString *)numText:(CGFloat)v {
    return (v == floor(v)) ? [NSString stringWithFormat:@"%ld", (long)v]
                           : [NSString stringWithFormat:@"%.1f", v];
}

@end
