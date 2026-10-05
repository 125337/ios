#import "SideGroupsTab.h"
#import "SideGroupsConfig.h"
#import "../../Core/ConfigManager.h"

// 当前选中组（会话内内存态，启动回落第一组；与电报分组的选中态相互独立）
static NSString *sSelectedTabId = nil;

// storedTabs 缓存（同电报 Tab 的 raw 键缓存策略；仅主线程访问，无锁）
static NSArray<SideGroupsTab *> *sCacheTabs = nil;
static NSString *sCacheRaw = nil;

// 首次迁移检查：进程内只做一次（sdTabs 从未写入 → 复制电报分组作为初始数据）
static BOOL sMigrateChecked = NO;

@implementation SideGroupsTab

#pragma mark - 内置分组

+ (SideGroupsTab *)tabWithId:(NSString *)tabId title:(NSString *)title kind:(NSInteger)kind scopeMask:(NSUInteger)mask {
    SideGroupsTab *t = [[SideGroupsTab alloc] init];
    t.tabId = tabId;
    t.title = title;
    t.kind = kind;
    t.scopeMask = mask;
    t.removable = ![tabId isEqualToString:@"all"];
    return t;
}

+ (NSArray<SideGroupsTab *> *)defaultTabs {
    return @[
        [self tabWithId:@"all"      title:@"全部" kind:0 scopeMask:0],
        [self tabWithId:@"private"  title:@"私聊" kind:1 scopeMask:1],
        [self tabWithId:@"chatroom" title:@"群聊" kind:1 scopeMask:2],
        [self tabWithId:@"other"    title:@"其他" kind:1 scopeMask:0x18],
    ];
}

+ (NSArray<SideGroupsTab *> *)catalogTabs {
    return @[
        [self tabWithId:@"brand"   title:@"公众号" kind:1 scopeMask:4],
        [self tabWithId:@"pinned"  title:@"置顶"   kind:1 scopeMask:0x20],
        [self tabWithId:@"unread"  title:@"未读"   kind:1 scopeMask:0x40],
        [self tabWithId:@"atme"    title:@"@我"    kind:1 scopeMask:0x80],
        [self tabWithId:@"recent"  title:@"最近"   kind:3 scopeMask:0],
        [self tabWithId:@"special" title:@"特殊账号" kind:1 scopeMask:0x18],
    ];
}

#pragma mark - 序列化

- (NSDictionary *)dictionaryRepresentation {
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

    SideGroupsTab *t = [[SideGroupsTab alloc] init];
    t.tabId = tid;

    NSString *title = d[@"title"];
    t.title = ([title isKindOfClass:NSString.class] && title.length) ? title : tid;

    id kindV = d[@"kind"];
    t.kind = [kindV isKindOfClass:NSNumber.class] ? [kindV integerValue] : 1;
    if (t.kind != 0 && t.kind != 1 && t.kind != 3) t.kind = 1;

    id maskV = d[@"scopeMask"];
    t.scopeMask = [maskV isKindOfClass:NSNumber.class] ? (NSUInteger)[maskV unsignedIntegerValue] : 0;

    // recentDays 越界[1,30]回落 0=跟随全局 sdRecentDays
    id rdV = d[@"recentDays"];
    t.recentDays = ([rdV isKindOfClass:NSNumber.class] && [rdV integerValue] >= 1 && [rdV integerValue] <= 30)
        ? [rdV integerValue] : 0;

    id rmV = d[@"removable"];
    t.removable = rmV ? [rmV boolValue] : ![tid isEqualToString:@"all"];
    if ([tid isEqualToString:@"all"]) {
        t.kind = 0;
        t.removable = NO;
        t.scopeMask = 0;
    }

    id disV = d[@"disabled"];
    t.disabled = [disV isKindOfClass:NSNumber.class] ? [disV boolValue] : NO;

    // 长按动作（side 语义）：合法值集 {0,2,5,4} 之外回落 0（跟随默认=固定菜单）
    id lpV = d[@"longPressAction"];
    NSInteger lp = [lpV isKindOfClass:NSNumber.class] ? [lpV integerValue] : 0;
    t.longPressAction = (lp == 0 || lp == 2 || lp == 5 || lp == 4) ? lp : 0;

    id hpV = d[@"hidePinned"];
    t.hidePinned = [hpV isKindOfClass:NSNumber.class] ? [hpV boolValue] : NO;
    return t;
}

#pragma mark - Store

+ (NSArray<SideGroupsTab *> *)storedTabs {
    id raw = [ConfigManager valueForKey:@"sdTabs"];
    if (![raw isKindOfClass:NSString.class]) raw = @"";
    if (sCacheTabs && [raw isEqualToString:sCacheRaw]) return sCacheTabs;

    NSMutableArray<SideGroupsTab *> *parsed = [NSMutableArray array];
    if ([raw length] > 0) {
        NSArray *arr = [NSJSONSerialization JSONObjectWithData:[(NSString *)raw dataUsingEncoding:NSUTF8StringEncoding] ?: [NSData data]
                                                       options:0
                                                         error:nil];
        if ([arr isKindOfClass:NSArray.class]) {
            for (NSDictionary *d in arr) {
                SideGroupsTab *t = [self tabWithDictionary:d];
                if (t) [parsed addObject:t];
            }
        }
    }

    NSArray<SideGroupsTab *> *tabs = nil;
    if (parsed.count) {
        tabs = [parsed copy];
    } else if (!sMigrateChecked) {
        // 首次启用：sdTabs 从未写入且电报分组有数据 → 直接复制其 raw JSON 作为初始数据
        // （两模型字段结构同构，电报的 longPressAction=6 经 side 解析回落 0=跟随默认，语义安全）；
        // 写入后 raw 非空，天然一次性（用户「恢复默认」写入 defaultTabs JSON 同样非空）
        sMigrateChecked = YES;
        NSString *sgRaw = [ConfigManager valueForKey:@"sgTabs"];
        if ([sgRaw isKindOfClass:NSString.class] && sgRaw.length > 0) {
            // 先验证是可解析的非空 JSON 数组再落盘，防脏数据
            NSArray *arr = [NSJSONSerialization JSONObjectWithData:[sgRaw dataUsingEncoding:NSUTF8StringEncoding]
                                                           options:0 error:nil];
            if ([arr isKindOfClass:NSArray.class] && arr.count > 0) {
                [ConfigManager setValue:sgRaw forKey:@"sdTabs"];
                [ConfigManager saveAll];
                sCacheRaw = sgRaw;
                NSMutableArray<SideGroupsTab *> *migrated = [NSMutableArray array];
                for (NSDictionary *d in arr) {
                    SideGroupsTab *t = [self tabWithDictionary:d];
                    if (t) [migrated addObject:t];
                }
                if (migrated.count) return migrated; // 直接返回迁移结果（下次经 raw 解析，内容一致）
            }
        }
        tabs = parsed.count ? [parsed copy] : [self defaultTabs];
    } else {
        tabs = [self defaultTabs];
    }
    sCacheRaw = raw;
    sCacheTabs = tabs;
    return tabs;
}

+ (NSArray<SideGroupsTab *> *)visibleTabs {
    NSMutableArray<SideGroupsTab *> *v = [NSMutableArray array];
    for (SideGroupsTab *t in [self storedTabs]) {
        if (!t.disabled) [v addObject:t];
    }
    return v.count ? [v copy] : [self defaultTabs]; // 全停用兜底，侧栏至少一组可显
}

+ (void)saveTabs:(NSArray<SideGroupsTab *> *)tabs {
    NSMutableArray *arr = [NSMutableArray array];
    for (SideGroupsTab *t in tabs) [arr addObject:[t dictionaryRepresentation]];
    NSString *json = @"";
    if (arr.count) {
        NSData *data = [NSJSONSerialization dataWithJSONObject:arr options:0 error:nil];
        if (data) json = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding] ?: @"";
    }
    [ConfigManager setValue:json forKey:@"sdTabs"];
    [ConfigManager saveAll]; // 触发 NSUserDefaultsDidChangeNotification → 首页自动刷新
    sCacheRaw = json;
    sCacheTabs = [tabs copy];
}

+ (void)addTab:(SideGroupsTab *)tab {
    if (!tab.tabId.length) return;
    NSMutableArray<SideGroupsTab *> *tabs = [[self storedTabs] mutableCopy];
    for (SideGroupsTab *t in tabs) {
        if ([t.tabId isEqualToString:tab.tabId]) return;
    }
    if ([self isDuplicateOfTab:tab inTabs:tabs]) return;
    [tabs addObject:tab];
    [self saveTabs:tabs];
}

+ (void)removeTabId:(NSString *)tabId {
    if (!tabId.length) return;
    NSArray<SideGroupsTab *> *tabs = [self storedTabs];
    SideGroupsTab *target = nil;
    for (SideGroupsTab *t in tabs) {
        if ([t.tabId isEqualToString:tabId]) { target = t; break; }
    }
    if (!target || !target.removable || target.disabled) return;
    if ([self visibleTabs].count < 2) return;

    NSMutableArray<SideGroupsTab *> *m = [tabs mutableCopy];
    [m removeObject:target];
    [self saveTabs:m];
    if ([[self currentSelectedTabId] isEqualToString:tabId]) {
        [self setCurrentSelectedTabId:[self visibleTabs].firstObject.tabId];
    }
}

+ (void)renameTabId:(NSString *)tabId title:(NSString *)title {
    if (!tabId.length || !title.length) return;
    NSArray<SideGroupsTab *> *tabs = [self storedTabs];
    for (SideGroupsTab *t in tabs) {
        if ([t.tabId isEqualToString:tabId]) {
            if ([t.title isEqualToString:title]) return;
            t.title = title;
            [self saveTabs:tabs];
            return;
        }
    }
}

+ (void)setTabId:(NSString *)tabId disabled:(BOOL)disabled {
    if (!tabId.length) return;
    NSArray<SideGroupsTab *> *tabs = [self storedTabs];
    for (SideGroupsTab *t in tabs) {
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
    [self saveTabs:[self defaultTabs]];
    [self setCurrentSelectedTabId:@"all"];
}

+ (BOOL)isDuplicateOfTab:(SideGroupsTab *)tab inTabs:(NSArray<SideGroupsTab *> *)tabs {
    for (SideGroupsTab *t in tabs) {
        if (t.kind != tab.kind) continue;
        if (tab.kind == 1 && t.scopeMask != tab.scopeMask) continue;
        return YES;
    }
    return NO;
}

#pragma mark - 长按动作（side 独立语义：0=跟随默认弹固定菜单，不 0 直接触发）

+ (NSArray<NSNumber *> *)pickerLongPressActionsForTab:(SideGroupsTab *)tab {
    return @[@0, @2, @5, @4];
}

+ (NSString *)titleForLongPressAction:(NSInteger)action tab:(SideGroupsTab *)tab {
    if (action == 0) return @"跟随默认（弹出动作菜单）";
    switch (action) {
        case 2: return @"打开分组管理";
        case 5: return tab.hidePinned ? @"显示置顶" : @"隐藏置顶";
        case 4: return @"无操作";
        default: return @"长按动作";
    }
}

+ (void)setLongPressAction:(NSInteger)action forTabId:(NSString *)tabId {
    if (!tabId.length) return;
    if (action != 0 && action != 2 && action != 5 && action != 4) return;
    NSArray<SideGroupsTab *> *tabs = [self storedTabs];
    for (SideGroupsTab *t in tabs) {
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
    NSArray<SideGroupsTab *> *tabs = [self storedTabs];
    for (SideGroupsTab *t in tabs) {
        if ([t.tabId isEqualToString:tabId]) {
            if (t.hidePinned == hidePinned) return;
            t.hidePinned = hidePinned;
            [self saveTabs:tabs];
            return;
        }
    }
}

+ (void)shiftVisibleTabId:(NSString *)tabId by:(NSInteger)delta {
    if (!tabId.length || delta == 0) return;
    NSMutableArray<SideGroupsTab *> *tabs = [[self storedTabs] mutableCopy];
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
    SideGroupsTab *tmp = tabs[from];
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

#pragma mark - 右值文案

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
