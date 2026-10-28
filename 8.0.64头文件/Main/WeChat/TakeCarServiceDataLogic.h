@interface TakeCarServiceDataLogic : NSObject <IWALocalCacheMgrExt>
- (id)init;
- (void)openTecentCarWeApp:(id)arg1;
- (void)preloadTecentCarWeApp;
- (BOOL)isCurrentTimePrefetchAvaliable;
- (void)resetPrefetchTime;
- (void)onUpdateAppPkgComplete:(BOOL)arg1 withAppInfoData:(id)arg2 errorCode:(unsigned int)arg3 errorMsg:(id)arg4;
@end
