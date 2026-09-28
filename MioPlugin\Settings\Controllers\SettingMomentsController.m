#import "SettingMomentsController.h"
#import "../../Modules/Moments/MomentsConfig.h"
#import "../../Core/MioAlertHelper.h"

@implementation SettingMomentsController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"朋友圈";
    // 不在此处 buildUI：viewWillAppear 统一重建（pop 返回后行叠加）
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    // 微信引擎表每次重建后再添加行，防止 pop 返回/多次进入时行叠加
    [self wpRebuildWeChatTable];
    [self buildUI];
}

// 便捷朋友圈开启后弹使用提示（页级开关钩子）
- (void)wpAfterSwitchChanged:(NSString *)key on:(BOOL)on {
    if (on && [key isEqualToString:@"convenientMomentsEnabled"]) {
        [MioAlertHelper showTipAlert:@"聊天页半屏浏览朋友圈\n输入框输入pyq可快速开启"];
    }
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    MomentsConfig *config = [MomentsConfig shared];
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    y = [self addSectionHeader:@"朋友圈功能" y:y width:w];
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addSwitchRowInGroup:group title:@"便捷朋友圈" desc:nil key:@"convenientMomentsEnabled" isOn:config.convenientMomentsEnabled cy:cy width:w];
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    cy = [self addSwitchRowInGroup:group title:@"高清朋友圈" desc:nil key:@"hdMomentsEnabled" isOn:config.hdMomentsEnabled cy:cy width:w];
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    // 伪集赞仅总开关（WCR 同款机制，行为内置：本人帖子且已点赞时补假赞 8~28 / 假评 2~5）
    cy = [self addSwitchRowInGroup:group title:@"朋友圈伪集赞" desc:nil key:@"fakeLikeEnabled" isOn:config.fakeLikeEnabled cy:cy width:w];

    y = [self finishGroup:group atY:y height:cy];

    [self addSectionFooter:@"伪集赞: 本人朋友圈点赞后生效\n自动补充点赞与评论（行为内置，无子配置）" y:y width:w];
}

@end
