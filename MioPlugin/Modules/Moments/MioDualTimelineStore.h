#import <Foundation/Foundation.h>

// WCFacade 获取（阶段0 探针实证：MMContext activeUserContext getService:WCFacade.class，
// 8.0.60 回退 currentContext；进程级缓存）。双列模块内共享（Store 取数/消息页取数）。
id MioDualFacade(void);

// 双列朋友圈数据层（B6/B7/B8 根治）：
//   - 数据源直读：countOfTimelineDataItem / getTimelineDataItemOfIndex:（WCFacade.h:430-431，
//     声明在 WCFacade 本体）——facade 本体即朋友圈数据源，原生朋友圈页 cellForRow 同层，
//     背后是本地库（m_timelineWithLocalDatas / m_database），冷启动即有全量、
//     不依赖原生页是否被访问过；数据源空时快照顶上（staleMode）
//   - 统一字段映射收口：大小写变体/嵌套全在这层 @try 消化，上游永远拿干净 dict
//   - 行数无上限（方案 A）：createTime 降序，供给深度对齐原生/WCM
//   - 快照：与媒体注册表同存同删（save 时 prune），冷启动秒显
@interface MioDualTimelineStore : NSObject
+ (instancetype)shared;
// 统一字段映射后的行数组（干净 dict，createTime 降序，无上限）
- (NSArray<NSDictionary *> *)currentItems;
// 原始条数（数据源 count；翻页 exhausted 判定用）
- (NSUInteger)approxCount;
// YES = 数据源为空（同步未落库）、快照顶上（冷启动 stale 层）；NO = 数据来自原生数据源
@property (nonatomic, assign, readonly) BOOL staleMode;
- (void)refreshHead;                            // facade updateTimelineHead（下拉刷新）
- (void)loadTail;                               // 进滚底区：启动 tail 自驱循环（updateTimelineTail 主动重发）
- (void)stopTailLoop;                           // 滚离底部：停 tail 循环（关面板 endSession 亦停）
- (void)reloadWindow;                           // facade reloadTimelineDataItems（本地库→内存窗口重载，保鲜轮询用）
// 诊断指标（悬浮窗 HUD 读）
- (long long)liveSourceCount;                   // 数据源内存窗口实时 count
- (NSUInteger)accRowCount;                      // 累积层行数（跨刷新合并仓）
- (NSString *)tailStatus;                       // tail 自驱循环状态串（OFF/ON z n/退避）
// 会话（对齐 WCM beginTimeline/endTimeline；WCFacade.h:421-422/426 头文件实证）：
// begin = beginTimeline 开会话 + reloadTimelineDataItems 本地库重载（count 立即非零，
// 138 探针的懒加载空窗就此关闭）；end = endTimeline 关会话
- (void)beginSession;
- (void)endSession;
- (id)dataItemByID:(NSString *)objID;           // facade getDataItemByID:
- (NSString *)lastSnapshotJSON;                 // 上次会话快照（冷启动秒显，Bridge 灌 JS）
// 保存快照并修剪媒体注册表（liveKeys = 快照引用的 mioimg key，同存同删）
- (void)saveSnapshotJSON:(NSString *)json liveKeys:(NSSet<NSString *> *)liveKeys;
@end
