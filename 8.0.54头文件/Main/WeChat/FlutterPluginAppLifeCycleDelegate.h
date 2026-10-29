@interface FlutterPluginAppLifeCycleDelegate : NSObject <UNUserNotificationCenterDelegate>
{
    NSMutableArray * _notificationUnsubscribers; // +0x8
    unsigned long long _debugBackgroundTask; // +0x10
    NSPointerArray * _delegates; // +0x18
}
- (void)addObserverFor:(id)arg1 selector:(SEL)arg2;
- (id)init;
- (void)dealloc;
- (BOOL)isSelectorAddedDynamically:(SEL)arg1;
- (BOOL)hasPluginThatRespondsToSelector:(SEL)arg1;
- (void)addDelegate:(id)arg1;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (BOOL)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (void)handleDidEnterBackground:(id)arg1;
- (void)handleWillEnterForeground:(id)arg1;
- (void)handleWillResignActive:(id)arg1;
- (void)handleDidBecomeActive:(id)arg1;
- (void)handleWillTerminate:(id)arg1;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(id /* block */)arg3;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (BOOL)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (BOOL)application:(id)arg1 handleOpenURL:(id)arg2;
- (BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)application:(id)arg1 performFetchWithCompletionHandler:(id /* block */)arg2;
- (BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(id /* block */)arg3;
@end

