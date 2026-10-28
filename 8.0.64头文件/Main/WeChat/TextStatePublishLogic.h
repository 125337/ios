@interface TextStatePublishLogic : NSObject <TextStatePublishTaskDeletate>
{
    id <TextStatePublishLogicDelegate> _delegate; // +0x8
    NSMutableArray * _taskQueue; // +0x10
}
+ (void)encodeTaskQueue:(id)arg1;
+ (id)decodeTaskQueue;
+ (id)taskQueueFilePath;
- (id)init;
- (void)publishTextState:(id)arg1 associateMediaItem:(id)arg2 parameter:(id)arg3;
- (BOOL)removeTextStateWithId:(id)arg1;
- (id)nonNetworkErrorPublishingTextState;
- (void)batchRetryErrorPublishingTextState;
- (id)tempTextStateList;
- (void)checkQueue;
- (void)onTaskUpdate;
- (void)onTaskSuccess:(id)arg1;
- (void)onTaskFailure:(id)arg1;
- (BOOL)shouldModifySelfContact;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskQueue;
- (void)setTaskQueue:(id)arg1;
- (void).cxx_destruct;
@end
