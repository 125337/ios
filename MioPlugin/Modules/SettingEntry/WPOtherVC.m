#import "WPOtherVC.h"
#import "../MusicShare/MusicShareConfig.h"
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

    MusicShareConfig *config = [MusicShareConfig shared];
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    // ===== 音乐分享（单卡片：总开关 = 启用音乐分享，子行 = 点歌入口） =====
    y = [self addSectionHeader:@"音乐分享" y:y width:w];

    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;
    cy = [self addMasterSwitchRowInGroup:group
                                   title:@"启用音乐分享"
                                     key:@"musicShareEnabled"
                                    isOn:config.musicShareEnabled
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addNavRowInGroup:expand title:@"点歌" subtitle:@"搜索歌曲并发送音乐卡片"
                                  tag:0 action:@selector(onMusicOrderTap) cy:*ecy width:w];
    } cy:cy width:w];
    y = [self finishGroup:group atY:y height:cy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
    WPLog(@"UI", @"[Sub] WPOtherVC wpBuildRows done");
}

- (void)onMusicOrderTap {
    [self.navigationController pushViewController:[MusicShareVC new] animated:YES];
}

@end
