@interface FTSFloatingVoiceInputView : UIView <UIGestureRecognizerDelegate, FTSFloatingVoiceInputViewModelDelegate>
{
    BOOL _shouldRepeatBounceAnimation; // +0x8
    BOOL _reportKeyboardExp; // +0x9
    BOOL _enableHalfPage; // +0xa
    BOOL _enableH5HalfScreenInput; // +0xb
    BOOL _newStyleEnabled; // +0xc
    BOOL _enableKeyboard; // +0xd
    BOOL _isKeyboardVisible; // +0xe
    BOOL _isRecordingViewShowing; // +0xf
    BOOL _isLoadingAppearance; // +0x10
    BOOL _isInCancelStyle; // +0x11
    BOOL _isAnimating; // +0x12
    BOOL _hasShowedBounceAnimation; // +0x13
    BOOL _didFillPlaceholderForHalfPage; // +0x14
    BOOL _isCanceling; // +0x15
    unsigned int _reportBusinessType; // +0x18
    FTSFloatingVoiceInputViewModel * _ftsViewModel; // +0x20
    id <FTSFloatingVoiceInputViewDelegate> _delegate; // +0x28
    unsigned long long _scene; // +0x30
    unsigned long long _sceneType; // +0x38
    long long _searchScene; // +0x40
    NSDictionary * _extDict; // +0x48
    NSString * _thirdExtInfo; // +0x50
    NSString * _reportDocId; // +0x58
    UILongPressGestureRecognizer * _gestureRecognizer; // +0x60
    UIButton * _floatingButton; // +0x68
    UIView * _floatingBtnGradientView; // +0x70
    CAGradientLayer * _buttonMaskGradientLayer; // +0x78
    CAGradientLayer * _floatingBtnGradientLayer; // +0x80
    UIView * _floatingBtnBgView; // +0x88
    CAGradientLayer * _floatingBgGradientLayer; // +0x90
    UIView * _solidBgView; // +0x98
    UIView * _recordingView; // +0xa0
    MMUIActivityIndicatorView * _indicatorView; // +0xa8
    MMGrowTextView * _textView; // +0xb0
    CAGradientLayer * _textViewGradientLayer; // +0xb8
    UIView * _bottomRoundedView; // +0xc0
    UIView * _keyboardCoverView; // +0xc8
    WCRecordFeedbackView * _recordFeedbackView; // +0xd0
    UILabel * _cancelTipView; // +0xd8
    unsigned long long _modalType; // +0xe0
    double _bottomSpace; // +0xe8
    NSString * _title; // +0xf0
    UIButton * _h5CloseButton; // +0xf8
    NSString * _lastResultText; // +0x100
    double _startTime; // +0x108
    double _endTime; // +0x110
    NSDate * _startRerordingDate; // +0x118
    MMUIButton * _keyboardButton; // +0x120
    double _keyboardHeight; // +0x128
    FTSVoiceSearchSession * _currentSession; // +0x130
    MMTimer * _bounceAnimationTimer; // +0x138
    unsigned long long _buttonColorType; // +0x140
    UIView * _bottomView; // +0x148
    FTSRadialGradientLayer * _radialGradientLayer; // +0x150
    UIView * _ellipseBgView; // +0x158
    FTSRadialGradientLayer * _ellipseGradientLayer; // +0x160
    UIView * _fullScreenDimmingView; // +0x168
    CAGradientLayer * _topGradientLayer; // +0x170
    UIView * _topGradientView; // +0x178
    double _floatingButtonBottomHeight; // +0x180
    double _lastDimmingTopOffset; // +0x188
    FTSContext * _ftsContext; // +0x190
}
- (id)initWithViewModel:(id)arg1 config:(id)arg2 ftsContext:(id)arg3;
- (void)dealloc;
- (void)onWillEnterForeground:(id)arg1;
- (void)onDidEnterBackground:(id)arg1;
- (void)onWillResignActive:(id)arg1;
- (void)setupViews;
- (void)setupFullScreenDimmingView;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setupTopGradientBackground;
- (void)layoutSubviews;
- (void)setupFloatingButton;
- (void)updateFloatingButtonColorStyle:(BOOL)arg1;
- (void)setupEllipseGradientLayer;
- (void)updateEllipseGradientLayerFrame;
- (void)clickKeyboardButtton;
- (void)clickKeyboardButttonForBottomToggle;
- (void)updateFloatingButtonBottomSpace:(double)arg1;
- (void)updateFloatingButtonTitle:(id)arg1;
- (void)resetAndHide;
- (void)setupKeyboardObservers;
- (BOOL)shouldSetupKeyboardObservers;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)updateFloatingButtonConstraintsInDefualtModal:(BOOL)arg1;
- (BOOL)isXiaoWeiVoiceInputStyle;
- (double)xiaoWeiFloatingButtonWidth;
- (void)updateFloatingButtonConstraints:(BOOL)arg1;
- (BOOL)isWhiteStyle;
- (BOOL)isGreenStyle;
- (void)updateRecordingViewTopConstraint;
- (void)syncTextViewContentOffsetIfNeed;
- (double)dynamicLineNumsForCurrentText;
- (double)maxLineNumsBeforeCap;
- (void)updateRadialGradientLayer;
- (void)removeRadialGradientLayer;
- (double)topHeightWhenKeyboardInvisible:(double)arg1;
- (void)setupButtonMaskLayer;
- (void)setupButtonMaskLayerForKeyboardBind;
- (void)updateMaskLayerWhenAITIpsShowed;
- (void)handleLongPress:(id)arg1;
- (void)onGestureStart:(BOOL)arg1;
- (void)onGestureEnd:(BOOL)arg1 isFromTap:(BOOL)arg2;
- (void)onGestureEnd:(BOOL)arg1 isFromTap:(BOOL)arg2 isFromGesture:(BOOL)arg3;
- (void)stopRecordForSure;
- (void)setupRecordingView;
- (void)applyNewStyleTextWithString:(id)arg1;
- (double)predictLineCountForAttributedString:(id)arg1;
- (void)setupTextView;
- (void)onTextViewTextDidChange:(id)arg1;
- (void)resetTextView:(BOOL)arg1;
- (void)setupBottomRoundedView;
- (void)updateKeyboardCoverViewHeight;
- (void)setupCancelTipView;
- (void)switchToCancelStyle;
- (void)switchToNormalStyle;
- (void)setupH5CloseButton;
- (void)onClickH5CloseButton;
- (void)setupRecordFeedbackView;
- (void)unifyStartState;
- (void)didMoveToWindow;
- (void)animateShow;
- (void)animateHide;
- (void)stopIndicatorViewSafely;
- (void)enterLoadingAppearance;
- (void)onVoiceInputPreparing;
- (void)onVoiceInputStart;
- (void)onVoiceInputStop;
- (void)onVoiceInputCancelByMaxTime:(id)arg1;
- (void)onVoiceInputRecognizeWithText:(id)arg1;
- (void)onUpdatePeakPower:(float)arg1;
- (void)onVocieTransEnd:(id)arg1;
- (void)onVoiceInputError:(long long)arg1 errMsg:(id)arg2;
- (void)onVoiceTransEndedByServerWithEndFlag:(unsigned int)arg1;
- (void)onFirstPacketSent:(id)arg1;
- (void)onFirstResponseReceived:(id)arg1 hasText:(BOOL)arg2;
- (void)onLastPacketSent:(id)arg1;
- (BOOL)isTextSingleLine;
- (void)updateTextAlignmentForCurrentText;
- (void)setupTopFadeGradientLayer;
- (void)showGradientLayerIfNeed;
- (BOOL)isTextOverflow;
- (void)reportOnGestureStart:(BOOL)arg1;
- (id)extInfoDict;
- (id)extInfoString;
- (void)reportOnGestureCancel:(BOOL)arg1;
- (void)reportOnConfirmSearchWithText:(id)arg1 voiceId:(id)arg2;
- (id)genGestureId;
- (id)gestureId;
- (void)closeSessionIfNeeded:(id)arg1 errorCode:(long long)arg2;
- (void)reportVoiceSearchWithActionId:(unsigned long long)arg1;
- (void)reportVoiceSearchWithActionId:(unsigned long long)arg1 query:(id)arg2 extInfo:(id)arg3;
- (void)reportVoiceSearchWithActionId:(unsigned long long)arg1 query:(id)arg2;
- (id)mergeReportFieldsIntoExtInfo:(id)arg1;
- (id)genExtInfo;
- (void)traitCollectionDidChange:(id)arg1;
- (void)startFloatingButtonIconBounceAnimation;
- (void)stopFloatingButtonIconBounceAnimation;
- (void)setupSpringAnimation;
- (void)updateSpringAnimation:(id)arg1 fromValue:(double)arg2 toValue:(double)arg3 duration:(double)arg4;
- (id)fts_floatingButton;
- (void)stopRecognizeLoading;
- (BOOL)isKindOfTapSubView;
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
- (id)extDict;
- (void)setExtDict:(id)arg1;
- (id)thirdExtInfo;
- (void)setThirdExtInfo:(id)arg1;
- (BOOL)shouldRepeatBounceAnimation;
- (void)setShouldRepeatBounceAnimation:(BOOL)arg1;
- (id)reportDocId;
- (void)setReportDocId:(id)arg1;
- (unsigned int)reportBusinessType;
- (void)setReportBusinessType:(unsigned int)arg1;
- (BOOL)reportKeyboardExp;
- (void)setReportKeyboardExp:(BOOL)arg1;
- (id)gestureRecognizer;
- (void)setGestureRecognizer:(id)arg1;
- (id)floatingButton;
- (void)setFloatingButton:(id)arg1;
- (id)floatingBtnGradientView;
- (void)setFloatingBtnGradientView:(id)arg1;
- (id)buttonMaskGradientLayer;
- (void)setButtonMaskGradientLayer:(id)arg1;
- (id)floatingBtnGradientLayer;
- (void)setFloatingBtnGradientLayer:(id)arg1;
- (id)floatingBtnBgView;
- (void)setFloatingBtnBgView:(id)arg1;
- (id)floatingBgGradientLayer;
- (void)setFloatingBgGradientLayer:(id)arg1;
- (id)solidBgView;
- (void)setSolidBgView:(id)arg1;
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
- (id)keyboardCoverView;
- (void)setKeyboardCoverView:(id)arg1;
- (id)recordFeedbackView;
- (void)setRecordFeedbackView:(id)arg1;
- (id)cancelTipView;
- (void)setCancelTipView:(id)arg1;
- (BOOL)enableHalfPage;
- (void)setEnableHalfPage:(BOOL)arg1;
- (unsigned long long)modalType;
- (void)setModalType:(unsigned long long)arg1;
- (double)bottomSpace;
- (void)setBottomSpace:(double)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)enableH5HalfScreenInput;
- (void)setEnableH5HalfScreenInput:(BOOL)arg1;
- (BOOL)newStyleEnabled;
- (void)setNewStyleEnabled:(BOOL)arg1;
- (id)h5CloseButton;
- (void)setH5CloseButton:(id)arg1;
- (id)lastResultText;
- (void)setLastResultText:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)endTime;
- (void)setEndTime:(double)arg1;
- (id)startRerordingDate;
- (void)setStartRerordingDate:(id)arg1;
- (id)keyboardButton;
- (void)setKeyboardButton:(id)arg1;
- (BOOL)enableKeyboard;
- (void)setEnableKeyboard:(BOOL)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (BOOL)isKeyboardVisible;
- (void)setIsKeyboardVisible:(BOOL)arg1;
- (BOOL)isRecordingViewShowing;
- (void)setIsRecordingViewShowing:(BOOL)arg1;
- (BOOL)isLoadingAppearance;
- (void)setIsLoadingAppearance:(BOOL)arg1;
- (BOOL)isInCancelStyle;
- (void)setIsInCancelStyle:(BOOL)arg1;
- (id)currentSession;
- (void)setCurrentSession:(id)arg1;
- (id)bounceAnimationTimer;
- (void)setBounceAnimationTimer:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (BOOL)hasShowedBounceAnimation;
- (void)setHasShowedBounceAnimation:(BOOL)arg1;
- (BOOL)didFillPlaceholderForHalfPage;
- (void)setDidFillPlaceholderForHalfPage:(BOOL)arg1;
- (unsigned long long)buttonColorType;
- (void)setButtonColorType:(unsigned long long)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (id)radialGradientLayer;
- (void)setRadialGradientLayer:(id)arg1;
- (id)ellipseBgView;
- (void)setEllipseBgView:(id)arg1;
- (id)ellipseGradientLayer;
- (void)setEllipseGradientLayer:(id)arg1;
- (id)fullScreenDimmingView;
- (void)setFullScreenDimmingView:(id)arg1;
- (id)topGradientLayer;
- (void)setTopGradientLayer:(id)arg1;
- (id)topGradientView;
- (void)setTopGradientView:(id)arg1;
- (BOOL)isCanceling;
- (void)setIsCanceling:(BOOL)arg1;
- (double)floatingButtonBottomHeight;
- (void)setFloatingButtonBottomHeight:(double)arg1;
- (double)lastDimmingTopOffset;
- (void)setLastDimmingTopOffset:(double)arg1;
- (id)ftsContext;
- (void)setFtsContext:(id)arg1;
- (void).cxx_destruct;
@end
