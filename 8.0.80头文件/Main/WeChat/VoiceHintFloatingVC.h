@interface VoiceHintFloatingVC : MMWindowViewController <CAAnimationDelegate>
{
    long long _state; // +0x80
    id /* block */ _onEntryAnimationFinished; // +0x88
    id /* block */ _onTapDismiss; // +0x90
    UIView * _bannerView; // +0x98
    UIView * _contentView; // +0xa0
    UIView * _hintContainerView; // +0xa8
    UILabel * _hintLabel; // +0xb0
    UILabel * _recordingTitleLabel; // +0xb8
    WCRecordFeedbackView * _feedbackView; // +0xc0
    UIView * _waitingPillarsView; // +0xc8
    NSArray * _waitingPillars; // +0xd0
    MMUIActivityIndicatorView * _indicatorView; // +0xd8
    CAGradientLayer * _processingBackgroundLayer; // +0xe0
    CAGradientLayer * _shadowLayer; // +0xe8
    CAShapeLayer * _contentMaskLayer; // +0xf0
    MMTimer * _renderTimer; // +0xf8
    unsigned long long _entryAnimationGeneration; // +0x100
    CGRect _showFrame; // +0x108
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (double)effectiveTopSafeInset;
- (void)layoutHintContainer;
- (void)layoutBannerForCurrentSafeArea;
- (void)setupViews;
- (id)normalGreenColor;
- (id)cancelRedColor;
- (id)processingBackgroundColor;
- (id)recordingHintColor;
- (id)cancelHintColor;
- (id)recordingPillarColor;
- (id)processingPillarColor;
- (void)setProcessingBackgroundVisible:(BOOL)arg1;
- (void)playEntryAnimationForGeneration:(unsigned long long)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)removeEntryAnimations;
- (void)showWithFrame:(CGRect)arg1;
- (void)updateState:(long long)arg1;
- (void)onTapToDismiss:(id)arg1;
- (void)dismiss;
- (void)startRenderTimer;
- (void)onRenderTimer:(id)arg1;
- (void)stopRenderTimer;
- (long long)state;
- (id /* block */)onEntryAnimationFinished;
- (void)setOnEntryAnimationFinished:(id /* block */)arg1;
- (id /* block */)onTapDismiss;
- (void)setOnTapDismiss:(id /* block */)arg1;
- (id)bannerView;
- (void)setBannerView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)hintContainerView;
- (void)setHintContainerView:(id)arg1;
- (id)hintLabel;
- (void)setHintLabel:(id)arg1;
- (id)recordingTitleLabel;
- (void)setRecordingTitleLabel:(id)arg1;
- (id)feedbackView;
- (void)setFeedbackView:(id)arg1;
- (id)waitingPillarsView;
- (void)setWaitingPillarsView:(id)arg1;
- (id)waitingPillars;
- (void)setWaitingPillars:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (id)processingBackgroundLayer;
- (void)setProcessingBackgroundLayer:(id)arg1;
- (id)shadowLayer;
- (void)setShadowLayer:(id)arg1;
- (id)contentMaskLayer;
- (void)setContentMaskLayer:(id)arg1;
- (id)renderTimer;
- (void)setRenderTimer:(id)arg1;
- (CGRect)showFrame;
- (void)setShowFrame:(CGRect)arg1;
- (unsigned long long)entryAnimationGeneration;
- (void)setEntryAnimationGeneration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
