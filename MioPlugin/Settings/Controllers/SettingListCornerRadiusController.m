#import "SettingListCornerRadiusController.h"
#import "../../Config/PluginConfig.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"

@implementation SettingListCornerRadiusController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"列表圆角";
    [self buildUI];
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    PluginConfig *config = [PluginConfig shared];
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    y = [self addSectionHeader:@"列表圆角设置" y:y width:w];

    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addMasterSwitchRowInGroup:group
                                   title:@"圆角开关"
                                     key:@"listCornerRadiusEnabled"
                                    isOn:config.listCornerRadiusEnabled
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        PluginConfig *cfg = [PluginConfig shared];

        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"搜索圆角"
                                        key:@"listSearchCornerRadius"
                                       isOn:cfg.listSearchCornerRadius
                                         cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"隐藏右侧二维码"
                                        key:@"listHideRightQRCode"
                                       isOn:cfg.listHideRightQRCode
                                         cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"Cell边框开关"
                                        key:@"listCellBorder"
                                       isOn:cfg.listCellBorder
                                         cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        CGFloat cr = cfg.listCellCornerRadius > 0 ? cfg.listCellCornerRadius : 18.0;
        *ecy = [self addInputRowInGroup:expand
                                  title:@"Cell圆角半径"
                                    key:@"listCellCornerRadius"
                                  value:[NSString stringWithFormat:@"%.0f", cr]
                                   hint:@"18"
                                     cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        CGFloat lm = cfg.listCellMargin > 0 ? cfg.listCellMargin : 9.0;
        *ecy = [self addInputRowInGroup:expand
                                  title:@"Cell左右边距"
                                    key:@"listCellMargin"
                                  value:[NSString stringWithFormat:@"%.0f", lm]
                                   hint:@"9"
                                     cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        CGFloat pt = cfg.listPinnedSessionTopSpacing > 0 ? cfg.listPinnedSessionTopSpacing : 15.0;
        *ecy = [self addInputRowInGroup:expand
                                  title:@"置顶会话距顶栏间距"
                                    key:@"listPinnedSessionTopSpacing"
                                  value:[NSString stringWithFormat:@"%.0f", pt]
                                   hint:@"15"
                                     cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        CGFloat ns = cfg.listNormalSessionSpacing > 0 ? cfg.listNormalSessionSpacing : 15.0;
        *ecy = [self addInputRowInGroup:expand
                                  title:@"普通会话距置顶会话间距"
                                    key:@"listNormalSessionSpacing"
                                  value:[NSString stringWithFormat:@"%.0f", ns]
                                   hint:@"15"
                                     cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        *ecy = [self addColorRowInGroup:expand
                                  title:@"Cell浅色模式背景色"
                                    key:@"listCellLightBgColor"
                                  value:cfg.listCellLightBgColor
                                     cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        *ecy = [self addColorRowInGroup:expand
                                  title:@"Cell深色模式背景色"
                                    key:@"listCellDarkBgColor"
                                  value:cfg.listCellDarkBgColor
                                     cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        *ecy = [self addColorRowInGroup:expand
                                  title:@"卡片浅色模式背景色"
                                    key:@"listCardLightBgColor"
                                  value:cfg.listCardLightBgColor
                                     cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        *ecy = [self addColorRowInGroup:expand
                                  title:@"卡片深色模式背景色"
                                    key:@"listCardDarkBgColor"
                                  value:cfg.listCardDarkBgColor
                                     cy:*ecy width:w];
    } cy:cy width:w];

    y = [self finishGroup:group atY:y height:cy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

@end
