@interface WANewSpecializedAgentViewController : MMUIViewController <WASpecializedAgentContentViewDelegate, WACapsuleMenuDataSource, WAAppTaskSystemCoverViewDataSource, WASpecializedAgentCapsuleZoomInteractiveProvider, WASpecializedAgentViewControllerProtocol>
{
    BOOL _closeWillDismissTask; // +0x70
    WASpecializedAgentContentView * _contentView; // +0x78
    WASpecializedAgentCapsuleZoomInteractor * _capsuleZoomInteractor; // +0x80
    WAContact * _contact; // +0x88
    UIPercentDrivenInteractiveTransition * _currentDismissInteractor; // +0x90
    UIView * _dismissOverlaySnapshot; // +0x98
}
- (id)initWithContact:(id)arg1;
- (void)dealloc;
- (BOOL)isColdLaunch;
- (void)setIsColdLaunch:(BOOL)arg1;
- (id)agentContext;
- (void)setAgentContext:(id)arg1;
- (unsigned long long)openAgentScene;
- (void)setOpenAgentScene:(unsigned long long)arg1;
- (id)chatSessionId;
- (id /* block */)contextReadyCompletion;
- (void)setContextReadyCompletion:(id /* block */)arg1;
- (void)setOpenedSubAgentAppId:(id)arg1;
- (id)hostAgentVCWhenPresented;
- (void)loadView;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)dismissHostTaskAnimated:(BOOL)arg1;
- (BOOL)shouldDismissTaskOnSwipeBack;
- (BOOL)beginInteractiveDismissTask;
- (void)updateInteractiveDismissTaskWithTranslationY:(double)arg1;
- (void)endInteractiveDismissTaskWithTranslationY:(double)arg1 velocityY:(double)arg2 shouldFinish:(BOOL)arg3;
- (void)removeDismissSnapshotOverlay;
- (void)contentViewDidRequestClose:(id)arg1;
- (void)contentView:(id)arg1 setEdgePanGestureEnabled:(BOOL)arg2;
- (void)contentViewDidFireContextReady:(id)arg1;
- (void)contentView:(id)arg1 setAgentLoadingDisplayed:(BOOL)arg2;
- (void)contentView:(id)arg1 didTapMiniAppLinkWithAppId:(id)arg2 path:(id)arg3 linkContent:(id)arg4;
- (void)contentView:(id)arg1 didTapWeAppCardWithAppId:(id)arg2 path:(id)arg3 debugMode:(unsigned long long)arg4 handoffId:(id)arg5 handoff:(id)arg6;
- (void)contentView:(id)arg1 didTapExpandButtonWithAppId:(id)arg2 path:(id)arg3 debugMode:(unsigned long long)arg4;
- (void)navigateToMiniProgramWithPath:(id)arg1 scene:(unsigned long long)arg2;
- (void)contentView:(id)arg1 didTapThinkingLinkURL:(id)arg2;
- (void)handleReturnFromHalfScreenSubAgent;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 agentContext:(id)arg2;
- (void)sendMessage:(id)arg1 agentContext:(id)arg2 openAgentScene:(unsigned long long)arg3;
- (void)onCapsuleMenuExit;
- (void)cleanupFrameSetViewCacheForContainerId:(unsigned int)arg1;
- (BOOL)capsuleMenuHidden;
- (CGRect)capsuleMenuFrame;
- (CGRect)capsuleMenuOriginalFrame;
- (long long)capsuleMenuStyleMode;
- (BOOL)systemCoverViewHidden;
- (id)capsuleZoomInteractor;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (BOOL)closeWillDismissTask;
- (void)setCloseWillDismissTask:(BOOL)arg1;
- (void)setCapsuleZoomInteractor:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)currentDismissInteractor;
- (void)setCurrentDismissInteractor:(id)arg1;
- (id)dismissOverlaySnapshot;
- (void)setDismissOverlaySnapshot:(id)arg1;
- (void).cxx_destruct;
@end
