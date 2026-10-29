@interface FBSDKGraphRequestPiggybackManager : NSObject
+ (void)addPiggybackRequests:(id)arg1;
+ (void)addRefreshPiggyback:(id)arg1 permissionHandler:(id /* block */)arg2;
+ (void)addRefreshPiggybackIfStale:(id)arg1;
+ (void)addServerConfigurationPiggyback:(id)arg1;
@end
