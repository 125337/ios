@interface MJShootPreviewViewController : MMUIViewController <MJShootCropViewControllerDelegate>
{
    BOOL _isPresentingCropVC; // +0x68
    MJShootComposingViewModel * _viewModel; // +0x70
    id <MJShootPreviewViewControllerDelegate> _delegate; // +0x78
    UIView * _renderView; // +0x80
    MMUIButton * _exitButton; // +0x88
    MMUIButton * _completeButton; // +0x90
    MMUIButton * _clipButton; // +0x98
    MMUIButton * _cropButton; // +0xa0
    UIStackView * _bottomButtonsContainer; // +0xa8
    MMUIView * _blackBGView; // +0xb0
    MMUIView * _bottomBar; // +0xb8
    WCProgressMaskView * _progressMaskView; // +0xc0
}
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (void)_setupViews;
- (void)exitButtonTouchUpInside:(id)arg1;
- (void)completeButtonTouchUpInside:(id)arg1;
- (void)cropButtonTouchUpInside:(id)arg1;
- (void)clipButtonTouchUpInside:(id)arg1;
- (void)cropViewController:(id)arg1 didFinishCroppingWithSpatialDesc:(id)arg2;
- (void)cropViewControllerDidMoveContent:(id)arg1;
- (void)cropViewControllerDidScaleContent:(id)arg1;
- (void)cropViewControllerDidTapOnRotate:(id)arg1;
- (void)cropViewControllerDidTapOnFlip:(id)arg1;
- (void)cropViewControllerDidTapOnReset:(id)arg1;
- (void)handleShootPreviewExportProgressNoti:(id)arg1;
- (void)didStartAIGCComposingInAssetGeneration:(id)arg1;
- (void)didFinishAIGCComposingInAssetGeneration:(id)arg1;
- (void)didFailedAIGCComposingInAssetGeneration:(id)arg1;
- (void)onApplicationWillResignActiveNotification:(id)arg1;
- (void)onApplicationDidBecomeActiveNotification:(id)arg1;
- (void)_startExportingVideoWithCompletion:(id /* block */)arg1;
- (void)_checkAIGCContentHasGeneratedInAssetGenerateCase;
- (void)_showAIGCContentFailedGeneratedToastIfNeeded;
- (void)_showExportProgressView;
- (void)_removeExportProgressView;
- (CGSize)_calculateRenderViewSize;
- (id)viewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)renderView;
- (void)setRenderView:(id)arg1;
- (id)exitButton;
- (void)setExitButton:(id)arg1;
- (id)completeButton;
- (void)setCompleteButton:(id)arg1;
- (id)clipButton;
- (void)setClipButton:(id)arg1;
- (id)cropButton;
- (void)setCropButton:(id)arg1;
- (id)bottomButtonsContainer;
- (void)setBottomButtonsContainer:(id)arg1;
- (id)blackBGView;
- (void)setBlackBGView:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (id)progressMaskView;
- (void)setProgressMaskView:(id)arg1;
- (BOOL)isPresentingCropVC;
- (void)setIsPresentingCropVC:(BOOL)arg1;
- (void).cxx_destruct;
@end

