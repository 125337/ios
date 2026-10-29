@interface MicroMessengerAppDelegate : MMUIResponder <MMCommonAdapterDelegate, UIApplicationDelegate, WCLazyInitObjectProtocol, UNUserNotificationCenterDelegate, MMAppMainSceneEventDelegate, MMAppCarPlaySceneEventDelegate>
{
    CAppViewControllerManager * m_appViewControllerMgr; // +0x8
    NSString * m_nsToken; // +0x10
    long long m_appVerCompareWithLastRun; // +0x18
    BOOL m_isActive; // +0x20
    BOOL m_firstActive; // +0x21
    NSRecursiveLock * mActiveLock; // +0x28
    BOOL mInBackGroundFetch; // +0x30
    unsigned long long m_ui64BackGroundFetchStopTime; // +0x38
    id /* block */ m_fetchCompletionHandler; // +0x40
    BOOL m_bLaunchFinish; // +0x48
    MMUIWindow * m_launchWindow; // +0x50
    BOOL m_isFirstLaunching; // +0x58
    BOOL m_isNormalLaunch; // +0x59
    BOOL m_isInSafeModeOrMemoryStat; // +0x5a
    BOOL m_isNetworkServiceInited; // +0x5b
    BOOL m_hasCheckEnterForeground; // +0x5c
    BOOL m_isCanReceiveActiveNotify; // +0x5d
    BOOL m_isAlreadyLaunchWhileSceneConnected; // +0x5e
    MMTimer * m_godLikeTimer; // +0x60
    BOOL haveLazyInit; // +0x68
    UIWindow * _window; // +0x70
    id /* block */ _backgroundSessionCompletionHandler; // +0x78
    unsigned long long _protectedDataStatus; // +0x80
}
+ (id)GlobalInstance;
- (BOOL)shouldEnterMemoryReport;
- (void)enterUploadReport;
- (void)handleMemoryStatDidEndNotification:(id)arg1;
- (BOOL)shouldEnterSafeMode;
- (void)enterSafeMode;
- (void)handleMMSafeModeDidEndNotification:(id)arg1;
- (id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;
- (void)application:(id)arg1 didDiscardSceneSessions:(id)arg2;
- (void)loginGuestUser:(id /* block */)arg1;
- (void)tryToLoginLastUser:(id /* block */)arg1;
- (void)lazyInitNetworking;
- (void)stopNetworkEvent:(id)arg1;
- (void)switchToUser:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)internalSwitchToUser:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)setupMMCommonAdapter;
- (BOOL)IsChinese;
- (BOOL)ShouldLog:(int)arg1;
- (void)LogWithinCommon:(int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 funcName:(const char *)arg5 message:(id)arg6;
- (void)NetworkLogOutput:(id)arg1;
- (void)LogFeatureExt:(unsigned int)arg1 logExt:(id)arg2 isReportNow:(BOOL)arg3 isImportant:(BOOL)arg4;
- (void)LogFeatureIdKey:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3 isKeyLog:(BOOL)arg4;
- (void)registerClsMethodObserver;
- (void)registerLazyExtensionListener;
- (void)lazyInitServiceObject;
- (void)delayInitServiceObject;
- (void)initServiceObject;
- (void)clearServiceObject;
- (id)init;
- (double)timeToLazyInitAfterOpenFirstView;
- (void)goToLazyInitObject;
- (void)delayMainAppDelegateThing;
- (void)logTheFontOfiPhone;
- (void)preVoidFunction;
- (void)voidFunction;
- (void)careEnoughForTheLiving;
- (void)loadUpdateAndExcute;
- (void)continueMainLaunching:(id)arg1;
- (void)continueBackgroundLaunching;
- (void)onVoIPLaunch;
- (void)checkInitNetworkAndService;
- (BOOL)hasFirstActiveOrCheckEnterForeground;
- (void)detectBecomeActive;
- (void)tryRemoveTheProtectionOfXlog;
- (BOOL)testFileProtection:(id)arg1;
- (void)tryProtectLaunchBeforeDeviceFirstUnlock;
- (void)setupCrashBlockMonitor;
- (void)mainUISetting;
- (void)mainUISettingOnce;
- (void)didFinishLoad;
- (void)reportLaunchImage;
- (BOOL)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (BOOL)internalApplication:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (BOOL)isForeground;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (id)apnsToken;
- (void)doSendTokenTimeOut;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)internalApplication:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)internalApplication:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)internalApplication:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)internalApplication:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(id /* block */)arg3;
- (void)internalApplication:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(id /* block */)arg3;
- (void)apnsSilentPushTimeOut:(id /* block */)arg1;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(id /* block */)arg2;
- (void)internalApplication:(id)arg1 performFetchWithCompletionHandler:(id /* block */)arg2;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)internalApplication:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)internalApplication:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)internalApplication:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)internalApplication:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)ClearBackGroundFetch;
- (double)getMainWindowWidth;
- (double)getMainWindowHeight;
- (id)mainConsoleWindow;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)internalApplication:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resetBadge;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillSuspend;
- (void)handleOpenPush;
- (void)onCancelPushAlert;
- (void)onConfirmPushAlert;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)internalApplicationDidBecomeActive:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)application:(id)arg1 didChangeStatusBarFrame:(CGRect)arg2;
- (void)process3rdAppSupportContentFlagFromOpenUrl:(id *)arg1 andUrlStr:(id *)arg2 appID:(id)arg3;
- (BOOL)handleOpenURL:(id)arg1 bundleID:(id)arg2;
- (void)handleBusinessJump:(id)arg1 bundleID:(id)arg2;
- (BOOL)dismissCurrentWAAPP;
- (void)reportHandleOpenUrl:(id)arg1 schemeUrl:(id)arg2;
- (BOOL)application:(id)arg1 handleOpenURL:(id)arg2 bundleID:(id)arg3 annotation:(id)arg4;
- (BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (BOOL)__application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (BOOL)internalApplication:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)application:(id)arg1 handleWatchKitExtensionRequest:(id)arg2 reply:(id /* block */)arg3;
- (void)setupForShortcut;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)internalApplication:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(id /* block */)arg3;
- (BOOL)internalApplication:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(id /* block */)arg3;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (void)application:(id)arg1 didUpdateUserActivity:(id)arg2;
- (void)handleMemoryWarning;
- (void)clearServiceMemory;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)didReceiveLocalMemoryWarning:(id)arg1;
- (void)firstStartAfterUpgradeDowngrade;
- (void)detectAppFirstRunOrFirstRunAfterUpgrade;
- (void)saveAppVersion;
- (long long)GetAppVerCompareWithLastRun;
- (void)dealloc;
- (void)closeMainFrameWithoutReset;
- (void)setUserAgent;
- (id)parseSchemaUrlFrom:(id)arg1;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)internalHandleReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)handleReceiveRemoteNotification:(id)arg1 requestID:(id)arg2;
- (void)handleReceiveLocalNotification:(id)arg1;
- (void)onMainSceneWillConnected:(BOOL)arg1;
- (void)onMainSceneReceiveUserNotificationResponse:(id)arg1;
- (void)launchIfFirstSceneConnected:(BOOL)arg1;
- (void)onCarPlaySceneConnected;
- (void)applicationProtectedDataWillBecomeUnavailable:(id)arg1;
- (void)applicationProtectedDataDidBecomeAvailable:(id)arg1;
- (id)window;
- (void)setWindow:(id)arg1;
- (id)m_appViewControllerMgr;
- (BOOL)m_isActive;
- (BOOL)m_firstActive;
- (void)setM_firstActive:(BOOL)arg1;
- (BOOL)mInBackGroundFetch;
- (void)setMInBackGroundFetch:(BOOL)arg1;
- (id)mActiveLock;
- (void)setMActiveLock:(id)arg1;
- (BOOL)haveLazyInit;
- (void)setHaveLazyInit:(BOOL)arg1;
- (id /* block */)backgroundSessionCompletionHandler;
- (void)setBackgroundSessionCompletionHandler:(id /* block */)arg1;
- (unsigned long long)protectedDataStatus;
- (void)setProtectedDataStatus:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

