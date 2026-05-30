#import "../../Settings/Common/SettingCategoryController.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"

@interface WPOtherVC : SettingCategoryController
@end

@implementation WPOtherVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"其他功能";
    [self buildUI];
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }

    PluginConfig *config = [PluginConfig shared];
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    y = [self addSectionHeader:@"消息" y:y width:w];

    UIView *msgGroup = [self addTableGroupAtY:y width:w];
    CGFloat mcy = 0;
    mcy = [self addSwitchRowInGroup:msgGroup title:@"一键已读" desc:nil
                                key:@"clearUnreadEnabled" isOn:config.clearUnreadEnabled
                                cy:mcy width:w];
    y = [self finishGroup:msgGroup atY:y height:mcy];

    y = [self addSectionHeader:@"其他" y:y width:w];

    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;
    cy = [self addSwitchRowInGroup:group title:@"调试日志" desc:nil
                               key:@"debugLogging" isOn:config.debugLogging
                               cy:cy width:w];
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    cy = [self addSwitchRowInGroup:group title:@"隐藏内容" desc:nil
                               key:@"hideContent" isOn:config.hideContent
                               cy:cy width:w];
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    cy = [self addSwitchRowInGroup:group title:@"免提示" desc:nil
                               key:@"noTip" isOn:config.noTip
                               cy:cy width:w];
    y = [self finishGroup:group atY:y height:cy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
    WPLog(@"UI", @"[Sub] WPOtherVC buildUI done");
}

@end