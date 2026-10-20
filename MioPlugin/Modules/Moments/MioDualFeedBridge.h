#import <Foundation/Foundation.h>

@class WKWebView;

// 双列朋友圈推送层（B8/B9/B10/B11 根治，重构方案 3.3）：
//   - 行级 diff：native 持 lastRowsByID，每次只序列化变更行，
//     __mioFeedPatch({upsert,remove,order}) 增量协议（300KB 全量 → 通常 <20KB）
//   - 尾沿防抖：事件 → 0.5s 后推一次，推送时重读最新状态（窗口内变更全合并，永不丢尾）
//   - 快照协议：attach 后首推 __mioFeedSnapshot 灌上次会话快照（JS 标记 stale），
//     同时以快照做 diff 基线——首推 patch 只含快照之后的新增/变更
//   - 可见期轮询：面板可见即 5s 保鲜轮询（实时性不依赖事件，hook 让位/静默同被覆盖）
// 主线程模型：全部状态仅在主线程读写。
@interface MioDualFeedBridge : NSObject
// 面板 WebView 页面就绪/复开时挂上（didFinishNavigation / Open 复用路径）
+ (void)attachWebView:(WKWebView *)webView;
// 面板 Close 时摘除（weak 引用，WebView 释放亦自动断开）
+ (void)detachWebView;
// 立即推送（attach 后首推用；事件路径走 notifyDataChanged 防抖）
+ (void)pushNow;
// 刷新链路显式推送（refreshHead/loadTail 末尾统一调用——reload 同步完成后本地库
// 新数据立即可见，与开面板同链路，不依赖 NSTimer 防抖）
+ (void)pushNowFromSession;
+ (void)mediaReadyForKey:(NSString *)key;   // 缩略图落盘后通知 JS 重载对应 img（零破图闭环）
// hook 层入口：微信 timeline 变更（0.5s 尾沿防抖）
+ (void)notifyDataChanged;
// 可见期保鲜轮询（attachWebView 开 / detachWebView 停）：5s tick = 窗口重载 + 防抖推送，
// 无变更 diff 零字节空转——对齐 WCM「实时性不依赖事件」的轮询保鲜语义
+ (void)startVisiblePolling;
+ (void)stopVisiblePolling;
// 诊断指标（悬浮窗 HUD 读，主线程）
+ (NSUInteger)jsRowCount;                   // JS 已渲染基线行数（diff 基线 = 上屏行数）
+ (NSTimeInterval)secondsSinceLastPush;     // 距上次推送循环秒数（从未推送返回 -1）
@end
