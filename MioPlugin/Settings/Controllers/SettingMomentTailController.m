#import "SettingMomentTailController.h"
#import "../../Modules/Moments/MomentsConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/LogManager.h"
#import "../../Core/MioAlertHelper.h"

// 朋友圈小尾巴设置页（微信引擎渲染）
// 卡片1 总开关（开启后才显示卡片2/卡片3）
// 卡片2 默认尾巴：当前选择（tailAppId 命中预设显示预设名）+ 自定义输入弹窗
//   （预填只跟随用户手输值 tailCustomInput，与预设点选解耦；手输保存同时写两键）
// 卡片3 预设列表（含固定项"无小尾巴"）：只显示昵称，点击选中标"使用中"
@implementation SettingMomentTailController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"朋友圈小尾巴";
    // 不在此处 buildUI：viewWillAppear 统一重建，避免同表叠行
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self wpRebuildWeChatTable];
    [self buildUI];
}

#pragma mark - 状态/保存

- (void)reloadTable {
    [self wpRebuildWeChatTable];
    [self buildUI];
}

- (void)applyTailAppId:(NSString *)appId {
    MomentsConfig *config = [MomentsConfig shared];
    config.tailAppId = appId ?: @"";
    [ConfigManager saveAll];
    WPLog(@"Moments", @"[Tail] 默认尾巴 -> %@", config.tailAppId.length ? config.tailAppId : @"(无)");
    [self reloadTable];
}

// 卡片1 开关切换后重建，显隐卡片2/卡片3
// 注意：微信引擎开关回调走 wpHandleSwitchKey → wpAfterSwitchChanged（switchChanged: 已不被引擎触发）
- (void)wpAfterSwitchChanged:(NSString *)key on:(BOOL)on {
    if ([key isEqualToString:@"tailEnabled"]) [self reloadTable];
}

#pragma mark - 自定义输入/预设点选

// 自定义输入弹窗：预填只跟随用户手输值（tailCustomInput），与预设点选（tailAppId）解耦
- (void)onCustomInput {
    [MioAlertHelper showInputAlert:@"自定义尾巴"
                           message:@"输入 Appid\n留空表示无小尾巴\n也可在下方预设列表中点选"
                       initialText:([MomentsConfig shared].tailCustomInput ?: @"")
                       placeholder:@"输入Appid"
                          keyboard:UIKeyboardTypeDefault
                            secure:NO
                        onConfirm:^(NSString *inputText) {
        NSString *v = [inputText stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]] ?: @"";
        MomentsConfig *config = [MomentsConfig shared];
        config.tailCustomInput = v;
        config.tailAppId = v;
        [ConfigManager saveAll];
        WPLog(@"Moments", @"[Tail] 手输尾巴 -> %@", v.length ? v : @"(无)");
        [self reloadTable];
    }];
}

- (void)onPickNone {
    [self applyTailAppId:@""];
}

- (void)onPickPreset:(UIButton *)sender {
    // 与卡片3渲染同源：effectiveTailPresets（自定义列表优先，回落内置 304 项）
    NSArray<NSDictionary *> *presets = [MomentsConfig shared].effectiveTailPresets;
    NSInteger idx = sender.tag;
    if (idx < 0 || idx >= (NSInteger)presets.count) return;
    NSDictionary *p = presets[idx];
    if (![p isKindOfClass:[NSDictionary class]]) return;
    NSString *appId = p[@"appId"];
    if (![appId isKindOfClass:[NSString class]] || appId.length == 0) return;
    [self applyTailAppId:appId];
}

#pragma mark - UI

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    MomentsConfig *config = [MomentsConfig shared];
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    // 卡片1：总开关
    y = [self addSectionHeader:@"朋友圈小尾巴" y:y width:w];
    UIView *group1 = [self addTableGroupAtY:y width:w];
    CGFloat cy1 = [self addSwitchRowInGroup:group1 title:@"开启小尾巴" desc:nil key:@"tailEnabled" isOn:config.tailEnabled cy:0 width:w];
    y = [self finishGroup:group1 atY:y height:cy1];
    [self addSectionFooter:@"开启后发朋友圈可携带自定义来源小尾巴" y:y width:w];

    if (!config.tailEnabled) return;

    NSString *currentName = [config tailDisplayName];
    BOOL noneSelected = (config.tailAppId.length == 0);
    NSArray<NSDictionary *> *presets = [config effectiveTailPresets];

    // 卡片2：默认尾巴（当前选择 / 自定义输入 AppID 两个独立行）
    // 输入行右值恒显 hint，不反显 tailAppId——预设点选不联动到输入行；
    // 仅当用户手动输入的 appid 命中预设时，"当前选择"行才显示对应预设名
    y = [self addSectionHeader:@"默认尾巴" y:y width:w];
    UIView *group2 = [self addTableGroupAtY:y width:w];
    CGFloat cy2 = 0;
    cy2 = [self addInfoRowInGroup:group2
                             title:@"当前选择"
                        rightValue:currentName
                          copyText:nil
                                cy:cy2
                             width:w];
    cy2 = [self addSeparatorInGroup:group2 cy:cy2 width:w];
    // 输入行改 nav 行 + 自定义弹窗：预填只跟随用户手输值（tailCustomInput），
    // 基类 addInputRowInGroup 按 key 读 tailAppId 预填会带进预设点选值，故弃用
    cy2 = [self addNavRowInGroup:group2
                           title:@"自定义输入AppID"
                        subtitle:@"输入Appid"
                             tag:0
                          action:@selector(onCustomInput)
                              cy:cy2
                           width:w];
    y = [self finishGroup:group2 atY:y height:cy2];

    // 卡片3：预设列表（固定项"无小尾巴" + 内置/自定义预设，标题带总数统计）
    y = [self addSectionHeader:[NSString stringWithFormat:@"预设列表（%lu）", (unsigned long)(presets.count + 1)] y:y width:w];
    UIView *group3 = [self addTableGroupAtY:y width:w];
    CGFloat cy3 = 0;
    cy3 = [self addNavRowInGroup:group3
                           title:@"无小尾巴"
                        subtitle:(noneSelected ? @"使用中" : @"")
                             tag:-1
                          action:@selector(onPickNone)
                              cy:cy3
                           width:w];
    for (NSInteger i = 0; i < (NSInteger)presets.count; i++) {
        NSDictionary *p = presets[i];
        if (![p isKindOfClass:[NSDictionary class]]) continue;
        NSString *name = p[@"name"];
        NSString *appId = p[@"appId"];
        if (![name isKindOfClass:[NSString class]] || name.length == 0) continue;
        if (![appId isKindOfClass:[NSString class]]) appId = @"";
        BOOL selected = [config.tailAppId isEqualToString:appId];
        cy3 = [self addSeparatorInGroup:group3 cy:cy3 width:w];
        // 只显示昵称；选中项标"使用中"，不展示 appid
        cy3 = [self addNavRowInGroup:group3
                               title:name
                            subtitle:(selected ? @"使用中" : @"")
                                 tag:(NSInteger)i
                              action:@selector(onPickPreset:)
                                  cy:cy3
                                   width:w];
    }
    y = [self finishGroup:group3 atY:y height:cy3];

    [self addSectionFooter:@"点击预设项切换默认尾巴\nappid 可后续在预设中补充" y:y width:w];
}

@end
