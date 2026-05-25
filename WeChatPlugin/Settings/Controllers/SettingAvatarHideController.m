#import "../Common/SettingController.h"
#import "../../Config/PluginConfig.h"

@implementation SettingAvatarHideController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"隐藏头像";
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

    // 私聊
    cy = [self addSubSectionLabelInGroup:group text:@"私聊" cy:cy width:w];
    cy = [self addSwitchRowInGroup:group title:@"隐藏对方头像" desc:nil key:@"HideC2COtherAvatar" isOn:config.hideC2COtherAvatar cy:cy width:w];
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    cy = [self addSwitchRowInGroup:group title:@"隐藏自己头像" desc:nil key:@"HideC2CSelfAvatar" isOn:config.hideC2CSelfAvatar cy:cy width:w];

    // 群聊
    cy = [self addSubSectionLabelInGroup:group text:@"群聊" cy:cy width:w];
    cy = [self addSwitchRowInGroup:group title:@"隐藏对方头像" desc:nil key:@"HideGroupOtherAvatar" isOn:config.hideGroupOtherAvatar cy:cy width:w];
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    cy = [self addSwitchRowInGroup:group title:@"隐藏自己头像" desc:nil key:@"HideGroupSelfAvatar" isOn:config.hideGroupSelfAvatar cy:cy width:w];

    // 公众号
    cy = [self addSubSectionLabelInGroup:group text:@"公众号" cy:cy width:w];
    cy = [self addSwitchRowInGroup:group title:@"隐藏对方头像" desc:nil key:@"HideOAOtherAvatar" isOn:config.hideOAOtherAvatar cy:cy width:w];
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    cy = [self addSwitchRowInGroup:group title:@"隐藏自己头像" desc:nil key:@"HideOASelfAvatar" isOn:config.hideOASelfAvatar cy:cy width:w];

    y = [self finishGroup:group atY:y height:cy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

@end