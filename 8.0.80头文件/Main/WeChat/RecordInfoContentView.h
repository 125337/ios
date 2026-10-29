@interface RecordInfoContentView : UIView <InputControllerDelegate, IAudioSenderExt, WorldTranslateManagerDelegate, LanguageSelectPageViewDelegate, SpeakTextLogicControllerDelegate, TranslateButtonDelegate, TranslateFunctionButtonDelegate>
{
    BOOL _prepare; // +0x8
    BOOL _isTimeoutCountdownLabelVisible; // +0x9
    BOOL _needShowCountDown; // +0xa
    BOOL _bNeedShowTips; // +0xb
    BOOL _bTransStartSucc; // +0xc
    BOOL _bCanStartTextViewAnimation; // +0xd
    BOOL _bRealTimeTranslate; // +0xe
    BOOL _waitingForContinueRecordingSession; // +0xf
    BOOL _voiceTransEnded; // +0x10
    BOOL _hasClickStopSpeak; // +0x11
    BOOL _isContinueVoiceSendAnimating; // +0x12
    BOOL _skipPositionChangeOnCallInterrupt; // +0x13
    BOOL _manuallyEditFlag; // +0x14
    unsigned int _localId; // +0x18
    unsigned int _inputLanguageType; // +0x1c
    NSString * _chatName; // +0x20
    UIView * _inputBar; // +0x28
    UIView * _operatePanelView; // +0x30
    UIView * _arrowIconView; // +0x38
    MMNewVoiceInputReportObj * _reportObj; // +0x40
    unsigned long long _recordState; // +0x48
    UILabel * _timeoutCountdownLabel; // +0x50
    AudioRecorderUserData * _recordInfo; // +0x58
    id <RecordInfoContentViewDelegate> _delegate; // +0x60
    id <VoiceRecordAudioService> _audioService; // +0x68
    TranslateButton * _translateButton; // +0x70
    TranslateFunctionButton * _translateFunctionButton; // +0x78
    WorldTranslateManager * _worldTranslateManager; // +0x80
    VoiceRecordConfig * _config; // +0x88
    unsigned long long _transState; // +0x90
    UIView * _bottomView; // +0x98
    UIView * _contentView; // +0xa0
    MMGrowTextView * _transTextView; // +0xa8
    UIView * _caretView; // +0xb0
    EmoticonBoardView * _emoticonBoardView; // +0xb8
    WCInputController * _inputController; // +0xc0
    WCRecordFeedbackView * _feedbackView; // +0xc8
    SightIconView * _preparingView; // +0xd0
    UILabel * _countdownLabel; // +0xd8
    UIButton * _errorButton; // +0xe0
    UILabel * _tipsLabel; // +0xe8
    UILabel * _arrowTipsLabel; // +0xf0
    UIButton * _inputModeButton; // +0xf8
    double _originBottom; // +0x100
    double _currentLength; // +0x108
    double _widthGrowBeginTimeStamp; // +0x110
    CADisplayLink * _widthGrowDisplayLink; // +0x118
    CALayer * _fakeAnimateLayer; // +0x120
    NSString * _translatedText; // +0x128
    double _startTime; // +0x130
    double _endTime; // +0x138
    MMUIActivityIndicatorView * _translateIndicatorView; // +0x140
    UIImageView * _callInterruptVoiceIconView; // +0x148
    UILabel * _callInterruptDurationLabel; // +0x150
    UIView * _continueVoiceSendInfoView; // +0x158
    UIImageView * _continueVoiceSendIconView; // +0x160
    UILabel * _continueVoiceSendDurationLabel; // +0x168
    id /* block */ _continueVoiceReappearStartBlock; // +0x170
    id /* block */ _continueVoiceReappearAnimatingBlock; // +0x178
    double _continueVoiceOriginalCenterY; // +0x180
    MMVoiceAtContactCoordinator * _atContactCoordinator; // +0x188
}
- (id)initWithBottomView:(id)arg1 config:(id)arg2;
- (void)dealloc;
- (id)createTransTextView;
- (void)removeFeedbackView;
- (id)contentBackgroundColor;
- (id)contentView;
- (id)arrowIconView;
- (id)countdownLabel;
- (id)errorButton;
- (id)translateIndicatorView;
- (id)inputController;
- (id)inputBar;
- (id)inputModeButton;
- (id)emoticonBoardView;
- (id)createPreparingView;
- (id)fakeAnimateLayer;
- (id)tipsLabel;
- (id)arrowTipsLabel;
- (double)horizontalLayoutCenterX;
- (void)layoutSubviews;
- (void)updateInputLayoutForCurrentBounds;
- (void)layoutTranslateButton;
- (void)layoutTranslateFunctionButton;
- (void)setBottom:(double)arg1;
- (void)updateCountDownLabelAndFeedbackViewWithRecordState:(unsigned long long)arg1;
- (void)updateFeedbackViewWithRecordState:(unsigned long long)arg1;
- (void)resizeTextView;
- (void)adjustTextMaxSize;
- (void)adjustHeightForTimeoutCountdownLabel:(BOOL)arg1;
- (void)updateTimeoutCountdownLabelPosition;
- (double)getRecordingBubbleWidth;
- (void)updateInputModeButton:(id)arg1 forMode:(long long)arg2;
- (void)toggleInputModeAndUpdateButton:(id)arg1;
- (void)updateSubviews;
- (void)updateArrowTipsLabelForState:(unsigned long long)arg1;
- (void)repositionArrowTipsLabel;
- (void)constrainArrowTipsAboveOperateArc;
- (void)onTapInputModeButton;
- (void)setOperatePanelView:(id)arg1;
- (void)setPrepare:(BOOL)arg1;
- (void)setPeakPower:(float)arg1;
- (void)setBubbleBackgroundColor:(id)arg1;
- (void)setTimeoutCountDown:(long long)arg1 needShow:(BOOL)arg2;
- (void)setTransState:(unsigned long long)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)layoutErrorButtonForCurrentBounds;
- (void)setBNeedShowTips:(BOOL)arg1;
- (void)removeWidthGrowDisplayLink;
- (void)startWidthGrowDisplayLink;
- (void)onGrowWidthDisplayLinkCallback;
- (id)getContentView;
- (id)getTransResult;
- (void)constrainResultBubbleBottomTo:(double)arg1;
- (void)finishPendingVoiceTransIfNeeded;
- (void)prepareForContinueRecording;
- (void)becomeTextView;
- (void)resignFirstResponder;
- (void)changeRecordStateTo:(unsigned long long)arg1 CenterX:(double)arg2;
- (void)showCallInterruptVoiceInfo;
- (void)hideCallInterruptVoiceInfo;
- (void)setupContinueVoiceSendInfoView;
- (void)hideContinueVoiceSendInfoView;
- (void)playContinueVoiceSendAnimationWithReappearStart:(id /* block */)arg1 reappearAnimating:(id /* block */)arg2;
- (void)playContinueVoiceReappearAnimation;
- (void)setFrame:(CGRect)arg1;
- (void)setCenter:(CGPoint)arg1;
- (void)playSecondTimeoutAnimation;
- (void)startTranslateTimer;
- (void)startRealTimeTranslate;
- (void)startTranslate;
- (void)realStartTranslate;
- (void)pauseTranslate;
- (void)makeTranslateStopWithError:(id)arg1;
- (void)updateTranslatingWording:(BOOL)arg1;
- (unsigned int)getSuffixDotCountWithString:(id)arg1;
- (void)displayTranslateResultText;
- (void)displayTranslateResultText:(BOOL)arg1;
- (id)generateAttrTextFrom:(id)arg1;
- (void)OnVoiceTransEnd:(unsigned int)arg1 VoiceIds:(id)arg2;
- (void)OnVoiceTransError:(unsigned int)arg1 errorCode:(long long)arg2;
- (void)OnVoiceTransResultChange:(id)arg1 InputId:(unsigned int)arg2;
- (void)OnRecordVoiceChangeWithUserData:(id)arg1;
- (BOOL)shouldRespondToKeyBoardEvent;
- (BOOL)canSelectEmoji:(id)arg1;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)textViewTextDidChange;
- (void)didCommitText:(id)arg1;
- (double)getVisibleHeight;
- (void)keyboardShowing;
- (void)keyboardWillShow;
- (void)keyboardWillHide;
- (void)keyboardHiding;
- (void)keyboardDidHide;
- (void)onInputModeChangingTo:(long long)arg1;
- (void)updateTextInputRelatedView;
- (void)translateButtonDidTap:(id)arg1;
- (void)translateFunctionButton:(id)arg1 didTapLeftButton:(id)arg2;
- (void)translateFunctionButton:(id)arg1 didTapRightButton:(id)arg2;
- (void)onLanguageSelect:(id)arg1;
- (void)onSpeakStart:(_NSRange)arg1 costTimeMs:(unsigned int)arg2;
- (void)onSpeakLoading;
- (void)onSpeakStop;
- (void)onSpeakFail;
- (void)reportSpeakEnd;
- (void)onTextViewSpeakingRangeReset;
- (void)onTranslateTextChange:(id)arg1;
- (void)onTranslateStateChange:(long long)arg1;
- (void)updateDisplayText:(id)arg1;
- (void)setAttributedText:(id)arg1 animated:(BOOL)arg2;
- (BOOL)prepare;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (void)setInputBar:(id)arg1;
- (id)operatePanelView;
- (void)setArrowIconView:(id)arg1;
- (id)reportObj;
- (void)setReportObj:(id)arg1;
- (unsigned long long)recordState;
- (void)setRecordState:(unsigned long long)arg1;
- (BOOL)isTimeoutCountdownLabelVisible;
- (void)setIsTimeoutCountdownLabelVisible:(BOOL)arg1;
- (id)timeoutCountdownLabel;
- (void)setTimeoutCountdownLabel:(id)arg1;
- (unsigned int)inputLanguageType;
- (void)setInputLanguageType:(unsigned int)arg1;
- (id)recordInfo;
- (void)setRecordInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)audioService;
- (void)setAudioService:(id)arg1;
- (id)translateButton;
- (void)setTranslateButton:(id)arg1;
- (id)translateFunctionButton;
- (void)setTranslateFunctionButton:(id)arg1;
- (id)worldTranslateManager;
- (void)setWorldTranslateManager:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (unsigned long long)transState;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (void)setContentView:(id)arg1;
- (id)transTextView;
- (void)setTransTextView:(id)arg1;
- (id)caretView;
- (void)setCaretView:(id)arg1;
- (void)setEmoticonBoardView:(id)arg1;
- (void)setInputController:(id)arg1;
- (id)feedbackView;
- (void)setFeedbackView:(id)arg1;
- (id)preparingView;
- (void)setPreparingView:(id)arg1;
- (BOOL)needShowCountDown;
- (void)setNeedShowCountDown:(BOOL)arg1;
- (void)setCountdownLabel:(id)arg1;
- (void)setErrorButton:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void)setArrowTipsLabel:(id)arg1;
- (void)setInputModeButton:(id)arg1;
- (double)originBottom;
- (void)setOriginBottom:(double)arg1;
- (double)currentLength;
- (void)setCurrentLength:(double)arg1;
- (double)widthGrowBeginTimeStamp;
- (void)setWidthGrowBeginTimeStamp:(double)arg1;
- (id)widthGrowDisplayLink;
- (void)setWidthGrowDisplayLink:(id)arg1;
- (void)setFakeAnimateLayer:(id)arg1;
- (id)translatedText;
- (void)setTranslatedText:(id)arg1;
- (BOOL)bNeedShowTips;
- (BOOL)bTransStartSucc;
- (void)setBTransStartSucc:(BOOL)arg1;
- (BOOL)bCanStartTextViewAnimation;
- (void)setBCanStartTextViewAnimation:(BOOL)arg1;
- (BOOL)bRealTimeTranslate;
- (void)setBRealTimeTranslate:(BOOL)arg1;
- (BOOL)waitingForContinueRecordingSession;
- (void)setWaitingForContinueRecordingSession:(BOOL)arg1;
- (BOOL)voiceTransEnded;
- (void)setVoiceTransEnded:(BOOL)arg1;
- (BOOL)hasClickStopSpeak;
- (void)setHasClickStopSpeak:(BOOL)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)endTime;
- (void)setEndTime:(double)arg1;
- (void)setTranslateIndicatorView:(id)arg1;
- (id)callInterruptVoiceIconView;
- (void)setCallInterruptVoiceIconView:(id)arg1;
- (id)callInterruptDurationLabel;
- (void)setCallInterruptDurationLabel:(id)arg1;
- (id)continueVoiceSendInfoView;
- (void)setContinueVoiceSendInfoView:(id)arg1;
- (id)continueVoiceSendIconView;
- (void)setContinueVoiceSendIconView:(id)arg1;
- (id)continueVoiceSendDurationLabel;
- (void)setContinueVoiceSendDurationLabel:(id)arg1;
- (id /* block */)continueVoiceReappearStartBlock;
- (void)setContinueVoiceReappearStartBlock:(id /* block */)arg1;
- (id /* block */)continueVoiceReappearAnimatingBlock;
- (void)setContinueVoiceReappearAnimatingBlock:(id /* block */)arg1;
- (BOOL)isContinueVoiceSendAnimating;
- (void)setIsContinueVoiceSendAnimating:(BOOL)arg1;
- (double)continueVoiceOriginalCenterY;
- (void)setContinueVoiceOriginalCenterY:(double)arg1;
- (BOOL)skipPositionChangeOnCallInterrupt;
- (void)setSkipPositionChangeOnCallInterrupt:(BOOL)arg1;
- (BOOL)manuallyEditFlag;
- (void)setManuallyEditFlag:(BOOL)arg1;
- (id)atContactCoordinator;
- (void)setAtContactCoordinator:(id)arg1;
- (void).cxx_destruct;
@end
