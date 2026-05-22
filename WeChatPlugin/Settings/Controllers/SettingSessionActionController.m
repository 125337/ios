#import "SettingSessionActionController.h"
#import <objc/runtime.h>
#import "../../Core/LogManager.h"

@implementation SettingSessionActionController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"会话增强";
    WPLog(@"Setting", @"[SettingSessionAction] viewDidLoad");
    [self buildUI];
}

- (void)buildUI {
    WPLog(@"Setting", @"[SettingSessionAction] buildUI START");
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    [self.inputFields removeAllObjects];

    PluginConfig *config = [PluginConfig shared];
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    UIView *chatBoxGroup = [self addTableGroupAtY:y width:w];
    CGFloat chatBoxY = 0;

    chatBoxY = [self addMasterSwitchRowInGroup:chatBoxGroup
                                          title:@"会话盒子"
                                            key:@"AddChatBoxEnabled"
                                           isOn:config.addChatBoxEnabled
                                     subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addSwitchRowInGroup:expand title:@"会话盒子置顶" desc:@"会话盒子显示在列表顶部" key:@"ChatBoxTopEnabled" isOn:config.chatBoxTopEnabled cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSwitchRowInGroup:expand title:@"管理会话盒子" desc:@"可添加/移除会话盒子中的会话" key:@"ManagerChatBoxEnabled" isOn:config.managerChatBoxEnabled cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSwitchRowInGroup:expand title:@"会话手势操作" desc:@"长按会话弹出操作菜单" key:@"SessionGestureEnabled" isOn:config.sessionGestureEnabled cy:*ecy width:w];
    } cy:chatBoxY width:w];

    y = [self finishGroup:chatBoxGroup atY:y height:chatBoxY];
    WPLog(@"Setting", @"[SettingSessionAction] chatBoxGroup built, y=%.1f", y);

    UIView *pinGroup = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addMasterSwitchRowInGroup:pinGroup
                                    title:@"快速置顶"
                                      key:@"QuickPinEnabled"
                                     isOn:config.quickPinEnabled
                               subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addSwitchRowInGroup:expand title:@"置顶折叠" desc:@"折叠显示置顶会话" key:@"FoldTopSessionEnabled" isOn:config.foldTopSessionEnabled cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSwitchRowInGroup:expand title:@"品牌号置顶" desc:@"支持品牌号会话置顶" key:@"BrandTopEnabled" isOn:config.brandTopEnabled cy:*ecy width:w];
    } cy:cy width:w];

    y = [self finishGroup:pinGroup atY:y height:cy];
    WPLog(@"Setting", @"[SettingSessionAction] pinGroup built, y=%.1f", y);

    UIView *remarkGroup = [self addTableGroupAtY:y width:w];
    CGFloat remarkY = 0;

    remarkY = [self addSwitchRowInGroup:remarkGroup
                                   title:@"快速备注"
                                    desc:@"长按会话可快速修改备注"
                                     key:@"QuickRemarkEnabled"
                                    isOn:config.quickRemarkEnabled
                                      cy:remarkY
                                   width:w];

    y = [self finishGroup:remarkGroup atY:y height:remarkY];
    WPLog(@"Setting", @"[SettingSessionAction] remarkGroup built, y=%.1f", y);

    UIView *muteGroup = [self addTableGroupAtY:y width:w];
    CGFloat muteY = 0;

    muteY = [self addMasterSwitchRowInGroup:muteGroup
                                      title:@"免打扰"
                                       key:@"QuickMuteEnabled"
                                      isOn:config.quickMuteEnabled
                                subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addSwitchRowInGroup:expand title:@"菜单添加免打扰" desc:@"在长按菜单中添加免打扰选项" key:@"AddMuteMenuItemEnabled" isOn:config.addMuteMenuItemEnabled cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"自动回复" key:@"MuteAutoReplyMsg" value:config.muteAutoReplyMsg hint:@"留空则不自动回复" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"工作时间" key:@"MuteWorkingTime" value:config.muteWorkingTime hint:@"如 09:00-18:00" cy:*ecy width:w];
    } cy:muteY width:w];

    y = [self finishGroup:muteGroup atY:y height:muteY];
    WPLog(@"Setting", @"[SettingSessionAction] muteGroup built, y=%.1f", y);

    y = [self addSectionFooter:@"长按会话列表中的会话即可使用以上功能" y:y width:w];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
    WPLog(@"Setting", @"[SettingSessionAction] buildUI COMPLETE, contentHeight=%.1f", y + 40);
}

- (void)switchChanged:(UISwitch *)sender {
    NSString *key = objc_getAssociatedObject(sender, "key");
    WPLog(@"Setting", @"[SettingSessionAction] switchChanged: key=%@, isOn=%d", key, sender.on);
    [super switchChanged:sender];
}

- (void)autoSaveTextField:(UITextField *)tf {
    NSString *key = objc_getAssociatedObject(tf, "key");
    if (!key) return;
    NSString *value = tf.text.length > 0 ? tf.text : nil;
    WPLog(@"Setting", @"[SettingSessionAction] autoSaveTextField: key=%@, value='%@'", key, value);
    PluginConfig *config = [PluginConfig shared];
    @try {
        if ([key isEqualToString:@"MuteAutoReplyMsg"]) {
            config.muteAutoReplyMsg = value ?: @"";
        }
        else if ([key isEqualToString:@"MuteWorkingTime"]) {
            config.muteWorkingTime = value ?: @"";
        }
    } @catch (NSException *e) {
        WPLog(@"Setting", @"[SettingSessionAction] ✗ autoSaveTextField exception: %@", e.reason);
        return;
    }
    [config save];
}

@end
