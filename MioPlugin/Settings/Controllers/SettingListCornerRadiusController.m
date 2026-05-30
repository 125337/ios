#import "SettingListCornerRadiusController.h"
#import "../../Config/PluginConfig.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"
#import <objc/runtime.h>

@implementation SettingListCornerRadiusController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"列表圆角";
    [self buildUI];
}

#pragma mark - 自定义输入行（支持自定义弹窗标题和描述）

- (CGFloat)addCustomInputRow:(UIView *)group
                       title:(NSString *)title
                         key:(NSString *)key
                       value:(NSString *)value
                        hint:(NSString *)hint
                  alertTitle:(NSString *)alertTitle
                alertMessage:(NSString *)alertMessage
                          cy:(CGFloat)cy
                       width:(CGFloat)w {
    Class handlerClass = objc_getClass("MioPluginSwitchHandler");
    id handler = [handlerClass performSelector:@selector(sharedInstance)];
    NSString *displayValue = (value && value.length > 0) ? value : hint;
    UIButton *row = WPAddEditableRowWithArrow(group, cy, w, title, displayValue, handler);
    objc_setAssociatedObject(row, "editConfigKey", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    if (hint) objc_setAssociatedObject(row, "editConfigHint", hint, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    if (alertTitle) objc_setAssociatedObject(row, "editTitle", alertTitle, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    if (alertMessage) objc_setAssociatedObject(row, "editMessage", alertMessage, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return cy + kRowH;
}

#pragma mark - buildUI

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

        // 搜索圆角
        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"搜索圆角"
                                        key:@"listSearchCornerRadius"
                                       isOn:cfg.listSearchCornerRadius
                                         cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // 隐藏右侧二维码
        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"隐藏右侧二维码"
                                        key:@"listHideRightQRCode"
                                       isOn:cfg.listHideRightQRCode
                                         cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // Cell边框开关
        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"Cell边框开关"
                                        key:@"listCellBorder"
                                       isOn:cfg.listCellBorder
                                         cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // Cell圆角半径
        CGFloat cr = cfg.listCellCornerRadius > 0 ? cfg.listCellCornerRadius : 18.0;
        *ecy = [self addCustomInputRow:expand
                                 title:@"Cell圆角半径"
                                   key:@"listCellCornerRadius"
                                 value:[NSString stringWithFormat:@"%.0f", cr]
                                  hint:@"18"
                            alertTitle:@"设置列表圆角半径"
                          alertMessage:@"请输入圆角半径(5-30像素)"
                                    cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // Cell左右边距
        CGFloat lm = cfg.listCellMargin > 0 ? cfg.listCellMargin : 9.0;
        *ecy = [self addCustomInputRow:expand
                                 title:@"Cell左右边距"
                                   key:@"listCellMargin"
                                 value:[NSString stringWithFormat:@"%.0f", lm]
                                  hint:@"9"
                            alertTitle:@"设置Cell左右边距"
                          alertMessage:@"请输入边距值(1-30像素)"
                                    cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // 置顶会话距顶栏间距
        CGFloat pt = cfg.listPinnedSessionTopSpacing > 0 ? cfg.listPinnedSessionTopSpacing : 15.0;
        *ecy = [self addCustomInputRow:expand
                                 title:@"置顶会话距顶栏间距"
                                   key:@"listPinnedSessionTopSpacing"
                                 value:[NSString stringWithFormat:@"%.0f", pt]
                                  hint:@"15"
                            alertTitle:@"设置置顶会话距顶部间距"
                          alertMessage:@"请输入间距值(1-50像素)"
                                    cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // 普通会话距置顶会话间距
        CGFloat ns = cfg.listNormalSessionSpacing > 0 ? cfg.listNormalSessionSpacing : 15.0;
        *ecy = [self addCustomInputRow:expand
                                 title:@"普通会话距置顶会话间距"
                                   key:@"listNormalSessionSpacing"
                                 value:[NSString stringWithFormat:@"%.0f", ns]
                                  hint:@"15"
                            alertTitle:@"设置普通会话距置顶会话间距"
                          alertMessage:@"请输入间距值(1-50像素)"
                                    cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // Cell浅色模式背景色
        *ecy = [self addColorRowInGroup:expand
                                  title:@"Cell浅色模式背景色"
                                    key:@"listCellLightBgColor"
                                  value:cfg.listCellLightBgColor
                                     cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // Cell深色模式背景色
        *ecy = [self addColorRowInGroup:expand
                                  title:@"Cell深色模式背景色"
                                    key:@"listCellDarkBgColor"
                                  value:cfg.listCellDarkBgColor
                                     cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // 卡片浅色模式背景色
        *ecy = [self addColorRowInGroup:expand
                                  title:@"卡片浅色模式背景色"
                                    key:@"listCardLightBgColor"
                                  value:cfg.listCardLightBgColor
                                     cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // 卡片深色模式背景色
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