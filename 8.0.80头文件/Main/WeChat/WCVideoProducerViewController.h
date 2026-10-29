@interface WCVideoProducerViewController : MMUIViewController <WCVideoProducerMusicInfoMarqueeViewProtocol, WCMomentsCompositorTemplatePanelDelegate, WCVideoProducerTemplateFlowDelegate, WCVideoProducerTemplateBarDelegate, WCVideoProducerMusicSearcherDelegate, WCVideoProducerMusicBarDelegate, MMBGMSelectHalfScreenViewControllerDelegate, WCVideoProducerAssetClipperDelegate, WCVideoProducerViewModelDelegate>
{
    WCVideoProducerViewModel * _privateVideoProducerVM; // +0x70
    UIView * _proxyRootView; // +0x78
    id <WCVideoProducerViewControllerDelegate> _delegate; // +0x80
    WCColorProxy * _colorProxy; // +0x88
    MMBGMSelectHalfScreenViewController * _bgmPanelVC; // +0x90
    NSString * _currentMusicId; // +0x98
    WCVideoProducerMusicSearcherViewController * _musicSearcherVC; // +0xa0
    WCVideoProducerMusicBarViewController * _musicBarVC; // +0xa8
    WCMomentsCompositorTemplatePanelViewController * _templatePanelVC; // +0xb0
    WCVideoProducerTemplateFlowViewController * _templateFlowVC; // +0xb8
    WCVideoProducerTemplateBarViewController * _templateBarVC; // +0xc0
    WCVideoProducerAssetClipperViewController * _assetClipperVC; // +0xc8
    NSMutableArray * _showingFragmentStack; // +0xd0
    MMUIButton * _doneButton; // +0xd8
    MMUIButton * _cancelButton; // +0xe0
    UIView * _topActionBarView; // +0xe8
    CAGradientLayer * _topActionBarGradientLayer; // +0xf0
    WCVideoProducerMusicInfoMarqueeView * _musicInfoMarqueeView; // +0xf8
    NSMutableDictionary * _snsSceneReportDict; // +0x100
    UIView * _previewRenderView; // +0x108
    UIImageView * _previewThumbView; // +0x110
}
- (void)showTopActionBarView;
- (void)hideTopActionBarView;
- (void)hideTopActionBarViewThatExceptsCancelButton;
- (void)showTopActionBarViewThatExceptsCancelButton;
- (void)enableTopActionBarView;
- (void)disableTopActionBarView;
- (void)disableTopActionBarViewThatExceptsCancelButton;
- (void)initTopActionBarView;
- (void)relayoutTopActionBar;
- (void)updateMusicInfoBar;
- (void)onMusicInfoMarqueeViewClicked:(id)arg1;
- (void)_onClickDoneButton;
- (void)exportTemplateVideo;
- (void)_onClickCancelButton;
- (void)showTemplatePanelVC;
- (void)relayoutTemplatePanel;
- (void)templatePanelSelector:(id)arg1 didSelectTemplate:(id)arg2 index:(id)arg3;
- (void)onCloseTemplatePanelSelector:(id)arg1;
- (void)_initTemplatePanelIfNeeded;
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
- (void)showTemplateBarVC;
- (void)updateTemplateBarVCDataSource;
- (void)updateTemplateBarVCSelection:(id)arg1;
- (void)relayoutTemplateBar;
- (void)templateBarVC:(id)arg1 willShowTemplate:(id)arg2 atIndex:(id)arg3;
- (BOOL)templateBarVC:(id)arg1 willSelectCellVM:(id)arg2 atIndex:(id)arg3;
- (void)templateBarVC:(id)arg1 didSelectCellVM:(id)arg2 repeated:(BOOL)arg3 atIndex:(id)arg4;
- (id)changingTempalteInTemplateBarVC:(id)arg1;
- (void)_initTemplateBarIfNeeded;
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
- (void)showMusicSearcherVC;
- (void)muteMusicSearcherVC:(BOOL)arg1;
- (void)relayoutMusicSearcher;
- (void)musicSearcherVC:(id)arg1 didRequestSearchKey:(id)arg2;
- (void)musicSearcherVC:(id)arg1 didSelectMusic:(id)arg2 atIndex:(id)arg3;
- (void)musicSearcherVC:(id)arg1 didCommitMusic:(id)arg2;
- (void)musicSearcherVC:(id)arg1 didCancelWithMusic:(id)arg2;
- (void)musicSearcherVC:(id)arg1 didRequestAudioModule:(BOOL)arg2;
- (void)_initMusicSearcherIfNeeded;
- (void)showMusicBarVC;
- (void)_showMusicBarVC;
- (void)updateMusicBarVC;
- (void)relayoutMusicBar;
- (void)musicBarVC:(id)arg1 willShowMusic:(id)arg2 atIndex:(id)arg3;
- (void)musicBarVC:(id)arg1 didSelectMusic:(id)arg2 atIndex:(id)arg3;
- (void)handleSelectedMusicInfo:(id)arg1 atIndex:(long long)arg2 showsLoading:(BOOL)arg3;
- (void)musicBarVC:(id)arg1 didChangeStatusForMusic:(id)arg2 isBGMEnabled:(BOOL)arg3 isOSTEnabled:(BOOL)arg4;
- (void)handleStatusChangedForMusic:(BOOL)arg1 isOSTEnabled:(BOOL)arg2 isLyricsEnabled:(BOOL)arg3;
- (void)musicBarVC:(id)arg1 didClickSearchButton:(id)arg2;
- (void)onCloseMusicBarVC:(id)arg1;
- (void)_initMusicBarIfNeeded;
- (void)showFragment:(id)arg1 animated:(BOOL)arg2 exclusive:(BOOL)arg3 withCompletion:(id /* block */)arg4;
- (void)dismissFragment:(id)arg1 animated:(BOOL)arg2 withCompletion:(id /* block */)arg3;
- (void)_dismissAllStackFragment;
- (void)addChildVC:(id)arg1;
- (void)removeChildVC:(id)arg1;
- (void)showBGMPanelVC;
- (void)dismissBGMPanelVCWithAnimation:(BOOL)arg1;
- (void)_showBGMPanelVC;
- (void)selectRenderingMusicInfo;
- (void)setupBGMPanelVC;
- (id)createBGMPanelTabModels;
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
- (void)showAssetClipperVC;
- (void)_showAssetClipperVC;
- (void)dismissAssetClipperVC;
- (void)_updateAssetClipperVCDataSource;
- (void)relayoutAssetClipper;
- (void)_adjustPreviewRenderViewToFitAssetClipperShowing;
- (id)assetClipperVC:(id)arg1 didFindAssetInfoForLocalIdentifier:(id)arg2 orAssetFilePath:(id)arg3;
- (void)assetClipperVC:(id)arg1 didSeekSegmentWithId:(id)arg2 toTimeInClip:(struct)arg3;
- (void)assetClipperVC:(id)arg1 didPlaySegmentWithId:(id)arg2 forTimeRangeInClip:(struct)arg3;
- (void)assetClipperVC:(id)arg1 didShowLaunchMJApp:(BOOL)arg2;
- (void)assetClipperVC:(id)arg1 didClickLaunchMJApp:(BOOL)arg2 withCellVMList:(id)arg3;
- (void)assetClipperVC:(id)arg1 didCommitWithCellVM:(id)arg2;
- (void)assetClipperVC:(id)arg1 didCancelWithCellVM:(id)arg2;
- (void)_recordAssetClipEditInfoWithCellVMList:(id)arg1;
- (void)_initAssetClipperIfNeeded;
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (void)_addAppStatusObserver;
- (void)_removeAppStatusObserver;
- (void)_onAppForeground:(id)arg1;
- (void)_onAppBackground:(id)arg1;
- (id)view;
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
- (id)videoProducerVM;
- (void)setVideoProducerVM:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setColorProxy:(id)arg1;
- (id)bgmPanelVC;
- (void)setBgmPanelVC:(id)arg1;
- (id)currentMusicId;
- (void)setCurrentMusicId:(id)arg1;
- (id)musicSearcherVC;
- (void)setMusicSearcherVC:(id)arg1;
- (id)musicBarVC;
- (void)setMusicBarVC:(id)arg1;
- (id)templatePanelVC;
- (void)setTemplatePanelVC:(id)arg1;
- (id)templateFlowVC;
- (void)setTemplateFlowVC:(id)arg1;
- (id)templateBarVC;
- (void)setTemplateBarVC:(id)arg1;
- (id)assetClipperVC;
- (void)setAssetClipperVC:(id)arg1;
- (id)showingFragmentStack;
- (void)setShowingFragmentStack:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)topActionBarView;
- (void)setTopActionBarView:(id)arg1;
- (id)topActionBarGradientLayer;
- (void)setTopActionBarGradientLayer:(id)arg1;
- (id)musicInfoMarqueeView;
- (void)setMusicInfoMarqueeView:(id)arg1;
- (id)snsSceneReportDict;
- (void)setSnsSceneReportDict:(id)arg1;
- (id)previewRenderView;
- (void)setPreviewRenderView:(id)arg1;
- (id)previewThumbView;
- (void)setPreviewThumbView:(id)arg1;
- (void).cxx_destruct;
@end
