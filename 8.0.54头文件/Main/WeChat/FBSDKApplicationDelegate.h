@interface FBSDKApplicationDelegate : NSObject
{
    NSHashTable * _applicationObservers; // +0x8
    BOOL _isAppLaunched; // +0x10
}
+ (void)load;
+ (void)initializeWithLaunchData:(id)arg1;
+ (void)initializeSDK:(id)arg1;
+ (id)sharedInstance;
+ (long long)applicationState;
+ (BOOL)isSDKInitialized;
- (id)init;
- (void)dealloc;
- (BOOL)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_logIfAppLinkEvent:(id)arg1;
- (void)_logSDKInitialize;
- (BOOL)isAppLaunched;
- (void).cxx_destruct;
@end

