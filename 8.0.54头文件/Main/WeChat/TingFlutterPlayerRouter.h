@interface TingFlutterPlayerRouter : TingFlutterBaseRouter <FlutterNavigatorDelegate, ITingRouter>
{
    TingAppNavigationController * _appContainer; // +0x8
    MMFlutterInstance * _playerInstance; // +0x10
    TingFlutterViewController * _playerVC; // +0x18
    TingPlayerManager * _playTaskController; // +0x20
}
- (id)app;
- (id)appVisibleViewController;
- (id)createNewApp:(id)arg1;
- (void)consumeCategoryItem:(id)arg1 launchOptions:(id)arg2 type:(unsigned long long)arg3;
- (void)setDisplayMode:(int)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)openProfile:(unsigned long long)arg1 locLineType:(id)arg2;
- (void)tryAddTingItemToList:(id)arg1;
- (void)tryAddItemsToListWithBizType:(unsigned long long)arg1 scene:(int)arg2 listenIdList:(id)arg3 completion:(id /* block */)arg4;
- (void)prepareApp:(id /* block */)arg1;
- (void)onLaunch:(id)arg1;
- (void)onTingUrl:(id)arg1;
- (void)openTingPageUseNewEngineWithRouteName:(id)arg1 params:(id)arg2;
- (void)showCommonHalfScreen:(id)arg1 desc:(id)arg2 extraInfo:(id)arg3;
- (void)initPlayTaskController;
- (id)createViewController:(id)arg1 arguments:(id)arg2;
- (id)createFinderProfileChildFlutterVC:(id)arg1 route:(id)arg2 isAuthor:(BOOL)arg3 isFinderProfileHalfScreen:(BOOL)arg4 commentScene:(int)arg5 parentVC:(id)arg6;
- (void)pushOpenFinderDiscover:(id)arg1 finderUsername:(id)arg2 sessionBuffer:(id)arg3 navigationController:(id)arg4;
- (void)pushFromViewController:(id)arg1 plugin:(id)arg2 route:(id)arg3 arguments:(id)arg4;
- (id)appContainer;
- (void)setAppContainer:(id)arg1;
- (id)playerInstance;
- (void)setPlayerInstance:(id)arg1;
- (id)playerVC;
- (void)setPlayerVC:(id)arg1;
- (id)playTaskController;
- (void)setPlayTaskController:(id)arg1;
- (void).cxx_destruct;
@end

