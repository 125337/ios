#import "SettingMomentsController.h"
#import "SettingMomentCommentsController.h"
#import "SettingMomentBlocklistController.h"
#import "../../Modules/Moments/MomentsConfig.h"
#import "../../Core/MioAlertHelper.h"

@implementation SettingMomentsController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"朋友圈";
    // 不在此处 buildUI：viewWillAppear 统一重建（评论页返回后刷新条数反显）
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    // 微信引擎表每次重建后再添加行，防止 pop 返回/多次进入时行叠加
    [self wpRebuildWeChatTable];
    [self buildUI];
}

- (void)buttonClicked:(NSString *)key {
    if ([key isEqualToString:@"editCommentTexts"]) {
        SettingMomentCommentsController *vc = [[SettingMomentCommentsController alloc] init];
        [self.navigationController pushViewController:vc animated:YES];
        return;
    }
    if ([key isEqualToString:@"editAutoLikeBlocklist"]) {
        SettingMomentBlocklistController *vc = [[SettingMomentBlocklistController alloc] init];
        [self.navigationController pushViewController:vc animated:YES];
        return;
    }
    [super buttonClicked:key];
}

// 便捷朋友圈开启后弹使用提示（页级开关钩子）
- (void)wpAfterSwitchChanged:(NSString *)key on:(BOOL)on {
    if (on && [key isEqualToString:@"convenientMomentsEnabled"]) {
        [MioAlertHelper showTipAlert:@"聊天页半屏浏览朋友圈\n输入框输入pyq可快速开启"];
    }
}

- (NSString *)commentCountHint {
    MomentsConfig *config = [MomentsConfig shared];
    NSUInteger n = config.fakeCommentTexts.count;
    return n > 0 ? [NSString stringWithFormat:@"已设置 %lu 条", (unsigned long)n] : @"点击编辑";
}

- (NSString *)blocklistCountHint {
    NSUInteger n = [MomentsConfig shared].autoLikeBlocklist.count;
    return n > 0 ? [NSString stringWithFormat:@"已添加 %lu 人", (unsigned long)n] : @"点击添加";
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

    // 子开关：朋友圈伪集赞（开=展开子配置，关=收起；手风琴，总开关唯一入口）
    cy = [self addMasterSwitchRowInGroup:group
                                   title:@"朋友圈伪集赞"
                                     key:@"fakeLikeEnabled"
                                    isOn:config.fakeLikeEnabled
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"设置点赞数量" key:@"fakeLikeCount" value:[NSString stringWithFormat:@"%ld", (long)config.fakeLikeCount] hint:@"10" valueType:InputValueTypeNumber alertTitle:@"设置点赞数量" alertMessage:@"请输入数量(0-10000)" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"设置评论数量" key:@"fakeCommentCount" value:[NSString stringWithFormat:@"%ld", (long)config.fakeCommentCount] hint:@"3" valueType:InputValueTypeNumber alertTitle:@"设置评论数量" alertMessage:@"请输入数量(0-300)" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addButtonRowInGroup:expand title:@"编辑评论文本" hint:[self commentCountHint] key:@"editCommentTexts" cy:*ecy width:w];
    } cy:cy width:w];

    // 子开关：朋友圈自动点赞（开=展开子配置，关=收起；手风琴，总开关唯一入口）
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    cy = [self addMasterSwitchRowInGroup:group
                                   title:@"朋友圈自动点赞"
                                     key:@"autoLikeEnabled"
                                    isOn:config.autoLikeEnabled
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"操作间隔" key:@"autoLikeInterval" value:[NSString stringWithFormat:@"%ld", (long)config.autoLikeInterval] hint:@"5" valueType:InputValueTypeNumber alertTitle:@"操作间隔" alertMessage:@"自动点赞间隔秒数(3-300)" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"刷新间隔" key:@"autoLikeRefreshInterval" value:[NSString stringWithFormat:@"%ld", (long)config.autoLikeRefreshInterval] hint:@"60" valueType:InputValueTypeNumber alertTitle:@"刷新间隔" alertMessage:@"不在朋友圈页面时，隔多少秒刷新一次朋友圈" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addButtonRowInGroup:expand title:@"点赞黑名单" hint:[self blocklistCountHint] key:@"editAutoLikeBlocklist" cy:*ecy width:w];
    } cy:cy width:w];

    y = [self finishGroup:group atY:y height:cy];

    [self addSectionFooter:@"伪集赞: 自定义朋友圈收到的点赞与评论数量\n评论文本按设置的数量随机取用\n自动点赞: 广告帖与黑名单好友不发赞" y:y width:w];
}

@end
