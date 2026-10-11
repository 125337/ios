#import "MsgMergeVC.h"
#import "MsgMergeConfig.h"
#import "MsgMergeAABVC.h"
#import "../../Core/ConfigManager.h"

@implementation MsgMergeVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"消息合并";
    [self wpReloadUI];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    // 微信引擎表每次重建后再添加行，防止 pop 返回时行叠加
    [self wpReloadUI];
}

- (void)wpBuildRows {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }

    MsgMergeConfig *config = [MsgMergeConfig shared];
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    // ── 总开关 ──
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = [self addSwitchRowInGroup:group
                                     title:@"启用消息合并"
                                      desc:nil
                                       key:@"msgMergeEnabled"
                                      isOn:config.msgMergeEnabled
                                        cy:0
                                     width:w];
    y = [self finishGroup:group atY:y height:cy];

    // ── 子配置入口 ──
    y = [self addSectionHeader:@"子配置" y:y width:w];
    UIView *navGroup = [self addTableGroupAtY:y width:w];
    CGFloat ncy = [self addNavRowInGroup:navGroup
                                   title:@"头像气泡上"
                                subtitle:(config.msgMergeAabEnabled ? @"已开启" : @"已关闭")
                                     tag:100
                                  action:@selector(navigateTo:)
                                      cy:0
                                   width:w];
    y = [self finishGroup:navGroup atY:y height:ncy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

- (void)navigateTo:(UIButton *)sender {
    [self.navigationController pushViewController:[[MsgMergeAABVC alloc] init] animated:YES];
}

@end
