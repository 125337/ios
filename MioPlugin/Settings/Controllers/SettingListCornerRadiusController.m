#import "SettingListCornerRadiusController.h"
#import "../../Modules/ListCornerRadius/ListCornerRadiusConfig.h"
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

    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    // ════════════════════════════════════
    // ★ 全局圆角
    // ════════════════════════════════════
    y = [self addSectionHeader:@"全局圆角" y:y width:w];

    // ─── 卡片1：主页圆角（手风琴） ───
    UIView *globalGroup = [self addTableGroupAtY:y width:w];
    CGFloat gcy = 0;

    gcy = [self addMasterSwitchRowInGroup:globalGroup
                                     title:@"主页圆角"
                                       key:@"globalCornerRadiusEnabled"
                                      isOn:config.globalCornerRadiusEnabled
                                subBuilder:^(UIView *expand, CGFloat *ecy) {
        ListCornerRadiusConfig *cfg = [ListCornerRadiusConfig shared];

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
    y += 8;

    // ─── 卡片2：搜索框圆角（普通开关） ───
    UIView *searchGroup = [self addTableGroupAtY:y width:w];
    CGFloat scy = 0;

    scy = [self addSubSwitchRowInGroup:searchGroup
                                 title:@"搜索框圆角"
                                   key:@"listSearchCornerRadius"
                                  isOn:config.listSearchCornerRadius
                                    cy:scy width:w];

    y = [self finishGroup:searchGroup atY:y height:scy];
    y += 8;

    // ─── 卡片3：Cell 边框（手风琴） ───
    UIView *borderGroup = [self addTableGroupAtY:y width:w];
    CGFloat bocy = 0;

    bocy = [self addMasterSwitchRowInGroup:borderGroup
                                     title:@"Cell 边框"
                                       key:@"listCellBorder"
                                      isOn:config.listCellBorder
                                subBuilder:^(UIView *expand, CGFloat *ecy) {
        ListCornerRadiusConfig *c3 = [ListCornerRadiusConfig shared];

        // 边框宽度
        NSString *bwStr = c3.listCellBorderWidth > 0
            ? [NSString stringWithFormat:@"%.1f", c3.listCellBorderWidth] : nil;
        *ecy = [self addInputRowInGroup:expand
                                  title:@"边框宽度"
                                    key:@"listCellBorderWidth"
                                  value:bwStr
                                   hint:@"2.0"
                              valueType:InputValueTypeNumber
                             alertTitle:@"设置边框宽度"
                           alertMessage:@"请输入边框宽度(0.5-5.0)"
                                     cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // 边框颜色（支持深色）
        *ecy = [self addColorRowInGroup:expand
                                  title:@"边框颜色"
                                    key:@"listCellBorderColor"
                                  value:c3.listCellBorderColor
                                     cy:*ecy width:w
                               darkKey:@"listCellBorderColorDarkHex"
                             darkValue:c3.listCellBorderColorDarkHex];

    } cy:bocy width:w];

    y = [self finishGroup:borderGroup atY:y height:bocy];
    y += 8;

    // ─── 卡片4：Cell 外观（平铺，无主开关） ───
    UIView *appearGroup = [self addTableGroupAtY:y width:w];
    CGFloat acy = 0;

    ListCornerRadiusConfig *c4 = [ListCornerRadiusConfig shared];

    NSString *crStr = c4.listCellCornerRadius > 0
        ? [NSString stringWithFormat:@"%.0f", c4.listCellCornerRadius] : nil;
    acy = [self addInputRowInGroup:appearGroup
                             title:@"Cell圆角半径"
                               key:@"listCellCornerRadius"
                             value:crStr
                              hint:@"18"
                         valueType:InputValueTypeNumber
                        alertTitle:@"设置列表圆角半径"
                      alertMessage:@"请输入圆角半径(5-30像素)"
                                cy:acy width:w];
    acy = [self addSeparatorInGroup:appearGroup cy:acy width:w];

    NSString *lmStr = c4.listCellMargin > 0
        ? [NSString stringWithFormat:@"%.0f", c4.listCellMargin] : nil;
    acy = [self addInputRowInGroup:appearGroup
                             title:@"Cell左右边距"
                               key:@"listCellMargin"
                             value:lmStr
                              hint:@"9"
                         valueType:InputValueTypeNumber
                        alertTitle:@"设置Cell左右边距"
                      alertMessage:@"请输入边距值(0-30像素)"
                                cy:acy width:w];
    acy = [self addSeparatorInGroup:appearGroup cy:acy width:w];

    // Cell 背景色（浅色+深色双预览）
    acy = [self addColorRowInGroup:appearGroup
                             title:@"Cell背景色"
                               key:@"listCellLightBgColor"
                             value:c4.listCellLightBgColor
                                cy:acy width:w
                          darkKey:@"listCellDarkBgColor"
                        darkValue:c4.listCellDarkBgColor];

    y = [self finishGroup:appearGroup atY:y height:acy];
    y += 8;

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
    WPLog(@"UI", @"[Sub] SettingListCornerRadiusController buildUI done");
}

- (void)switchChanged:(UISwitch *)sender {
    [super switchChanged:sender];

    NSString *key = objc_getAssociatedObject(sender, "key");
    if (!key) return;

    // ★ 需要重启的开关（值变化后需重启微信才能生效）
    if ([key isEqualToString:@"globalCornerRadiusEnabled"]
        || [key isEqualToString:@"globalCornerMyPageEnabled"]
        || [key isEqualToString:@"globalCornerContactsPageEnabled"]
        || [key isEqualToString:@"globalCornerDiscoverPageEnabled"]
        || [key isEqualToString:@"listSearchCornerRadius"]) {
        [MioRestartHelper showRestartAlertFromVC:self];
        return;
    }

    // ★ 主开关手风琴（需要 rebuild 展开/折叠子项 + 重启生效）
    if ([key isEqualToString:@"listCellBorder"]) {
        [self buildUI];
        [MioRestartHelper showRestartAlertFromVC:self];
        return;
    }
}

@end
