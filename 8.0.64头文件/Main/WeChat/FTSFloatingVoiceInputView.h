@interface FTSFloatingVoiceInputView : UIView <UIGestureRecognizerDelegate, FTSFloatingVoiceInputViewModelDelegate>
{
    BOOL _enableHalfPage; // +0x8
    BOOL _halfPageInPresentModal; // +0x9
    FTSFloatingVoiceInputViewModel * _ftsViewModel; // +0x10
    id <FTSFloatingVoiceInputViewDelegate> _delegate; // +0x18
    unsigned long long _scene; // +0x20
    unsigned long long _sceneType; // +0x28
    long long _searchScene; // +0x30
    UILongPressGestureRecognizer * _gestureRecognizer; // +0x38
    UIButton * _floatingButton; // +0x40
    UIView * _floatingBtnGradientView; // +0x48
    CAGradientLayer * _floatingBtnGradientLayer; // +0x50
    UIView * _floatingBtnBgView; // +0x58
    CAGradientLayer * _floatingBgGradientLayer; // +0x60
    UIView * _recordingView; // +0x68
    MMUIActivityIndicatorView * _indicatorView; // +0x70
    MMGrowTextView * _textView; // +0x78
    CAGradientLayer * _textViewGradientLayer; // +0x80
    UIView * _bottomRoundedView; // +0x88
    WCRecordFeedbackView * _recordFeedbackView; // +0x90
    UILabel * _cancelTipView; // +0x98
    double _bottomSpace; // +0xa0
    NSString * _lastResultText; // +0xa8
    double _startTime; // +0xb0
    double _endTime; // +0xb8
}
- (id)initWithViewModel:(id)arg1 enableHalfPage:(BOOL)arg2 halfPageInPresentModal:(BOOL)arg3 bottomSpace:(double)arg4;
- (void)setupViews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setupFloatingButton;
- (void)setupButtonMaskLayer;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)onGestureStart;
- (void)onGestureEnd:(BOOL)arg1;
- (void)setupRecordingView;
- (void)setupTextView;
- (void)resetTextView:(BOOL)arg1;
- (void)setupBottomRoundedView;
- (void)setupCancelTipView;
- (void)switchToCancelStyle;
- (void)switchToNormalStyle;
- (void)setupRecordFeedbackView;
- (void)unifyStartState;
- (void)animateShow;
- (void)animateHide;
- (void)onVoiceInputPreparing;
- (void)onVoiceInputStart;
- (void)onVocieInputStop;
- (void)onVoiceInputCancelByMaxTime;
- (void)onVoiceInputRecognizeWithText:(id)arg1;
- (void)onUpdatePeakPower:(float)arg1;
- (void)onVocieTransEnd;
- (void)onVoiceInputError:(unsigned long long)arg1 errMsg:(id)arg2;
- (void)onVoiceTransEndedByServerWithEndFlag:(unsigned int)arg1;
- (void)showGradientLayerIfNeed;
- (BOOL)isTextOverflow;
- (void)reportOnGestureStart;
- (void)reportOnGestureCancel;
- (void)reportOnConfirmSearch;
- (void)traitCollectionDidChange:(id)arg1;
- (id)ftsViewModel;
- (void)setFtsViewModel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)sceneType;
- (void)setSceneType:(unsigned long long)arg1;
- (long long)searchScene;
- (void)setSearchScene:(long long)arg1;
- (id)gestureRecognizer;
- (void)setGestureRecognizer:(id)arg1;
- (id)floatingButton;
- (void)setFloatingButton:(id)arg1;
- (id)floatingBtnGradientView;
- (void)setFloatingBtnGradientView:(id)arg1;
- (id)floatingBtnGradientLayer;
- (void)setFloatingBtnGradientLayer:(id)arg1;
- (id)floatingBtnBgView;
- (void)setFloatingBtnBgView:(id)arg1;
- (id)floatingBgGradientLayer;
- (void)setFloatingBgGradientLayer:(id)arg1;
- (id)recordingView;
- (void)setRecordingView:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)textViewGradientLayer;
- (void)setTextViewGradientLayer:(id)arg1;
- (id)bottomRoundedView;
- (void)setBottomRoundedView:(id)arg1;
- (id)recordFeedbackView;
- (void)setRecordFeedbackView:(id)arg1;
- (id)cancelTipView;
- (void)setCancelTipView:(id)arg1;
- (BOOL)enableHalfPage;
- (void)setEnableHalfPage:(BOOL)arg1;
- (BOOL)halfPageInPresentModal;
- (void)setHalfPageInPresentModal:(BOOL)arg1;
- (double)bottomSpace;
- (void)setBottomSpace:(double)arg1;
- (id)lastResultText;
- (void)setLastResultText:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)endTime;
- (void)setEndTime:(double)arg1;
- (void).cxx_destruct;
@end
