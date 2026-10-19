#import <UIKit/UIKit.h>

// 双列朋友圈面板（WCMFeedController 式覆盖壳 + WKWebView 渲染层）。
// 数据桥/图片服务实现见 MomentsDualPanel.m
@interface MomentsDualPanel : UIViewController
// coverHost 前捕获的 chrome（restoreChrome 用，WCMoments 同款 capture/restore）
@property (nonatomic, assign) BOOL prevNavHidden;
@property (nonatomic, assign) UIRectEdge prevEdges;
@property (nonatomic, assign) BOOL prevOpaqueBars;
@property (nonatomic, assign) BOOL chromeCaptured;
@property (nonatomic, weak) UIViewController *hostVC;   // 发现页（面板不挂 childVC，back 桥用）
@end

// host = 发现页 VC；面板 view 挂 host.view 顶层（切 tab 随宿主消失），
// host.edgesForExtendedLayout=All + 藏导航栏实现「连顶栏一起盖」（WCMoments coverHost 复刻）
void MioDualPanelOpen(UIViewController *host);
// 面板开着时重新压 chrome（tab 切回/压栈返回触发 viewDidAppear：微信导航容器会重置导航栏 hidden 态）
void MioDualPanelReassertChrome(UIViewController *host);
void MioDualPanelClose(UIViewController *host);
void MioDualPanelToggle(UIViewController *host);
BOOL MioDualPanelIsOpen(UIViewController *host);
