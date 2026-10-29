@interface CBTHalfScreenConfigRouteAdapter : NSObject
{
    NSMutableDictionary * _callbackContexts; // +0x8
    NSMutableSet * _audioActiveLaunchKeys; // +0x10
    NSMutableDictionary * _pendingLaunchActions; // +0x18
    CBTHalfScreenStatusObserver * _pageSheetStatusObserver; // +0x20
    NSMutableDictionary * _pageSheetProxies; // +0x28
}
+ (id)sharedInstance;
+ (BOOL)hasActiveBusinessAudio;
- (id)init;
- (void)attachPageSheetStatusObserver;
- (id)injectClkId:(id)arg1 intoReportParamsJson:(id)arg2;
- (id)showFlutterHalfScreenFromVC:(id)arg1 launchConfig:(id)arg2 presentCallback:(id /* block */)arg3 dismissCallback:(id /* block */)arg4 cleanupBlock:(id /* block */)arg5;
- (long long)sourceTypeFromEnterScene:(int)arg1;
- (BOOL)isFinderBusiness:(id)arg1;
- (double)finderHeightRatioForContext:(id)arg1;
- (id)contextForInstanceKey:(id)arg1 launchRevision:(unsigned long long)arg2;
- (id)activeContextForBusinessId:(id)arg1 reuseKey:(id)arg2;
- (void)handlePageSheetOpenedWithBusinessId:(id)arg1 reuseKey:(id)arg2 isAnimationBegin:(BOOL)arg3;
- (void)handlePageSheetClosedWithBusinessId:(id)arg1 reuseKey:(id)arg2 isAnimationBegin:(BOOL)arg3;
- (void)registerPageSheetProxyForContext:(id)arg1;
- (void)removePageSheetProxyForInstanceKey:(id)arg1 animated:(BOOL)arg2;
- (void)handleLaunchAction:(id)arg1 launchRevision:(unsigned long long)arg2 action:(int)arg3 routeUrl:(id)arg4;
- (id)bindSelfHostedContextForInstanceKey:(id)arg1 launchRevision:(unsigned long long)arg2 routeUrl:(id)arg3;
- (long long)parseEnterSceneFromRouteUrl:(id)arg1;
- (void)createEngineAndPresentWithContext:(id)arg1 routeUrl:(id)arg2;
- (void)prepareFinderHalfScreenWithContext:(id)arg1 navigationController:(id)arg2;
- (void)reopenCachedVCWithContext:(id)arg1;
- (void)handlePresentSucceededForContext:(id)arg1;
- (void)removeFinderLayoutObserversFromNavigationController:(id)arg1;
- (void)updateFinderLayoutObserversForNavigationController:(id)arg1 context:(id)arg2 model:(id)arg3;
- (void)scheduleFinderLayoutRefreshForNavigationController:(id)arg1;
- (void)refreshFinderHalfScreenLayoutForContext:(id)arg1 force:(BOOL)arg2;
- (void)bindFinderHalfScreenIfNeeded:(id)arg1;
- (void)notifyFinderFrameChanged:(id)arg1;
- (void)manualNotifyFinderVideoDismiss:(id)arg1 model:(id)arg2 heightRatio:(double)arg3;
- (void)notifyFinderVideoProgress:(id)arg1 model:(id)arg2 progress:(double)arg3 heightRatio:(double)arg4 frame:(CGRect)arg5;
- (void)finishFailedContext:(id)arg1;
- (void)handleLaunchDismissed:(id)arg1 launchRevision:(unsigned long long)arg2;
- (void)dismissForegroundLaunchForInstanceKey:(id)arg1;
- (void)handleSessionDestroyed:(id)arg1;
- (void)handleTTSReadEnabledChanged:(BOOL)arg1;
- (void)pauseFinderMediaForActiveFlutterHalfScreen;
- (void)handleHalfScreenHeightChanged:(id)arg1 height:(double)arg2 screenHeight:(double)arg3;
- (id)callbackContexts;
- (void)setCallbackContexts:(id)arg1;
- (id)audioActiveLaunchKeys;
- (void)setAudioActiveLaunchKeys:(id)arg1;
- (id)pendingLaunchActions;
- (void)setPendingLaunchActions:(id)arg1;
- (id)pageSheetStatusObserver;
- (void)setPageSheetStatusObserver:(id)arg1;
- (id)pageSheetProxies;
- (void)setPageSheetProxies:(id)arg1;
- (void).cxx_destruct;
@end
