@interface CameraAIContentView : UIView
{
    BOOL _animatingCapturedFrameToPreview; // +0x8
    BOOL _transitionExitAnimating; // +0x9
    BOOL _clickPreviewLayoutActive; // +0xa
    BOOL _longPressFeedbackWaitingForFade; // +0xb
    CameraAskQuestionBottom * _bottomView; // +0x10
    long long _currentState; // +0x18
    id /* block */ _processingCancelHandler; // +0x20
    UIView * _captureBlurBgView; // +0x28
    UIView * _bottomAreaView; // +0x30
    UIView * _capturedFrameContainerView; // +0x38
    UIView * _capturedFrameClipView; // +0x40
    UIImageView * _capturedFrameView; // +0x48
    MMUILabel * _guideTextView; // +0x50
    UIView * _recordingContainerView; // +0x58
    MMUILabel * _arcTextView; // +0x60
    MMUIActivityIndicatorView * _recordLoadingIndicator; // +0x68
    MMUIActivityIndicatorView * _processingIndicatorView; // +0x70
    MMUIButton * _processingCancelButton; // +0x78
    CameraScanCombineCropImageView * _intentSelectionView; // +0x80
    CameraAITransitionCoordinator * _transitionCoordinator; // +0x88
    UIImage * _pendingCapturedFrame; // +0x90
    CGRect _capturedFrameContainerTargetFrame; // +0x98
    CGRect _longPressPreviewStartFrame; // +0xb8
    CGRect _longPressPreviewTargetFrame; // +0xd8
}
+ (id)debugNameForContentState:(long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)transitionToState:(long long)arg1;
- (void)beginClickPreviewProcessingStateWithRequestId:(unsigned long long)arg1 cameraFrame:(CGRect)arg2 capturedImage:(id)arg3;
- (void)updateClickCapturedImage:(id)arg1 requestId:(unsigned long long)arg2;
- (void)transitionToClickPreviewExitingStateWithRequestId:(unsigned long long)arg1;
- (void)performAfterClickPreviewHoldForRequestId:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)handleClickHalfScreenShownWithRequestId:(unsigned long long)arg1;
- (void)handleClickHalfScreenWillAppearWithRequestId:(unsigned long long)arg1;
- (void)handleClickHalfScreenDidAppearWithRequestId:(unsigned long long)arg1;
- (void)beginLongPressPreparingStateWithRequestId:(unsigned long long)arg1 cameraFrame:(CGRect)arg2 originView:(id)arg3 capturedImage:(id)arg4;
- (void)transitionToLongPressRecordingStateWithRequestId:(unsigned long long)arg1;
- (void)transitionToLongPressProcessingStateWithRequestId:(unsigned long long)arg1;
- (void)transitionToLongPressExitingStateWithRequestId:(unsigned long long)arg1;
- (void)handleLongPressHalfScreenShownWithRequestId:(unsigned long long)arg1;
- (void)handleLongPressHalfScreenWillAppearWithRequestId:(unsigned long long)arg1;
- (void)handleLongPressHalfScreenDidAppearWithRequestId:(unsigned long long)arg1;
- (void)updateLongPressCapturedImage:(id)arg1 requestId:(unsigned long long)arg2;
- (void)updateCurrentStateForTransition:(long long)arg1;
- (void)applyContentState:(long long)arg1;
- (void)updateCancelAreaActive:(BOOL)arg1;
- (void)showIntentSelectionRect:(CGRect)arg1 inCameraFrame:(CGRect)arg2;
- (void)setBottomOriginOvalFrame:(CGRect)arg1;
- (void)cacheCapturedFrame:(id)arg1;
- (void)prepareForAIEntry;
- (void)freezeCapturedFramePresentationState;
- (void)setTransitionExitAnimatingLock:(BOOL)arg1;
- (void)resetTransitionVisualState;
- (id)transitionCoordinator;
- (void)resetCapturedFrameContainer;
- (void)hideLongPressRecordViews;
- (void)resetLongPressRecordViewsForEntry;
- (void)showLongPressRecordLoading;
- (void)showLongPressRecordingFeedback;
- (void)hideRecordLoadingIndicator;
- (void)layoutRecordLoadingIndicator;
- (void)layoutRecordingContainer;
- (void)showRecordingContainerAnimatedWithDuration:(double)arg1;
- (void)hideRecordingContainerAnimatedWithDuration:(double)arg1;
- (void)layoutProcessingIndicatorBelowCapturedFrame;
- (void)layoutProcessingIndicatorAtCapturedFrameCenter;
- (CGRect)aiCapturedFramePreviewTargetFrameInView:(id)arg1 updateLayout:(BOOL)arg2;
- (CGRect)aiLongPressPreviewTargetFrameInView:(id)arg1;
- (CGRect)capturedFrameImageFrameForContainerBounds:(CGRect)arg1;
- (void)showArcGuideText;
- (void)showLongPressArcGuideText;
- (void)layoutArcTextView;
- (id)arcGuideText;
- (id)arcGuideTextColor;
- (void)debugLogAIContentBaselineWithTag:(id)arg1;
- (id)captureBlurBgView;
- (id)bottomAreaView;
- (id)bottomView;
- (id)capturedFrameContainerView;
- (id)capturedFrameClipView;
- (id)capturedFrameView;
- (id)guideTextView;
- (id)recordingContainerView;
- (id)arcTextView;
- (id)processingIndicatorView;
- (id)processingCancelButton;
- (void)setProcessingCancelButtonVisible:(BOOL)arg1;
- (void)onProcessingCancelButtonTapped:(id)arg1;
- (id)recordLoadingIndicator;
- (id)intentSelectionView;
- (void)setBottomView:(id)arg1;
- (long long)currentState;
- (void)setCurrentState:(long long)arg1;
- (id /* block */)processingCancelHandler;
- (void)setProcessingCancelHandler:(id /* block */)arg1;
- (void)setCaptureBlurBgView:(id)arg1;
- (void)setBottomAreaView:(id)arg1;
- (void)setCapturedFrameContainerView:(id)arg1;
- (void)setCapturedFrameClipView:(id)arg1;
- (void)setCapturedFrameView:(id)arg1;
- (void)setGuideTextView:(id)arg1;
- (void)setRecordingContainerView:(id)arg1;
- (void)setArcTextView:(id)arg1;
- (void)setRecordLoadingIndicator:(id)arg1;
- (void)setProcessingIndicatorView:(id)arg1;
- (void)setProcessingCancelButton:(id)arg1;
- (void)setIntentSelectionView:(id)arg1;
- (void)setTransitionCoordinator:(id)arg1;
- (CGRect)capturedFrameContainerTargetFrame;
- (void)setCapturedFrameContainerTargetFrame:(CGRect)arg1;
- (CGRect)longPressPreviewStartFrame;
- (void)setLongPressPreviewStartFrame:(CGRect)arg1;
- (CGRect)longPressPreviewTargetFrame;
- (void)setLongPressPreviewTargetFrame:(CGRect)arg1;
- (id)pendingCapturedFrame;
- (void)setPendingCapturedFrame:(id)arg1;
- (BOOL)animatingCapturedFrameToPreview;
- (void)setAnimatingCapturedFrameToPreview:(BOOL)arg1;
- (BOOL)transitionExitAnimating;
- (void)setTransitionExitAnimating:(BOOL)arg1;
- (BOOL)clickPreviewLayoutActive;
- (void)setClickPreviewLayoutActive:(BOOL)arg1;
- (BOOL)longPressFeedbackWaitingForFade;
- (void)setLongPressFeedbackWaitingForFade:(BOOL)arg1;
- (void).cxx_destruct;
@end
