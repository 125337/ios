@interface EcsScreenshotShareWeAppGlue : NSObject
+ (BOOL)isEcsShopAppId:(id)arg1;
+ (void)bindSenderCacheWithPlugin:(id)arg1;
+ (void)teardownSenderCacheWithAppId:(id)arg1;
+ (void)reportShareButtonEvent:(id)arg1 appId:(id)arg2;
+ (id)buildForwardSourceInfoWithAppId:(id)arg1;
+ (void)attachEcsPageDestroyWatcherWithPageKey:(id)arg1 plugin:(id)arg2;
@end
