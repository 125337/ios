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
//   - LRU500：createTime 降序，保留最近 500 条（渲染保护，非硬截断）
//   - 快照：与媒体注册表同存同删（save 时 prune），冷启动秒显
@interface MioDualTimelineStore : NSObject
+ (instancetype)shared;
// 统一字段映射后的行数组（干净 dict，createTime 降序，LRU 500）
- (NSArray<NSDictionary *> *)currentItems;
// 原始条数（去重合并后、LRU 截断前；翻页 exhausted 判定用）
- (NSUInteger)approxCount;
// YES = 数据源为空（同步未落库）、快照顶上（冷启动 stale 层）；NO = 数据来自原生数据源
@property (nonatomic, assign, readonly) BOOL staleMode;
- (void)refreshHead;                            // facade updateTimelineHead（下拉刷新）
- (void)loadTail;                               // facade updateTimelineTail（滚底翻页）
- (id)dataItemByID:(NSString *)objID;           // facade getDataItemByID:
- (NSString *)lastSnapshotJSON;                 // 上次会话快照（冷启动秒显，Bridge 灌 JS）
// 保存快照并修剪媒体注册表（liveKeys = 快照引用的 mioimg key，同存同删）
- (void)saveSnapshotJSON:(NSString *)json liveKeys:(NSSet<NSString *> *)liveKeys;
@end
