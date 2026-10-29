@interface WACustomLoadingViewController : WALoadingViewController <WAAppTaskSystemCoverViewDataSource, WACapsuleMenuDataSource>
{
    BOOL _isFullScreen; // +0x68
    id <WACustomLoadingViewControllerDelegate> _customLoadingDelegate; // +0x70
    NSString * _nsExtraData; // +0x78
    WAPackageConfig * _pkgConfig; // +0x80
    NSString * _orientation; // +0x88
}
- (id)init;
- (id)initWithContact:(id)arg1 pkgConfig:(id)arg2 extraData:(id)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)onAppPrepared;
- (void)onFullScreenDone;
- (void)onFullScreenStart;
- (void)onHalfScreenDone;
- (void)onHalfScreenStart;
- (void)onRotationDone;
- (void)onRotationStart;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setOrientation:(id)arg1;
- (void)tryForceRotate;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)isRunningInSheetMode;
- (BOOL)isEmbedModeExpandedToFullScreen;
- (BOOL)isSheetModeExpandedToStatusBarTop;
- (BOOL)isInDarkMode;
- (BOOL)systemCoverViewHidden;
- (BOOL)capsuleMenuHidden;
- (CGRect)capsuleMenuOriginalFrame;
- (CGRect)capsuleMenuFrame;
- (long long)capsuleMenuStyleMode;
- (unsigned long long)capsuleMenuType;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)customLoadingDelegate;
- (void)setCustomLoadingDelegate:(id)arg1;
- (id)nsExtraData;
- (void)setNsExtraData:(id)arg1;
- (id)pkgConfig;
- (void)setPkgConfig:(id)arg1;
- (id)orientation;
- (BOOL)isFullScreen;
- (void)setIsFullScreen:(BOOL)arg1;
- (void).cxx_destruct;
@end

