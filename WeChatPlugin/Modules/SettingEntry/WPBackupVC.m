#import "WPCommonUI.h"
#import "SettingEntryHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"

static void reLog(NSString *content) {
    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath withIntermediateDirectories:YES attributes:nil error:nil];
        NSString *filePath = [folderPath stringByAppendingPathComponent:@"setting_entry.log"];
        NSString *line = [NSString stringWithFormat:@"[%@] %@\n", [NSDate date], content];
        NSFileHandle *handle = [NSFileHandle fileHandleForWritingAtPath:filePath];
        if (handle) {
            [handle seekToEndOfFile];
            [handle writeData:[line dataUsingEncoding:NSUTF8StringEncoding]];
            [handle closeFile];
        } else {
            [line writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:nil];
        }
    } @catch (NSException *e) {}
}

static void WPBackupViewDidLoad(id self, SEL _cmd) {
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, _cmd);
    if (m) ((void (*)(id, SEL))method_getImplementation(m))(self, _cmd);

    UIViewController *vc = (UIViewController *)self;
    vc.title = @"备份与重置";
    vc.view.backgroundColor = WPBgColor();

    CGFloat w = vc.view.bounds.size.width;

    UIScrollView *sv = WPMakeSV(vc);
    [vc.view addSubview:sv];

    CGFloat y = 20;

    // 提示信息
    [sv addSubview:WPMakeSectionHeader(@"重置插件配置", y, w)];
    y += 32;

    UIView *card = WPMakeCard(y, w);
    CGFloat cy = 0;

    UILabel *hint = [[UILabel alloc] initWithFrame:CGRectMake(kPad, cy + 12, w - kPad * 4, 60)];
    hint.text = @"此操作将清除本插件的所有配置，\n包括消息时间、防撤回、红包等全部设置。\n操作后插件将恢复如初装状态。";
    hint.font = [UIFont systemFontOfSize:13];
    hint.textColor = WPT2();
    hint.numberOfLines = 0;
    [card addSubview:hint];
    cy += 84;

    UIButton *resetBtn = [UIButton buttonWithType:UIButtonTypeSystem];
    resetBtn.frame = CGRectMake(kPad, cy, w - kPad * 4, 44);
    resetBtn.backgroundColor = [UIColor systemRedColor];
    resetBtn.layer.cornerRadius = 10;
    [resetBtn setTitle:@"重置所有配置" forState:UIControlStateNormal];
    [resetBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    resetBtn.titleLabel.font = [UIFont systemFontOfSize:16 weight:UIFontWeightSemibold];
    [resetBtn addTarget:self action:NSSelectorFromString(@"onResetTapped") forControlEvents:UIControlEventTouchUpInside];
    [card addSubview:resetBtn];
    cy += 56;

    CGRect cf = card.frame; cf.size.height = cy; card.frame = cf;
    [sv addSubview:card];
    y += cy + 16;

    sv.contentSize = CGSizeMake(w, y);
    WPLog(@"UI", @"[Backup] viewDidLoad");
}

static void WPBackupOnReset(id self, SEL _cmd) {
    UIViewController *vc = (UIViewController *)self;

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"确认重置"
                                                                   message:@"所有插件配置将被清空，此操作不可恢复。"
                                                            preferredStyle:UIAlertControllerStyleAlert];

    UIAlertAction *cancel = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil];
    UIAlertAction *confirm = [UIAlertAction actionWithTitle:@"确认重置" style:UIAlertActionStyleDestructive handler:^(UIAlertAction *action) {
        [[PluginConfig shared] resetAllConfig];
        [vc.navigationController popToRootViewControllerAnimated:YES];

        // 显示成功提示
        UILabel *toast = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 240, 50)];
        toast.center = vc.view.window.center;
        toast.text = @"配置已重置";
        toast.textAlignment = NSTextAlignmentCenter;
        toast.backgroundColor = [UIColor colorWithWhite:0.1 alpha:0.8];
        toast.textColor = [UIColor whiteColor];
        toast.layer.cornerRadius = 10;
        toast.layer.masksToBounds = YES;
        toast.font = [UIFont systemFontOfSize:15];
        [vc.view.window addSubview:toast];
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            [toast removeFromSuperview];
        });
    }];

    [alert addAction:cancel];
    [alert addAction:confirm];
    [vc presentViewController:alert animated:YES completion:nil];
    WPLog(@"UI", @"[Backup] reset dialog shown");
}

@interface WPBackupVCHelper : NSObject
+ (UIViewController *)makeVC;
@end

@implementation WPBackupVCHelper

+ (UIViewController *)makeVC {
    Class subClass = objc_getClass("WPBackupVC");
    if (!subClass) {
        subClass = objc_allocateClassPair(WPGetBaseClass(), "WPBackupVC", 0);
        if (subClass) {
            class_addMethod(subClass, NSSelectorFromString(@"viewDidLoad"), (IMP)WPBackupViewDidLoad, "v@:");
            class_addMethod(subClass, NSSelectorFromString(@"onResetTapped"), (IMP)WPBackupOnReset, "v@:");
            objc_registerClassPair(subClass);
            WPLog(@"UI", @"[Backup] WPBackupVC class created");
        } else {
            WPLog(@"UI", @"[Backup] WPBackupVC class create FAILED");
        }
    }
    if (subClass) {
        return [[subClass alloc] init];
    }
    return nil;
}

@end
