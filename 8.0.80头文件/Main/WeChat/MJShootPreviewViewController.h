@interface MJShootPreviewViewController : MMUIViewController <MJShootComposingViewModelDelegate, MMWebViewDelegate, MJShootCropViewControllerDelegate, MJShootAIGCAsyncGenerationStateBarDelegate, WCActionSheetDelegate, MJShootPreviewViewControllerProtocol>
{
    BOOL _isPresentingCropVC; // +0x70
    BOOL _isPresentingFeedbackVC; // +0x71
    MJShootComposingViewModel * _viewModel; // +0x78
    id <MJShootPreviewViewControllerDelegate> _delegate; // +0x80
    UIView * _renderView; // +0x88
    MMUIButton * _exitButton; // +0x90
    MJToolbarButton * _beautyButton; // +0x98
    MJToolbarButton * _cropButton; // +0xa0
    MMUIButton * _moreButton; // +0xa8
    MMUIButton * _completeButton; // +0xb0
    MMUIView * _bottomBar; // +0xb8
    MJShootAIGCAsyncGenerationStateBar * _aigcAsyncGenerationStateBar; // +0xc0
    WCActionSheet * _aigcAsyncActionSheet; // +0xc8
    WCActionSheet * _aigcAsyncCancelActionSheet; // +0xd0
    MJProgressMaskView * _progressMaskView; // +0xd8
    UIImpactFeedbackGenerator * _feedbackGenerator; // +0xe0
    CGSize _lastDuoPreviewLayoutSize; // +0xe8
}
- (void)setupViewModelDelegate;
- (void)shootComposingViewModel:(id)arg1 recordingTimeDidChange:(struct)arg2 maxRecordingDuration:(struct)arg3;
- (void)shootComposingViewModelOnAIGCProcessSucceed:(id)arg1;
- (void)shootComposingViewModel:(id)arg1 onAIGCRequestConditionNotMet:(id)arg2;
- (void)shootComposingViewModel:(id)arg1 onAIGCProcessFailed:(id)arg2;
- (void)_handleAIGCFinishActionInMaasSDKWithError:(id)arg1;
- (id)_handleSDKAIGCError:(id)arg1;
- (void)showAIGCFailedToast;
- (void)showAIGCRejectedToast;
- (void)showAIGCTimeoutToast;
- (void)showAIGCInsecurityToast;
- (void)presentFeedbackViewController;
- (void)webViewDidReturn:(id)arg1;
- (void)exportAndPublish;
- (void)exportAndPresentMovieComposingVC;
- (void)exportAndSaveToPhotoLibrary;
- (void)saveExportAssetToPhotoLibraryWithFinishInfo:(id)arg1 error:(id)arg2 shouldShowSaveTip:(BOOL)arg3;
- (void)_showAIGCConditionNotMetAlert;
- (void)showExportProgressView;
- (void)removeExportProgressView;
- (void)_startExportingVideoWithCompletion:(id /* block */)arg1;
- (void)presentCropViewController;
- (void)cropViewController:(id)arg1 didFinishCroppingWithSpatialDesc:(id)arg2;
- (void)cropViewControllerDidMoveContent:(id)arg1;
- (void)cropViewControllerDidScaleContent:(id)arg1;
- (void)cropViewControllerDidTapOnRotate:(id)arg1;
- (void)cropViewControllerDidTapOnFlip:(id)arg1;
- (void)cropViewControllerDidTapOnReset:(id)arg1;
- (void)registerAIGCSyncNotifications;
- (void)cancelAIGCSyncGenerationResultCheck;
- (void)didStartAIGCComposingInAssetGeneration:(id)arg1;
- (void)didFinishAIGCComposingInAssetGeneration:(id)arg1;
- (void)didFailedAIGCComposingInAssetGeneration:(id)arg1;
- (void)checkAIGCContentIsGeneratedOrNot;
- (void)setupAndPrepareAIGCAsyncContentFromDraftWithCompletionHandler:(id /* block */)arg1;
- (void)openAsyncAIGCDraftWithCompletionHandler:(id /* block */)arg1;
- (void)syncTaskCompletionStateFromServerWithCompletionHandler:(id /* block */)arg1;
- (void)handleAIGCAsyncExitActionFromDraft;
- (void)registerAIGCAsyncNotifications;
- (void)unregisterAIGCAsyncNotifications;
- (void)_handleAIGCAsyncDidRecevieCreationResponseStart:(id)arg1;
- (void)_handleAIGCAsyncDidRecevieCreationResponseNoti:(id)arg1;
- (void)_handleAIGCAsyncDidRecevieQueryResponseNoti:(id)arg1;
- (void)_handleAIGCAsyncDidSucceedInMaasSDKNoti:(id)arg1;
- (void)fallbackToPreviewFlowForReedit;
- (BOOL)validateReeditContextWithEntryParams:(id)arg1 shootComposingViewController:(id)arg2;
- (void)cleanupCameraSessionAndReopenMovieComposingForReeditWithEntryParams:(id)arg1 shootComposingViewController:(id)arg2;
- (void)reopenMovieComposingForAIGCReeditWithEntryParams:(id)arg1;
- (void)_updateAigcAsyncGenerationStateBar;
- (void)prepareReeditCreationParamsWithCompletion:(id /* block */)arg1;
- (void)_handleAIGCAsyncDidFailedInMaasSDKNoti:(id)arg1;
- (void)cancelAIGCAsyncGenerating;
- (void)handleAIGCAsyncDraftExportActionWithFinishInfo:(id)arg1;
- (void)handleAIGCAsyncDraftClipActionWithFinishInfo:(id)arg1;
- (void)cleanUpCameraSessionWithCompletionHandler:(id /* block */)arg1;
- (id)generateFinderVideoTemplateInfoWithRecordingFinishInfo:(id)arg1;
- (void)showAIGCAsyncGenerationStateBar;
- (void)removeAIGCAsyncGenerationStateBar;
- (void)showAIGCAsyncGenerationCancelAlert;
- (void)_didCallOffCurrentAIGCAsyncGenerating;
- (void)aigcAsyncGenerationStateBarDidClickNotifyButton:(id)arg1;
- (id)aigcAsyncGenerationStateBarGetReportDict;
- (void)removeAIGCAsyncActionSheetIfNeeded;
- (void)_didLeaveShootComposingOnAIGCAsyncGenerating;
- (void)actionSheetCancel:(id)arg1;
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)updateDuoPreviewLayout;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (void)setupViews;
- (void)updateMainActionButtonsHiddenState:(BOOL)arg1;
- (void)exitButtonTouchUpInside:(id)arg1;
- (void)handleExitAction;
- (void)exitAfterPausingWithMaterial:(id)arg1;
- (void)completeButtonTouchUpInside:(id)arg1;
- (void)cropButtonTouchUpInside:(id)arg1;
- (void)goToMovieComposing;
- (void)beautyButtonTouchUpInside:(id)arg1;
- (void)goToFeedbackVC;
- (void)moreButtonTouchUpInside:(id)arg1;
- (void)handleShootPreviewExportProgressNoti:(id)arg1;
- (void)onApplicationWillResignActiveNotification:(id)arg1;
- (void)onApplicationDidBecomeActiveNotification:(id)arg1;
- (CGSize)_calculateRenderViewSize;
- (void)disableMainFunctionButtonsExcludeExitButton;
- (void)enableMainFunctionButtonsExcludeExitButton;
- (BOOL)shouldAutorotate;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (long long)preferredStatusBarStyle;
- (void)handleOnAIGCRequestConditionNotMet:(id)arg1;
- (void)_prepareTemplateAndSetupAIGCAsyncContentFromDraft;
- (void)_setupAIGCAsyncContentFromDraft;
- (void)_handleAIGCAsyncDraftPrepareFailed;
- (id)feedbackGenerator;
- (id)exitButton;
- (id)moreButton;
- (id)beautyButton;
- (id)cropButton;
- (id)completeButton;
- (id)viewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGSize)lastDuoPreviewLayoutSize;
- (void)setLastDuoPreviewLayoutSize:(CGSize)arg1;
- (id)renderView;
- (void)setRenderView:(id)arg1;
- (void)setExitButton:(id)arg1;
- (void)setBeautyButton:(id)arg1;
- (void)setCropButton:(id)arg1;
- (void)setMoreButton:(id)arg1;
- (void)setCompleteButton:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (id)aigcAsyncGenerationStateBar;
- (void)setAigcAsyncGenerationStateBar:(id)arg1;
- (id)aigcAsyncActionSheet;
- (void)setAigcAsyncActionSheet:(id)arg1;
- (id)aigcAsyncCancelActionSheet;
- (void)setAigcAsyncCancelActionSheet:(id)arg1;
- (id)progressMaskView;
- (void)setProgressMaskView:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (BOOL)isPresentingCropVC;
- (void)setIsPresentingCropVC:(BOOL)arg1;
- (BOOL)isPresentingFeedbackVC;
- (void)setIsPresentingFeedbackVC:(BOOL)arg1;
- (void).cxx_destruct;
@end
