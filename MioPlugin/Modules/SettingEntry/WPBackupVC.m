#import "../../Settings/Common/SettingCategoryController.h"
#import "WPCommonUI.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/LogManager.h"
#import "../../Core/MioAlertHelper.h"
#import "../../Core/MioRestartHelper.h"

@interface WPBackupVC () <UIDocumentPickerDelegate>
@end

@interface WPBackupVC : SettingCategoryController
@end

@implementation WPBackupVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"备份与重置";
    [self wpReloadUI];
}

- (void)wpBuildRows {
    CGFloat w = self.view.bounds.size.width;

    // ── 配置备份 ──
    [self addSectionHeader:@"配置备份" y:0 width:w];
    UIView *backupGroup = [self addTableGroupAtY:0 width:w];
    CGFloat by = 0;
    by = [self addHintRowInGroup:backupGroup
                            text:@"导出全部配置为 JSON 文件存入「文件」App；\n导入后自动重启微信生效。\n（不含自定义头像/卡片背景图/语音包音频）"
                              cy:by width:w];
    by = [self addButtonRowInGroup:backupGroup title:@"导出配置"
                              hint:nil
                               key:@"backup_export"
                                cy:by width:w];
    by = [self addButtonRowInGroup:backupGroup title:@"导入配置"
                              hint:nil
                               key:@"backup_import"
                                cy:by width:w];
    [self finishGroup:backupGroup atY:0 height:by];

    // ── 重置 ──
    [self addSectionHeader:@"重置插件配置" y:0 width:w];

    UIView *group = [self addTableGroupAtY:0 width:w];
    CGFloat cy = 0;

    cy = [self addHintRowInGroup:group text:@"此操作将清除本插件的所有配置，\n包括消息时间、防撤回、红包等全部设置。\n操作后插件将恢复如初装状态。" cy:cy width:w];

    cy = [self addButtonRowInGroup:group title:@"重置所有配置"
                              hint:@"此操作不可撤销"
                               key:@"backup_reset"
                                cy:cy width:w];

    [self finishGroup:group atY:0 height:cy];
    WPLog(@"UI", @"[Backup] wpBuildRows done");
}

- (void)buttonClicked:(NSString *)key {
    if ([key isEqualToString:@"backup_reset"]) {
        [MioAlertHelper showConfirmAlert:@"所有插件配置将被清空，此操作不可恢复。"
                            confirmTitle:@"确认重置"
                              onConfirm:^{
            [ConfigManager resetAll];
            [self.navigationController popToRootViewControllerAnimated:YES];

            UILabel *toast = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 240, 50)];
            toast.center = self.view.window.center;
            toast.text = @"配置已重置";
            toast.textAlignment = NSTextAlignmentCenter;
            toast.backgroundColor = [UIColor colorWithWhite:0.1 alpha:0.8];
            toast.textColor = [UIColor whiteColor];
            toast.layer.cornerRadius = 10;
            toast.layer.masksToBounds = YES;
            toast.font = [UIFont systemFontOfSize:15];
            [self.view.window addSubview:toast];
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                [toast removeFromSuperview];
            });
        }];
        WPLog(@"UI", @"[Backup] reset dialog shown");
        return;
    }
    if ([key isEqualToString:@"backup_export"]) {
        [self exportConfigToFile];
        return;
    }
    if ([key isEqualToString:@"backup_import"]) {
        [self importConfigFromFiles];
        return;
    }
    [super buttonClicked:key];
}

#pragma mark - 配置导入/导出

// 导出：ConfigManager.exportConfig → JSON 文件 → DocumentPicker 存入「文件」App
- (void)exportConfigToFile {
    NSDictionary *config = [ConfigManager exportConfig];
    NSError *err = nil;
    NSData *data = [NSJSONSerialization dataWithJSONObject:config
                                                   options:NSJSONWritingPrettyPrinted
                                                     error:&err];
    if (!data) {
        WPShowToast(@"导出失败：配置序列化错误");
        return;
    }
    NSDateFormatter *fmt = [[NSDateFormatter alloc] init];
    fmt.dateFormat = @"yyyyMMdd_HHmmss";
    NSString *path = [NSTemporaryDirectory() stringByAppendingPathComponent:
        [NSString stringWithFormat:@"MioConfigBackup_%@.json", [fmt stringFromDate:[NSDate date]]]];
    if (![data writeToFile:path atomically:YES]) {
        WPShowToast(@"导出失败：临时文件写入错误");
        return;
    }
    // 老 API（iOS8+），与语音包导入同款
    UIDocumentPickerViewController *picker = [[UIDocumentPickerViewController alloc]
        initWithURL:[NSURL fileURLWithPath:path]
        inMode:UIDocumentPickerModeExportToService];
    picker.delegate = self;
    UIViewController *top = WPGetTopVCForPresentation();
    if (top) [top presentViewController:picker animated:YES completion:nil];
}

// 导入：DocumentPicker 选 JSON → 预览确认 → 写回配置 → 优雅重启生效
- (void)importConfigFromFiles {
    @try {
        UIDocumentPickerViewController *picker = [[UIDocumentPickerViewController alloc]
            initWithDocumentTypes:@[@"public.json", @"public.data"]
            inMode:UIDocumentPickerModeImport];
        picker.delegate = self;
        UIViewController *top = WPGetTopVCForPresentation();
        if (top) [top presentViewController:picker animated:YES completion:nil];
    } @catch (NSException *e) {}
}

#pragma mark UIDocumentPickerDelegate

- (void)documentPicker:(UIDocumentPickerViewController *)controller didPickDocumentsAtURLs:(NSArray<NSURL *> *)urls {
    if (controller.documentPickerMode == UIDocumentPickerModeExportToService) return; // 导出目标已选，无需处理
    NSURL *url = urls.firstObject;
    if (!url) return;
    NSData *data = [NSData dataWithContentsOfURL:url];
    NSDictionary *json = data ? [NSJSONSerialization JSONObjectWithData:data options:0 error:nil] : nil;
    if (![json isKindOfClass:[NSDictionary class]]
        || ![json[@"app"] isEqualToString:@"Mio助手"]
        || ![json[@"config"] isKindOfClass:[NSDictionary class]]) {
        WPShowToast(@"不是有效的 Mio助手配置文件");
        return;
    }
    NSString *exportedAt = [json[@"exportedAt"] isKindOfClass:[NSString class]] ? json[@"exportedAt"] : @"未知";
    NSString *version = [json[@"version"] isKindOfClass:[NSString class]] ? json[@"version"] : @"?";
    __weak typeof(self) ws = self;
    [MioAlertHelper showConfirmAlert:
        [NSString stringWithFormat:@"导入该配置并重启微信？\n\n导出时间：%@\n插件版本：v%@\n\n当前所有配置将被覆盖。", exportedAt, version]
                        confirmTitle:@"导入并重启"
                          onConfirm:^{
        if ([ConfigManager importConfig:json]) {
            WPLog(@"UI", @"[Backup] import ok, restarting");
            [MioRestartHelper elegantRestartFromVC:ws];
        } else {
            WPShowToast(@"导入失败：配置写入错误");
        }
    }];
}

#pragma mark - 搜索自声明（首页搜索汇总遍历，见 SettingCategoryController.h）

+ (NSString *)wpSearchPageTitle {
    return @"备份与重置";
}

+ (NSArray<NSDictionary *> *)wpSearchItems {
    return @[
        @{ @"title": @"重置所有配置", @"kw": @"重置 配置 恢复出厂 清空" },
    ];
}

@end