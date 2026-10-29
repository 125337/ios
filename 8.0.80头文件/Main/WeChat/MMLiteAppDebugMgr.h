@interface MMLiteAppDebugMgr : NSObject
+ (void)resolveDebugToken:(id)arg1 appId:(id)arg2 downloadURL:(id)arg3 success:(id /* block */)arg4;
+ (BOOL)hasLegacyDebugParams:(id)arg1;
+ (void)showUpgradeDeveloperToolToast;
+ (id)URLByAppendingDebugConfigToURL:(id)arg1 debug:(int)arg2 attach:(int)arg3 debugSvr:(id)arg4;
+ (void)showDebugTokenError:(int)arg1;
@end
