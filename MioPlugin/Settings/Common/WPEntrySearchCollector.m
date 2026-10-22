#import "WPEntrySearchCollector.h"
#import "WPWeChatTable.h"
#import "../../Core/LogManager.h"
#import <objc/runtime.h>

// 参与搜索的设置页清单（类名 → 归属页标题）。
// 正常打开的页面构建行时自动登记；标题取自 push 前设置的 categoryName（首页 openXxx: / 页面自身），
// 空跑前按此表补设，保证 cat 永远正确。新增设置页在此加一行即可。
static NSDictionary<NSString *, NSString *> *WPSearchPageCats(void) {
    static NSDictionary *map = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        map = @{
            // --- 常用功能 ---
            @"SettingKeywordAlertController":       @"关键词提醒",
            @"SettingPageLockController":           @"指定页面上锁",
            @"SettingRevokeController":             @"消息防撤回",
            @"SettingMessageTimeController":        @"消息时间",
            @"SettingGeneralFunctionController":    @"常用功能",
            // --- 红包 ---
            @"SettingRedEnvelopController":         @"红包设置",
            @"SettingFixedInviteRulesController":   @"拉群规则",
            // --- 朋友圈 ---
            @"SettingMomentsController":            @"朋友圈",
            @"SettingMomentTailController":         @"朋友圈小尾巴",
            @"SettingMomentCommentsController":     @"评论文本",
            @"SettingMomentBlocklistController":    @"点赞黑名单",
            @"MioMomentsSchedListController":       @"定时任务",
            // --- 圆角美化 ---
            @"SettingListCornerRadiusController":   @"列表圆角",
            @"SettingCornerRadiusController":       @"圆角美化",
            @"SettingCardBackgroundController":     @"卡片背景",
            // --- 消息合并 ---
            @"SettingMsgMergeController":           @"消息合并",
            @"SettingMsgMergeSeparatorController":  @"配置合并模式",
            // --- 界面定制 ---
            @"SettingChatTopBarController":         @"聊天顶栏",
            @"SettingAvatarHideController":         @"隐藏头像",
            @"WPUILayoutSettingsVC":                @"布局设置",
            @"WPUIPurifyVC":                        @"界面净化",
            @"WPUIPlaceholderTextVC":               @"文本占位",
            @"WPUIAttachmentLayoutVC":              @"附件布局",
            // --- 会话列表/首页美化 ---
            @"SessionGroupsVC":                     @"首页电报分组",
            @"SideGroupsVC":                        @"首页侧边分组",
            @"HomeCardVC":                          @"首页卡片",
            // --- 其他 ---
            @"WPVoicePackSettingsVC":               @"语音包",
            @"WPVoicePackManagerVC":                @"语音包管理",
            @"WPAccountVC":                         @"账户信息",
            @"WPOtherVC":                           @"其他功能",
            @"WPBackupVC":                          @"备份与重置",
        };
    });
    return map;
}

// 收集结果：页类名 → {唯一键 → 条目}（页面重建时同键覆盖、新键追加，天然去重）
static NSMutableDictionary<NSString *, NSMutableDictionary<NSString *, NSDictionary *> *> *sRegistry = nil;

#pragma mark - 拼音

// 全拼（无空格小写）/ 拼音首字母，匹配用
static NSString *WPPinyinFullName(NSString *src) {
    if (src.length == 0) return @"";
    NSMutableString *ms = [src mutableCopy];
    CFStringTransform((CFMutableStringRef)ms, NULL, kCFStringTransformMandarinLatin, NO);
    CFStringTransform((CFMutableStringRef)ms, NULL, kCFStringTransformStripDiacritics, NO);
    NSString *noSpace = [[ms componentsSeparatedByCharactersInSet:
        [NSCharacterSet whitespaceCharacterSet]] componentsJoinedByString:@""];
    return noSpace.lowercaseString;
}

static NSString *WPPinyinInitials(NSString *src) {
    if (src.length == 0) return @"";
    NSMutableString *ms = [src mutableCopy];
    CFStringTransform((CFMutableStringRef)ms, NULL, kCFStringTransformMandarinLatin, NO);
    CFStringTransform((CFMutableStringRef)ms, NULL, kCFStringTransformStripDiacritics, NO);
    NSArray *parts = [ms componentsSeparatedByCharactersInSet:
        [NSCharacterSet whitespaceCharacterSet]];
    NSMutableString *out = [NSMutableString string];
    for (NSString *p in parts) {
        if (p.length > 0) [out appendFormat:@"%c", [p characterAtIndex:0]];
    }
    return out.lowercaseString;
}

#pragma mark - 登记

+ (void)initialize {
    if (self == [WPEntrySearchCollector class]) {
        sRegistry = [NSMutableDictionary dictionary];
    }
}

+ (void)registerRowFromCell:(id)cellMgr page:(id)page {
    if (!cellMgr || !page) return;
    NSDictionary *row = objc_getAssociatedObject(cellMgr, &WPRowAssocKey);
    if (![row isKindOfClass:[NSDictionary class]]) return;

    // 白名单：可交互/可跳转行才进搜索（纯展示行不收）
    NSString *type = row[@"type"];
    NSArray *allowed = @[@"switch", @"nav", @"button", @"input", @"color", @"segment", @"copy", @"master"];
    if (![allowed containsObject:type]) return;

    NSString *title = [row[@"title"] isKindOfClass:[NSString class]] ? row[@"title"] : nil;
    if (title.length == 0) return;

    NSString *vc = NSStringFromClass([page class]);
    if (!WPSearchPageCats()[vc]) return; // 非参与搜索的页面不登记

    NSString *key = [row[@"key"] isKindOfClass:[NSString class]] ? row[@"key"] : @"";
    NSString *desc = [row[@"desc"] isKindOfClass:[NSString class]] ? row[@"desc"] : @"";
    // 唯一键：行 key 优先，无 key 行（nav 等）用 title
    NSString *uniKey = key.length > 0 ? key : title;

    NSMutableDictionary *pageReg = sRegistry[vc];
    if (!pageReg) {
        pageReg = [NSMutableDictionary dictionary];
        sRegistry[vc] = pageReg;
    }
    pageReg[uniKey] = @{ @"title": title,
                         @"kw": desc,
                         @"py": WPPinyinFullName(title),
                         @"pysm": WPPinyinInitials(title),
                         @"vc": vc,
                         @"cat": WPSearchPageCats()[vc] ?: @"",
                         @"key": key ?: @"" };
}

#pragma mark - 汇总（含惰性空跑）

// 空跑未打开过的页面：只走构建流程收集条目，不显示、不 push，跑完即释放
+ (void)primePageClass:(NSString *)clsName cat:(NSString *)cat {
    if (sRegistry[clsName].count > 0) return; // 已有登记（页面打开过或空跑过）
    Class cls = NSClassFromString(clsName);
    if (!cls) return;
    @try {
        UIViewController *vc = [[cls alloc] init];
        if (!vc) return;
        if ([vc respondsToSelector:@selector(setCategoryName:)]) {
            [(id)vc setCategoryName:cat]; // 部分页面标题由 push 前设置，空跑补上
        }
        CFAbsoluteTime t0 = CFAbsoluteTimeGetCurrent();
        [vc view]; // 触发 viewDidLoad → wpBuildRows → addCell → 登记
        WPLog(@"Setting", @"[Search] prime %@: %lu items, %.1fms",
              clsName, (unsigned long)sRegistry[clsName].count,
              (CFAbsoluteTimeGetCurrent() - t0) * 1000);
    } @catch (NSException *e) {
        WPLog(@"Setting", @"[Search] prime %@ failed: %@", clsName, e);
    }
}

+ (NSArray<NSDictionary *> *)allSearchItems {
    static NSArray *cached = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        // 空跑补齐未打开页面
        [WPSearchPageCats() enumerateKeysAndObjectsUsingBlock:^(NSString *clsName, NSString *cat, BOOL *stop) {
            [self primePageClass:clsName cat:cat];
        }];
        // 汇总输出
        NSMutableArray *all = [NSMutableArray array];
        for (NSMutableDictionary *pageReg in sRegistry.objectEnumerator) {
            for (NSDictionary *item in pageReg.objectEnumerator) {
                [all addObject:item];
            }
        }
        WPLog(@"Setting", @"[Search] registry ready: %lu items from %lu pages",
              (unsigned long)all.count, (unsigned long)sRegistry.count);
        cached = all;
    });
    return cached;
}

@end
