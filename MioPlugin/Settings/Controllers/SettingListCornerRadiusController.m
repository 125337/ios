#import "SettingListCornerRadiusController.h"
#import "../../Config/PluginConfig.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"
#import "../../Core/LogManager.h"
#import "../../Config/WPColors.h"

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

        NSString *crStr = cfg.listCellCornerRadius > 0
            ? [NSString stringWithFormat:@"%.0f", cfg.listCellCornerRadius] : nil;
        *ecy = [self addInputRowInGroup:expand
                                   title:@"Cell圆角半径"
                                     key:@"listCellCornerRadius"
                                   value:crStr
                                    hint:@"18"
                              alertTitle:@"设置列表圆角半径"
                            alertMessage:@"请输入圆角半径(5-30像素)"
                                      cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        NSString *lmStr = cfg.listCellMargin > 0
            ? [NSString stringWithFormat:@"%.0f", cfg.listCellMargin] : nil;
        *ecy = [self addInputRowInGroup:expand
                                   title:@"Cell左右边距"
                                     key:@"listCellMargin"
                                   value:lmStr
                                    hint:@"9"
                              alertTitle:@"设置Cell左右边距"
                            alertMessage:@"请输入边距值(1-30像素)"
                                      cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        NSString *ptStr = cfg.listPinnedSessionTopSpacing > 0
            ? [NSString stringWithFormat:@"%.0f", cfg.listPinnedSessionTopSpacing] : nil;
        *ecy = [self addInputRowInGroup:expand
                                   title:@"置顶会话距顶栏间距"
                                     key:@"listPinnedSessionTopSpacing"
                                   value:ptStr
                                    hint:@"15"
                              alertTitle:@"设置置顶会话距顶部间距"
                            alertMessage:@"请输入间距值(1-50像素)"
                                      cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        NSString *nsStr = cfg.listNormalSessionSpacing > 0
            ? [NSString stringWithFormat:@"%.0f", cfg.listNormalSessionSpacing] : nil;
        *ecy = [self addInputRowInGroup:expand
                                   title:@"普通会话距置顶会话间距"
                                     key:@"listNormalSessionSpacing"
                                   value:nsStr
                                    hint:@"15"
                              alertTitle:@"设置普通会话距置顶会话间距"
                            alertMessage:@"请输入间距值(1-50像素)"
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

    if (!config.listCornerRadiusEnabled) {
        UILabel *hint = [[UILabel alloc] initWithFrame:CGRectMake(16, y, w - 32, 16)];
        hint.text = @"开启后可自定义微信列表圆角及间距样式";
        hint.font = [UIFont systemFontOfSize:12];
        hint.textColor = WPTextTertiaryColor();
        [self.contentView addSubview:hint];
        y += 20;
    }

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
    WPLog(@"UI", @"[Sub] SettingListCornerRadiusController buildUI done");
}

@end
