@interface FBSDKAppEvents : NSObject
{
    BOOL _explicitEventsLoggedYet; // +0x8
    FBSDKServerConfiguration * _serverConfiguration; // +0x10
    FBSDKAppEventsState * _appEventsState; // +0x18
    FBSDKEventBindingManager * _eventBindingManager; // +0x20
    NSString * _userID; // +0x28
    BOOL _isUnityInit; // +0x30
    BOOL _disableTimer; // +0x31
    unsigned long long _flushBehavior; // +0x38
    NSString * _pushNotificationsDeviceTokenString; // +0x40
    NSObject<OS_dispatch_source> * _flushTimer; // +0x48
}
+ (void)initialize;
+ (void)logEvent:(id)arg1;
+ (void)logEvent:(id)arg1 valueToSum:(double)arg2;
+ (void)logEvent:(id)arg1 parameters:(id)arg2;
+ (void)logEvent:(id)arg1 valueToSum:(double)arg2 parameters:(id)arg3;
+ (void)logEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 accessToken:(id)arg4;
+ (void)logPurchase:(double)arg1 currency:(id)arg2;
+ (void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3;
+ (void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3 accessToken:(id)arg4;
+ (void)logPushNotificationOpen:(id)arg1;
+ (void)logPushNotificationOpen:(id)arg1 action:(id)arg2;
+ (void)logProductItem:(id)arg1 availability:(unsigned long long)arg2 condition:(unsigned long long)arg3 description:(id)arg4 imageLink:(id)arg5 link:(id)arg6 title:(id)arg7 priceAmount:(double)arg8 currency:(id)arg9 gtin:(id)arg10 mpn:(id)arg11 brand:(id)arg12 parameters:(id)arg13;
+ (void)activateApp;
+ (void)setPushNotificationsDeviceToken:(id)arg1;
+ (void)setPushNotificationsDeviceTokenString:(id)arg1;
+ (unsigned long long)flushBehavior;
+ (void)setFlushBehavior:(unsigned long long)arg1;
+ (id)loggingOverrideAppID;
+ (void)setLoggingOverrideAppID:(id)arg1;
+ (void)flush;
+ (void)setUserID:(id)arg1;
+ (void)clearUserID;
+ (id)userID;
+ (void)setUserEmail:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 phone:(id)arg4 dateOfBirth:(id)arg5 gender:(id)arg6 city:(id)arg7 state:(id)arg8 zip:(id)arg9 country:(id)arg10;
+ (id)getUserData;
+ (void)clearUserData;
+ (void)setUserData:(id)arg1 forType:(id)arg2;
+ (void)clearUserDataForType:(id)arg1;
+ (void)updateUserProperties:(id)arg1 handler:(id /* block */)arg2;
+ (void)augmentHybridWKWebView:(id)arg1;
+ (void)setIsUnityInit:(BOOL)arg1;
+ (void)sendEventBindingsToUnity;
+ (void)logInternalEvent:(id)arg1 isImplicitlyLogged:(BOOL)arg2;
+ (void)logInternalEvent:(id)arg1 valueToSum:(double)arg2 isImplicitlyLogged:(BOOL)arg3;
+ (void)logInternalEvent:(id)arg1 parameters:(id)arg2 isImplicitlyLogged:(BOOL)arg3;
+ (void)logInternalEvent:(id)arg1 parameters:(id)arg2 isImplicitlyLogged:(BOOL)arg3 accessToken:(id)arg4;
+ (void)logInternalEvent:(id)arg1 valueToSum:(double)arg2 parameters:(id)arg3 isImplicitlyLogged:(BOOL)arg4;
+ (void)logInternalEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 isImplicitlyLogged:(BOOL)arg4 accessToken:(id)arg5;
+ (void)logImplicitEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 accessToken:(id)arg4;
+ (id)singleton;
+ (id)requestForCustomAudienceThirdPartyIDWithAccessToken:(id)arg1;
- (id)init;
- (void)registerNotifications;
- (void)dealloc;
- (void)flushForReason:(unsigned long long)arg1;
- (id)appID;
- (void)publishInstall;
- (void)enableCodelessEvents;
- (void)fetchServerConfiguration:(id /* block */)arg1;
- (void)instanceLogEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 isImplicitlyLogged:(BOOL)arg4 accessToken:(id)arg5;
- (void)checkPersistedEvents;
- (void)flushOnMainQueue:(id)arg1 forReason:(unsigned long long)arg2;
- (void)handleActivitiesPostCompletion:(id)arg1 loggingEntry:(id)arg2 appEventsState:(id)arg3;
- (void)flushTimerFired:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)applicationMovingFromActiveStateOrTerminating;
- (unsigned long long)flushBehavior;
- (void)setFlushBehavior:(unsigned long long)arg1;
- (BOOL)disableTimer;
- (void)setDisableTimer:(BOOL)arg1;
- (id)pushNotificationsDeviceTokenString;
- (void)setPushNotificationsDeviceTokenString:(id)arg1;
- (id)flushTimer;
- (void)setFlushTimer:(id)arg1;
- (void).cxx_destruct;
@end
