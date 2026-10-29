@interface NavigationPOIServiceDataLogic : NSObject <IWALocalCacheMgrExt>
- (id)init;
- (void)openWeAppService:(id)arg1 weAppUrl:(id)arg2 fromScene:(unsigned long long)arg3;
- (void)preloadTecentNavigationWeApp;
- (BOOL)isCurrentTimePrefetchAvaliable;
- (void)resetPrefetchTime;
- (void)onUpdateAppPkgComplete:(BOOL)arg1 withAppInfoData:(id)arg2 errorCode:(unsigned int)arg3 errorMsg:(id)arg4;
@end
