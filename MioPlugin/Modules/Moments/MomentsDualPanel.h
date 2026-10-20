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

// WCFacade 获取（阶段0 探针实证：logEnterTimeline 首调捕获，进程级缓存）
// 双列模块内共享（面板数据桥/消息页取数都走它）
id MioDualFacade(void);

// P1 实时性：微信 timeline 变更回调 hook（MomentsDualHook 挂 WCFacade
// onTimelineDataChangedWithAdded:andChanged:andDeleted:，WCFacade.h:415 实证）
// 转发入口——主线程 0.5s 防抖后活跃面板 pushFeedNow（替代旧 3s 轮询）
void MioDualPanelNotifyDataChanged(void);

// 数据推送（常驻面板复用：Open 时立即推已渲染缓存，零等待首屏）
// 实现在 MomentsDualPanel（同文件内 Open/Close 与 VC 生命周期共用）
@interface MomentsDualPanel (PushFeed)
- (void)pushFeedNow;
@end
