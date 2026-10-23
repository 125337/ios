#import "WPOtherVC.h"
#import "../MusicShare/MusicShareConfig.h"
#import "../MusicShare/MusicShareVC.h"
#import "../../Core/LogManager.h"

@implementation WPOtherVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"其他功能";
}

// 与通用功能页同款：每次出现都重建行，pop 返回时刷新「音乐分享」等状态 subtitle
- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self wpReloadUI];
}

- (void)wpBuildRows {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }

    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    // ===== 音乐分享（点击进二级配置页；subtitle = 功能开启状态，与通用功能页消息防撤回同款） =====
    y = [self addSectionHeader:@"音乐分享" y:y width:w];

    UIView *group = [self addTableGroupAtY:y width:w];
    NSString *status = [MusicShareConfig shared].musicShareEnabled ? @"已开启" : @"已关闭";
    CGFloat cy = [self addNavRowInGroup:group title:@"音乐分享" subtitle:status
                                   tag:0 action:@selector(onMusicOrderTap) cy:0 width:w];
    y = [self finishGroup:group atY:y height:cy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
    WPLog(@"UI", @"[Sub] WPOtherVC wpBuildRows done");
}

- (void)onMusicOrderTap {
    [self.navigationController pushViewController:[MusicShareVC new] animated:YES];
}

@end
