@interface WABrandProxy : NSObject <IWABrandService>
+ (id)resolveURLString:(id)arg1;
+ (BOOL)isAgentRuntimeAttachedForAppId:(id)arg1;
+ (void)tryClearAllPkgInfo;
+ (BOOL)isAgentPackageInfoCacheInUseForAppId:(id)arg1 version:(unsigned long long)arg2 debugMode:(unsigned long long)arg3;
@end
