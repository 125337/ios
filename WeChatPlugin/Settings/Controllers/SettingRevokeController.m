#import "../Common/SettingController.h"
#import "../../Config/PluginConfig.h"
#import "../../Modules/Revoke/RevokeFormatEditorVC.h"

@interface SettingRevokeController ()
@property (nonatomic, strong) NSMutableArray *inputFields;
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
    [self.inputFields removeAllObjects];

    PluginConfig *config = [PluginConfig shared];
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    // ===== 消息防撤回 =====
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addMasterSwitchRowInGroup:group
                                    title:@"启用消息防撤回"
                                      key:@"PreventRecall"
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
                                       key:@"NotifySender"
                                      isOn:config.notifySender
                                subBuilder:^(UIView *expand, CGFloat *ecy) {
        NSString *sub = config.notifySenderTemplate.length > 0 ? config.notifySenderTemplate : @"默认内容";
        *ecy = [self addNavRowInGroup:expand title:@"通知消息内容" subtitle:sub tag:200 action:@selector(onNotifyFormatTap) cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"频率限制(秒)" key:@"NotifySenderCooldown" value:[NSString stringWithFormat:@"%.0f", config.notifySenderCooldown] hint:@"0=不限制" cy:*ecy width:w];
    } cy:cy2 width:w];

    y = [self finishGroup:group2 atY:y height:cy2];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

- (void)onRevokeFormatTap {
    RevokeFormatEditorVC *editor = [[RevokeFormatEditorVC alloc] init];
    editor.initialFormat = [PluginConfig shared].revokeTemplate;
    editor.saveBlock = [^(NSString *newFormat) {
        PluginConfig *cfg = [PluginConfig shared];
        cfg.revokeTemplate = newFormat;
        [cfg save];
        [self buildUI];
    } copy];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:editor];
    nav.modalPresentationStyle = UIModalPresentationPageSheet;
    [self presentViewController:nav animated:YES completion:nil];
    [editor release];
    [nav release];
}

- (void)onNotifyFormatTap {
    RevokeFormatEditorVC *editor = [[RevokeFormatEditorVC alloc] init];
    editor.initialFormat = [PluginConfig shared].notifySenderTemplate;
    editor.saveBlock = [^(NSString *newFormat) {
        PluginConfig *cfg = [PluginConfig shared];
        cfg.notifySenderTemplate = newFormat;
        [cfg save];
        [self buildUI];
    } copy];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:editor];
    nav.modalPresentationStyle = UIModalPresentationPageSheet;
    [self presentViewController:nav animated:YES completion:nil];
    [editor release];
    [nav release];
}

@end