#import "SessionGroupsVC.h"
#import "SessionGroupsConfig.h"
#import "SessionGroupManagerVC.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/MioAlertHelper.h"
#import "../../Core/LogManager.h"

@implementation SessionGroupsVC

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

    // 标题字号（WCR titleFontSize 同款链路：自定义开关 + 数值 12-20，越界回落 17）
    cy = [self addSwitchRowInGroup:g2
                             title:@"自定义标题字号"
                              desc:@"关闭时跟随微信原生昵称字号 17"
                               key:@"sgTitleFontCustom"
                              isOn:config.sgTitleFontCustom
                                cy:cy
                             width:w];
    cy = [self addInputRowInGroup:g2
                            title:@"标题字号"
                              key:@"sgTitleFontSize"
                            value:[NSString stringWithFormat:@"%.0f", config.sgTitleFontSize]
                             hint:@"17"
                        valueType:InputValueTypeNumber
                       alertTitle:@"标题字号"
                     alertMessage:@"范围 12-20，越界按 17 显示（对应 WCR 钳位语义）"
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

    // ──── 卡片3：分组管理（子页面入口） ────
    y = [self addSectionHeader:@"分组管理" y:y width:w];
    UIView *g3 = [self addTableGroupAtY:y width:w];
    cy = 0;
    cy = [self addNavRowInGroup:g3
                          title:@"分组管理"
                       subtitle:nil
                            tag:0
                         action:@selector(openGroupManager)
                             cy:cy
                          width:w];
    y = [self finishGroup:g3 atY:y height:cy];

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
