@interface NSURLSession (MMNetworkHook)
+ (void)initialize;
+ (void)hook;
+ (id)mmNetworkHook_sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (id)mmDataTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)mmDataTaskWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)mmDownloadTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)mmDownloadTaskWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
@end

