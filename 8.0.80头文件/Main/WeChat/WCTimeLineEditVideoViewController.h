@interface WCTimeLineEditVideoViewController : WCEditVideoViewController <WCEditVideoViewControllerDelegate, WCFinderPostViewControllerDelegate, WCFinderCreateCoordinatorDelegate, WCFinderLongVideoChooseHelperDelegate, WCFinderPostEditEntrySnsProtocol>
{
    WCFinderCreateCoordinator * _createCoordinator; // +0x70
}
- (void)configureTimelineHeaderSystemNavigationBarIfNeeded;
- (id)navigationBarBackgroundColor;
- (void)showEditVideoViewOn:(id)arg1;
- (float)getOutputTime;
- (BOOL)isExceedTimelineTimeLimit;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)postVideoByFinderFromEntrance:(long long)arg1;
- (void)_postVideoByFinderWithMMAsset:(id)arg1 fromEntrance:(long long)arg2;
- (void)_postVideoByFinderWithAVAsset:(id)arg1 videoPath:(id)arg2 fromEntrance:(long long)arg3;
- (void)_prepareAVAssetFromMMAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)postViewControllerFromVC:(id)arg1 postSession:(id)arg2;
- (void)postViewControllerCancelPostWithModel:(id)arg1;
- (void)postEditMgrSucFromVC:(id)arg1 postSession:(id)arg2;
- (void)postEditMgrSaveDraftByPostSession:(id)arg1;
- (void)postEditMgrFailByPostSession:(id)arg1;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)finderRealNameSuccess:(id)arg1;
- (void)triggerFinderPostActionWith:(id)arg1;
- (void)longVideoChooseHelper:(id)arg1 postSession:(id)arg2;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (void).cxx_destruct;
@end
