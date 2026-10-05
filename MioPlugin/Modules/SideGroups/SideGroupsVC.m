#import "SideGroupsVC.h"
#import "SideGroupsConfig.h"
#import "SideGroupsManagerVC.h"
#import "../SessionGroups/SessionGroupsConfig.h"
#import "../SettingEntry/WPCommonUI.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/MioAlertHelper.h"

@implementation SideGroupsVC

// 互斥拦截（分组数据独立后电报/侧边不可同开）：开侧边时电报已开 → 提示并拒绝写入，
// 重建页面回弹开关（基类 wpHandleSwitchKey 为写前无拦截钩子，此处覆盖实现写前检查）
- (void)wpHandleSwitchKey:(NSString *)key row:(id)row on:(BOOL)on haveOn:(BOOL)haveOn {
    if ([key isEqualToString:@"sdEnabled"] && on && [SessionGroupsConfig shared].sgEnabled) {
        WPShowToast(@"与电报分组互斥，请先关闭电报分组");
        [self wpRebuildWeChatTable];
        [self buildUI];
        return;
    }
    [super wpHandleSwitchKey:key row:row on:on haveOn:haveOn];
}

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

    // 自定义按钮字号（master switch，对齐电报「自定义标题字号」：关 → 跟随微信字体大小）
    cy = [self addMasterSwitchRowInGroup:g2
                                   title:@"自定义按钮字号"
                                     key:@"sdFontCustom"
                                    isOn:config.sdFontCustom
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addInputRowInGroup:expand
                                  title:@"按钮字号"
                                    key:@"sdRailFontSize"
                                  value:[self numText:config.sdRailFontSize]
                                   hint:@"12"
                              valueType:InputValueTypeNumber
                             alertTitle:@"按钮字号"
                           alertMessage:@"rail 与目录字号，关闭开关时跟随微信字体大小。数值(9-20)"
                                     cy:*ecy
                                  width:w];
    } cy:cy width:w];

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

    // 目录页分组（「+列表内」位置且选中全部组时列表内收纳分组目录）
    cy = [self addSwitchRowInGroup:g2
                             title:@"目录页分组"
                              desc:nil
                               key:@"sdDirEnabled"
                              isOn:config.sdDirEnabled
                                cy:cy
                             width:w];

    y = [self finishGroup:g2 atY:y height:cy];

    // ──── 卡片3：会话过滤（侧边独立一套，不与电报分组共享，轮着用免重调） ────
    y = [self addSectionHeader:@"会话过滤" y:y width:w];
    UIView *gF = [self addTableGroupAtY:y width:w];
    cy = 0;
    cy = [self addSwitchRowInGroup:gF
                             title:@"过滤置顶聊天"
                              desc:nil
                               key:@"sdFilterPinned"
                              isOn:config.sdFilterPinned
                                cy:cy
                             width:w];
    cy = [self addSwitchRowInGroup:gF
                             title:@"过滤重复联系人"
                              desc:nil
                               key:@"sdFilterDuplicate"
                              isOn:config.sdFilterDuplicate
                                cy:cy
                             width:w];
    cy = [self addSwitchRowInGroup:gF
                             title:@"折叠群不红点"
                              desc:nil
                               key:@"sdFoldGroupNoRedDot"
                              isOn:config.sdFoldGroupNoRedDot
                                cy:cy
                             width:w];
    y = [self finishGroup:gF atY:y height:cy];
    y = [self addSectionFooter:@"仅作用于侧边分组，与电报分组的过滤设置相互独立；最近会话天数在分组管理页设置" y:y width:w];

    // ──── 卡片4：外观颜色（容器背景不设色，透出微信原生底色） ────
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

    // ──── 卡片5：分组管理（子页面入口，push 进侧边分组自己的管理页） ────
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
    // 设置页有导航栈：push 进管理页（同电报设置页）；rail 长按无导航栈才走弹窗
    SideGroupsManagerVC *vc = [[SideGroupsManagerVC alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
}

- (NSString *)numText:(CGFloat)v {
    return (v == floor(v)) ? [NSString stringWithFormat:@"%ld", (long)v]
                           : [NSString stringWithFormat:@"%.1f", v];
}

@end
