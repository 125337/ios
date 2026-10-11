#import "MsgMergeAABVC.h"
#import "MsgMergeConfig.h"
#import "../MessageTime/MessageTimeFormatEditorVC.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/MioAlertHelper.h"

@implementation MsgMergeAABVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"头像气泡上";
    [self buildUI];
}

#pragma mark - 选项名表

+ (NSArray<NSString *> *)positionModeNames {
    return @[@"上方", @"下方", @"不启用"];
}

+ (NSArray<NSString *> *)displayModeNames {
    return @[@"日期+时间", @"仅时间", @"仅日期", @"时间+星期", @"紧凑单行",
             @"相对日期+时间", @"完整日期+时间", @"不显示", @"自定义"];
}

+ (NSArray<NSString *> *)formatStyleNames {
    return @[@"简洁", @"标准", @"完整"];
}

+ (NSArray<NSString *> *)localeStyleNames {
    return @[@"跟随系统", @"12小时制", @"24小时制"];
}

+ (NSArray<NSString *> *)dashStyleNames {
    return @[@"无虚线", @"细虚线", @"点线", @"密虚线"];
}

+ (NSArray<NSString *> *)guideLineStyleNames {
    return @[@"无引导线", @"细实线", @"细虚线", @"点线"];
}

+ (NSArray<NSString *> *)guideLinePosNames {
    return @[@"时间上方", @"时间下方"];
}

/// 选项名取值钳位（配置越界时回退到第 0 项）
+ (NSString *)nameIn:(NSArray<NSString *> *)names forIndex:(NSInteger)idx {
    if (idx >= 0 && idx < (NSInteger)names.count) return names[idx];
    return names.firstObject;
}

/// 显示模式行的副标题（自定义模式时展示当前格式串）
+ (NSString *)displayModeSubtitle:(MsgMergeConfig *)config {
    if (config.msgMergeTimeDisplayMode == 8 && config.msgMergeTimeCustomFormat.length > 0) {
        return [NSString stringWithFormat:@"自定义 · %@", config.msgMergeTimeCustomFormat];
    }
    return [self nameIn:[self displayModeNames] forIndex:config.msgMergeTimeDisplayMode];
}

#pragma mark - 自定义格式编辑器（复用消息时间的格式编辑器）

- (void)openCustomFormatEditor {
    MessageTimeFormatEditorVC *editor = [[MessageTimeFormatEditorVC alloc] init];
    editor.initialFormat = [MsgMergeConfig shared].msgMergeTimeCustomFormat;
    editor.saveBlock = [^(NSString *newFormat) {
        [MsgMergeConfig shared].msgMergeTimeCustomFormat = newFormat;
        [ConfigManager saveAll];
        [self wpRebuildWeChatTable]; // 微信引擎表先清空旧 section 再重填
        [self buildUI];
    } copy];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:editor];
    nav.modalPresentationStyle = UIModalPresentationPageSheet;
    [self presentViewController:nav animated:YES completion:nil];
}

#pragma mark - 通用 picker

- (void)showPicker:(NSString *)title
             names:(NSArray<NSString *> *)names
      currentIndex:(NSInteger)idx
            onPick:(void (^)(NSInteger))onPick {
    NSMutableArray<NSString *> *titles = [NSMutableArray array];
    [names enumerateObjectsUsingBlock:^(NSString *name, NSUInteger i, BOOL *stop) {
        [titles addObject:((NSInteger)i == idx) ? [NSString stringWithFormat:@"✓ %@", name] : name];
    }];
    [MioAlertHelper showMenuAlert:title buttons:titles onButton:^(NSInteger index) {
        onPick(index);
        [ConfigManager saveAll];
        [self wpRebuildWeChatTable]; // 微信引擎表先清空旧 section 再重填，否则新行追加在旧行后面
        [self buildUI];
    }];
}

- (void)onPickAction:(UIButton *)sender {
    MsgMergeConfig *config = [MsgMergeConfig shared];
    NSInteger tag = sender.tag;
    if (tag == 100) { // 对方位置
        [self showPicker:@"请选择对方头像位置"
                   names:[self.class positionModeNames]
            currentIndex:config.msgMergePositionModeOther
                  onPick:^(NSInteger i) { config.msgMergePositionModeOther = i; }];
    } else if (tag == 101) { // 我方位置
        [self showPicker:@"请选择我方头像位置"
                   names:[self.class positionModeNames]
            currentIndex:config.msgMergePositionModeSelf
                  onPick:^(NSInteger i) { config.msgMergePositionModeSelf = i; }];
    } else if (tag == 102) { // 时间显示模式（选「自定义」弹格式编辑器，不走通用重建）
        [self showPicker:@"请选择时间显示模式"
                   names:[self.class displayModeNames]
            currentIndex:config.msgMergeTimeDisplayMode
                  onPick:^(NSInteger i) {
            config.msgMergeTimeDisplayMode = i;
            if (i == 8) {
                [self openCustomFormatEditor];
            }
        }];
    } else if (tag == 103) { // 时间格式样式（存储值 1-3）
        [self showPicker:@"请选择时间格式样式"
                   names:[self.class formatStyleNames]
            currentIndex:config.msgMergeTimeFormatStyle - 1
                  onPick:^(NSInteger i) { config.msgMergeTimeFormatStyle = i + 1; }];
    } else if (tag == 104) { // 时制
        [self showPicker:@"请选择时间制式"
                   names:[self.class localeStyleNames]
            currentIndex:config.msgMergeTimeLocaleStyle
                  onPick:^(NSInteger i) { config.msgMergeTimeLocaleStyle = i; }];
    } else if (tag == 105) { // 虚线样式
        [self showPicker:@"请选择虚线样式"
                   names:[self.class dashStyleNames]
            currentIndex:config.msgMergeDashStyle
                  onPick:^(NSInteger i) { config.msgMergeDashStyle = i; }];
    } else if (tag == 106) { // 引导线样式
        [self showPicker:@"请选择引导线样式"
                   names:[self.class guideLineStyleNames]
            currentIndex:config.msgMergeGuideLineStyle
                  onPick:^(NSInteger i) { config.msgMergeGuideLineStyle = i; }];
    } else if (tag == 107) { // 引导线位置
        [self showPicker:@"请选择引导线位置"
                   names:[self.class guideLinePosNames]
            currentIndex:config.msgMergeGuideLinePos
                  onPick:^(NSInteger i) { config.msgMergeGuideLinePos = i; }];
    }
}

#pragma mark - 页面构建

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }

    MsgMergeConfig *config = [MsgMergeConfig shared];
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    // ── 开关 ──
    UIView *swGroup = [self addTableGroupAtY:y width:w];
    CGFloat swCy = [self addSwitchRowInGroup:swGroup
                                       title:@"启用头像气泡上"
                                        desc:nil
                                         key:@"msgMergeAabEnabled"
                                        isOn:config.msgMergeAabEnabled
                                          cy:0
                                       width:w];
    y = [self finishGroup:swGroup atY:y height:swCy];

    // ── 基础布局 ──
    y = [self addSectionHeader:@"基础布局" y:y width:w];
    UIView *g1 = [self addTableGroupAtY:y width:w];
    CGFloat c1 = 0;
    c1 = [self addNavRowInGroup:g1
                          title:@"对方位置"
                       subtitle:[self.class nameIn:[self.class positionModeNames] forIndex:config.msgMergePositionModeOther]
                            tag:100 action:@selector(onPickAction:)
                             cy:c1 width:w];
    c1 = [self addSeparatorInGroup:g1 cy:c1 width:w];
    c1 = [self addNavRowInGroup:g1
                          title:@"我方位置"
                       subtitle:[self.class nameIn:[self.class positionModeNames] forIndex:config.msgMergePositionModeSelf]
                            tag:101 action:@selector(onPickAction:)
                             cy:c1 width:w];
    c1 = [self addSeparatorInGroup:g1 cy:c1 width:w];
    c1 = [self addInputRowInGroup:g1 title:@"上方额外偏移" key:@"msgMergeAboveShiftPt" value:[NSString stringWithFormat:@"%.1f", config.msgMergeAboveShiftPt] hint:@"0" valueType:InputValueTypeNumber cy:c1 width:w];
    c1 = [self addSeparatorInGroup:g1 cy:c1 width:w];
    c1 = [self addInputRowInGroup:g1 title:@"下方额外偏移" key:@"msgMergeBelowShiftPt" value:[NSString stringWithFormat:@"%.1f", config.msgMergeBelowShiftPt] hint:@"0" valueType:InputValueTypeNumber cy:c1 width:w];
    y = [self finishGroup:g1 atY:y height:c1];

    // ── 文字与昵称 ──
    y = [self addSectionHeader:@"文字与昵称" y:y width:w];
    UIView *g2 = [self addTableGroupAtY:y width:w];
    CGFloat c2 = 0;
    c2 = [self addInputRowInGroup:g2 title:@"文字与昵称字号" key:@"msgMergeTextSizeOffset" value:[NSString stringWithFormat:@"%.1f", config.msgMergeTextSizeOffset] hint:@"0" valueType:InputValueTypeNumber cy:c2 width:w];
    c2 = [self addSeparatorInGroup:g2 cy:c2 width:w];
    c2 = [self addInputRowInGroup:g2 title:@"对方文字与昵称Y轴" key:@"msgMergeTextYShiftOther" value:[NSString stringWithFormat:@"%.1f", config.msgMergeTextYShiftOther] hint:@"0" valueType:InputValueTypeNumber cy:c2 width:w];
    c2 = [self addSeparatorInGroup:g2 cy:c2 width:w];
    c2 = [self addInputRowInGroup:g2 title:@"我方文字与昵称Y轴" key:@"msgMergeTextYShiftSelf" value:[NSString stringWithFormat:@"%.1f", config.msgMergeTextYShiftSelf] hint:@"0" valueType:InputValueTypeNumber cy:c2 width:w];
    y = [self finishGroup:g2 atY:y height:c2];

    // ── 时间标注 ──
    y = [self addSectionHeader:@"时间标注" y:y width:w];
    UIView *g3 = [self addTableGroupAtY:y width:w];
    CGFloat c3 = 0;
    c3 = [self addColorRowInGroup:g3
                            title:@"时间颜色"
                              key:@"msgMergeTimeColorHex"
                            value:config.msgMergeTimeColorHex
                               cy:c3 width:w
                          darkKey:@"msgMergeTimeColorDarkHex"
                        darkValue:config.msgMergeTimeColorDarkHex
                       allowClear:YES];
    c3 = [self addSeparatorInGroup:g3 cy:c3 width:w];
    c3 = [self addNavRowInGroup:g3
                          title:@"时间显示模式"
                       subtitle:[self.class displayModeSubtitle:config]
                            tag:102 action:@selector(onPickAction:)
                             cy:c3 width:w];
    c3 = [self addSeparatorInGroup:g3 cy:c3 width:w];
    c3 = [self addNavRowInGroup:g3
                          title:@"时间格式样式"
                       subtitle:[self.class nameIn:[self.class formatStyleNames] forIndex:config.msgMergeTimeFormatStyle - 1]
                            tag:103 action:@selector(onPickAction:)
                             cy:c3 width:w];
    c3 = [self addSeparatorInGroup:g3 cy:c3 width:w];
    c3 = [self addNavRowInGroup:g3
                          title:@"时间制式"
                       subtitle:[self.class nameIn:[self.class localeStyleNames] forIndex:config.msgMergeTimeLocaleStyle]
                            tag:104 action:@selector(onPickAction:)
                             cy:c3 width:w];
    y = [self finishGroup:g3 atY:y height:c3];

    // ── 虚线 ──
    y = [self addSectionHeader:@"虚线" y:y width:w];
    UIView *g4 = [self addTableGroupAtY:y width:w];
    CGFloat c4 = 0;
    c4 = [self addNavRowInGroup:g4
                          title:@"虚线样式"
                       subtitle:[self.class nameIn:[self.class dashStyleNames] forIndex:config.msgMergeDashStyle]
                            tag:105 action:@selector(onPickAction:)
                             cy:c4 width:w];
    c4 = [self addSeparatorInGroup:g4 cy:c4 width:w];
    c4 = [self addInputRowInGroup:g4 title:@"虚线延长" key:@"msgMergeDashExtendPt" value:[NSString stringWithFormat:@"%.1f", config.msgMergeDashExtendPt] hint:@"0" valueType:InputValueTypeNumber cy:c4 width:w];
    y = [self finishGroup:g4 atY:y height:c4];

    // ── 引导线 ──
    y = [self addSectionHeader:@"引导线" y:y width:w];
    UIView *g5 = [self addTableGroupAtY:y width:w];
    CGFloat c5 = 0;
    c5 = [self addNavRowInGroup:g5
                          title:@"引导线样式"
                       subtitle:[self.class nameIn:[self.class guideLineStyleNames] forIndex:config.msgMergeGuideLineStyle]
                            tag:106 action:@selector(onPickAction:)
                             cy:c5 width:w];
    c5 = [self addSeparatorInGroup:g5 cy:c5 width:w];
    c5 = [self addNavRowInGroup:g5
                          title:@"引导线位置"
                       subtitle:[self.class nameIn:[self.class guideLinePosNames] forIndex:config.msgMergeGuideLinePos]
                            tag:107 action:@selector(onPickAction:)
                             cy:c5 width:w];
    c5 = [self addSeparatorInGroup:g5 cy:c5 width:w];
    c5 = [self addInputRowInGroup:g5 title:@"引导线X内边距" key:@"msgMergeGuideLineXPad" value:[NSString stringWithFormat:@"%.1f", config.msgMergeGuideLineXPad] hint:@"0" valueType:InputValueTypeNumber cy:c5 width:w];
    y = [self finishGroup:g5 atY:y height:c5];

    y = [self addSectionFooter:@"偏移/延长/内边距单位为 pt，可正可负；\n时间颜色留空时使用全局默认色。" y:y width:w];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

@end
