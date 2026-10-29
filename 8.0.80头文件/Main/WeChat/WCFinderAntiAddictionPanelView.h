@interface WCFinderAntiAddictionPanelView : UIView
{
    BOOL _isTimerRunning; // +0x8
    id /* block */ _continueButtonClickedBlock; // +0x10
    UILabel * _messageLabel; // +0x18
    UILabel * _titleLabel; // +0x20
    UIButton * _bottomButton; // +0x28
    UIButton * _continueButton; // +0x30
    UIView * _bottomView; // +0x38
    CAGradientLayer * _topGradientLayer; // +0x40
    UISwipeGestureRecognizer * _swipeGesture; // +0x48
    FinderAntiAddictionInfo * _antiAddictionInfo; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)reset;
- (void)cleanupUI;
- (void)setupUI;
- (void)setupTopGradientBackground;
- (void)setupBottomView;
- (void)setupBottomButton;
- (void)setupContinueButton;
- (void)onContinueButtonClicked;
- (void)setupSwipeGesture;
- (id)createLabelWithText:(id)arg1 fontSize:(double)arg2;
- (void)layoutLabelsWithContainerWidth:(double)arg1;
- (void)updateWithAntiAddictionInfo:(id)arg1;
- (void)updateCountdownDisplayWithRemainingSeconds:(unsigned long long)arg1;
- (void)startCountdown;
- (void)completeCountdown;
- (void)updateMessageForTimerCompletionInternal;
- (void)removeGestureRecognizerInternal;
- (id)bottomButtonTextForCurrentState;
- (void)updateBottomLabelTextForCurrentState;
- (void)handleSwipeGesture:(id)arg1;
- (id)toastText;
- (void)showScrollToast;
- (void)layoutSubviews;
- (id)viewsForAlphaAdjustment;
- (id /* block */)continueButtonClickedBlock;
- (void)setContinueButtonClickedBlock:(id /* block */)arg1;
- (id)messageLabel;
- (void)setMessageLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)bottomButton;
- (void)setBottomButton:(id)arg1;
- (id)continueButton;
- (void)setContinueButton:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (id)topGradientLayer;
- (void)setTopGradientLayer:(id)arg1;
- (id)swipeGesture;
- (void)setSwipeGesture:(id)arg1;
- (id)antiAddictionInfo;
- (void)setAntiAddictionInfo:(id)arg1;
- (BOOL)isTimerRunning;
- (void)setIsTimerRunning:(BOOL)arg1;
- (void).cxx_destruct;
@end
