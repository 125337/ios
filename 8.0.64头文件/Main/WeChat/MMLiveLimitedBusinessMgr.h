@interface MMLiveLimitedBusinessMgr : NSObject <WCFinderAntiAddictMgrExt>
- (id)init;
- (void)addObserverForForegroundNotification;
- (void)dealloc;
- (void)removeObserverForForegroundNotification;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)triggerAntiAddictCheckFromVC:(id)arg1;
- (void)antiCheckViewDidAppear:(BOOL)arg1 scene:(unsigned long long)arg2;
- (void)antiCheckVerifySuc:(BOOL)arg1 scene:(unsigned long long)arg2;
@end
