#import "SideGroupsManagerVC.h"
#import "../SessionGroups/SessionGroupsTab.h"
#import "SideGroupsConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/MioAlertHelper.h"
#import "../../Core/LogManager.h"

// 侧边分组管理页（UI 对齐电报 SessionGroupManagerVC：分组列表/添加分组/行为/恢复默认）。
// 与电报管理页的差异：行菜单无「长按动作」——侧边分组长按是 SideGroupsActions 固定菜单，
// 不做 per-tab 长按配置。数据走共享引擎 SessionGroupsTab，变更经 ConfigManager saveAll
// → NSUserDefaultsDidChangeNotification → 首页 hook 自动刷新，本页无需额外通知。
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

    NSArray<SessionGroupsTab *> *tabs = [SessionGroupsTab storedTabs];

    // ──── 分组列表（全量含停用，点击弹菜单：重命名/停用启用/删除） ────
    y = [self addSectionHeader:@"分组列表" y:y width:w];
    UIView *g1 = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;
    for (NSInteger i = 0; i < (NSInteger)tabs.count; i++) {
        SessionGroupsTab *tab = tabs[i];
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
    y = [self addSectionFooter:@"点击分组可重命名、停用或删除" y:y width:w];

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
    y = [self addSectionFooter:@"恢复为 全部/私聊/群聊/其他 四个默认分组" y:y width:w];

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
    NSArray<SessionGroupsTab *> *tabs = [SessionGroupsTab storedTabs];
    NSInteger idx = sender.tag;
    if (idx < 0 || idx >= (NSInteger)tabs.count) return;
    SessionGroupsTab *tab = tabs[idx];

    NSMutableArray<NSString *> *buttons = [NSMutableArray arrayWithObject:@"重命名"];
    [buttons addObject:tab.disabled ? @"启用" : @"停用"];
    NSArray<NSNumber *> *des = nil;
    if (tab.removable) {
        [buttons addObject:@"删除分组"];
        des = @[@2]; // 删除走红色删除态
    }

    [MioAlertHelper showMenuAlert:tab.title
                          buttons:buttons
                      destructive:des
                         onButton:^(NSInteger index) {
        if (index == 0) {
            [self renameFlowForTab:tab];
        } else if (index == 1) {
            [SessionGroupsTab setTabId:tab.tabId disabled:!tab.disabled];
            [self reloadAfterStoreChange];
        } else if (index == 2 && tab.removable) {
            [SessionGroupsTab removeTabId:tab.tabId];
            [self reloadAfterStoreChange];
        }
    }];
}

// 重命名（输入框 placeholder=旧名，空标题拒绝）
- (void)renameFlowForTab:(SessionGroupsTab *)tab {
    [MioAlertHelper showInputAlert:@"重命名分组"
                           message:nil
                       initialText:tab.title
                       placeholder:tab.title
                          keyboard:UIKeyboardTypeDefault
                            secure:NO
                        onConfirm:^(NSString *inputText) {
        NSString *nv = [inputText stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (nv.length == 0) return;
        [SessionGroupsTab renameTabId:tab.tabId title:nv];
        [self reloadAfterStoreChange];
    }];
}

#pragma mark - 添加分组

- (void)addTabTapped {
    NSArray<SessionGroupsTab *> *tabs = [SessionGroupsTab storedTabs];
    NSMutableArray<SessionGroupsTab *> *available = [NSMutableArray array];
    for (SessionGroupsTab *c in [SessionGroupsTab catalogTabs]) {
        if (![SessionGroupsTab isDuplicateOfTab:c inTabs:tabs]) [available addObject:c];
    }
    if (available.count == 0) {
        [MioAlertHelper showTipAlert:@"没有可添加的分组类型"];
        return;
    }
    NSMutableArray<NSString *> *names = [NSMutableArray array];
    for (SessionGroupsTab *t in available) {
        [names addObject:[NSString stringWithFormat:@"%@（%@）", t.title,
                          [t detailTextWithRecentFallback:[SideGroupsConfig shared].sdRecentDays]]];
    }
    [MioAlertHelper showMenuAlert:@"添加分组"
                          buttons:names
                         onButton:^(NSInteger index) {
        if (index < 0 || index >= (NSInteger)available.count) return;
        [SessionGroupsTab addTab:available[index]];
        [self reloadAfterStoreChange];
    }];
}

#pragma mark - 恢复默认

- (void)resetTapped {
    [MioAlertHelper showConfirmAlert:@"将恢复为默认分组（全部/私聊/群聊/其他），自定义分组将被移除"
                        confirmTitle:@"恢复默认"
                           onConfirm:^{
        [SessionGroupsTab resetToDefaults];
        [self reloadAfterStoreChange];
    }];
}

- (void)reloadAfterStoreChange {
    [self wpRebuildWeChatTable];
    [self buildUI];
}

@end
