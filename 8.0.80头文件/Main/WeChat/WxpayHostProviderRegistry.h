@interface WxpayHostProviderRegistry : NSObject
+ (id)seal:(id)arg1 error:(id *)arg2;
+ (id)dispatch:(id)arg1 context:(id)arg2 payload:(id)arg3 arguments:(id)arg4 sink:(id /* block */)arg5;
+ (id)dispatchCapability:(id)arg1 context:(id)arg2 payload:(id)arg3 arguments:(id)arg4 sink:(id /* block */)arg5;
+ (id)dispatchSync:(id)arg1 context:(id)arg2 payload:(id)arg3 arguments:(id)arg4;
+ (void)dispatch:(id)arg1 context:(id)arg2 payload:(id)arg3 arguments:(id)arg4 answered:(id /* block */)arg5;
+ (BOOL)reportMethod:(id)arg1 data:(id)arg2 appId:(id)arg3;
+ (BOOL)hasKind:(id)arg1 name:(id)arg2;
+ (BOOL)hasKind:(id)arg1 name:(id)arg2 method:(id)arg3;
+ (id)jsApiTargetForMethod:(id)arg1 appId:(id)arg2;
+ (BOOL)jsApiUsableForMethod:(id)arg1 appId:(id)arg2;
+ (id)moduleMethod:(id)arg1 inModule:(id)arg2;
+ (id)dynamicModuleInfoForAppId:(id)arg1;
+ (void)writeLog:(long long)arg1 layer:(id)arg2 tag:(id)arg3 message:(id)arg4;
+ (id)missingServicesAmong:(id)arg1 scene:(id)arg2;
+ (void)sealRegistrations;
+ (BOOL)isSealed;
+ (void)reset;
+ (id)registrations;
+ (id)jsApiFileHandleConfigWithRoots:(id)arg1;
@end
