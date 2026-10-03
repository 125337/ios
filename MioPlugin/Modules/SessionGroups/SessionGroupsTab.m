#import "SessionGroupsTab.h"
#import "../../Core/ConfigManager.h"

// 当前选中组（原 NSUserDefaults 持久化「记忆选中」，功能删除后改为会话内内存态：
// 切组仍需选中状态渲染指示器，但每次启动微信回落第一组，不跨启动记忆）
static NSString *sSelectedTabId = nil;

// storedTabs 缓存：SGSignature 每次行渲染都会取 tabs，逐次 JSON 反序列化不可接受。
// 以 raw 串为键（比较远轻于解析）；仅主线程访问（UI + hook 回调均在主线程），无锁
static NSArray<SessionGroupsTab *> *sCacheTabs = nil;
static NSString *sCacheRaw = nil;

@implementation SessionGroupsTab

#pragma mark - 内置分组

+ (SessionGroupsTab *)tabWithId:(NSString *)tabId title:(NSString *)title kind:(NSInteger)kind scopeMask:(NSUInteger)mask {
    SessionGroupsTab *t = [[SessionGroupsTab alloc] init];
    t.tabId = tabId;
    t.title = title;
    t.kind = kind;
    t.scopeMask = mask;
    t.removable = ![tabId isEqualToString:@"all"]; // WCR removable 缺省 = tabId!=all
    return t;
}

+ (NSArray<SessionGroupsTab *> *)defaultTabs {
    // WCR defaultTabs 实证：Misc_part6.c:3897-3917
    // tabId 为反编译实锤 ASCII 串；title 在反编译里是中文 CFString（内容未导出），取对应中文名
    return @[
        [self tabWithId:@"all"      title:@"全部" kind:0 scopeMask:0],
        [self tabWithId:@"private"  title:@"私聊" kind:1 scopeMask:1],
        [self tabWithId:@"chatroom" title:@"群聊" kind:1 scopeMask:2],
        [self tabWithId:@"other"    title:@"其他" kind:1 scopeMask:0x18],
    ];
}

+ (NSArray<SessionGroupsTab *> *)catalogTabs {
    // WCR availableQuickAddTabs 内置目录（Misc_part6.c:7513-7660）裁剪版：
    // 私聊/群聊/其他/全部 与默认四组同款，靠 isDuplicate 过滤；特殊账号(0x18) 与默认
    // other 同 mask 也会被过滤——目录保持全量，呈现时去重（WCR 同款）
    return @[
        [self tabWithId:@"brand"   title:@"公众号" kind:1 scopeMask:4],
        [self tabWithId:@"pinned"  title:@"置顶"   kind:1 scopeMask:0x20],
        [self tabWithId:@"unread"  title:@"未读"   kind:1 scopeMask:0x40],
        [self tabWithId:@"atme"    title:@"@我"    kind:1 scopeMask:0x80],
        [self tabWithId:@"recent"  title:@"最近"   kind:3 scopeMask:0],
        [self tabWithId:@"special" title:@"特殊账号" kind:1 scopeMask:0x18],
    ];
}

#pragma mark - 序列化（dictionaryRepresentation/tabWithDictionary: Misc_part6.c:2973-3513）

- (NSDictionary *)dictionaryRepresentation {
    // Mio 仅 9 键（WCR 13 键中的 members/linkedGroupIds 等生态字段不涉及）
    NSMutableDictionary *d = [NSMutableDictionary dictionary];
    if (self.tabId.length) d[@"tabId"] = self.tabId;
    if (self.title.length) d[@"title"] = self.title;
    d[@"kind"] = @(self.kind);
    d[@"scopeMask"] = @(self.scopeMask);
    d[@"recentDays"] = @(self.recentDays);
    d[@"removable"] = @(self.removable);
    d[@"disabled"] = @(self.disabled);
    d[@"longPressAction"] = @(self.longPressAction);
    d[@"hidePinned"] = @(self.hidePinned);
    return d;
}

+ (instancetype)tabWithDictionary:(NSDictionary *)d {
    if (![d isKindOfClass:NSDictionary.class]) return nil;
    NSString *tid = d[@"tabId"];
    if (![tid isKindOfClass:NSString.class] || tid.length == 0) return nil;

    SessionGroupsTab *t = [[SessionGroupsTab alloc] init];
    t.tabId = tid;

    NSString *title = d[@"title"];
    t.title = ([title isKindOfClass:NSString.class] && title.length) ? title : tid;

    id kindV = d[@"kind"];
    t.kind = [kindV isKindOfClass:NSNumber.class] ? [kindV integerValue] : 1;
    if (t.kind != 0 && t.kind != 1 && t.kind != 3) t.kind = 1;

    id maskV = d[@"scopeMask"];
    t.scopeMask = [maskV isKindOfClass:NSNumber.class] ? (NSUInteger)[maskV unsignedIntegerValue] : 0;

    // WCR：recentDays 越界[1,30]回落 3（3159-3513）。Mio 语义 0=跟随全局 sgRecentDays
    // （全局缺省 3），效果等价
    id rdV = d[@"recentDays"];
    t.recentDays = ([rdV isKindOfClass:NSNumber.class] && [rdV integerValue] >= 1 && [rdV integerValue] <= 30)
        ? [rdV integerValue] : 0;

    id rmV = d[@"removable"];
    t.removable = rmV ? [rmV boolValue] : ![tid isEqualToString:@"all"];
    if ([tid isEqualToString:@"all"]) {
        t.kind = 0;        // WCR：tabId==all 强制 kind0 + 不可删
        t.removable = NO;
        t.scopeMask = 0;
    }

    id disV = d[@"disabled"];
    t.disabled = [disV isKindOfClass:NSNumber.class] ? [disV boolValue] : NO;

    // 长按动作：范围 [0,6] 之外回落 0（跟随默认，WCR setLongPressAction 6623 同款边界）
    id lpV = d[@"longPressAction"];
    NSInteger lp = [lpV isKindOfClass:NSNumber.class] ? [lpV integerValue] : 0;
    t.longPressAction = (lp >= 0 && lp <= 6) ? lp : 0;

    id hpV = d[@"hidePinned"];
    t.hidePinned = [hpV isKindOfClass:NSNumber.class] ? [hpV boolValue] : NO;
    return t;
}

#pragma mark - Store

+ (NSArray<SessionGroupsTab *> *)storedTabs {
    id raw = [ConfigManager valueForKey:@"sgTabs"];
    if (![raw isKindOfClass:NSString.class]) raw = @"";
    if (sCacheTabs && [raw isEqualToString:sCacheRaw]) return sCacheTabs;

    NSMutableArray<SessionGroupsTab *> *parsed = [NSMutableArray array];
    if ([raw length] > 0) {
        NSArray *arr = [NSJSONSerialization JSONObjectWithData:[(NSString *)raw dataUsingEncoding:NSUTF8StringEncoding] ?: [NSData data]
                                                       options:0
                                                         error:nil];
        if ([arr isKindOfClass:NSArray.class]) {
            for (NSDictionary *d in arr) {
                SessionGroupsTab *t = [self tabWithDictionary:d];
                if (t) [parsed addObject:t];
            }
        }
    }
    // ensureTabsLoaded（Misc_part6.c:4325-4440）：config 值合法非空才采用，否则默认四组
    NSArray<SessionGroupsTab *> *tabs = parsed.count ? [parsed copy] : [self defaultTabs];
    sCacheRaw = raw;
    sCacheTabs = tabs;
    return tabs;
}

+ (NSArray<SessionGroupsTab *> *)visibleTabs {
    NSMutableArray<SessionGroupsTab *> *v = [NSMutableArray array];
    for (SessionGroupsTab *t in [self storedTabs]) {
        if (!t.disabled) [v addObject:t];
    }
    return v.count ? [v copy] : [self defaultTabs]; // 全停用兜底，首页至少一组可显
}

+ (void)saveTabs:(NSArray<SessionGroupsTab *> *)tabs {
    NSMutableArray *arr = [NSMutableArray array];
    for (SessionGroupsTab *t in tabs) [arr addObject:[t dictionaryRepresentation]];
    NSString *json = @"";
    if (arr.count) {
        NSData *data = [NSJSONSerialization dataWithJSONObject:arr options:0 error:nil];
        if (data) json = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding] ?: @"";
    }
    [ConfigManager setValue:json forKey:@"sgTabs"];
    [ConfigManager saveAll]; // 触发 NSUserDefaultsDidChangeNotification → 首页自动刷新
    sCacheRaw = json;
    sCacheTabs = [tabs copy];
}

+ (void)addTab:(SessionGroupsTab *)tab {
    // WCR addTab_（Misc_part6.c:5557-5674）：tabId 非空、tabForId 不存在、isDuplicate 否
    if (!tab.tabId.length) return;
    NSMutableArray<SessionGroupsTab *> *tabs = [[self storedTabs] mutableCopy];
    for (SessionGroupsTab *t in tabs) {
        if ([t.tabId isEqualToString:tab.tabId]) return;
    }
    if ([self isDuplicateOfTab:tab inTabs:tabs]) return;
    [tabs addObject:tab];
    [self saveTabs:tabs];
}

+ (void)removeTabId:(NSString *)tabId {
    // WCR removeTabId_（5684-5815）：须存在+removable+非空+!disabled+visibleTabs>=2
    if (!tabId.length) return;
    NSArray<SessionGroupsTab *> *tabs = [self storedTabs];
    SessionGroupsTab *target = nil;
    for (SessionGroupsTab *t in tabs) {
        if ([t.tabId isEqualToString:tabId]) { target = t; break; }
    }
    if (!target || !target.removable || target.disabled) return;
    if ([self visibleTabs].count < 2) return;

    NSMutableArray<SessionGroupsTab *> *m = [tabs mutableCopy];
    [m removeObject:target];
    [self saveTabs:m];
    // 删的是选中组 → 选中回落可见第一组（WCR 同款）
    if ([[self currentSelectedTabId] isEqualToString:tabId]) {
        [self setCurrentSelectedTabId:[self visibleTabs].firstObject.tabId];
    }
}

+ (void)renameTabId:(NSString *)tabId title:(NSString *)title {
    // WCR renameTabId:title:（6764-6806）：tab 存在且新 title 非空
    if (!tabId.length || !title.length) return;
    NSArray<SessionGroupsTab *> *tabs = [self storedTabs];
    for (SessionGroupsTab *t in tabs) {
        if ([t.tabId isEqualToString:tabId]) {
            if ([t.title isEqualToString:title]) return;
            t.title = title;
            [self saveTabs:tabs];
            return;
        }
    }
}

+ (void)setTabId:(NSString *)tabId disabled:(BOOL)disabled {
    // WCR setTabId:disabled:（6816+）：停用致可见<2 拒绝
    if (!tabId.length) return;
    NSArray<SessionGroupsTab *> *tabs = [self storedTabs];
    for (SessionGroupsTab *t in tabs) {
        if ([t.tabId isEqualToString:tabId]) {
            if (t.disabled == disabled) return;
            if (disabled && [self visibleTabs].count < 2) return;
            t.disabled = disabled;
            [self saveTabs:tabs];
            return;
        }
    }
}

+ (void)resetToDefaults {
    // WCR resetToDefaults（7484-7503）：tabs=defaultTabs、selectedTabId=all、persist
    [self saveTabs:[self defaultTabs]];
    [self setCurrentSelectedTabId:@"all"];
}

+ (BOOL)isDuplicateOfTab:(SessionGroupsTab *)tab inTabs:(NSArray<SessionGroupsTab *> *)tabs {
    for (SessionGroupsTab *t in tabs) {
        if (t.kind != tab.kind) continue;
        if (tab.kind == 1 && t.scopeMask != tab.scopeMask) continue;
        return YES;
    }
    return NO;
}

#pragma mark - 长按动作（WCR Misc_part6.c:6238-6660 / FUN_007f7044 执行器，Mio 裁剪版）

+ (NSInteger)defaultLongPressActionForTab:(SessionGroupsTab *)tab {
    // WCR：kind0→1(分组面板) kind2→3(联动) else→2；Mio 1/3 生态不做，统一 → 2
    return 2;
}

+ (NSInteger)resolvedLongPressActionForTab:(SessionGroupsTab *)tab {
    // WCR resolvedLongPressActionForTab（6279）：0=跟随默认
    if (tab.longPressAction != 0) return tab.longPressAction;
    return [self defaultLongPressActionForTab:tab];
}

+ (NSString *)titleForLongPressAction:(NSInteger)action tab:(SessionGroupsTab *)tab {
    // WCR titleForLongPressAction:tab:（6314）：0→「跟随（%@）」
    if (action == 0) {
        return [NSString stringWithFormat:@"跟随（%@）",
                [self runtimeTitleForLongPressAction:[self defaultLongPressActionForTab:tab] tab:tab]];
    }
    return [self runtimeTitleForLongPressAction:action tab:tab];
}

+ (NSString *)runtimeTitleForLongPressAction:(NSInteger)action tab:(SessionGroupsTab *)tab {
    // WCR runtimeTitleForLongPressAction（6407）：action5 依 tab.hidePinned 显隐
    switch (action) {
        case 2: return @"打开分组管理";
        case 5: return tab.hidePinned ? @"显示置顶" : @"隐藏置顶";
        case 6: return @"弹出长按菜单";
        case 7: return @"停用分组";
        case 8: return @"左移分组";
        case 9: return @"右移分组";
        case 4: return @"无操作";
        default: return @"长按动作";
    }
}

+ (NSArray<NSNumber *> *)pickerLongPressActionsForTab:(SessionGroupsTab *)tab {
    // WCR pickerLongPressActionsForTab（6448，[0,1,2,(3 if kind2),5,6,4]）裁剪：1/3 生态不做
    return @[@0, @2, @5, @6, @4];
}

+ (NSArray<NSNumber *> *)menuLongPressActionsForTab:(SessionGroupsTab *)tab {
    // WCR menuLongPressActionsForTab（6532，[1,2,3,5,4,8,9]）裁剪：面板/联动去掉，补 7 停用
    return @[@2, @5, @7, @8, @9];
}

+ (void)setLongPressAction:(NSInteger)action forTabId:(NSString *)tabId {
    // WCR setLongPressAction:forTabId:（6623）：范围 [0,6] 且持久化
    if (!tabId.length || action < 0 || action > 6) return;
    NSArray<SessionGroupsTab *> *tabs = [self storedTabs];
    for (SessionGroupsTab *t in tabs) {
        if ([t.tabId isEqualToString:tabId]) {
            if (t.longPressAction == action) return;
            t.longPressAction = action;
            [self saveTabs:tabs];
            return;
        }
    }
}

+ (void)setHidePinned:(BOOL)hidePinned forTabId:(NSString *)tabId {
    if (!tabId.length) return;
    NSArray<SessionGroupsTab *> *tabs = [self storedTabs];
    for (SessionGroupsTab *t in tabs) {
        if ([t.tabId isEqualToString:tabId]) {
            if (t.hidePinned == hidePinned) return;
            t.hidePinned = hidePinned;
            [self saveTabs:tabs];
            return;
        }
    }
}

+ (void)shiftVisibleTabId:(NSString *)tabId by:(NSInteger)delta {
    // WCR shiftVisibleTabId:by:（FUN_007f7044 内 8/9 分支）：可见序列内移动，越界静默。
    // storedTabs 中停用组穿插其间，交换两个可见位的数组下标即得目标可见序
    if (!tabId.length || delta == 0) return;
    NSMutableArray<SessionGroupsTab *> *tabs = [[self storedTabs] mutableCopy];
    NSMutableArray<NSNumber *> *visIdx = [NSMutableArray array];
    for (NSInteger i = 0; i < (NSInteger)tabs.count; i++) {
        if (!tabs[i].disabled) [visIdx addObject:@(i)];
    }
    NSInteger pos = -1;
    for (NSInteger v = 0; v < (NSInteger)visIdx.count; v++) {
        if ([tabs[visIdx[v].integerValue].tabId isEqualToString:tabId]) { pos = v; break; }
    }
    NSInteger np = pos + delta;
    if (pos < 0 || np < 0 || np >= (NSInteger)visIdx.count) return;
    NSInteger from = visIdx[pos].integerValue;
    NSInteger to = visIdx[np].integerValue;
    SessionGroupsTab *tmp = tabs[from];
    tabs[from] = tabs[to];
    tabs[to] = tmp;
    [self saveTabs:tabs];
}

#pragma mark - 当前选中组（仅会话内，不落盘）

+ (NSString *)currentSelectedTabId {
    return sSelectedTabId;
}

+ (void)setCurrentSelectedTabId:(NSString *)tabId {
    sSelectedTabId = tabId.length ? [tabId copy] : nil;
}

#pragma mark - 右值文案（WCR detailText，Misc_part6.c:3523-3642）

- (NSString *)detailTextWithRecentFallback:(NSInteger)recentFallback {
    if (self.kind == 0 || [self.tabId isEqualToString:@"all"]) return @"所有会话";
    if (self.kind == 3) {
        NSInteger days = self.recentDays > 0 ? self.recentDays : recentFallback;
        if (days < 1) days = 3;
        return [NSString stringWithFormat:@"最近 %ld 天", (long)days];
    }
    if (self.kind == 1) {
        NSUInteger m = self.scopeMask;
        if ((m & 0x18) && !(m & 1) && !(m & 2)) return @"特殊账号";
        switch (m) {
            case 1:    return @"私聊";
            case 2:    return @"群聊";
            case 4:    return @"公众号";
            case 0x20: return @"置顶";
            case 0x40: return @"未读";
            case 0x80: return @"@我";
        }
        return @"自定义";
    }
    return @"-";
}

@end
