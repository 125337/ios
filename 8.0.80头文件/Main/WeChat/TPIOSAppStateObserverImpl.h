@interface TPIOSAppStateObserverImpl : NSObject
{
    int _appState; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)checkSetupState;
- (void)registerApplicationObservers;
- (void)unregisterApplicationObservers;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (int)appState;
- (void)setAppState:(int)arg1;
@end
