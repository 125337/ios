#import "WPUILayoutSettingsVC.h"
#import "../../Modules/FontLayout/FontLayoutConfig.h"
#import "../../Core/MioRestartHelper.h"
#import "../../Core/LogManager.h"
#import <objc/runtime.h>

static NSString *const kGlobalLayoutEnabled = @"globalLayoutEnabled";
static NSString *const kGlobalFontSize = @"globalFontSize";
static NSString *const kChatLayoutEnabled = @"chatLayoutEnabled";
static NSString *const kChatFontSize = @"chatFontSize";

// 布局缩放倍率限幅（必须与 FontLayoutHook 中一致；WCR LayoutSize 同款语义：原始值 × 倍率）
static const CGFloat kMinScale = 0.7;
static const CGFloat kMaxScale = 1.4;

/// 旧配置迁移：历史版本存字号 px（10-16），超限视为旧值按 /16 归一为倍率（14 → 0.875）
static CGFloat wpNormalizedScale(CGFloat v) {
    if (v > kMaxScale) return (v > 3.0) ? v / 16.0 : 1.0;
    if (v < kMinScale) return 1.0;
    return v;
}

@implementation WPUILayoutSettingsVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"布局设置";
    [self buildUI];
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    // ═════════════════════════════
    // Section 1: 全局布局
    // ═════════════════════════════
    y = [self addSectionHeader:@"全局布局" y:y width:w];

    UIView *group1 = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    BOOL globalOn = [[ConfigManager valueForKey:kGlobalLayoutEnabled] boolValue];
    CGFloat globalFontSize = wpNormalizedScale([[ConfigManager valueForKey:kGlobalFontSize] floatValue]);

    [self.masterSwitchKeys addObject:kGlobalLayoutEnabled];
    cy = [self addMasterSwitchRowInGroup:group1
                                   title:@"修改全局布局"
                                     key:kGlobalLayoutEnabled
                                    isOn:globalOn
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        if (globalOn) {
            *ecy = [self addInputRowInGroup:expand
                                      title:@"全局布局缩放倍率"
                                        key:kGlobalFontSize
                                      value:[NSString stringWithFormat:@"%.1f", globalFontSize]
                                       hint:@"1.0"
                                  valueType:InputValueTypeNumber
                                 alertTitle:@"设置全局布局缩放"
                               alertMessage:[NSString stringWithFormat:@"请输入缩放倍率(%.1f-%.1f)\n所有界面元素尺寸×倍率等比缩放", kMinScale, kMaxScale]
                                         cy:*ecy width:w];
        }
    }                                    cy:cy width:w];

    y = [self finishGroup:group1 atY:y height:cy];

    // ═════════════════════════════
    // Section 2: 对话布局
    // ═════════════════════════════
    y = [self addSectionHeader:@"对话布局" y:y width:w];

    UIView *group2 = [self addTableGroupAtY:y width:w];
    cy = 0;

    BOOL chatOn = [[ConfigManager valueForKey:kChatLayoutEnabled] boolValue];
    CGFloat chatFontSize = wpNormalizedScale([[ConfigManager valueForKey:kChatFontSize] floatValue]);

    [self.masterSwitchKeys addObject:kChatLayoutEnabled];
    cy = [self addMasterSwitchRowInGroup:group2
                                   title:@"修改对话布局"
                                     key:kChatLayoutEnabled
                                    isOn:chatOn
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        if (chatOn) {
            *ecy = [self addInputRowInGroup:expand
                                      title:@"对话布局缩放倍率"
                                        key:kChatFontSize
                                      value:[NSString stringWithFormat:@"%.1f", chatFontSize]
                                       hint:@"1.0"
                                  valueType:InputValueTypeNumber
                                 alertTitle:@"设置对话布局缩放"
                               alertMessage:[NSString stringWithFormat:@"请输入缩放倍率(%.1f-%.1f)\n所有界面元素尺寸×倍率等比缩放", kMinScale, kMaxScale]
                                         cy:*ecy width:w];
        }
    }                                    cy:cy width:w];

    y = [self finishGroup:group2 atY:y height:cy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

#pragma mark - 开关回调

- (void)switchChanged:(UISwitch *)sender {
    [super switchChanged:sender];

    NSString *key = objc_getAssociatedObject(sender, "key");
    if (!key) return;

    // 验证保存后的值
    FontLayoutConfig *cfg = [FontLayoutConfig shared];
    WPLog(@"FontLayout", @"[UI] switchChanged: key=%@ isOn=%d → globalOn=%d globalSize=%.0f chatOn=%d chatSize=%.0f",
          key, sender.on,
          cfg.globalLayoutEnabled, cfg.globalFontSize,
          cfg.chatLayoutEnabled, cfg.chatFontSize);

    // 主开关变化 → 弹重启弹窗
    if ([key isEqualToString:kGlobalLayoutEnabled]
        || [key isEqualToString:kChatLayoutEnabled]) {
        [MioRestartHelper showRestartAlertFromVC:self];
    }
}

@end
