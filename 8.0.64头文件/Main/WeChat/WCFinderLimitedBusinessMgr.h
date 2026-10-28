@interface WCFinderLimitedBusinessMgr : NSObject <WCFinderAntiAddictMgrExt>
+ (id /* block */)getFinderExitAddictBlockBy:(id)arg1;
+ (BOOL)checkShouldFaceVerifyScene:(long long)arg1 isFinderIdentity:(BOOL)arg2 navigationController:(id)arg3 verifyContinueBlock:(id /* block */)arg4;
+ (void)showFaceVerifyTips:(long long)arg1 nav:(id)arg2 faceVerifyURL:(id)arg3;
+ (id)getFaceVerifyAlertTitleWithScene:(long long)arg1;
+ (id)getFaceVerifyCreateTitle:(long long)arg1;
- (id)init;
- (void)addObserverForForegroundNotification;
- (void)dealloc;
- (void)removeObserverForForegroundNotification;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (BOOL)triggerAntiAddictCheckFromVC:(id)arg1 scene:(unsigned long long)arg2;
- (void)antiCheckViewWillAppear:(BOOL)arg1 scene:(unsigned long long)arg2;
- (void)antiCheckViewDidAppear:(BOOL)arg1 scene:(unsigned long long)arg2;
@end
