#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import "../../Config/WPColors.h"

#define WPBgColor() WPBackgroundColor()
#define WPCardBg() WPCardBackgroundColor()
#define WPT1() WPTextPrimaryColor()
#define WPT2() WPTextSecondaryColor()
#define WPT3() WPTextTertiaryColor()
#define WPAccent() WPAccentColor()
#define WPSwOn() WPSwitchOnColor()
#define WPSepColor() WPSeparatorColor()

extern const CGFloat kPad;    // 插件页面统一边距（写死 15，不读用户配置）
extern const CGFloat kRadius; // 插件页面统一圆角（写死 15）
extern const CGFloat kRowH;

Class WPGetBaseClass(void);
UIView *WPMakeCard(CGFloat top, CGFloat w);

/// 获取微信原生顶层 ViewController（用于安全 present UIAlertController）
/// 复刻微信优化 getChatConfirmationTopViewController — 遍历 UIWindow 层级找到 MMUIViewController 子类
/// 避免直接 [self presentViewController:] 触发 iOS 17 presentingModalViewController 崩溃
UIViewController *WPGetTopVCForPresentation(void);

/// 轻量 toast：黑底圆角 label 挂 window，1.5 秒后淡出（全局唯一实现，各页面复用）
void WPShowToast(NSString *message);

/// 统一导航栏外观：背景色与页面背景一致（WPBgColor），去底部阴影线
/// 首次调用时自动保存当前导航栏 appearance（挂在 navBar 上）
void WPApplyNavAppearance(UIViewController *vc);

/// 恢复导航栏原始外观（viewWillDisappear 时调用，避免污染微信其他页面）
void WPRestoreNavAppearance(UIViewController *vc);
