#import "SettingKeywordAlertController.h"
#import "KeywordListEditorVC.h"
#import "KeywordAlertHistoryVC.h"
#import "../../Modules/KeywordAlert/KeywordAlertConfig.h"
#import "../../Modules/KeywordAlert/KeywordAlertEngine.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/LogManager.h"

@implementation SettingKeywordAlertController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"关键词提醒";
    WPLog(@"Setting", @"[KeywordAlert] 设置页打开");
    // 不在此处 buildUI：viewWillAppear 统一重建，避免同表叠行
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    // 微信引擎表每次重建后再添加行，防止 pop 返回/多次进入时行叠加
    [self wpRebuildWeChatTable];
    [self buildUI];
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }

    KeywordAlertConfig *config = [KeywordAlertConfig shared];
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    // ===== 功能开关卡片（手风琴） =====
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addMasterSwitchRowInGroup:group
                                    title:@"启用关键词提醒"
                                      key:@"keywordAlertEnabled"
                                     isOn:config.keywordAlertEnabled
                               subBuilder:^(UIView *expand, CGFloat *ecy) {
        KeywordAlertConfig *c = [KeywordAlertConfig shared];
        NSArray *kwList = [KeywordAlertEngine parseKeywordList:c.keywordAlertKeywords];
        NSArray *disabledList = [KeywordAlertEngine parseKeywordList:c.keywordAlertDisabledKeywords];

        *ecy = [self addNavRowInGroup:expand
                                  title:@"关键词列表"
                               subtitle:[NSString stringWithFormat:@"%lu 个关键词", (unsigned long)kwList.count]
                                    tag:100
                                 action:@selector(onKeywordsTap)
                                     cy:*ecy
                                  width:w];

        *ecy = [self addNavRowInGroup:expand
                                  title:@"禁用词"
                               subtitle:[NSString stringWithFormat:@"%lu 个禁用词", (unsigned long)disabledList.count]
                                    tag:200
                                 action:@selector(onDisabledTap)
                                     cy:*ecy
                                  width:w];

        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"仅群聊生效"
                                        key:@"keywordAlertGroupOnlyEnabled"
                                       isOn:c.keywordAlertGroupOnlyEnabled
                                         cy:*ecy
                                      width:w];

        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"仅私聊生效"
                                        key:@"keywordAlertPrivateOnlyEnabled"
                                       isOn:c.keywordAlertPrivateOnlyEnabled
                                         cy:*ecy
                                      width:w];

        NSString *groupSub = c.keywordAlertSelectedGroups.count > 0
            ? [NSString stringWithFormat:@"已选 %lu 个群", (unsigned long)c.keywordAlertSelectedGroups.count]
            : @"不限";
        *ecy = [self addNavRowInGroup:expand
                                  title:@"指定群范围"
                               subtitle:groupSub
                                    tag:300
                                 action:@selector(onGroupsTap)
                                     cy:*ecy
                                  width:w];

        *ecy = [self addHintRowInGroup:expand
                                  text:@"仅群聊/仅私聊都开或都关 = 全部会话生效\n指定群范围仅对群聊消息生效"
                                    cy:*ecy
                                  width:w];
    } cy:cy width:w];

    y = [self finishGroup:group atY:y height:cy];

    // ===== 提醒方式卡片 =====
    y += 8;
    y = [self addSectionHeader:@"提醒方式" y:y width:w];
    UIView *mGroup = [self addTableGroupAtY:y width:w];
    CGFloat mcy = 0;

    mcy = [self addSwitchRowInGroup:mGroup
                               title:@"前台横幅提醒"
                                desc:@"微信在前台时顶部弹横幅"
                                 key:@"keywordAlertBannerEnabled"
                                isOn:config.keywordAlertBannerEnabled
                                  cy:mcy
                               width:w];

    mcy = [self addSeparatorInGroup:mGroup cy:mcy width:w];

    mcy = [self addSwitchRowInGroup:mGroup
                               title:@"后台系统通知"
                                desc:@"微信在后台/收起时发系统通知"
                                 key:@"keywordAlertNotifyEnabled"
                                isOn:config.keywordAlertNotifyEnabled
                                  cy:mcy
                               width:w];

    y = [self finishGroup:mGroup atY:y height:mcy];

    // ===== 历史记录卡片 =====
    y += 8;
    y = [self addSectionHeader:@"历史记录" y:y width:w];
    UIView *hGroup = [self addTableGroupAtY:y width:w];
    CGFloat hcy = 0;

    hcy = [self addNavRowInGroup:hGroup
                             title:@"查看提醒历史"
                          subtitle:[NSString stringWithFormat:@"%lu 条", (unsigned long)[config.keywordAlertHistoryRecords ?: @[] count]]
                               tag:400
                            action:@selector(onHistoryTap)
                                cy:hcy
                             width:w];

    hcy = [self addSeparatorInGroup:hGroup cy:hcy width:w];

    hcy = [self addButtonRowInGroup:hGroup
                              title:@"清空历史"
                               hint:nil
                                key:@"keywordAlertClearHistory"
                                 cy:hcy
                              width:w];

    y = [self finishGroup:hGroup atY:y height:hcy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

#pragma mark - Actions

- (void)onKeywordsTap {
    [self presentKeywordEditorWithTitle:@"关键词列表"
                             initialText:[KeywordAlertConfig shared].keywordAlertKeywords
                               saveBlock:^(NSString *text) {
        [KeywordAlertConfig shared].keywordAlertKeywords = text;
        [ConfigManager saveAll];
        WPLog(@"Setting", @"[KeywordAlert] 关键词列表已保存");
        [self wpRebuildWeChatTable];
        [self buildUI];
    }];
}

- (void)onDisabledTap {
    [self presentKeywordEditorWithTitle:@"禁用词"
                             initialText:[KeywordAlertConfig shared].keywordAlertDisabledKeywords
                               saveBlock:^(NSString *text) {
        [KeywordAlertConfig shared].keywordAlertDisabledKeywords = text;
        [ConfigManager saveAll];
        WPLog(@"Setting", @"[KeywordAlert] 禁用词已保存");
        [self wpRebuildWeChatTable];
        [self buildUI];
    }];
}

- (void)presentKeywordEditorWithTitle:(NSString *)title
                           initialText:(NSString *)initialText
                             saveBlock:(void (^)(NSString *))saveBlock {
    KeywordListEditorVC *editor = [[KeywordListEditorVC alloc] init];
    editor.editorTitle = title;
    editor.initialText = initialText;
    editor.saveBlock = [^(NSString *text) {
        saveBlock(text);
    } copy];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:editor];
    nav.modalPresentationStyle = UIModalPresentationPageSheet;
    [self presentViewController:nav animated:YES completion:nil];
}

- (void)onGroupsTap {
    @try {
        KeywordAlertConfig *config = [KeywordAlertConfig shared];
        MioTweakGroupSelectsController *vc = [[MioTweakGroupSelectsController alloc]
            initWithSelectedGroups:config.keywordAlertSelectedGroups ?: @[]
            title:@"选择提醒生效的群"];
        vc.delegate = self;
        WPLog(@"Setting", @"[KeywordAlert] 打开群范围选择 (当前 %lu 个)",
              (unsigned long)(config.keywordAlertSelectedGroups ?: @[]).count);
        // WCR 同款：直接 present 微信原生半屏多选群聊页（不自建壳，导航栏由微信管理）
        [vc presentFromViewController:self];
    } @catch (NSException *e) {
        WPLog(@"Setting", @"[KeywordAlert] 群选择页异常: %@ - %@", e.name, e.reason);
    }
}

- (void)onHistoryTap {
    WPLog(@"Setting", @"[KeywordAlert] 打开提醒历史页");
    KeywordAlertHistoryVC *vc = [[KeywordAlertHistoryVC alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
}

- (void)buttonClicked:(NSString *)key {
    if ([key isEqualToString:@"keywordAlertClearHistory"]) {
        [KeywordAlertConfig shared].keywordAlertHistoryRecords = @[];
        [ConfigManager saveAll];
        WPLog(@"Setting", @"[KeywordAlert] 历史记录已清空");
        [self wpRebuildWeChatTable];
        [self buildUI];
        return;
    }
    [super buttonClicked:key];
}

#pragma mark - MioTweakGroupSelectsDelegate

- (void)onGroupSelectReturn:(NSArray<NSString *> *)groupIds {
    [KeywordAlertConfig shared].keywordAlertSelectedGroups = groupIds ?: @[];
    [ConfigManager saveAll];
    WPLog(@"Setting", @"[KeywordAlert] 群范围已保存: %lu 个", (unsigned long)groupIds.count);
    [self wpRebuildWeChatTable];
    [self buildUI];
}

@end
