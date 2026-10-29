@interface TencentLBSHttpClient : NSObject
+ (void)configHttpClientWithCallbackQueue;
+ (void)doPostForUrl:(id)arg1 data:(id)arg2 withMaxTimeout:(double)arg3 completionBlock:(id /* block */)arg4;
@end

