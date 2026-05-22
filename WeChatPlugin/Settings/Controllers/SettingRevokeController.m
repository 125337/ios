#import "../Common/SettingController.h"
#import "../../Config/PluginConfig.h"
#import "../../Modules/Revoke/RevokeFormatEditorVC.h"

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

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

- (void)onRevokeFormatTap {
    RevokeFormatEditorVC *editor = [[RevokeFormatEditorVC alloc] init];
    editor.initialFormat = [PluginConfig shared].revokeTemplate;
    editor.saveBlock = ^(NSString *newFormat) {
        PluginConfig *cfg = [PluginConfig shared];
        cfg.revokeTemplate = newFormat;
        [cfg save];
        [self buildUI];
    };
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:editor];
    nav.modalPresentationStyle = UIModalPresentationPageSheet;
    [self presentViewController:nav animated:YES completion:nil];
}

@end