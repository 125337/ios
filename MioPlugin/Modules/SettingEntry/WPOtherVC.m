#import "WPOtherVC.h"
#import "../MusicShare/MusicShareVC.h"
#import "../../Core/LogManager.h"

@implementation WPOtherVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"其他功能";
    [self wpReloadUI];
}

- (void)wpBuildRows {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }

    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    // ===== 音乐分享（直接进二级配置页；总开关在二级页里） =====
    y = [self addSectionHeader:@"音乐分享" y:y width:w];

    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = [self addNavRowInGroup:group title:@"音乐分享" subtitle:@"指令点歌 · 音乐源选择"
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
