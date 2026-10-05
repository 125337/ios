#import "SideGroupsManagerVC.h"
#import "SideGroupsTab.h"
#import "SideGroupsConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/MioAlertHelper.h"
#import "../../Core/LogManager.h"

// 侧边分组管理页（UI 对齐电报 SessionGroupManagerVC：分组列表/添加分组/行为/恢复默认）。
// 数据走侧边独立引擎 SideGroupsTab（sdTabs，首次启用自动复制电报分组），与电报分组
// 完全解耦；行菜单含「长按动作」（side 独立语义候选，见 SideGroupsTab 类注释）。
// 变更经 ConfigManager saveAll → NSUserDefaultsDidChangeNotification → 首页 hook 自动刷新，
// 本页无需额外通知。
@implementation SideGroupsManagerVC

// 弹窗形态（pageSheet + largeDetent）的左上「关闭」
- (void)sgCloseModal:(id)sender {
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"分组管理";
    [self buildUI];
}

- (void)buildUI {
    SideGroupsConfig *config = [SideGroupsConfig shared];
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    NSArray<SideGroupsTab *> *tabs = [SideGroupsTab storedTabs];

    // ──── 分组列表（全量含停用，点击弹菜单：重命名/长按动作/停用启用/删除） ────
    y = [self addSectionHeader:@"分组列表" y:y width:w];
    UIView *g1 = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;
    for (NSInteger i = 0; i < (NSInteger)tabs.count; i++) {
        SideGroupsTab *tab = tabs[i];
        NSString *detail = [tab detailTextWithRecentFallback:config.sdRecentDays];
        if (tab.disabled) detail = [detail stringByAppendingString:@"（已停用）"];
        cy = [self addNavRowInGroup:g1
                              title:tab.title
                           subtitle:detail
                                tag:i
                             action:@selector(tabRowTapped:)
                                 cy:cy
                              width:w];
    }
    y = [self finishGroup:g1 atY:y height:cy];
    y = [self addSectionFooter:@"点击分组可重命名、配置长按动作、停用或删除" y:y width:w];

    // ──── 添加分组（目录按 isDuplicateOfTab 去重） ────
    y = [self addSectionHeader:@"添加分组" y:y width:w];
    UIView *g2 = [self addTableGroupAtY:y width:w];
    cy = 0;
    cy = [self addNavRowInGroup:g2
                          title:@"添加分组"
                       subtitle:nil
                            tag:0
                         action:@selector(addTabTapped)
                             cy:cy
                          width:w];
    y = [self finishGroup:g2 atY:y height:cy];
    y = [self addSectionFooter:@"仅列出未被现有分组覆盖的类型" y:y width:w];

    // ──── 行为（最近会话天数，仅作用于「最近」分组） ────
    y = [self addSectionHeader:@"行为" y:y width:w];
    UIView *g3 = [self addTableGroupAtY:y width:w];
    cy = 0;
    cy = [self addInputRowInGroup:g3
                            title:@"最近会话天数"
                              key:@"sdRecentDays"
                            value:[NSString stringWithFormat:@"%ld", (long)config.sdRecentDays]
                             hint:@"3"
                        valueType:InputValueTypeNumber
                       alertTitle:@"最近会话天数"
                     alertMessage:@"「最近」分组收录该天数内的会话。数值(1-30)"
                               cy:cy
                            width:w];
    y = [self finishGroup:g3 atY:y height:cy];
    y = [self addSectionFooter:@"该天数仅作用于「最近」分组" y:y width:w];

    // ──── 恢复默认 ────
    y = [self addSectionHeader:@"恢复默认" y:y width:w];
    UIView *g4 = [self addTableGroupAtY:y width:w];
    cy = 0;
    cy = [self addNavRowInGroup:g4
                          title:@"恢复默认分组"
                       subtitle:nil
                            tag:0
                         action:@selector(resetTapped)
                             cy:cy
                          width:w];
    y = [self finishGroup:g4 atY:y height:cy];
    y = [self addSectionFooter:@"恢复为 全部/私聊/群聊/其他 四个默认分组（不影响电报分组）" y:y width:w];

    WPLog(@"UI", @"[Sub] SideGroupsManagerVC buildUI done (tabs=%lu)", (unsigned long)tabs.count);
}

#pragma mark - 数值输入（范围钳制 [1,30]）

- (void)wpRunInputFlow:(NSDictionary *)row {
    NSString *key = row[@"key"];
    if ([key isEqualToString:@"sdRecentDays"]) {
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
            NSInteger val = [nv integerValue];
            if (val < 1) val = 1;
            if (val > 30) val = 30;
            @try {
                [ConfigManager setValue:@(val) forKey:key];
                [ConfigManager saveAll];
            } @catch (NSException *e) {
                WPLog(@"Config", @"[SGMGR] 保存失败 key=%@ err=%@", key, e);
                return;
            }
            WPLog(@"Config", @"[SGMGR] %@ = %@", key, @(val));
            [self wpRebuildWeChatTable];
            [self buildUI];
        }];
        return;
    }
    [super wpRunInputFlow:row];
}

#pragma mark - 分组行操作菜单

- (void)tabRowTapped:(UIButton *)sender {
    NSArray<SideGroupsTab *> *tabs = [SideGroupsTab storedTabs];
    NSInteger idx = sender.tag;
    if (idx < 0 || idx >= (NSInteger)tabs.count) return;
    SideGroupsTab *tab = tabs[idx];

    // 菜单：0=重命名 1=长按动作 2=停用/启用 3=删除（仅 removable，红色删除态）
    NSMutableArray<NSString *> *buttons = [NSMutableArray arrayWithObject:@"重命名"];
    [buttons addObject:@"长按动作"];
    [buttons addObject:tab.disabled ? @"启用" : @"停用"];
    NSMutableArray<NSNumber *> *des = [NSMutableArray array];
    if (tab.removable) {
        [buttons addObject:@"删除分组"];
        [des addObject:@3];
    }

    [MioAlertHelper showMenuAlert:tab.title
                          buttons:buttons
                      destructive:des
                         onButton:^(NSInteger index) {
        if (index == 0) {
            [self renameFlowForTab:tab];
        } else if (index == 1) {
            [self chooseLongPressFlowForTab:tab];
        } else if (index == 2) {
            [SideGroupsTab setTabId:tab.tabId disabled:!tab.disabled];
            [self reloadAfterStoreChange];
        } else if (index == 3 && tab.removable) {
            [SideGroupsTab removeTabId:tab.tabId];
            [self reloadAfterStoreChange];
        }
    }];
}

// 重命名（输入框 placeholder=旧名，空标题拒绝）
- (void)renameFlowForTab:(SideGroupsTab *)tab {
    [MioAlertHelper showInputAlert:@"重命名分组"
                           message:nil
                       initialText:tab.title
                       placeholder:tab.title
                          keyboard:UIKeyboardTypeDefault
                            secure:NO
                        onConfirm:^(NSString *inputText) {
        NSString *nv = [inputText stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (nv.length == 0) return;
        [SideGroupsTab renameTabId:tab.tabId title:nv];
        [self reloadAfterStoreChange];
    }];
}

// 长按动作（side 独立语义：0=跟随默认/2=打开分组管理/5=切换置顶过滤/4=无操作，
// 当前项标 ✓；与电报管理页 chooseLongPressFlowForTab 同构但不共用候选与文案）
- (void)chooseLongPressFlowForTab:(SideGroupsTab *)tab {
    NSArray<NSNumber *> *acts = [SideGroupsTab pickerLongPressActionsForTab:tab];
    NSMutableArray<NSString *> *titles = [NSMutableArray array];
    for (NSNumber *a in acts) {
        NSString *t = [SideGroupsTab titleForLongPressAction:a.integerValue tab:tab];
        if (a.integerValue == tab.longPressAction) t = [@"✓ " stringByAppendingString:t];
        [titles addObject:t];
    }
    [MioAlertHelper showMenuAlert:@"长按动作"
                          buttons:titles
                         onButton:^(NSInteger index) {
        if (index < 0 || index >= (NSInteger)acts.count) return;
        [SideGroupsTab setLongPressAction:acts[index].integerValue forTabId:tab.tabId];
        [self reloadAfterStoreChange];
    }];
}

#pragma mark - 添加分组

- (void)addTabTapped {
    NSArray<SideGroupsTab *> *tabs = [SideGroupsTab storedTabs];
    NSMutableArray<SideGroupsTab *> *available = [NSMutableArray array];
    for (SideGroupsTab *c in [SideGroupsTab catalogTabs]) {
        if (![SideGroupsTab isDuplicateOfTab:c inTabs:tabs]) [available addObject:c];
    }
    if (available.count == 0) {
        [MioAlertHelper showTipAlert:@"没有可添加的分组类型"];
        return;
    }
    NSMutableArray<NSString *> *names = [NSMutableArray array];
    for (SideGroupsTab *t in available) {
        [names addObject:[NSString stringWithFormat:@"%@（%@）", t.title,
                          [t detailTextWithRecentFallback:[SideGroupsConfig shared].sdRecentDays]]];
    }
    [MioAlertHelper showMenuAlert:@"添加分组"
                          buttons:names
                         onButton:^(NSInteger index) {
        if (index < 0 || index >= (NSInteger)available.count) return;
        [SideGroupsTab addTab:available[index]];
        [self reloadAfterStoreChange];
    }];
}

#pragma mark - 恢复默认

- (void)resetTapped {
    [MioAlertHelper showConfirmAlert:@"将恢复为默认分组（全部/私聊/群聊/其他），自定义分组将被移除（仅作用于侧边分组，不影响电报分组）"
                        confirmTitle:@"恢复默认"
                           onConfirm:^{
        [SideGroupsTab resetToDefaults];
        [self reloadAfterStoreChange];
    }];
}

- (void)reloadAfterStoreChange {
    [self wpRebuildWeChatTable];
    [self buildUI];
}

@end
