#import "SettingListCornerRadiusController.h"
#import "../../Config/PluginConfig.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"
#import "../../Core/LogManager.h"
#import "../../Core/MioRestartHelper.h"
#import "../../Config/WPColors.h"

@implementation SettingListCornerRadiusController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"圆角设置";
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

    // ========== 全局圆角分组 ==========
    y = [self addSectionHeader:@"全局圆角" y:y width:w];

    UIView *globalGroup = [self addTableGroupAtY:y width:w];
    CGFloat gcy = 0;

    gcy = [self addMasterSwitchRowInGroup:globalGroup
                                     title:@"主页圆角"
                                       key:@"globalCornerRadiusEnabled"
                                      isOn:config.globalCornerRadiusEnabled
                                subBuilder:^(UIView *expand, CGFloat *ecy) {
        PluginConfig *cfg = [PluginConfig shared];

        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"我的页面"
                                        key:@"globalCornerMyPageEnabled"
                                       isOn:cfg.globalCornerMyPageEnabled
                                         cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"联系人页面"
                                        key:@"globalCornerContactsPageEnabled"
                                       isOn:cfg.globalCornerContactsPageEnabled
                                         cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"发现页面"
                                        key:@"globalCornerDiscoverPageEnabled"
                                       isOn:cfg.globalCornerDiscoverPageEnabled
                                         cy:*ecy width:w];
    } cy:gcy width:w];

    y = [self finishGroup:globalGroup atY:y height:gcy];

    // ========== 圆角参数分组（平铺） ==========
    y = [self addSectionHeader:@"圆角参数" y:y width:w];

    UIView *paramGroup = [self addTableGroupAtY:y width:w];
    CGFloat pcy = 0;

    PluginConfig *cfg = [PluginConfig shared];

    pcy = [self addSubSwitchRowInGroup:paramGroup
                             title:@"搜索框圆角"
                               key:@"listSearchCornerRadius"
                              isOn:cfg.listSearchCornerRadius
                                cy:pcy width:w];
    pcy = [self addSeparatorInGroup:paramGroup cy:pcy width:w];

    pcy = [self addSubSwitchRowInGroup:paramGroup
                             title:@"Cell边框开关"
                               key:@"listCellBorder"
                              isOn:cfg.listCellBorder
                                cy:pcy width:w];
    pcy = [self addSeparatorInGroup:paramGroup cy:pcy width:w];

    NSString *crStr = cfg.listCellCornerRadius > 0
        ? [NSString stringWithFormat:@"%.0f", cfg.listCellCornerRadius] : nil;
    pcy = [self addInputRowInGroup:paramGroup
                         title:@"Cell圆角半径"
                           key:@"listCellCornerRadius"
                         value:crStr
                          hint:@"18"
                    alertTitle:@"设置列表圆角半径"
                  alertMessage:@"请输入圆角半径(5-30像素)"
                            cy:pcy width:w];
    pcy = [self addSeparatorInGroup:paramGroup cy:pcy width:w];

    NSString *lmStr = cfg.listCellMargin > 0
        ? [NSString stringWithFormat:@"%.0f", cfg.listCellMargin] : nil;
    pcy = [self addInputRowInGroup:paramGroup
                         title:@"Cell左右边距"
                           key:@"listCellMargin"
                         value:lmStr
                          hint:@"9"
                    alertTitle:@"设置Cell左右边距"
                  alertMessage:@"请输入边距值(0-30像素)"
                            cy:pcy width:w];
    pcy = [self addSeparatorInGroup:paramGroup cy:pcy width:w];

    NSString *ptStr = cfg.listPinnedSessionTopSpacing > 0
        ? [NSString stringWithFormat:@"%.0f", cfg.listPinnedSessionTopSpacing] : nil;
    pcy = [self addInputRowInGroup:paramGroup
                         title:@"置顶会话距顶栏间距"
                           key:@"listPinnedSessionTopSpacing"
                         value:ptStr
                          hint:@"15"
                    alertTitle:@"设置置顶会话距顶部间距"
                  alertMessage:@"请输入间距值(1-50像素)"
                            cy:pcy width:w];
    pcy = [self addSeparatorInGroup:paramGroup cy:pcy width:w];

    NSString *nsStr = cfg.listNormalSessionSpacing > 0
        ? [NSString stringWithFormat:@"%.0f", cfg.listNormalSessionSpacing] : nil;
    pcy = [self addInputRowInGroup:paramGroup
                         title:@"普通会话距置顶会话间距"
                           key:@"listNormalSessionSpacing"
                         value:nsStr
                          hint:@"15"
                    alertTitle:@"设置普通会话距置顶会话间距"
                  alertMessage:@"请输入间距值(1-50像素)"
                            cy:pcy width:w];
    pcy = [self addSeparatorInGroup:paramGroup cy:pcy width:w];

    NSString *bwStr = cfg.listCellBorderWidth > 0
        ? [NSString stringWithFormat:@"%.1f", cfg.listCellBorderWidth] : nil;
    pcy = [self addInputRowInGroup:paramGroup
                         title:@"边框宽度"
                           key:@"listCellBorderWidth"
                         value:bwStr
                          hint:@"2.0"
                    alertTitle:@"设置边框宽度"
                  alertMessage:@"请输入边框宽度(0.5-5.0)"
                            cy:pcy width:w];
    pcy = [self addSeparatorInGroup:paramGroup cy:pcy width:w];

    // Cell 背景色（浅色+深色双预览）
    pcy = [self addColorRowInGroup:paramGroup
                             title:@"Cell背景色"
                               key:@"listCellLightBgColor"
                             value:cfg.listCellLightBgColor
                                cy:pcy width:w
                          darkKey:@"listCellDarkBgColor"
                        darkValue:cfg.listCellDarkBgColor];
    pcy = [self addSeparatorInGroup:paramGroup cy:pcy width:w];

    pcy = [self addColorRowInGroup:paramGroup title:@"边框颜色" key:@"listCellBorderColor" value:cfg.listCellBorderColor cy:pcy width:w darkKey:@"listCellBorderColorDarkHex" darkValue:cfg.listCellBorderColorDarkHex];
    pcy = [self addSeparatorInGroup:paramGroup cy:pcy width:w];

    pcy = [self addColorRowInGroup:paramGroup title:@"卡片背景色" key:@"listCardBgColor" value:cfg.listCardBgColor cy:pcy width:w darkKey:@"listCardBgColorDarkHex" darkValue:cfg.listCardBgColorDarkHex];
    pcy = [self addSeparatorInGroup:paramGroup cy:pcy width:w];

    pcy = [self addSubSwitchRowInGroup:paramGroup
                             title:@"资料卡边框"
                               key:@"listProfileCardBorderEnabled"
                              isOn:cfg.listProfileCardBorderEnabled
                                cy:pcy width:w];
    pcy = [self addSeparatorInGroup:paramGroup cy:pcy width:w];

    NSString *pcbwStr = cfg.listProfileCardBorderWidth > 0
        ? [NSString stringWithFormat:@"%.1f", cfg.listProfileCardBorderWidth] : nil;
    pcy = [self addInputRowInGroup:paramGroup
                         title:@"资料卡边框宽度"
                           key:@"listProfileCardBorderWidth"
                         value:pcbwStr
                          hint:@"2.0"
                    alertTitle:@"设置资料卡边框宽度"
                  alertMessage:@"请输入边框宽度(0.5-5.0)"
                            cy:pcy width:w];
    pcy = [self addSeparatorInGroup:paramGroup cy:pcy width:w];

    pcy = [self addColorRowInGroup:paramGroup
                         title:@"资料卡边框颜色"
                           key:@"listProfileCardBorderColor"
                         value:cfg.listProfileCardBorderColor
                            cy:pcy width:w
                      darkKey:@"listProfileCardBorderColorDarkHex"
                    darkValue:cfg.listProfileCardBorderColorDarkHex];

    y = [self finishGroup:paramGroup atY:y height:pcy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
    WPLog(@"UI", @"[Sub] SettingListCornerRadiusController buildUI done");
}

- (void)switchChanged:(UISwitch *)sender {
    [super switchChanged:sender];

    NSString *key = objc_getAssociatedObject(sender, "key");
    if (!key) return;

    if ([key isEqualToString:@"globalCornerRadiusEnabled"]
        || [key isEqualToString:@"globalCornerMyPageEnabled"]
        || [key isEqualToString:@"globalCornerContactsPageEnabled"]
        || [key isEqualToString:@"globalCornerDiscoverPageEnabled"]
        || [key isEqualToString:@"listSearchCornerRadius"]
        || [key isEqualToString:@"listCellBorder"]
        || [key isEqualToString:@"listProfileCardBorderEnabled"]) {
        [MioRestartHelper showRestartAlertFromVC:self];
    }
}

@end
