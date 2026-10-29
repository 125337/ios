@interface NSURLConnection (MMNetworkHook)
+ (void)hook;
+ (void)initialize;
+ (id)mmNetworkHook_sendSynchronousRequest:(id)arg1 returningResponse:(id *)arg2 error:(id *)arg3;
+ (void)mmNetworkHook_sendAsynchronousRequest:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)mmNetworkHook_initWithRequest:(id)arg1 delegate:(id)arg2;
- (id)mmNetworkHook_initWithRequest:(id)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3;
@end
