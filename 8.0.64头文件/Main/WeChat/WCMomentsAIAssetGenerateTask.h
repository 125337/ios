@interface WCMomentsAIAssetGenerateTask : MJAIAssetGenerateTask
- (id)initWithRequest:(id)arg1 timeoutInterval:(double)arg2;
- (void)dealloc;
- (void)submitWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)queryWithTaskID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelWithTaskID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerBypNotification;
- (void)momentsDidGenerateAIAssets:(id)arg1;
@end
