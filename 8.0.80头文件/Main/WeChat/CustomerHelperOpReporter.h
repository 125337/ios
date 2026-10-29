@interface CustomerHelperOpReporter : NSObject
{
    NSMutableDictionary * _pendingRequests; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)reportOperationResult:(id)arg1 succ:(BOOL)arg2 operationType:(long long)arg3 operationData:(id)arg4;
- (void)sendCgiRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)pendingRequests;
- (void)setPendingRequests:(id)arg1;
- (void).cxx_destruct;
@end
