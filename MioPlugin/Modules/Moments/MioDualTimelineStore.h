#import <Foundation/Foundation.h>

// WCFacade 获取（阶段0 探针实证：MMContext activeUserContext getService:WCFacade.class，
// 8.0.60 回退 currentContext；进程级缓存）。双列模块内共享（Store 取数/消息页取数）。
id MioDualFacade(void);

// 双列朋友圈数据层（B6/B7/B8 根治，重构方案 3.1）：
//   - 双源读取：getTimelineDataItem（UI 缓存，最新鲜）∪ m_timelineWithLocalDatas
//     （本地库支撑，冷启动有数、无上限，WCFacade.h:5 ivar 实证），itemID 去重
//   - 统一字段映射收口：大小写变体/嵌套全在这层 @try 消化，上游永远拿干净 dict
//   - LRU500：createTime 降序，保留最近 500 条，彻底移除 300 硬截断（B7）
//   - 快照：与媒体注册表同存同删（save 时 prune），冷启动秒显
@interface MioDualTimelineStore : NSObject
+ (instancetype)shared;
// 统一字段映射后的行数组（干净 dict，createTime 降序，LRU 500）
- (NSArray<NSDictionary *> *)currentItems;
// 原始条数（去重合并后、LRU 截断前；翻页 exhausted 判定用）
- (NSUInteger)approxCount;
- (void)refreshHead;                            // facade updateTimelineHead（下拉刷新）
- (void)loadTail;                               // facade updateTimelineTail（滚底翻页）
- (id)dataItemByID:(NSString *)objID;           // facade getDataItemByID:
- (NSString *)lastSnapshotJSON;                 // 上次会话快照（冷启动秒显，Bridge 灌 JS）
// 保存快照并修剪媒体注册表（liveKeys = 快照引用的 mioimg key，同存同删）
- (void)saveSnapshotJSON:(NSString *)json liveKeys:(NSSet<NSString *> *)liveKeys;
@end
