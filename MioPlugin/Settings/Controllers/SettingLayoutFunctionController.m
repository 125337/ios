#import "SettingLayoutFunctionController.h"
#import "SettingAvatarHideController.h"
#import "../../Core/LogManager.h"

@implementation SettingLayoutFunctionController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"界面布局";
    [self buildUI];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self buildUI];
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) [v removeFromSuperview];

    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    // ===== 界面布局组 =====
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addNavRowInGroup:group
                         title:@"隐藏头像"
                      subtitle:@"私聊/群聊/公众号"
                           tag:500
                        action:@selector(onAvatarHideTap)
                            cy:cy width:w];

    y = [self finishGroup:group atY:y height:cy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

- (void)onAvatarHideTap {
    SettingAvatarHideController *vc = [[SettingAvatarHideController alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
}

@end