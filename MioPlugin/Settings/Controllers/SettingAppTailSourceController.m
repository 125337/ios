#import "SettingAppTailSourceController.h"
#import "../../Modules/MsgTail/MsgTailConfig.h"
#import "../../Modules/Moments/MomentsConfig.h"
#import "../../Core/ConfigManager.h"

// 预设点选落盘 appTailAppId：空=默认（腾讯手机管家），非空=所选预设 appid（图标随 appid 渲染）
@implementation SettingAppTailSourceController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"消息应用尾巴";
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self wpReloadUI];
}

// appTailAppId → 预设名（未命中返回 appId 本身）
- (NSString *)nameForAppId:(NSString *)appId {
    for (NSDictionary *p in [[MomentsConfig shared] effectiveTailPresets]) {
        if ([p isKindOfClass:[NSDictionary class]] && [appId isEqualToString:p[@"appId"]]) {
            NSString *n = p[@"name"];
            if ([n isKindOfClass:[NSString class]] && n.length > 0) return n;
        }
    }
    return appId;
}

- (void)onPickDefault {
    [MsgTailConfig shared].appTailAppId = @"";
    [ConfigManager saveAll];
    [self wpReloadUI];
}

- (void)onPickPreset:(UIButton *)sender {
    NSArray<NSDictionary *> *presets = [[MomentsConfig shared] effectiveTailPresets];
    NSInteger idx = sender.tag;
    if (idx < 0 || idx >= (NSInteger)presets.count) return;
    NSDictionary *p = presets[idx];
    if (![p isKindOfClass:[NSDictionary class]]) return;
    NSString *appId = p[@"appId"];
    if (![appId isKindOfClass:[NSString class]] || appId.length == 0) return;
    [MsgTailConfig shared].appTailAppId = appId;
    [ConfigManager saveAll];
    [self wpReloadUI];
}

#pragma mark - UI

- (void)wpBuildRows {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    MsgTailConfig *cfg = [MsgTailConfig shared];
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;
    NSArray<NSDictionary *> *presets = [[MomentsConfig shared] effectiveTailPresets];
    BOOL isDefault = (cfg.appTailAppId.length == 0);

    // 卡片1：当前生效 + 默认项
    y = [self addSectionHeader:@"消息应用尾巴来源" y:y width:w];
    UIView *group1 = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;
    cy = [self addInfoRowInGroup:group1
                           title:@"当前生效"
                      rightValue:(isDefault ? @"默认（腾讯手机管家）" : [self nameForAppId:cfg.appTailAppId])
                        copyText:nil
                              cy:cy
                           width:w];
    cy = [self addSeparatorInGroup:group1 cy:cy width:w];
    cy = [self addNavRowInGroup:group1
                          title:@"默认（腾讯手机管家）"
                       subtitle:(isDefault ? @"使用中" : @"")
                             tag:-1
                          action:@selector(onPickDefault)
                              cy:cy
                           width:w];
    y = [self finishGroup:group1 atY:y height:cy];
    [self addSectionFooter:@"尾巴消息以所选应用的卡片形态发送，图标随应用变化" y:y width:w];

    // 卡片2：预设列表（Moments 内置池，标题带总数）
    y = [self addSectionHeader:[NSString stringWithFormat:@"预设列表（%lu）", (unsigned long)presets.count] y:y width:w];
    UIView *group2 = [self addTableGroupAtY:y width:w];
    CGFloat cy2 = 0;
    for (NSInteger i = 0; i < (NSInteger)presets.count; i++) {
        NSDictionary *p = presets[i];
        if (![p isKindOfClass:[NSDictionary class]]) continue;
        NSString *name = p[@"name"];
        NSString *appId = p[@"appId"];
        if (![name isKindOfClass:[NSString class]] || name.length == 0) continue;
        if (![appId isKindOfClass:[NSString class]]) appId = @"";
        NSString *mark = [cfg.appTailAppId isEqualToString:appId] ? @"使用中" : nil;
        if (i > 0) cy2 = [self addSeparatorInGroup:group2 cy:cy2 width:w];
        cy2 = [self addNavRowInGroup:group2
                               title:name
                            subtitle:mark
                                 tag:(NSInteger)i
                              action:@selector(onPickPreset:)
                                  cy:cy2
                               width:w];
    }
    y = [self finishGroup:group2 atY:y height:cy2];
    [self addSectionFooter:@"点击预设项切换尾巴来源应用" y:y width:w];
}

@end
