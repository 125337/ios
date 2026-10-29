@interface MMAppSceneMgr : MMRootService <MMServiceProtocol>
{
    BOOL _isMovingToSubScene; // +0x8
    BOOL _closeSubSceneWhenDismissToRoot; // +0x9
    NSMapTable * _scenes; // +0x10
    NSMutableArray * _unscenedMainWindows; // +0x18
    UIViewController * _subSceneViewController; // +0x20
}
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)addUnscenedMainWindow:(id)arg1;
- (BOOL)isMainSceneCreated;
- (BOOL)isSubSceneCreated;
- (BOOL)isCarPlaySceneCreated;
- (BOOL)canCreateSubScene;
- (id)getSubSceneBizViewController;
- (BOOL)isViewControllerMovingToOtherScene:(id)arg1;
- (BOOL)shouldCloseSubSceneAtDismiss;
- (void)closeSubScene;
- (void)removeSceneDelegateForName:(id)arg1;
- (id)sceneDelegateForName:(id)arg1;
- (void)addSceneDelegate:(id)arg1 name:(id)arg2;
- (void)moveViewControllerToSubScene:(id)arg1;
- (void)moveViewControllerToMainScene:(id)arg1;
- (void)showViewController:(id)arg1 from:(id)arg2 complete:(id /* block */)arg3;
- (BOOL)isRootBizViewControllerInSubScene:(id)arg1;
- (void)requestSceneWithSession:(id)arg1;
- (void)requestSceneWithSession:(id)arg1 onFail:(id /* block */)arg2;
- (void)requestSceneDestructionWithSession:(id)arg1;
- (void)screenDidConnect:(id)arg1;
- (void)screenDidDisconnect:(id)arg1;
- (void)screenModeDidChange:(id)arg1;
- (BOOL)isMovingToSubScene;
- (void)setIsMovingToSubScene:(BOOL)arg1;
- (id)scenes;
- (void)setScenes:(id)arg1;
- (id)unscenedMainWindows;
- (void)setUnscenedMainWindows:(id)arg1;
- (BOOL)closeSubSceneWhenDismissToRoot;
- (void)setCloseSubSceneWhenDismissToRoot:(BOOL)arg1;
- (id)subSceneViewController;
- (void)setSubSceneViewController:(id)arg1;
- (void).cxx_destruct;
@end

