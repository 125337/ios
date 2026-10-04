#import "SideGroupsVC.h"
#import "SideGroupsConfig.h"
#import "SideGroupsActions.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/MioAlertHelper.h"

@implementation SideGroupsVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"首页侧边分组";
    [self buildUI];
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    SideGroupsConfig *config = [SideGroupsConfig shared];
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    // ──── 卡片1：总开关 ────
    y = [self addSectionHeader:@"总开关" y:y width:w];
    UIView *g1 = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;
    cy = [self addSwitchRowInGroup:g1
                             title:@"启动首页侧边分组"
                              desc:nil
                               key:@"sdEnabled"
                              isOn:config.sdEnabled
                                cy:cy
                             width:w];
    y = [self finishGroup:g1 atY:y height:cy];

    // ──── 卡片2：显示位置与外观（XOS XZYCLG 分组显示位置四值） ────
    y = [self addSectionHeader:@"显示位置与外观" y:y width:w];
    UIView *g2 = [self addTableGroupAtY:y width:w];
    cy = 0;

    // 分组显示位置（底部弹出菜单选择，当前项标 ✓，选完刷新行右值）
    cy = [self addNavRowInGroup:g2
                          title:@"分组显示位置"
                       subtitle:[self positionName:config.sdPosition]
                            tag:0
                         action:@selector(positionRowTapped:)
                             cy:cy
                          width:w];

    // 侧栏宽度（XOS rail 宽 54/48）
    cy = [self addInputRowInGroup:g2
                            title:@"侧栏宽度"
                              key:@"sdRailWidth"
                            value:[self numText:config.sdRailWidth]
                             hint:@"54"
                        valueType:InputValueTypeNumber
                       alertTitle:@"侧栏宽度"
                     alertMessage:@"侧边栏宽度，数值(40-90)"
                               cy:cy
                            width:w];

    // 按钮字号
    cy = [self addInputRowInGroup:g2
                            title:@"按钮字号"
                              key:@"sdRailFontSize"
                            value:[self numText:config.sdRailFontSize]
                             hint:@"12"
                        valueType:InputValueTypeNumber
                       alertTitle:@"按钮字号"
                     alertMessage:@"分组按钮文字大小，数值(9-20)"
                               cy:cy
                            width:w];

    // X 微调（XOS applySideRailLeftXOffset:rightXOffset:）
    cy = [self addInputRowInGroup:g2
                            title:@"X 微调"
                              key:@"sdRailXOffset"
                            value:[self numText:config.sdRailXOffset]
                             hint:@"0"
                        valueType:InputValueTypeNumber
                       alertTitle:@"X 微调"
                     alertMessage:@"侧边栏水平偏移，可为负，数值(-30~30)"
                               cy:cy
                            width:w];

    // 显示未读角标
    cy = [self addSwitchRowInGroup:g2
                             title:@"显示未读角标"
                              desc:nil
                               key:@"sdShowUnreadBadge"
                              isOn:config.sdShowUnreadBadge
                                cy:cy
                             width:w];

    y = [self finishGroup:g2 atY:y height:cy];

    // ──── 卡片3：外观颜色（容器背景不设色，透出微信原生底色）────
    y = [self addSectionHeader:@"外观颜色" y:y width:w];
    UIView *g3 = [self addTableGroupAtY:y width:w];
    cy = 0;

    cy = [self addMasterSwitchRowInGroup:g3
                                   title:@"自定义选中颜色"
                                     key:@"sdRailSelColorCustom"
                                    isOn:config.sdRailSelColorCustom
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addColorRowInGroup:expand
                                  title:@"选中颜色"
                                    key:@"sdRailSelColor"
                                  value:config.sdRailSelColor ?: @""
                                     cy:*ecy
                                  width:w
                                darkKey:@"sdRailSelColorDark"
                              darkValue:config.sdRailSelColorDark ?: @""];
    } cy:cy width:w];

    cy = [self addMasterSwitchRowInGroup:g3
                                   title:@"自定义文本颜色"
                                     key:@"sdRailTextColorCustom"
                                    isOn:config.sdRailTextColorCustom
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addColorRowInGroup:expand
                                  title:@"文本颜色"
                                    key:@"sdRailTextColor"
                                  value:config.sdRailTextColor ?: @""
                                     cy:*ecy
                                  width:w
                                darkKey:@"sdRailTextColorDark"
                              darkValue:config.sdRailTextColorDark ?: @""];
    } cy:cy width:w];

    y = [self finishGroup:g3 atY:y height:cy];

    // ──── 卡片4：分组管理（子页面入口，弹侧边分组自己的管理页） ────
    y = [self addSectionHeader:@"分组管理" y:y width:w];
    UIView *g4 = [self addTableGroupAtY:y width:w];
    cy = 0;
    cy = [self addNavRowInGroup:g4
                          title:@"分组管理"
                       subtitle:nil
                            tag:0
                         action:@selector(openGroupManager)
                             cy:cy
                          width:w];
    y = [self finishGroup:g4 atY:y height:cy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

#pragma mark - 分组显示位置（底部弹出菜单，WCActionSheet 形态）

+ (NSArray<NSString *> *)positionNames {
    return @[@"右侧", @"左侧", @"左侧+列表内", @"右侧+列表内"];
}

- (NSString *)positionName:(NSInteger)idx {
    NSArray<NSString *> *names = [SideGroupsVC positionNames];
    if (idx < 0 || idx >= (NSInteger)names.count) return names[0];
    return names[idx];
}

- (void)positionRowTapped:(UIButton *)sender {
    NSArray<NSString *> *names = [SideGroupsVC positionNames];
    NSInteger cur = [SideGroupsConfig shared].sdPosition;
    NSMutableArray<NSString *> *titles = [NSMutableArray array];
    for (NSInteger i = 0; i < (NSInteger)names.count; i++) {
        [titles addObject:(i == cur) ? [names[i] stringByAppendingString:@" ✓"] : names[i]];
    }
    [MioAlertHelper showMenuAlert:@"分组显示位置"
                          buttons:titles
                         onButton:^(NSInteger index) {
        if (index < 0 || index >= (NSInteger)names.count || index == cur) return;
        @try {
            [ConfigManager setValue:@(index) forKey:@"sdPosition"];
            [ConfigManager saveAll];
        } @catch (NSException *e) {
            return;
        }
        [self wpRebuildWeChatTable];
        [self buildUI];
    }];
}

- (void)openGroupManager {
    [SideGroupsActions openGroupManager];
}

- (NSString *)numText:(CGFloat)v {
    return (v == floor(v)) ? [NSString stringWithFormat:@"%ld", (long)v]
                           : [NSString stringWithFormat:@"%.1f", v];
}

@end
