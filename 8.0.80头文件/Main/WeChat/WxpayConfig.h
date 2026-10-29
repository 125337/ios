@interface WxpayConfig : NSObject
+ (void)install;
+ (void)reset;
+ (void)invalidateMergedCache;
+ (BOOL)isAvailable;
+ (id)processLabel;
+ (void *)coreLocked;
+ (id)mergedForAppId:(id)arg1 error:(id *)arg2;
+ (id)layerForScope:(long long)arg1 appId:(id)arg2 error:(id *)arg3;
+ (id)snapshotForAppId:(id)arg1 error:(id *)arg2;
+ (id)profileForAppId:(id)arg1 error:(id *)arg2;
+ (id)openConfigForAppId:(id)arg1 error:(id *)arg2;
+ (id)profileMapWithError:(id *)arg1;
+ (id)configAccountScope;
+ (BOOL)ingestEnvelopeJson:(id)arg1 error:(id *)arg2;
+ (BOOL)updateGlobalLayer:(id)arg1 error:(id *)arg2;
+ (BOOL)updateLayerForAppId:(id)arg1 layerJson:(id)arg2 error:(id *)arg3;
+ (BOOL)debugSetScope:(long long)arg1 appId:(id)arg2 key:(id)arg3 value:(id)arg4 error:(id *)arg5;
+ (BOOL)debugClearScope:(long long)arg1 appId:(id)arg2 key:(id)arg3 error:(id *)arg4;
+ (BOOL)writeWithError:(id *)arg1 block:(id /* block */)arg2;
+ (id)debugAccountDataForKey:(id)arg1 found:(BOOL *)arg2 error:(id *)arg3;
+ (BOOL)setDebugAccountData:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
@end
