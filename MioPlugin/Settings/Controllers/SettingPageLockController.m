#import "SettingPageLockController.h"
#import "../../Modules/Privacy/PrivacyConfig.h"
#import "../../Core/LogManager.h"

@implementation SettingPageLockController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"指定页面上锁";
    self.categoryName = @"指定页面上锁";
    [self buildUI];
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }

    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;
    PrivacyConfig *cfg = [PrivacyConfig shared];

    // ── 卡片：解锁设置 ──
    y = [self addSectionHeader:@"解锁设置" y:y width:w];
    UIView *unlockGroup = [self addTableGroupAtY:y width:w];
    CGFloat ucy = 0;
    NSString *timeVal = cfg.privacyPageLockUnlockTime > 0
        ? [NSString stringWithFormat:@"%ld", (long)cfg.privacyPageLockUnlockTime] : nil;
    ucy = [self addInputRowInGroup:unlockGroup
                             title:@"解锁时间保护"
                               key:@"privacyPageLockUnlockTime"
                             value:timeVal
                              hint:@"15"
                         valueType:InputValueTypeNumber
                        alertTitle:@"指定页面保护时间"
                      alertMessage:@"请输入保护时间(0-600秒)\n解锁成功后，该页面内再次进入同一受保护页面不再验证"
                                cy:ucy
                              width:w];
    y = [self finishGroup:unlockGroup atY:y height:ucy];
    y += 8;

    // ── 卡片：指定页面上锁（8 项开关） ──
    y = [self addSectionHeader:@"指定页面上锁" y:y width:w];
    UIView *lockGroup = [self addTableGroupAtY:y width:w];
    CGFloat lcy = 0;

    lcy = [self addSwitchRowInGroup:lockGroup
                              title:@"我支付页面上锁"
                               desc:nil
                                key:@"privacyLockMyPayEnabled"
                               isOn:cfg.privacyLockMyPayEnabled
                                 cy:lcy
                              width:w];
    lcy = [self addSeparatorInGroup:lockGroup cy:lcy width:w];

    lcy = [self addSwitchRowInGroup:lockGroup
                              title:@"我收藏页面上锁"
                               desc:nil
                                key:@"privacyLockMyFavoriteEnabled"
                               isOn:cfg.privacyLockMyFavoriteEnabled
                                 cy:lcy
                              width:w];
    lcy = [self addSeparatorInGroup:lockGroup cy:lcy width:w];

    lcy = [self addSwitchRowInGroup:lockGroup
                              title:@"我朋友圈页上锁"
                               desc:nil
                                key:@"privacyLockMyMomentEnabled"
                               isOn:cfg.privacyLockMyMomentEnabled
                                 cy:lcy
                              width:w];
    lcy = [self addSeparatorInGroup:lockGroup cy:lcy width:w];

    lcy = [self addSwitchRowInGroup:lockGroup
                              title:@"我视频号页上锁"
                               desc:nil
                                key:@"privacyLockMyChannelsEnabled"
                               isOn:cfg.privacyLockMyChannelsEnabled
                                 cy:lcy
                              width:w];
    lcy = [self addSeparatorInGroup:lockGroup cy:lcy width:w];

    lcy = [self addSwitchRowInGroup:lockGroup
                              title:@"我插件页面上锁"
                               desc:nil
                                key:@"privacyLockMyPluginEnabled"
                               isOn:cfg.privacyLockMyPluginEnabled
                                 cy:lcy
                              width:w];
    lcy = [self addSeparatorInGroup:lockGroup cy:lcy width:w];

    lcy = [self addSwitchRowInGroup:lockGroup
                              title:@"我设置页面上锁"
                               desc:nil
                                key:@"privacyLockMySettingEnabled"
                               isOn:cfg.privacyLockMySettingEnabled
                                 cy:lcy
                              width:w];
    lcy = [self addSeparatorInGroup:lockGroup cy:lcy width:w];

    lcy = [self addSwitchRowInGroup:lockGroup
                              title:@"朋友圈页面上锁"
                               desc:nil
                                key:@"privacyLockMomentEnabled"
                               isOn:cfg.privacyLockMomentEnabled
                                 cy:lcy
                              width:w];
    lcy = [self addSeparatorInGroup:lockGroup cy:lcy width:w];

    lcy = [self addSwitchRowInGroup:lockGroup
                              title:@"视频号页面上锁"
                               desc:nil
                                key:@"privacyLockChannelsEnabled"
                               isOn:cfg.privacyLockChannelsEnabled
                                 cy:lcy
                              width:w];

    y = [self finishGroup:lockGroup atY:y height:lcy];

    y = [self addSectionFooter:@"开启后，进入对应页面需要先解锁。\n解锁时间保护：解锁成功后的保护时间内，再次进入同一受保护页面不再验证。"
                             y:y + 4
                          width:w];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

@end
