@interface MMFinderLivePrimitiveViewController : MMFinderLiveViewController <MMLiveConflictHandling>
- (id)initWithLiveTaskIdDirectly:(id)arg1;
- (void)initPrimitiveNotifications;
- (BOOL)disableLoadViews;
- (void)onLiveMinimizeWindowDidShiftIntoListChanged:(BOOL)arg1;
- (void)handleUIOrientationChanged:(id)arg1;
- (void)performBlockAfterAutoRotateIfNeeded;
- (BOOL)needHandleWaitingRotateBlock;
- (BOOL)resolveExternalConflicts;
- (BOOL)handleConflictWithNewLive:(id)arg1 navigationController:(id)arg2;
- (BOOL)handleConflictWithNewFinderLiveContentVMs:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 navigationController:(id)arg4 tabType:(long long)arg5 commentScene:(int)arg6 replayEntryType:(id)arg7 useVerticalFullscreenMinimization:(BOOL)arg8 routeParam:(id)arg9;
- (BOOL)handleConflictForEnableHomePageTransitionContentVMs:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 navigationController:(id)arg4 tabType:(long long)arg5 commentScene:(int)arg6;
- (BOOL)restartLiveFromExtend:(id)arg1;
- (id)primitiveTask;
@end
