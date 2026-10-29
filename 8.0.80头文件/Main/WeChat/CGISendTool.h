@interface CGISendTool : NSObject
+ (void)initialize;
+ (void)sendCgiRequest:(id)arg1 cgiId:(unsigned int)arg2 completion:(id /* block */)arg3;
+ (void)releaseHandler:(id)arg1;
+ (void)sendWCPayCgiRequest:(id)arg1 completion:(id /* block */)arg2;
@end
