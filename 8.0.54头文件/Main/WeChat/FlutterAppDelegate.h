@interface FlutterAppDelegate : UIResponder <UIApplicationDelegate, FlutterPluginRegistry, FlutterAppLifeCycleProvider>
{
    FlutterPluginAppLifeCycleDelegate * _lifeCycleDelegate; // +0x8
    UIWindow * _window; // +0x10
    id /* block */ _rootFlutterViewControllerGetter; // +0x18
}
- (id)init;
- (void)dealloc;
- (BOOL)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (id)rootFlutterViewController;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (BOOL)openURL:(id)arg1;
- (BOOL)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (BOOL)application:(id)arg1 handleOpenURL:(id)arg2;
- (BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(id /* block */)arg3;
- (id)registrarForPlugin:(id)arg1;
- (BOOL)hasPlugin:(id)arg1;
- (id)valuePublishedByPlugin:(id)arg1;
- (void)addApplicationLifeCycleDelegate:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)delegateRespondsSelectorToPlugins:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)logCapabilityConfigurationWarningIfNeeded:(SEL)arg1;
- (BOOL)application:(id)arg1 shouldSaveApplicationState:(id)arg2;
- (BOOL)application:(id)arg1 shouldRestoreApplicationState:(id)arg2;
- (BOOL)application:(id)arg1 shouldSaveSecureApplicationState:(id)arg2;
- (BOOL)application:(id)arg1 shouldRestoreSecureApplicationState:(id)arg2;
- (long long)lastAppModificationTime;
- (id)window;
- (void)setWindow:(id)arg1;
- (id /* block */)rootFlutterViewControllerGetter;
- (void)setRootFlutterViewControllerGetter:(id /* block */)arg1;
@end

