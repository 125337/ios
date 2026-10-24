#import "SettingMusicCardSourceController.h"
#import "../../Modules/MusicShare/MusicShareConfig.h"
#import "../../Modules/Moments/MomentsConfig.h"
#import "../../Core/ConfigManager.h"

// 预设点选落盘 cardAppId：空=自动（跟随音源官方），非空=伪装 appid（渲染实测 appid 任意可填）
@implementation SettingMusicCardSourceController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"卡片来源";
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self wpReloadUI];
}

// cardAppId → 预设名（未命中返回 appId 本身）
- (NSString *)nameForAppId:(NSString *)appId {
    for (NSDictionary *p in [[MomentsConfig shared] effectiveTailPresets]) {
        if ([p isKindOfClass:[NSDictionary class]] && [appId isEqualToString:p[@"appId"]]) {
            NSString *n = p[@"name"];
            if ([n isKindOfClass:[NSString class]] && n.length > 0) return n;
        }
    }
    return appId;
}

- (void)onPickAuto {
    [MusicShareConfig shared].cardAppId = @"";
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
    [MusicShareConfig shared].cardAppId = appId;
    [ConfigManager saveAll];
    [self wpReloadUI];
}

#pragma mark - UI

- (void)wpBuildRows {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    MusicShareConfig *cfg = [MusicShareConfig shared];
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;
    NSArray<NSDictionary *> *presets = [[MomentsConfig shared] effectiveTailPresets];
    BOOL isAuto = (cfg.cardAppId.length == 0);

    // 卡片1：当前生效 + 自动项
    y = [self addSectionHeader:@"点歌卡片来源" y:y width:w];
    UIView *group1 = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;
    cy = [self addInfoRowInGroup:group1
                           title:@"当前生效"
                      rightValue:(isAuto ? @"自动（官方）" : [self nameForAppId:cfg.cardAppId])
                        copyText:nil
                              cy:cy
                           width:w];
    cy = [self addSeparatorInGroup:group1 cy:cy width:w];
    cy = [self addNavRowInGroup:group1
                          title:@"自动（跟随音源官方）"
                       subtitle:(isAuto ? @"使用中" : @"")
                             tag:-1
                          action:@selector(onPickAuto)
                              cy:cy
                           width:w];
    y = [self finishGroup:group1 atY:y height:cy];
    [self addSectionFooter:@"自动：QQ 卡显示 QQ 音乐、网易卡显示网易云\n也可从下方列表任选一个伪装来源" y:y width:w];

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
        NSString *mark = [cfg.cardAppId isEqualToString:appId] ? @"使用中" : nil;
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
    [self addSectionFooter:@"点击预设项切换卡片来源" y:y width:w];
}

@end
