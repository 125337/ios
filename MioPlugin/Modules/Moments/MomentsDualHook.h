#import <Foundation/Foundation.h>

// 双列朋友圈（WCMoments 0.6.49 同架构复刻，入口照抄）：
// hook WCTimeLineViewController viewDidAppear:（自有方法，dladdr 守卫让位他方插件）
// → 导航栏追加「双列」按钮 → 点击以 childVC 方式把 MomentsDualPanel（WKWebView
// 双列瀑布流）覆盖在 host 内容区上，按钮变「原生」点击切回。总开关关闭时不注入按钮
// 并收起已开面板。数据链（阶段0 探针 8.0.78 实证）：
//   facade = MMContext activeUserContext getService:WCFacade.class（进程级单例）
//   facade.timelineMgr.getCache → NSArray<WCDataItem>
//   刷新：facade updateTimelineHead（主动调用成功，等价下拉）
// 数据字段/媒体路径方法均为微信自带同名方法，8.0.60+ 与 8.0.78 实证一致。
@interface MomentsDualHook : NSObject
@end
