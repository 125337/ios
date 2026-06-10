#import "../../Settings/Common/SettingCategoryController.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"

@interface WPUIPurifyVC : SettingCategoryController
@end

@implementation WPUIPurifyVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"界面净化";
    [self buildUI];
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }

    UIPurifyConfig *config = [UIPurifyConfig shared];
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    y = [self addSectionHeader:@"消息显示" y:y width:w];

    UIView *msgGroup = [self addTableGroupAtY:y width:w];
    CGFloat mcy = 0;
    NSArray *msgItems = @[
        @[@"隐藏水平分割线", @"hideSeparatorLine", @(config.hideSeparatorLine)],
        @[@"隐藏撤回消息提示", @"hideRevokeHint", @(config.hideRevokeHint)],
        @[@"隐藏拍一拍提示", @"hidePatHint", @(config.hidePatHint)],
        @[@"隐藏语音红点和转文字", @"hideVoiceRedDot", @(config.hideVoiceRedDot)],
    ];
    for (NSUInteger i = 0; i < msgItems.count; i++) {
        if (i > 0) mcy = [self addSeparatorInGroup:msgGroup cy:mcy width:w];
        mcy = [self addSwitchRowInGroup:msgGroup title:msgItems[i][0] desc:nil
                                    key:msgItems[i][1] isOn:[msgItems[i][2] boolValue]
                                    cy:mcy width:w];
    }
    y = [self finishGroup:msgGroup atY:y height:mcy];

    y = [self addSectionHeader:@"气泡与输入" y:y width:w];

    UIView *bubbleGroup = [self addTableGroupAtY:y width:w];
    CGFloat bcy = 0;
    bcy = [self addSwitchRowInGroup:bubbleGroup title:@"隐藏聊天气泡背景" desc:nil
                                key:@"hideBubbleBackground" isOn:config.hideBubbleBackground
                                cy:bcy width:w];
    bcy = [self addSeparatorInGroup:bubbleGroup cy:bcy width:w];
    bcy = [self addSwitchRowInGroup:bubbleGroup title:@"禁用输入框听写" desc:nil
                                key:@"disableDictation" isOn:config.disableDictation
                                cy:bcy width:w];
    y = [self finishGroup:bubbleGroup atY:y height:bcy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
    WPLog(@"UI", @"[Sub] WPUIPurifyVC buildUI done");
}

@end