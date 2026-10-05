#import "SessionGroupsVC.h"
#import "SessionGroupsConfig.h"
#import "SessionGroupManagerVC.h"
#import "../SideGroups/SideGroupsConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/MioAlertHelper.h"
#import "../../Core/LogManager.h"

@implementation SessionGroupsVC

// 互斥拦截（分组数据独立后电报/侧边不可同开）：开电报时侧边已开 → 提示并拒绝写入，
// 重建页面回弹开关（与 SideGroupsVC 的同名拦截对称）
- (void)wpHandleSwitchKey:(NSString *)key row:(id)row on:(BOOL)on haveOn:(BOOL)haveOn {
    if ([key isEqualToString:@"sgEnabled"] && on && [SideGroupsConfig shared].sdEnabled) {
        WPShowToast(@"与侧边分组互斥，请先关闭侧边分组");
        [self wpRebuildWeChatTable];
        [self buildUI];
        return;
    }
    [super wpHandleSwitchKey:key row:row on:on haveOn:haveOn];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"首页电报分组";
    [self buildUI];
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    SessionGroupsConfig *config = [SessionGroupsConfig shared];
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    // ──── 卡片1：总开关 ────
    y = [self addSectionHeader:@"总开关" y:y width:w];
    UIView *g1 = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;
    cy = [self addSwitchRowInGroup:g1
                             title:@"启动首页电报分组"
                              desc:nil
                               key:@"sgEnabled"
                              isOn:config.sgEnabled
                                cy:cy
                             width:w];
    y = [self finishGroup:g1 atY:y height:cy];

    // ──── 卡片2：外观与位置 ────
    y = [self addSectionHeader:@"外观与位置" y:y width:w];
    UIView *g2 = [self addTableGroupAtY:y width:w];
    cy = 0;

    // 切组触感（分段选择，WCR 同款）
    cy = [self addSegmentRowInGroup:g2
                              title:@"切组触感"
                                key:@"sgSwitchHaptic"
                              names:@[@"无", @"轻微", @"中度", @"强烈"]
                              index:config.sgSwitchHaptic
                                 cy:cy
                              width:w];

    // 指示器（分段选择，WCR 同款）
    cy = [self addSegmentRowInGroup:g2
                              title:@"指示器"
                                key:@"sgIndicator"
                              names:@[@"无", @"胶囊", @"线条", @"圆点"]
                              index:config.sgIndicator
                                 cy:cy
                              width:w];

    // 胶囊圆角（输入框弹窗，0-16，默认 0 = 半高圆角）
    cy = [self addInputRowInGroup:g2
                            title:@"胶囊圆角"
                              key:@"sgCapsuleRadius"
                            value:[self radiusText:config.sgCapsuleRadius]
                             hint:@"0"
                        valueType:InputValueTypeNumber
                       alertTitle:@"胶囊圆角"
                     alertMessage:@"默认半高圆角。数值(0-16)"
                               cy:cy
                            width:w];

    // 全屏滑动切换（开关，展开：反向行驶 / 循环滑动）
    cy = [self addMasterSwitchRowInGroup:g2
                                   title:@"全屏滑动切换"
                                     key:@"sgFullscreenSwipe"
                                    isOn:config.sgFullscreenSwipe
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"反向行驶"
                                        key:@"sgSwipeReverse"
                                       isOn:config.sgSwipeReverse
                                         cy:*ecy
                                      width:w];
        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"循环滑动"
                                        key:@"sgSwipeLoop"
                                       isOn:config.sgSwipeLoop
                                         cy:*ecy
                                      width:w];
    } cy:cy width:w];

    // 分组标签居中（开关，展开：首页显示标签数）
    cy = [self addMasterSwitchRowInGroup:g2
                                   title:@"分组标签居中"
                                     key:@"sgTabCentered"
                                    isOn:config.sgTabCentered
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addInputRowInGroup:expand
                                  title:@"首页显示标签数"
                                    key:@"sgVisibleTabCount"
                                  value:[NSString stringWithFormat:@"%ld", (long)config.sgVisibleTabCount]
                                   hint:@"4"
                              valueType:InputValueTypeNumber
                             alertTitle:@"首页显示标签数"
                           alertMessage:@"一屏按此数量均分，更多标签可横向滑动查看。数值(2-8)"
                                     cy:*ecy
                                  width:w];
    } cy:cy width:w];

    // 显示未读角标
    cy = [self addSwitchRowInGroup:g2
                             title:@"显示未读角标"
                              desc:nil
                               key:@"sgShowUnreadBadge"
                              isOn:config.sgShowUnreadBadge
                                cy:cy
                             width:w];

    // 显示分组红点（开关，展开：折叠群不红点）
    cy = [self addMasterSwitchRowInGroup:g2
                                   title:@"显示分组红点"
                                     key:@"sgShowGroupRedDot"
                                    isOn:config.sgShowGroupRedDot
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"折叠群不红点"
                                        key:@"sgFoldGroupNoRedDot"
                                       isOn:config.sgFoldGroupNoRedDot
                                         cy:*ecy
                                      width:w];
    } cy:cy width:w];

    // 过滤置顶聊天
    cy = [self addSwitchRowInGroup:g2
                             title:@"过滤置顶聊天"
                              desc:nil
                               key:@"sgFilterPinned"
                              isOn:config.sgFilterPinned
                                cy:cy
                             width:w];

    // 过滤重复联系人
    cy = [self addSwitchRowInGroup:g2
                             title:@"过滤重复联系人"
                              desc:nil
                               key:@"sgFilterDuplicate"
                              isOn:config.sgFilterDuplicate
                                cy:cy
                             width:w];

    y = [self finishGroup:g2 atY:y height:cy];

    // ──── 卡片3：外观颜色（每项手风琴：开关展开颜色选择器，对齐 WCR 每色 Enabled 模式） ────
    y = [self addSectionHeader:@"外观颜色" y:y width:w];
    UIView *g3 = [self addTableGroupAtY:y width:w];
    cy = 0;

    // 自定义背景色
    cy = [self addMasterSwitchRowInGroup:g3
                                   title:@"自定义背景色"
                                     key:@"sgBgColorCustom"
                                    isOn:config.sgBgColorCustom
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addColorRowInGroup:expand
                                  title:@"背景色"
                                    key:@"sgBgColor"
                                  value:config.sgBgColor ?: @""
                                     cy:*ecy
                                  width:w
                                darkKey:@"sgBgColorDark"
                              darkValue:config.sgBgColorDark ?: @""];
    } cy:cy width:w];

    // 指示器颜色
    cy = [self addMasterSwitchRowInGroup:g3
                                   title:@"自定义指示器颜色"
                                     key:@"sgIndicatorColorCustom"
                                    isOn:config.sgIndicatorColorCustom
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addColorRowInGroup:expand
                                  title:@"指示器颜色"
                                    key:@"sgIndicatorColor"
                                  value:config.sgIndicatorColor ?: @""
                                     cy:*ecy
                                  width:w
                                darkKey:@"sgIndicatorColorDark"
                              darkValue:config.sgIndicatorColorDark ?: @""];
    } cy:cy width:w];

    // 默认文本颜色
    cy = [self addMasterSwitchRowInGroup:g3
                                   title:@"自定义默认文本颜色"
                                     key:@"sgTextColorCustom"
                                    isOn:config.sgTextColorCustom
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addColorRowInGroup:expand
                                  title:@"文本颜色"
                                    key:@"sgTextColor"
                                  value:config.sgTextColor ?: @""
                                     cy:*ecy
                                  width:w
                                darkKey:@"sgTextColorDark"
                              darkValue:config.sgTextColorDark ?: @""];
    } cy:cy width:w];

    // 高亮文本颜色
    cy = [self addMasterSwitchRowInGroup:g3
                                   title:@"自定义高亮文本颜色"
                                     key:@"sgHighlightColorCustom"
                                    isOn:config.sgHighlightColorCustom
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addColorRowInGroup:expand
                                  title:@"高亮颜色"
                                    key:@"sgHighlightColor"
                                  value:config.sgHighlightColor ?: @""
                                     cy:*ecy
                                  width:w
                                darkKey:@"sgHighlightColorDark"
                              darkValue:config.sgHighlightColorDark ?: @""];
    } cy:cy width:w];

    // 自定义标题字号（自"外观与位置"移入；hook 已存在，照常生效）
    cy = [self addMasterSwitchRowInGroup:g3
                                   title:@"自定义标题字号"
                                     key:@"sgTitleFontCustom"
                                    isOn:config.sgTitleFontCustom
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addInputRowInGroup:expand
                                  title:@"标题字号"
                                    key:@"sgTitleFontSize"
                                  value:[NSString stringWithFormat:@"%.0f", config.sgTitleFontSize]
                                   hint:@"17"
                              valueType:InputValueTypeNumber
                             alertTitle:@"标题字号"
                           alertMessage:@"范围 12-20，越界按 17 显示（对应 WCR 钳位语义）"
                                     cy:*ecy
                                  width:w];
    } cy:cy width:w];

    y = [self finishGroup:g3 atY:y height:cy];

    // ──── 卡片4：分组管理（子页面入口） ────
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

    WPLog(@"UI", @"[Sub] SessionGroupsVC buildUI done");
}

#pragma mark - 名称映射

- (NSString *)radiusText:(CGFloat)radius {
    if (radius == (NSInteger)radius) {
        return [NSString stringWithFormat:@"%ld", (long)radius];
    }
    return [NSString stringWithFormat:@"%.1f", radius];
}

#pragma mark - 数值输入（范围钳制）

// 拦截两个带范围约束的数值行：空输入回落 hint，非数值/越界钳制到区间
- (void)wpRunInputFlow:(NSDictionary *)row {
    NSString *key = row[@"key"];
    if ([key isEqualToString:@"sgCapsuleRadius"]) {
        [self runRangeInputFlow:row min:0 max:16 integer:YES];
        return;
    }
    if ([key isEqualToString:@"sgVisibleTabCount"]) {
        [self runRangeInputFlow:row min:2 max:8 integer:YES];
        return;
    }
    [super wpRunInputFlow:row];
}

- (void)runRangeInputFlow:(NSDictionary *)row min:(CGFloat)minV max:(CGFloat)maxV integer:(BOOL)isInt {
    NSString *key = row[@"key"];
    NSString *title = [row[@"alertTitle"] isKindOfClass:[NSString class]] && [row[@"alertTitle"] length] > 0
        ? row[@"alertTitle"] : row[@"title"];
    NSString *hint = [row[@"hint"] isKindOfClass:[NSString class]] ? row[@"hint"] : @"";

    NSString *current = @"";
    @try {
        id v = [ConfigManager valueForKey:key];
        if ([v isKindOfClass:[NSNumber class]]) current = [(NSNumber *)v stringValue];
    } @catch (NSException *e) {}

    [MioAlertHelper showInputAlert:title
                           message:(row[@"alertMessage"] ?: @"")
                       initialText:current ?: @""
                       placeholder:(hint ?: @"")
                          keyboard:UIKeyboardTypeNumbersAndPunctuation
                            secure:NO
                        onConfirm:^(NSString *inputText) {
        NSString *nv = [inputText stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (nv.length == 0 && hint.length > 0) nv = hint;
        if (nv.length == 0) return;

        CGFloat val = [nv doubleValue];
        if (val < minV) val = minV;
        if (val > maxV) val = maxV;

        @try {
            [ConfigManager setValue:isInt ? @((NSInteger)val) : @(val) forKey:key];
            [ConfigManager saveAll];
        } @catch (NSException *e) {
            WPLog(@"Config", @"[SGEDIT] 保存失败 key=%@ err=%@", key, e);
            return;
        }
        WPLog(@"Config", @"[SGEDIT] %@ = %@", key, @(val));
        [self wpRebuildWeChatTable];
        [self buildUI];
    }];
}

#pragma mark - 导航

- (void)openGroupManager {
    SessionGroupManagerVC *vc = [[SessionGroupManagerVC alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
}

@end
