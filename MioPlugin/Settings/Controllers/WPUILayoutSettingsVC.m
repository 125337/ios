#import "WPUILayoutSettingsVC.h"
#import "../../Modules/FontLayout/FontLayoutConfig.h"
#import "../../Modules/FontLayout/FontLayoutHook.h"
#import "../../Core/MioRestartHelper.h"
#import <objc/runtime.h>

static NSString *const kGlobalLayoutEnabled = @"globalLayoutEnabled";
static NSString *const kGlobalFontSize = @"globalFontSize";
static NSString *const kChatLayoutEnabled = @"chatLayoutEnabled";
static NSString *const kChatFontSize = @"chatFontSize";

// 字号限幅（锤子助手同款语义：#font_set 下的 alllevel/webLevel/chatLevel 固定值替换 10-16）
static const CGFloat kMinFontSize = 10;
static const CGFloat kMaxFontSize = 16;

static BOOL wpFontSizeValid(CGFloat v) {
    return v >= kMinFontSize && v <= kMaxFontSize;
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
    CGFloat globalSize = [[ConfigManager valueForKey:kGlobalFontSize] floatValue];

    [self.masterSwitchKeys addObject:kGlobalLayoutEnabled];
    cy = [self addMasterSwitchRowInGroup:group1
                                   title:@"修改全局布局"
                                     key:kGlobalLayoutEnabled
                                    isOn:globalOn
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        if (globalOn) {
            *ecy = [self addInputRowInGroup:expand
                                      title:@"全局布局字号"
                                        key:kGlobalFontSize
                                      value:wpFontSizeValid(globalSize) ? [NSString stringWithFormat:@"%.0f", globalSize] : @""
                                       hint:@"10-16"
                                  valueType:InputValueTypeNumber
                                 alertTitle:@"设置全局布局字号"
                               alertMessage:@"请输入字号(10-16)\n数值越小全局界面字号越小"
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
    CGFloat chatSize = [[ConfigManager valueForKey:kChatFontSize] floatValue];

    [self.masterSwitchKeys addObject:kChatLayoutEnabled];
    cy = [self addMasterSwitchRowInGroup:group2
                                   title:@"修改对话布局"
                                     key:kChatLayoutEnabled
                                    isOn:chatOn
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        if (chatOn) {
            *ecy = [self addInputRowInGroup:expand
                                      title:@"对话布局字号"
                                        key:kChatFontSize
                                      value:wpFontSizeValid(chatSize) ? [NSString stringWithFormat:@"%.0f", chatSize] : @""
                                       hint:@"10-16"
                                  valueType:InputValueTypeNumber
                                 alertTitle:@"设置对话布局字号"
                               alertMessage:@"请输入字号(10-16)\n数值越小聊天界面字号越小"
                                         cy:*ecy width:w];
        }
    }                                    cy:cy width:w];

    y = [self finishGroup:group2 atY:y height:cy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

#pragma mark - 开关回调（微信引擎入口）

- (void)wpAfterSwitchChanged:(NSString *)key on:(BOOL)on {
    if (![key isEqualToString:kGlobalLayoutEnabled]
        && ![key isEqualToString:kChatLayoutEnabled]) {
        return;
    }

    // 开关即时补装 hook（幂等；启动期 [SKIP] 的此时装上；重启后由启动 install 全量接管）
    [FontLayoutHook notifySwitchChanged];

    // 复用统一重启弹窗：设置已保存，重启生效
    [MioRestartHelper showRestartAlertFromVC:self];
}

@end
