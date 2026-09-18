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

extern const CGFloat kPad;
extern const CGFloat kRadius;
extern const CGFloat kRowH;

Class WPGetBaseClass(void);
UIScrollView *WPMakeSV(UIViewController *vc);
UIView *WPMakeCard(CGFloat top, CGFloat w);
UILabel *WPMakeSectionHeader(NSString *text, CGFloat top, CGFloat w);
void WPAddSwitchRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *key, BOOL on, id target,
                    void(^onChanged)(BOOL isOn));
void WPAddNavRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *action, id target);
void WPAddSep(UIView *card, CGFloat cy, CGFloat cw);
void WPAddInfoRow(UIView *card, CGFloat cy, CGFloat cw, NSString *left, NSString *right);
void WPAddTextFieldRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *placeholder);
UIButton *WPAddEditableRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *value, id target);
UIButton *WPAddEditableRowWithArrow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *value, id target);

/// 绘制通用右箭头（>），containerW 为容器宽度，rightPadding 为箭头到容器右边缘的距离
void WPDrawDisclosureArrow(UIView *card, CGFloat cy, CGFloat containerW, CGFloat rightPadding);

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