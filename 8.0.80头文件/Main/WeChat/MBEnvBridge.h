@interface MBEnvBridge : NSObject
+ (void)notifyJsApiCallback:(unsigned long long)arg1 callbackId:(unsigned long long)arg2 errCode:(int)arg3 errMsg:(id)arg4 dataStr:(id)arg5;
+ (void)registerLifecycleListener:(unsigned long long)arg1 listener:(id)arg2;
+ (void)registerJsApiAdapter:(unsigned long long)arg1 adapter:(id)arg2;
+ (void)unregisterJsApiAdapter:(unsigned long long)arg1;
+ (void)registerVConsoleDelegate:(unsigned long long)arg1 delegate:(id)arg2;
+ (void)unregisterVConsoleDelegate:(unsigned long long)arg1;
+ (void)registerViewDelegate:(id)arg1 delegate:(id)arg2;
+ (void)unregisterViewDelegate:(id)arg1;
+ (unsigned long long)acquireSimpleBizWithName:(id)arg1 jsapiGroupNames:(id)arg2 platformJsapiNames:(id)arg3 autoDestroyTime:(double)arg4 enableDelayDestroyWhenDeactivate:(BOOL)arg5 enableExtendLife:(BOOL)arg6 mainScriptPath:(id)arg7;
+ (void)activate:(unsigned long long)arg1;
+ (void)deactivate:(unsigned long long)arg1;
+ (void)resumeBiz:(unsigned long long)arg1;
+ (void)pauseBiz:(unsigned long long)arg1;
+ (void)evaluateScript:(unsigned long long)arg1 script:(id)arg2 callback:(id /* block */)arg3;
+ (void)loadDataFromUrl:(unsigned long long)arg1 url:(id)arg2 callback:(id /* block */)arg3;
+ (void)saveToWxFilePath:(unsigned long long)arg1 path:(id)arg2 data:(id)arg3 callback:(id /* block */)arg4;
+ (void)physicalFilePath:(unsigned long long)arg1 path:(id)arg2 callback:(id /* block */)arg3;
@end
