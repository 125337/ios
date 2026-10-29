@interface MMGlobalQueue : NSObject
{
    NSOperationQueue * m_queue; // +0x8
}
+ (id)sharedInstance;
- (void)addOperationFromGlobalDispatchQueue:(id)arg1 block:(id /* block */)arg2;
- (void)addCGIOperation:(id /* block */)arg1;
- (id)init;
- (void)addDefaultOperation:(id /* block */)arg1;
- (void)addUIOperation:(id /* block */)arg1;
- (void)addBackgroundOperation:(id /* block */)arg1;
- (void)dynamicSetQueueConcurrentOperationCount;
@end
