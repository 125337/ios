@interface TingFlutterRouter : TingFlutterBaseRouter <ITingRouter>
{
    BOOL _hasWarmUp; // +0x8
    BOOL _doingWarmUp; // +0x9
    TingAppNavigationController * _appContainer; // +0x10
    MMFlutterViewController * _appViewController; // +0x18
    MMFlutterInstance * _home; // +0x20
    TingPlayerManager * _playTaskController; // +0x28
    NSArray * _tingPlugins; // +0x30
    NSMutableArray * _completeBlockArray; // +0x38
}
+ (id)plugins;
- (id)init;
- (void)_initEngineGroup:(id)arg1;
- (void)initPlayTaskController;
- (id)tingPlugins;
- (void)flutterRouteWithString:(id)arg1 params:(id)arg2;
- (id)buildArgumentWithDefaultParamsAndNewParams:(id)arg1;
- (id)app;
- (id)appVisibleViewController;
- (id)createNewApp:(id)arg1;
- (id)createFinderProfileChildFlutterVC:(id)arg1 route:(id)arg2 isAuthor:(BOOL)arg3 isFinderProfileHalfScreen:(BOOL)arg4 commentScene:(int)arg5 parentVC:(id)arg6;
- (void)pushOpenFinderDiscover:(id)arg1 finderUsername:(id)arg2 sessionBuffer:(id)arg3 navigationController:(id)arg4;
- (void)warmUpEngineNew:(id /* block */)arg1;
- (void)warmUpEngine:(id /* block */)arg1;
- (double)warmUpStart:(id /* block */)arg1;
- (void)warmUpEnd:(BOOL)arg1 startTime:(double)arg2;
- (void)flushCompleteBlock;
- (void)reportWarmUp:(double)arg1 timeout:(BOOL)arg2;
- (long long)warmUpMode;
- (void)tryAddTingItemToList:(id)arg1;
- (void)tryAddItemsToListWithBizType:(unsigned long long)arg1 scene:(int)arg2 listenIdList:(id)arg3 completion:(id /* block */)arg4;
- (void)prepareApp:(id /* block */)arg1;
- (void)onLaunch:(id)arg1;
- (void)onLaunchV1:(id)arg1;
- (void)openTingWithLaunchType:(unsigned long long)arg1 host:(id)arg2 path:(id)arg3 query:(id)arg4;
- (void)onTingUrl:(id)arg1;
- (void)onLaunchV2:(id)arg1;
- (void)openTingPageUseNewEngineWithRouteName:(id)arg1 params:(id)arg2;
- (void)showCommonHalfScreen:(id)arg1 desc:(id)arg2 extraInfo:(id)arg3;
- (id)appContainer;
- (void)setAppContainer:(id)arg1;
- (id)appViewController;
- (void)setAppViewController:(id)arg1;
- (id)home;
- (void)setHome:(id)arg1;
- (id)playTaskController;
- (void)setPlayTaskController:(id)arg1;
- (void)setTingPlugins:(id)arg1;
- (BOOL)hasWarmUp;
- (void)setHasWarmUp:(BOOL)arg1;
- (BOOL)doingWarmUp;
- (void)setDoingWarmUp:(BOOL)arg1;
- (id)completeBlockArray;
- (void)setCompleteBlockArray:(id)arg1;
- (void).cxx_destruct;
@end

