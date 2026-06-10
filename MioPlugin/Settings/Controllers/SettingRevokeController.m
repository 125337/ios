#import "../Common/SettingController.h"
#import "../../Modules/Revoke/RevokeConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Modules/Revoke/RevokeFormatEditorVC.h"

@interface SettingRevokeController ()
@end

@implementation SettingRevokeController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"防撤回设置";
    [self buildUI];
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }

    RevokeConfig *config = [RevokeConfig shared];
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    // ===== 消息防撤回 =====
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addMasterSwitchRowInGroup:group
                                    title:@"启用消息防撤回"
                                      key:@"preventRecall"
                                     isOn:config.preventRecall
                               subBuilder:^(UIView *expand, CGFloat *ecy) {
        NSString *fmtSub = config.revokeTemplate.length > 0 ? config.revokeTemplate : @"默认格式";
        *ecy = [self addNavRowInGroup:expand title:@"自定义撤回消息显示" subtitle:fmtSub tag:100 action:@selector(onRevokeFormatTap) cy:*ecy width:w];
    } cy:cy width:w];

    y = [self finishGroup:group atY:y height:cy];

    // ===== 通知撤回者 =====
    UIView *group2 = [self addTableGroupAtY:y width:w];
    CGFloat cy2 = 0;

    cy2 = [self addMasterSwitchRowInGroup:group2
                                     title:@"启用通知撤回者"
                                       key:@"notifySender"
                                      isOn:config.notifySender
                                subBuilder:^(UIView *expand, CGFloat *ecy) {
        NSString *sub = config.notifySenderTemplate.length > 0 ? config.notifySenderTemplate : @"默认内容";
        *ecy = [self addNavRowInGroup:expand title:@"通知消息内容" subtitle:sub tag:200 action:@selector(onNotifyFormatTap) cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"频率限制(秒)" key:@"notifySenderCooldown" value:[NSString stringWithFormat:@"%.0f", config.notifySenderCooldown] hint:@"0=不限制" valueType:InputValueTypeNumber cy:*ecy width:w];
    } cy:cy2 width:w];

    y = [self finishGroup:group2 atY:y height:cy2];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

- (void)onRevokeFormatTap {
    RevokeFormatEditorVC *editor = [[RevokeFormatEditorVC alloc] init];
    editor.initialFormat = [RevokeConfig shared].revokeTemplate;
    editor.saveBlock = [^(NSString *newFormat) {
        [RevokeConfig shared].revokeTemplate = newFormat;
        [ConfigManager saveAll];
        [self buildUI];
    } copy];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:editor];
    nav.modalPresentationStyle = UIModalPresentationPageSheet;
    [self presentViewController:nav animated:YES completion:nil];
}

- (void)onNotifyFormatTap {
    RevokeFormatEditorVC *editor = [[RevokeFormatEditorVC alloc] init];
    editor.initialFormat = [RevokeConfig shared].notifySenderTemplate;
    editor.saveBlock = [^(NSString *newFormat) {
        [RevokeConfig shared].notifySenderTemplate = newFormat;
        [ConfigManager saveAll];
        [self buildUI];
    } copy];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:editor];
    nav.modalPresentationStyle = UIModalPresentationPageSheet;
    [self presentViewController:nav animated:YES completion:nil];
}

@end