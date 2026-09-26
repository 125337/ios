#import "WPUILayoutSettingsVC.h"
#import "../../Modules/FontLayout/FontLayoutConfig.h"
#import "../../Modules/FontLayout/FontLayoutHook.h"
#import "../../Core/MioAlertHelper.h"
#import "../../Core/LogManager.h"
#import <objc/runtime.h>

static NSString *const kGlobalLayoutEnabled = @"globalLayoutEnabled";
static NSString *const kGlobalFontSize = @"globalFontSize";
static NSString *const kChatLayoutEnabled = @"chatLayoutEnabled";
static NSString *const kChatFontSize = @"chatFontSize";
static NSString *const kApplyLayoutNow = @"applyLayoutNow";

// 范围必须与 FontLayoutHook 中的验证范围一致 (10-16)
static const CGFloat kMinFontSize = 10.0;
static const CGFloat kMaxFontSize = 16.0;

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
    CGFloat globalFontSize = [[ConfigManager valueForKey:kGlobalFontSize] floatValue];
    if (globalFontSize < kMinFontSize) globalFontSize = 16;

    [self.masterSwitchKeys addObject:kGlobalLayoutEnabled];
    cy = [self addMasterSwitchRowInGroup:group1
                                   title:@"修改全局布局"
                                     key:kGlobalLayoutEnabled
                                    isOn:globalOn
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        if (globalOn) {
            *ecy = [self addInputRowInGroup:expand
                                      title:@"全局字号(px)"
                                        key:kGlobalFontSize
                                      value:[NSString stringWithFormat:@"%.0f", globalFontSize]
                                       hint:@"16"
                                  valueType:InputValueTypeNumber
                                 alertTitle:@"设置全局字号"
                               alertMessage:[NSString stringWithFormat:@"请输入字号(%.0f-%.0f)", kMinFontSize, kMaxFontSize]
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
    CGFloat chatFontSize = [[ConfigManager valueForKey:kChatFontSize] floatValue];
    if (chatFontSize < kMinFontSize) chatFontSize = 16;

    [self.masterSwitchKeys addObject:kChatLayoutEnabled];
    cy = [self addMasterSwitchRowInGroup:group2
                                   title:@"修改对话布局"
                                     key:kChatLayoutEnabled
                                    isOn:chatOn
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        if (chatOn) {
            *ecy = [self addInputRowInGroup:expand
                                      title:@"对话字号(px)"
                                        key:kChatFontSize
                                      value:[NSString stringWithFormat:@"%.0f", chatFontSize]
                                       hint:@"16"
                                  valueType:InputValueTypeNumber
                                 alertTitle:@"设置对话字号"
                               alertMessage:[NSString stringWithFormat:@"请输入字号(%.0f-%.0f)", kMinFontSize, kMaxFontSize]
                                         cy:*ecy width:w];
        }
    }                                    cy:cy width:w];

    y = [self finishGroup:group2 atY:y height:cy];

    // ═════════════════════════════
    // Section 3: 立即生效（WCR 同款，无需重启）
    // ═════════════════════════════
    y = [self addSectionHeader:@"应用" y:y width:w];

    UIView *group3 = [self addTableGroupAtY:y width:w];
    cy = [self addButtonRowInGroup:group3
                             title:@"立即生效（无需重启）"
                              hint:@"修改开关或字号后点此，全微信立即刷新"
                               key:kApplyLayoutNow
                                cy:0 width:w];
    y = [self finishGroup:group3 atY:y height:cy];

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

    // 主开关变化 → WCR promptLayoutSizeRefresh 同款：弹窗询问立即生效（替代旧"重启微信"方案）
    if ([key isEqualToString:kGlobalLayoutEnabled]
        || [key isEqualToString:kChatLayoutEnabled]) {
        [MioAlertHelper showConfirmAlert:@"布局设置已保存，是否立即生效（无需重启微信）？"
                            confirmTitle:@"立即生效"
                               onConfirm:^{
            [FontLayoutHook applyLayoutRefreshNow];
        }];
    }
}

#pragma mark - 立即生效按钮

// WCR applyLayoutSizeRefreshNow 独立入口：改完字号（输入行走基类弹窗无回调钩子）后随时可点
- (void)buttonClicked:(NSString *)key {
    [super buttonClicked:key];
    if ([key isEqualToString:kApplyLayoutNow]) {
        [FontLayoutHook applyLayoutRefreshNow];
    }
}

@end
