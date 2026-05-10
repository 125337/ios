#import <Foundation/Foundation.h>
#import "WeChatRedEnvelopParam.h"

@interface WeChatRedEnvelopTaskManager : NSObject

+ (instancetype)shared;

- (void)addTaskWithParam:(WeChatRedEnvelopParam *)param delay:(int)delay;
- (void)cancelAllTasks;
- (NSUInteger)pendingTaskCount;

- (void)savePendingParam:(WeChatRedEnvelopParam *)param;
- (WeChatRedEnvelopParam *)popPendingParamBySendId:(NSString *)sendId;
- (WeChatRedEnvelopParam *)findPendingParamBySign:(NSString *)sign;

- (void)markProcessed:(NSString *)msgId;
- (BOOL)isProcessed:(NSString *)msgId;

- (void)startBackgroundKeepAlive;
- (void)stopBackgroundKeepAlive;

@end
