@interface WxpayRawScenePackages : NSObject
+ (BOOL)supported;
+ (id)bundleDirectoryName;
+ (id)bundleDirectory;
+ (id)kitBundleDirectoryName;
+ (id)kitBundleStoreRootForEngineRoot:(id)arg1;
+ (id)kitBundleDirectory;
+ (id)kitBundleBaselibVersion;
+ (id)baselibVersionInKitBundleManifest:(id)arg1;
+ (BOOL)switchToHostAccountWithEngineRoot:(id)arg1 releaseAll:(id /* block */)arg2 error:(id *)arg3;
+ (id)prepareRequestForAppId:(id)arg1 minVersion:(id)arg2 forceMinVersion:(BOOL)arg3 bundle:(id)arg4 page:(id)arg5 reportCallId:(unsigned long long)arg6;
+ (id)prepareAppId:(id)arg1 minVersion:(id)arg2 forceMinVersion:(BOOL)arg3 bundle:(id)arg4 page:(id)arg5 engineRoot:(id)arg6 reportCallId:(unsigned long long)arg7 error:(id *)arg8;
+ (id)selectBaseLibWithEngineRoot:(id)arg1 error:(id *)arg2;
+ (id)selectedBaseLib:(id)arg1 failure:(id *)arg2;
+ (id)importDebugAppId:(id)arg1 path:(id)arg2 importId:(id)arg3 protectionSeconds:(long long)arg4 engineRoot:(id)arg5;
+ (id)runDebugBatchWithEngineRoot:(id)arg1;
+ (id)runPushUpdate:(id)arg1 engineRoot:(id)arg2;
+ (void)startDeferredPreparationWithEngineRoot:(id)arg1;
+ (void)stopDeferredPreparationWithEngineRoot:(id)arg1 completion:(id /* block */)arg2;
+ (id)runDebugOperation:(id)arg1 engineRoot:(id)arg2;
+ (id)describeAppId:(id)arg1 engineRoot:(id)arg2;
+ (void)releaseLease:(unsigned long long)arg1;
@end
