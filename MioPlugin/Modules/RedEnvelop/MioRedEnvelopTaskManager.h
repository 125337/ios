#import <Foundation/Foundation.h>
#import "MioRedEnvelopParam.h"

@interface MioRedEnvelopTaskManager : NSObject

+ (instancetype)shared;

- (void)addTaskWithParam:(MioRedEnvelopParam *)param delay:(int)delay;
- (void)cancelAllTasks;
- (NSUInteger)pendingTaskCount;

- (void)savePendingParam:(MioRedEnvelopParam *)param;
- (MioRedEnvelopParam *)popPendingParamBySendId:(NSString *)sendId;
- (MioRedEnvelopParam *)findPendingParamBySign:(NSString *)sign;

- (void)markProcessed:(NSString *)msgId;
- (BOOL)isProcessed:(NSString *)msgId;

- (void)startBackgroundKeepAlive;
- (void)stopBackgroundKeepAlive;

@end
