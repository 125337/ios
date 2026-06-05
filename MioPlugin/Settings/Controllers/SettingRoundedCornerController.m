#import "SettingRoundedCornerController.h"
#import "SettingListCornerRadiusController.h"
#import "SettingCardBackgroundController.h"
#import "../../Config/PluginConfig.h"
#import "../../Config/WPColors.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"

@implementation SettingRoundedCornerController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"圆角美化";
    [self buildUI];
}

#pragma mark - 跳转子页面

- (void)onListCornerRadiusTap {
    SettingListCornerRadiusController *vc = [[SettingListCornerRadiusController alloc] init];
    vc.hidesBottomBarWhenPushed = YES;
    [self.navigationController pushViewController:vc animated:YES];
}

- (void)onCardBackgroundTap {
    SettingCardBackgroundController *vc = [[SettingCardBackgroundController alloc] init];
    vc.hidesBottomBarWhenPushed = YES;
    [self.navigationController pushViewController:vc animated:YES];
}

#pragma mark - Build UI

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 8;
    CGFloat scale = [UIScreen mainScreen].scale;

    // ========== Card: 圆角美化 ==========
    UIView *card = WPMakeCard(y, w);
    CGFloat cy = 0;

    // 列表圆角
    cy = [self addNavRowInGroup:card title:@"列表圆角" subtitle:@"" tag:2001 action:@selector(onListCornerRadiusTap) cy:cy width:w];

    WPAddSep(card, cy, w);
    cy = round((cy + 1.0 / scale) * scale) / scale;

    // 卡片背景
    cy = [self addNavRowInGroup:card title:@"卡片背景" subtitle:@"" tag:2002 action:@selector(onCardBackgroundTap) cy:cy width:w];

    CGRect cf = card.frame; cf.size.height = cy; card.frame = cf;
    [self.contentView addSubview:card];
    y += cy + 8;

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

@end