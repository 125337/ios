#import "SettingMsgTailController.h"
#import "SettingAppTailSourceController.h"
#import "../../Modules/MsgTail/MsgTailConfig.h"
#import "../../Modules/Moments/MomentsConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/MioAlertHelper.h"
#import "../../Core/LogManager.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"

// 配置页布局（微信引擎渲染）：
//   卡片1 总开关 | 卡片2 小尾巴配置（应用图标模式开关 + 模式联动行） | 卡片3 快捷指令（开关 + 自定义指令编辑）
// 模式联动行：关=输入自定义小尾巴（文本编辑）；开=设置消息应用尾巴（push 预设选择页，卡片来源同款）
// 文案照抄黄白 TheMessageController 解密串表（分析文档 §二）
static NSString * const kEditTailKey = @"editMsgTail";       // 尾巴内容编辑行的伪 key（不落配置）
static NSString * const kTailSourceKey = @"appTailSourcePicker"; // 应用尾巴选择行的伪 key（不落配置）
static NSString * const kEditShortcutKey = @"editMsgTailShortcut"; // 指令编辑行的伪 key

@implementation SettingMsgTailController

// 应用尾巴来源右值：空=默认（腾讯手机管家），非空=预设名（未命中显示 appId 原文）
- (NSString *)appTailName {
    NSString *appId = [MsgTailConfig shared].appTailAppId ?: @"";
    if (appId.length == 0) return @"默认（腾讯手机管家）";
    for (NSDictionary *p in [[MomentsConfig shared] effectiveTailPresets]) {
        if ([p isKindOfClass:[NSDictionary class]] && [appId isEqualToString:p[@"appId"]]) {
            NSString *n = p[@"name"];
            if ([n isKindOfClass:[NSString class]] && n.length > 0) return n;
        }
    }
    return appId;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"消息小尾巴";
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
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

    // ===== 卡片1：总开关 =====
    y = [self addSectionHeader:@"消息小尾巴" y:y width:w];
    UIView *group1 = [self addTableGroupAtY:y width:w];
    CGFloat cy = [self addSwitchRowInGroup:group1
                                     title:@"启用消息尾巴"
                                      desc:@"发送文本消息时自动附加尾巴内容"
                                       key:@"enableMsgTail"
                                       isOn:cfg.enableMsgTail cy:0 width:w];
    y = [self finishGroup:group1 atY:y height:cy];

    // ===== 卡片2：小尾巴配置（应用图标模式开关 + 尾巴内容编辑，右值即当前内容） =====
    y = [self addSectionHeader:@"小尾巴配置" y:y width:w];
    UIView *group2 = [self addTableGroupAtY:y width:w];
    CGFloat cy2 = [self addSwitchRowInGroup:group2
                                     title:@"开启应用图标模式"
                                      desc:nil
                                       key:@"enableAppTail"
                                      isOn:cfg.enableAppTail cy:0 width:w];
    // 应用图标模式：编辑行换成应用选择行（卡片来源同款 push 选择页）；尾巴文本沿用 msgTail
    if (cfg.enableAppTail) {
        cy2 = [self addInputRowInGroup:group2
                                 title:@"设置消息应用尾巴"
                                   key:kTailSourceKey
                                 value:[self appTailName]
                                  hint:[self appTailName]
                             valueType:InputValueTypeText
                            alertTitle:nil
                          alertMessage:nil
                                    cy:cy2
                                 width:w];
    } else {
        NSString *tailRowTitle = @"输入自定义小尾巴";
        cy2 = [self addInputRowInGroup:group2
                                 title:tailRowTitle
                                   key:kEditTailKey
                                 value:(cfg.msgTail.length ? cfg.msgTail : nil)
                                  hint:@"输入尾巴内容"
                             valueType:InputValueTypeText
                            alertTitle:tailRowTitle
                          alertMessage:nil
                                    cy:cy2
                                 width:w];
    }
    cy2 = [self addSectionFooter:@"追加在原文末尾，不额外加分隔符\n可在内容开头自带换行或空格" y:cy2 width:w];
    [self finishGroup:group2 atY:y height:cy2];

    // ===== 卡片3：快捷指令 =====
    UIView *group3 = [self addTableGroupAtY:y width:w];
    CGFloat cy3 = [self addSwitchRowInGroup:group3
                                      title:@"启用快捷指令切换"
                                       desc:nil
                                        key:@"msgTailShortcutEnabled"
                                       isOn:cfg.msgTailShortcutEnabled cy:0 width:w];
    cy3 = [self addSeparatorInGroup:group3 cy:cy3 width:w];
    cy3 = [self addInfoRowInGroup:group3
                            title:@"当前指令"
                       rightValue:(cfg.msgTailShortcut.length ? cfg.msgTailShortcut : @"暂无设置")
                         copyText:nil
                               cy:cy3
                            width:w];
    cy3 = [self addSeparatorInGroup:group3 cy:cy3 width:w];
    cy3 = [self addInputRowInGroup:group3
                             title:@"自定义指令"
                               key:kEditShortcutKey
                             value:nil
                              hint:@"输入指令"
                         valueType:InputValueTypeText
                        alertTitle:@"自定义指令"
                      alertMessage:@"发送指令可切换消息尾巴，不会发给对方。"
                                cy:cy3
                             width:w];
    cy3 = [self addSectionFooter:@"发送指令可切换消息尾巴，不会发给对方。" y:cy3 width:w];
    [self finishGroup:group3 atY:y height:cy3];
}

// 应用图标模式切换 → 尾巴行标题联动（引用卡/应用图标两种文案），重建页面
- (void)wpAfterSwitchChanged:(NSString *)key on:(BOOL)on {
    if ([key isEqualToString:@"enableAppTail"]) {
        [self wpReloadUI];
        return;
    }
    [super wpAfterSwitchChanged:key on:on];
}

#pragma mark - 输入行拦截：输入自定义小尾巴 / 自定义指令

- (void)wpRunInputFlow:(NSDictionary *)row {
    NSString *key = row[@"key"];
    if (![key isKindOfClass:[NSString class]]) {
        [super wpRunInputFlow:row];
        return;
    }

    MsgTailConfig *cfg = [MsgTailConfig shared];

    // 应用尾巴选择行：push 预设选择页（卡片来源同款），返回后 viewWillAppear 刷新右值
    if ([key isEqualToString:kTailSourceKey]) {
        [self.navigationController pushViewController:[[SettingAppTailSourceController alloc] init] animated:YES];
        return;
    }

    if ([key isEqualToString:kEditTailKey]) {
        [MioAlertHelper showInputAlert:@"输入自定义小尾巴"
                               message:@""
                           initialText:(cfg.msgTail ?: @"")
                           placeholder:@"输入尾巴内容"
                              keyboard:UIKeyboardTypeDefault
                                secure:NO
                            onConfirm:^(NSString *inputText) {
            NSString *nv = [inputText stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]] ?: @"";
            if (nv.length > 256) nv = [nv substringToIndex:256]; // 黄白同款 256 上限（§3.2 showTextFieldWithMaxLen:256）
            cfg.msgTail = nv;
            [ConfigManager saveAll];
            [self wpReloadUI];
        }];
        return;
    }

    if ([key isEqualToString:kEditShortcutKey]) {
        [MioAlertHelper showInputAlert:@"自定义指令"
                               message:@"发送指令可切换消息尾巴，不会发给对方。"
                           initialText:(cfg.msgTailShortcut ?: @"")
                           placeholder:@"输入指令"
                              keyboard:UIKeyboardTypeDefault
                                secure:NO
                            onConfirm:^(NSString *inputText) {
            NSString *nv = inputText ?: @"";
            // 黄白同款校验（§3.4）："指令不能为空或包含换行"
            if (nv.length == 0 || [nv rangeOfString:@"\n"].location != NSNotFound
                || [nv rangeOfString:@"\r"].location != NSNotFound) {
                WPShowToast(@"指令不能为空或包含换行");
                return;
            }
            cfg.msgTailShortcut = nv;
            [ConfigManager saveAll];
            [self wpReloadUI];
        }];
        return;
    }

    [super wpRunInputFlow:row];
}

@end
