@interface WCFinderVideoProducerViewController : MMUIViewController <WCFinderVideoProducerViewModelDelegate, WCFinderVideoProducerAssetClipperDelegate, MMImagePickerManagerDelegate, MMBGMSelectHalfScreenViewControllerDelegate, WCFinderVideoProducerMusicBarDelegate, WCFinderVideoProducerMusicSearcherDelegate, WCVideoProducerTemplateBarDelegate, WCFinderVideoProducerTemplateFlowDelegate, WCFinderVideoProducerTemplatePanelDelegate, WCFinderVideoProducerMusicInfoMarqueeViewProtocol>
{
    WCFinderVideoProducerViewModel * _privateVideoProducerVM; // +0x70
    BOOL _pendingPickerExpectsVideo; // +0x78
    BOOL _assetReplacementRollbackFailed; // +0x79
    id <WCFinderVideoProducerViewControllerDelegate> _delegate; // +0x80
    WCColorProxy * _colorProxy; // +0x88
    WCFinderVideoProducerTemplateBarViewController * _templateBarVC; // +0x90
    WCFinderVideoProducerMusicBarViewController * _musicBarVC; // +0x98
    WCFinderVideoProducerAssetClipperViewController * _assetClipperVC; // +0xa0
    NSString * _oneClickFilmTemplateSelectionToken; // +0xa8
    MMBGMSelectHalfScreenViewController * _bgmPanelVC; // +0xb0
    MMUIButton * _doneButton; // +0xb8
    MMUIButton * _cancelButton; // +0xc0
    MMUIButton * _recommendDebugButton; // +0xc8
    UIView * _topActionBarView; // +0xd0
    CAGradientLayer * _topActionBarGradientLayer; // +0xd8
    WCFinderVideoProducerMusicInfoMarqueeView * _musicInfoMarqueeView; // +0xe0
    WCFinderVideoProducerMusicSearcherViewController * _musicSearcherVC; // +0xe8
    UIView * _previewRenderView; // +0xf0
    UIImageView * _previewThumbView; // +0xf8
    NSMutableArray * _showingFragmentStack; // +0x100
    WCFinderVideoProducerTemplateFlowViewController * _templateFlowVC; // +0x108
    WCFinderVideoProducerTemplatePanelViewController * _templatePanelVC; // +0x110
    MJServerAIAssetOrderCoordinator * _serverAIAssetOrderCoordinator; // +0x118
    MJServerAIMusicStatusScheduler * _serverAIMusicStatusScheduler; // +0x120
    WCFinderVideoProducerAssetAdjustmentTransaction * _assetAdjustmentTransaction; // +0x128
    WCFinderVideoProducerReplacementPreviewView * _replacementPreviewView; // +0x130
    WCFinderVideoProducerAssetCellViewModel * _pendingReplacementCellVM; // +0x138
    WCFinderVideoProducerAssetAdjustmentTransaction * _pendingPickerTransaction; // +0x140
    NSString * _pendingPickerSlotToken; // +0x148
    NSString * _activeRawPreviewSlotToken; // +0x150
    NSString * _activeRawPreviewRequestID; // +0x158
    unsigned long long _bgmPresentationGeneration; // +0x160
    CGRect _lastLaidOutContentBounds; // +0x168
    UIEdgeInsets _lastLaidOutSafeAreaInsets; // +0x188
}
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (void)_addAppStatusObserver;
- (void)_removeAppStatusObserver;
- (void)_onAppForeground:(id)arg1;
- (void)_onAppBackground:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewWillPopOrDismiss:(BOOL)arg1;
- (BOOL)hidesStatusBar;
- (id)navigationBarBackgroundColor;
- (long long)preferredStatusBarStyle;
- (void)finishVideoProducerWithError:(id)arg1 sightDraft:(id)arg2 isAsyncComposite:(BOOL)arg3;
- (BOOL)changeTemplate:(id)arg1 atOrder:(long long)arg2 fromBelonger:(long long)arg3;
- (BOOL)changeTemplate:(id)arg1 atOrder:(long long)arg2 fromBelonger:(long long)arg3 completeBlock:(id /* block */)arg4;
- (BOOL)changeTemplate:(id)arg1 musicID:(id)arg2 atOrder:(long long)arg3 fromBelonger:(long long)arg4 completionHandler:(id /* block */)arg5;
- (BOOL)changeTemplateWithTemplateID:(id)arg1 musicID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)changeToCurrentRenderingTemplateIfNeededWithCompletionBlock:(id /* block */)arg1;
- (void)tryToLaunchMJAppWithLaunchType:(long long)arg1 containsCurrentTemplate:(BOOL)arg2 creationProjectStr:(id)arg3;
- (BOOL)handleWillSelectCellVM:(id)arg1 atIndex:(id)arg2 fromBelonger:(long long)arg3;
- (void)_prepareVideoProducer;
- (void)_createVideo;
- (void)startDelayedCreation;
- (void)completeStartingDelayedCreation:(BOOL)arg1;
- (void)_onPlayFirstTemplate;
- (void)videoProducerDidChangeAudioModuleAbility:(BOOL)arg1;
- (id)colorProxy;
- (void)_initView;
- (void)_relayoutView;
- (void)videoProducerViewModel:(id)arg1 didGetExtRecommendMusics:(id)arg2 forTemplateID:(id)arg3;
- (void)registerYReportSdk;
- (void)showAssetClipperVC;
- (void)_showAssetClipperVC;
- (void)showAssetClipperVCForNewAIComposing;
- (void)dismissAssetClipperVC;
- (void)dismissAssetClipperVCSkippingLocalClippingStop:(BOOL)arg1;
- (void)dismissLegacyAssetClipperVC;
- (void)restorePreviewRenderViewAfterDismissingAssetClipper:(id)arg1;
- (BOOL)updateAssetClipperVCDataSource;
- (BOOL)beginAssetAdjustmentTransaction;
- (BOOL)isCurrentAssetAdjustmentSourceSessionForTransaction:(id)arg1;
- (BOOL)shouldUseServerAIAssetClipperForCurrentRoute;
- (id)composingSegmentIDListFromClipSegments:(id)arg1;
- (id)serverAIAssetOrderCoordinator;
- (void)relayoutAssetClipper;
- (void)_adjustPreviewRenderViewToFitAssetClipperShowing;
- (void)adjustPreviewRenderViewToFitAssetClipperShowingAnimated:(BOOL)arg1;
- (id)assetClipperVC:(id)arg1 didFindAssetInfoForLocalIdentifier:(id)arg2 orAssetFilePath:(id)arg3;
- (void)assetClipperVC:(id)arg1 didSeekSegmentWithId:(id)arg2 toTimeInClip:(struct)arg3;
- (void)assetClipperVC:(id)arg1 didPlaySegmentWithId:(id)arg2 forTimeRangeInClip:(struct)arg3;
- (void)assetClipperVC:(id)arg1 didPlayComposingSegmentWithTimeRange:(struct)arg2;
- (void)assetClipperVC:(id)arg1 didBeginComposingClipSkimmingWithSegmentID:(id)arg2 completion:(id /* block */)arg3;
- (void)assetClipperVC:(id)arg1 didSkimComposingClipWithSegmentID:(id)arg2 toTimeInMedia:(struct)arg3;
- (void)assetClipperVC:(id)arg1 didFinishComposingClipSkimmingWithSegmentID:(id)arg2 startTimeInMedia:(struct)arg3 completion:(id /* block */)arg4;
- (void)assetClipperVC:(id)arg1 didRequestPreviewForCellVM:(id)arg2;
- (void)assetClipperVC:(id)arg1 didRequestReplacementForCellVM:(id)arg2;
- (void)assetClipperVC:(id)arg1 didMoveCellVMFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)assetClipperVC:(id)arg1 didShowLaunchMJApp:(BOOL)arg2;
- (void)assetClipperVC:(id)arg1 didClickLaunchMJApp:(BOOL)arg2 withCellVMList:(id)arg3;
- (void)assetClipperVC:(id)arg1 didCommitWithCellVM:(id)arg2;
- (void)assetClipperVC:(id)arg1 didCancelWithCellVM:(id)arg2;
- (void)restoreServerAIAssetClipRangesIfNeededWithCompletion:(id /* block */)arg1;
- (void)handleServerAIAssetClipMutationResult:(long long)arg1 transaction:(id)arg2 completion:(id /* block */)arg3;
- (void)_recordAssetClipEditInfoWithCellVMList:(id)arg1;
- (void)_initAssetClipperIfNeeded;
- (void)submitAssetReplacementForTransaction:(id)arg1 commitGenerationID:(id)arg2;
- (void)handleAssetReplacementResult:(long long)arg1 transaction:(id)arg2 commitGenerationID:(id)arg3 error:(id)arg4;
- (BOOL)isCurrentAssetReplacementTransaction:(id)arg1 commitGenerationID:(id)arg2;
- (void)handleSuccessfulAssetReplacementForTransaction:(id)arg1 commitGenerationID:(id)arg2 localRoute:(BOOL)arg3;
- (void)handleRecoverableAssetReplacementFailureForTransaction:(id)arg1 commitGenerationID:(id)arg2 localRoute:(BOOL)arg3 error:(id)arg4;
- (void)handleAssetReplacementRollbackFailureForTransaction:(id)arg1 commitGenerationID:(id)arg2 error:(id)arg3;
- (void)handleServerAIAssetClipRollbackFailure;
- (void)handleServerAIAssetAdjustmentFatalFailureWithStage:(id)arg1;
- (void)handleAssetAdjustmentSourceSessionMismatchForTransaction:(id)arg1;
- (BOOL)rebindRestoredLocalAssetClipperForTransaction:(id)arg1;
- (void)resetReplacementTimeRanges;
- (void)showReplacementPickerForCellVM:(id)arg1;
- (BOOL)shouldHandlePickingActionOutsideWithAssetInfos:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingWithAssetInfos:(id)arg2 isUsingTemplate:(BOOL)arg3;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
- (void)handleReplacementPickerAssetInfos:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)dismissReplacementPickerThenRefreshSlotToken:(id)arg1;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)arg1;
- (BOOL)isPendingReplacementPickerContextCurrent;
- (void)invalidateReplacementPickerRequest;
- (void)clearPendingReplacementPickerContext;
- (void)showReplacementPreviewForCellVM:(id)arg1;
- (BOOL)isCurrentRawPreviewForTransaction:(id)arg1 slotToken:(id)arg2 previewRequestID:(id)arg3;
- (void)ensureReplacementPreviewViewAttached;
- (void)clearReplacementPreviewPreservingSlotToken:(BOOL)arg1;
- (void)showBGMPanelVC;
- (void)dismissBGMPanelVCWithAnimation:(BOOL)arg1;
- (void)_showBGMPanelVC;
- (void)selectRenderingMusicInfo;
- (void)setupBGMPanelVC;
- (id)createBGMPanelTabModels;
- (id)_serverAIComposingMusicInfoWithMusicData:(id)arg1 baseMusicInfo:(id)arg2;
- (void)bgmSelectedViewController:(id)arg1 didSelectedMusic:(id)arg2 atTabIndex:(unsigned long long)arg3 index:(unsigned long long)arg4 isTriggerByTap:(BOOL)arg5;
- (void)handleSelectedSearchMusicInfo:(id)arg1 atIndex:(long long)arg2;
- (id)bgmSelectedViewController:(id)arg1 willSelectMusic:(id)arg2 indexPath:(id)arg3 tabIndex:(unsigned long long)arg4;
- (void)handleWillSelectMusicInfo:(id)arg1 atIndex:(long long)arg2 tabIndex:(unsigned long long)arg3;
- (void)bgmSelectedViewController:(id)arg1 willShowMusic:(id)arg2 tabIndex:(unsigned long long)arg3 musicIndex:(unsigned long long)arg4;
- (void)bgmSelectedViewControllerDidClickSearchBar:(id)arg1;
- (void)bgmSelectedViewController:(id)arg1 didSearchWithKey:(id)arg2;
- (void)bgmSelectedViewController:(id)arg1 didClickMusicOnBtn:(BOOL)arg2;
- (void)bgmSelectedViewController:(id)arg1 didClickOSTOnBtn:(BOOL)arg2;
- (void)bgmSelectedViewControllerWillClose:(id)arg1;
- (void)recreateRenderingMusicIfNeeded;
- (void)bgmSelectedViewControllerDidCloseSearchView:(id)arg1 latestSelectedMusic:(id)arg2;
- (CGRect)_renderViewAvailableFrame;
- (CGRect)_renderViewAvailableFrameWithBGMPanelVCHeight:(double)arg1;
- (void)resizeBGMPanelTransformIfNeeded;
- (void)bgmSelectedViewController:(id)arg1 didChangeVisibleHeight:(double)arg2;
- (void)handleBGMPanelVCHeightDidChangeTo:(double)arg1;
- (void)showFragment:(id)arg1 animated:(BOOL)arg2 exclusive:(BOOL)arg3 withCompletion:(id /* block */)arg4;
- (void)dismissFragment:(id)arg1 animated:(BOOL)arg2 withCompletion:(id /* block */)arg3;
- (void)_dismissAllStackFragment;
- (void)addChildVC:(id)arg1;
- (void)removeChildVC:(id)arg1;
- (void)showMusicBarVC;
- (void)_showMusicBarVC;
- (void)updateMusicBarVC;
- (void)relayoutMusicBar;
- (void)musicBarVC:(id)arg1 didClickMusic:(id)arg2;
- (void)reportOneClickFilmMusicClick:(id)arg1;
- (void)musicBarVC:(id)arg1 willShowMusic:(id)arg2 atIndex:(id)arg3;
- (void)musicBarVC:(id)arg1 didSelectMusic:(id)arg2 atIndex:(id)arg3;
- (void)handleSelectedMusicInfo:(id)arg1 atIndex:(long long)arg2 showsLoading:(BOOL)arg3;
- (void)musicBarVC:(id)arg1 didChangeStatusForMusic:(id)arg2 isBGMEnabled:(BOOL)arg3 isOSTEnabled:(BOOL)arg4;
- (void)handleStatusChangedForMusic:(BOOL)arg1 isOSTEnabled:(BOOL)arg2 isLyricsEnabled:(BOOL)arg3;
- (void)musicBarVC:(id)arg1 didClickSearchButton:(id)arg2;
- (void)onCloseMusicBarVC:(id)arg1;
- (void)_initMusicBarIfNeeded;
- (void)showMusicSearcherVC;
- (void)muteMusicSearcherVC:(BOOL)arg1;
- (void)relayoutMusicSearcher;
- (void)musicSearcherVC:(id)arg1 didClickMusic:(id)arg2;
- (void)musicSearcherVC:(id)arg1 didRequestSearchKey:(id)arg2;
- (void)musicSearcherVC:(id)arg1 didSelectMusic:(id)arg2 atIndex:(id)arg3;
- (void)musicSearcherVC:(id)arg1 didCommitMusic:(id)arg2;
- (void)musicSearcherVC:(id)arg1 didCancelWithMusic:(id)arg2;
- (void)musicSearcherVC:(id)arg1 didRequestAudioModule:(BOOL)arg2;
- (void)_initMusicSearcherIfNeeded;
- (void)checkFirstFrameView;
- (void)checkPreviewRenderView;
- (BOOL)transformPreviewRenderViewWithContainerFrame:(CGRect)arg1;
- (void)resetPreviewRenderViewTransformForDefaultSize;
- (void)_resetPreviewRenderViewTransformForContainerFrame:(CGRect)arg1;
- (CGRect)_fitRenderViewInsideFrame:(CGRect)arg1 paddingTop:(double)arg2 paddingBottom:(double)arg3 canReachOut:(BOOL)arg4;
- (void)_relayoutPreviewRenderViewWithContainerFrame:(CGRect)arg1;
- (void)startProgressLoadingInfinityWithText:(id)arg1 canCancel:(BOOL)arg2;
- (void)startProgressLoadingWithText:(id)arg1 progress:(double)arg2 canCancel:(BOOL)arg3;
- (void)stopProgressLoadingWithText:(id)arg1 success:(BOOL)arg2 delayCompletion:(id /* block */)arg3;
- (void)_updateLoadingUserInteraction:(BOOL)arg1;
- (void)_relayoutProgressLoadingView;
- (void)showPreviewErrorAlertWithError:(id)arg1;
- (void)_onClickPreviewRenderView;
- (void)showTemplateBarVC;
- (void)updateTemplateBarVCDataSource;
- (void)updateTemplateBarVCSelection:(id)arg1;
- (void)relayoutTemplateBar;
- (void)templateBarVC:(id)arg1 willShowTemplate:(id)arg2 atIndex:(id)arg3;
- (BOOL)templateBarVC:(id)arg1 willSelectCellVM:(id)arg2 atIndex:(id)arg3;
- (void)templateBarVC:(id)arg1 didSelectCellVM:(id)arg2 repeated:(BOOL)arg3 atIndex:(id)arg4;
- (id)changingTempalteInTemplateBarVC:(id)arg1;
- (void)_initTemplateBarIfNeeded;
- (void)showTemplateFlowVC;
- (void)dismissTemplateFlowVC;
- (void)updateTemplateFlowVCDataSource;
- (void)updateTemplateFlowVCSelection:(id)arg1;
- (void)relayoutTemplateFlow;
- (void)resizeTemplateFlowTransformToHanging:(BOOL)arg1;
- (void)_adjustPreviewRenderViewtoFitTemplateFlowCurrently;
- (void)_adjustPreviewRenderViewToFitTemplateFlowShowing;
- (void)_adjustPreviewRenderViewToFitTemplateFlowHanging;
- (void)templateFlowVC:(id)arg1 didLoadMoreWithBlock:(id /* block */)arg2;
- (void)templateFlowVC:(id)arg1 willShowCellVM:(id)arg2 atIndexPath:(id)arg3;
- (void)templateFlowVC:(id)arg1 didChangeScrolling:(BOOL)arg2;
- (void)templateFlowVC:(id)arg1 didSlideFromOriginalTop:(double)arg2 withDiffTop:(double)arg3;
- (void)templateFlowVC:(id)arg1 didSlideToShowing:(double)arg2;
- (void)templateFlowVC:(id)arg1 didSlideToHanging:(double)arg2;
- (BOOL)templateFlowVC:(id)arg1 willSelectCellVM:(id)arg2 atIndex:(id)arg3;
- (void)templateFlowVC:(id)arg1 didSelectCellVM:(id)arg2 repeated:(BOOL)arg3 atIndex:(id)arg4;
- (void)templateFlowVC:(id)arg1 didCommitWithCellVM:(id)arg2 originalTemplate:(id)arg3;
- (void)templateFlowVC:(id)arg1 didCancelWithCellVM:(id)arg2 originalTemplate:(id)arg3;
- (id)changingTempalteInTemplateFlowVC:(id)arg1;
- (void)_onTemplateFlowProvidedTemplateList:(id)arg1;
- (void)_initTemplateFlowIfNeeded;
- (void)showTemplatePanelVC;
- (void)relayoutTemplatePanel;
- (void)templatePanelSelector:(id)arg1 didSelectTemplate:(id)arg2 index:(id)arg3;
- (void)onCloseTemplatePanelSelector:(id)arg1;
- (void)_initTemplatePanelIfNeeded;
- (void)showTopActionBarView;
- (void)hideTopActionBarView;
- (void)hideTopActionBarViewThatExceptsCancelButton;
- (void)showTopActionBarViewThatExceptsCancelButton;
- (void)enableTopActionBarView;
- (void)disableTopActionBarView;
- (void)disableTopActionBarViewThatExceptsCancelButton;
- (void)initTopActionBarView;
- (double)musicInfoBarMaximumWidth;
- (void)relayoutTopActionBar;
- (void)updateMusicInfoBar;
- (void)onMusicInfoMarqueeViewClicked:(id)arg1;
- (id)_reportServerAIComposingCompletionIfNeededWithExpectedClientRenderRet:(unsigned long long)arg1;
- (void)_onClickDoneButton;
- (void)exportTemplateVideo;
- (void)_onClickCancelButton;
- (void)_buildMusicListsForNewAISession:(id)arg1 searchMusicList:(id *)arg2;
- (void)_startPlayForNewAISessionCurrentRoute;
- (id)createBGMPanelTabModelsForNewAISession;
- (void)handleSelectedSearchMusicInfoForNewAISession:(id)arg1 atIndex:(long long)arg2;
- (void)handleWillSelectMusicInfoForNewAISession:(id)arg1 atIndex:(long long)arg2 tabIndex:(unsigned long long)arg3;
- (void)updateMusicBarVCForNewAISession;
- (void)handleSelectedMusicInfoForNewAISession:(id)arg1 atIndex:(long long)arg2 showsLoading:(BOOL)arg3;
- (void)handleStatusChangedForMusicFromNewAISession:(BOOL)arg1 isOSTEnabled:(BOOL)arg2 isLyricsEnabled:(BOOL)arg3;
- (BOOL)serverAIDesiredBGMEnabledForNextMusicStatusUpdate;
- (BOOL)serverAIDesiredOSTEnabledForNextMusicStatusUpdate;
- (id)serverAIMusicStatusScheduler;
- (void)didCommitMusicForNewAISession:(id)arg1;
- (void)checkPreviewRenderViewForNewAISession;
- (void)_onClickRecommendDebugButton;
- (void)_onClickCloseRecommendDebugView;
- (id)videoProducerVM;
- (void)setVideoProducerVM:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setColorProxy:(id)arg1;
- (id)templateBarVC;
- (void)setTemplateBarVC:(id)arg1;
- (id)musicBarVC;
- (void)setMusicBarVC:(id)arg1;
- (id)assetClipperVC;
- (void)setAssetClipperVC:(id)arg1;
- (id)oneClickFilmTemplateSelectionToken;
- (void)setOneClickFilmTemplateSelectionToken:(id)arg1;
- (id)bgmPanelVC;
- (void)setBgmPanelVC:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)recommendDebugButton;
- (void)setRecommendDebugButton:(id)arg1;
- (id)topActionBarView;
- (void)setTopActionBarView:(id)arg1;
- (id)topActionBarGradientLayer;
- (void)setTopActionBarGradientLayer:(id)arg1;
- (id)musicInfoMarqueeView;
- (void)setMusicInfoMarqueeView:(id)arg1;
- (id)musicSearcherVC;
- (void)setMusicSearcherVC:(id)arg1;
- (id)previewRenderView;
- (void)setPreviewRenderView:(id)arg1;
- (id)previewThumbView;
- (void)setPreviewThumbView:(id)arg1;
- (id)showingFragmentStack;
- (void)setShowingFragmentStack:(id)arg1;
- (id)templateFlowVC;
- (void)setTemplateFlowVC:(id)arg1;
- (id)templatePanelVC;
- (void)setTemplatePanelVC:(id)arg1;
- (void)setServerAIAssetOrderCoordinator:(id)arg1;
- (void)setServerAIMusicStatusScheduler:(id)arg1;
- (id)assetAdjustmentTransaction;
- (void)setAssetAdjustmentTransaction:(id)arg1;
- (id)replacementPreviewView;
- (void)setReplacementPreviewView:(id)arg1;
- (id)pendingReplacementCellVM;
- (void)setPendingReplacementCellVM:(id)arg1;
- (id)pendingPickerTransaction;
- (void)setPendingPickerTransaction:(id)arg1;
- (id)pendingPickerSlotToken;
- (void)setPendingPickerSlotToken:(id)arg1;
- (BOOL)pendingPickerExpectsVideo;
- (void)setPendingPickerExpectsVideo:(BOOL)arg1;
- (id)activeRawPreviewSlotToken;
- (void)setActiveRawPreviewSlotToken:(id)arg1;
- (id)activeRawPreviewRequestID;
- (void)setActiveRawPreviewRequestID:(id)arg1;
- (BOOL)assetReplacementRollbackFailed;
- (void)setAssetReplacementRollbackFailed:(BOOL)arg1;
- (CGRect)lastLaidOutContentBounds;
- (void)setLastLaidOutContentBounds:(CGRect)arg1;
- (UIEdgeInsets)lastLaidOutSafeAreaInsets;
- (void)setLastLaidOutSafeAreaInsets:(UIEdgeInsets)arg1;
- (unsigned long long)bgmPresentationGeneration;
- (void)setBgmPresentationGeneration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
