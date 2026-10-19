#import <UIKit/UIKit.h>

// 双列朋友圈面板（WCMFeedController 式 childVC 覆盖壳 + WKWebView 渲染层）。
// 数据桥/图片服务实现见 MomentsDualPanel.m
@interface MomentsDualPanel : UIViewController
@end

// host = WCTimeLineViewController 实例；面板以 childVC 覆盖 host 内容区（导航栏保留）
void MioDualPanelOpen(UIViewController *host);
void MioDualPanelClose(UIViewController *host);
void MioDualPanelToggle(UIViewController *host);
BOOL MioDualPanelIsOpen(UIViewController *host);
