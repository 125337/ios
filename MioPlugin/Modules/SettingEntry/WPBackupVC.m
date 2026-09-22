#import "../../Settings/Common/SettingCategoryController.h"
#import "WPCommonUI.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/LogManager.h"
#import "../../Core/MioAlertHelper.h"

@interface WPBackupVC : SettingCategoryController
@end

@implementation WPBackupVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"备份与重置";
    [self buildUI];
}

- (void)buildUI {
    CGFloat w = self.view.bounds.size.width;

    [self addSectionHeader:@"重置插件配置" y:0 width:w];

    UIView *group = [self addTableGroupAtY:0 width:w];
    CGFloat cy = 0;

    cy = [self addHintRowInGroup:group text:@"此操作将清除本插件的所有配置，\n包括消息时间、防撤回、红包等全部设置。\n操作后插件将恢复如初装状态。" cy:cy width:w];

    cy = [self addButtonRowInGroup:group title:@"重置所有配置"
                              hint:@"此操作不可撤销"
                               key:@"backup_reset"
                                cy:cy width:w];

    [self finishGroup:group atY:0 height:cy];
    WPLog(@"UI", @"[Backup] buildUI done");
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
    [super buttonClicked:key];
}

@end