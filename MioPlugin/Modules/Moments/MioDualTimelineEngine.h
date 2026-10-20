#import <Foundation/Foundation.h>

// timeline 会话/拉取状态机收口（原散落 Store.m 的 12+ static 状态位 + 4 文件守卫，
// 全部收进本单例）：外部只见幂等方法、永不碰状态位——新守卫不再互相打架
// （begin 重置 vs tail 深度、8s 节流 vs 事件驱动的打架史见 v2 方案文档第二节）
@interface MioDualTimelineEngine : NSObject
+ (instancetype)shared;
- (void)start;              // 幂等：会话未开才开（beginTimeline+reload）；活会话跳过（begin 会重置窗口）
- (void)refreshHead;        // 防重入 → 必要时 start 自愈 → head 单次 → accepted 检查+被拒重试
- (void)loadTail;           // 幂等：进滚底区开自驱循环（inFlight 串行 + 0.3s 核对链，永不后退）
- (void)stopLoadTail;       // 滚离底部：停 tail 循环（关面板 stop 亦停）
- (void)stop;               // endTimeline + 停循环 + 清状态（关面板）
- (void)notifyDataChanged;  // 原生回调转发：0.5s 尾沿防抖 → rebuild→commit→push（无 reload——引擎自更新窗口）
- (void)ensureSession;      // isInSession 心跳校验，掉了重开+装窗口（可见期轮询每跳）
- (void)reloadWindow;       // 本地库→内存窗口重载（新帖静默落库后窗口不自动刷新，140 实证）
- (NSString *)tailStatus;   // HUD：tail 循环状态串（OFF/ON z n r m +d）
- (NSString *)loadStatus;   // HUD：装载状态串（翻页中/等服务器/到底 +N行/Ns）
@end
