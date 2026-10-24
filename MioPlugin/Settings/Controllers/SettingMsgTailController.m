#import "SettingMsgTailController.h"
#import "../../Modules/MsgTail/MsgTailConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/MioAlertHelper.h"
#import "../../Core/LogManager.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"

// 配置页布局（微信引擎渲染）：
//   卡片1 总开关 | 卡片2 小尾巴配置（输入自定义小尾巴，右值=当前内容） | 卡片3 快捷指令（开关 + 自定义指令编辑）
// 文案照抄黄白 TheMessageController 解密串表（分析文档 §二）
static NSString * const kEditTailKey = @"editMsgTail";       // 尾巴内容编辑行的伪 key（不落配置）
static NSString * const kEditShortcutKey = @"editMsgTailShortcut"; // 指令编辑行的伪 key

@implementation SettingMsgTailController

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

    // ===== 卡片2：小尾巴配置（当前内容与编辑合并为一行，右值即当前内容） =====
    y = [self addSectionHeader:@"小尾巴配置" y:y width:w];
    UIView *group2 = [self addTableGroupAtY:y width:w];
    CGFloat cy2 = [self addInputRowInGroup:group2
                                     title:@"输入自定义小尾巴"
                                       key:kEditTailKey
                                     value:(cfg.msgTail.length ? cfg.msgTail : nil)
                                      hint:@"输入尾巴内容"
                                 valueType:InputValueTypeText
                                alertTitle:@"输入自定义小尾巴"
                              alertMessage:nil
                                        cy:0
                                     width:w];
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

#pragma mark - 输入行拦截：输入自定义小尾巴 / 自定义指令

- (void)wpRunInputFlow:(NSDictionary *)row {
    NSString *key = row[@"key"];
    if (![key isKindOfClass:[NSString class]]) {
        [super wpRunInputFlow:row];
        return;
    }

    MsgTailConfig *cfg = [MsgTailConfig shared];

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
