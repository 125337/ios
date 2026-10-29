@interface GameInteractContentServer : GCBaseServer
- (void)batchGetContentInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)quickInteractWithRequest:(id)arg1 completionBlock:(id /* block */)arg2;
@end

