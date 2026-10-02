#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 朋友圈定时发送：任务引擎（WCR MomentsScheduled 同款机制，独立 key/目录避免冲突）
// 存储：元数据数组存 NSUserDefaults；内容体（媒体拷贝+原帖字段）归档写文件目录
// 驱动：15s 主线程 NSTimer + 前台通知 → tick；发布链 MMContext→WCFacade→uploadMgr→addUploadTask:
@interface MomentsScheduler : NSObject

+ (instancetype)shared;

// 引擎启动（幂等；开关关闭时 tick 直接空转，常驻无害）
- (void)start;

#pragma mark - 发帖页会话（PostSession 同款内存态，不落盘）

+ (void)schedSetPendingFireDate:(nullable NSDate *)date; // nil=取消定时
+ (nullable NSDate *)schedPendingFireDate;

#pragma mark - 拦截入口（MomentsHook 调用）

// 尝试把发帖页提交的 WCUploadTask 转为定时任务（拷媒体→建任务→落盘）。
// 返回 YES=已接管，调用方不得再调原 addUploadTask:；
// 返回 NO=未接管（无会话/开关关/抽取失败），调用方走原实现。
+ (BOOL)captureUploadTask:(id)task;

#pragma mark - 任务 CRUD（列表页/设置页用）

- (NSArray<NSDictionary *> *)allTasks;
- (void)saveTasks:(NSArray<NSDictionary *> *)tasks;
- (void)removeTaskWithId:(NSString *)taskId;        // 连同 payload 目录一并删除

+ (NSString *)schedRootDir;                         // Application Support/MioSched
+ (double)nextFireAtForTask:(NSDictionary *)t fromTime:(double)now; // 循环任务下一轮时间（列表页改循环模式用）

#pragma mark - 工具

+ (NSString *)repeatSummaryForDict:(NSDictionary *)t; // 循环模式摘要（单次/每天 HH:mm/...）

@end

NS_ASSUME_NONNULL_END
