@interface VoiceRecordView : UIView <RecordInfoContentViewDelegate, VoiceRecordAudioInterruptionObserver>
{
    unsigned long long m_touchEndTime; // +0x8
    BOOL _bPreventRecordViewExit; // +0x10
    BOOL _bNeedPopUpBackgroundViewController; // +0x11
    BOOL _isEnableVoiceTrans; // +0x12
    BOOL _needsInputLayoutUpdateForSizeChange; // +0x13
    BOOL _needShowFirstTips; // +0x14
    BOOL _needShowSecondTips; // +0x15
    BOOL _recordTooShortTips; // +0x16
    BOOL _interruptFromCall; // +0x17
    unsigned int _inputLanguageType; // +0x18
    id <RecordViewDelegate> _delegate; // +0x20
    id <VoiceRecordViewDelegate> _recordDelegate; // +0x28
    MMNewVoiceInputReportObj * _reportObj; // +0x30
    id <VoiceRecordMessageHandler> _messageHandler; // +0x38
    id <VoiceRecordHostUIDelegate> _hostUIDelegate; // +0x40
    id <VoiceRecordAudioService> _audioService; // +0x48
    NSSet * _originTouches; // +0x50
    VoiceRecordConfig * _config; // +0x58
    NSString * _chatName; // +0x60
    UIView * _backgroundBlurView; // +0x68
    UIView * _backgroundView; // +0x70
    UIView * _editingBackgroundView; // +0x78
    CAGradientLayer * _backgroundGradientLayer; // +0x80
    MMUINavigationBar * _disabledNavigationBar; // +0x88
    UIScreenEdgePanGestureRecognizer * _edgePanGesture; // +0x90
    double _edgePanStartTop; // +0x98
    double _edgePanPreviousTranslationX; // +0xa0
    double _operateButtonSeparateProportion; // +0xa8
    CAShapeLayer * _cancelOperateLayer; // +0xb0
    CAShapeLayer * _translateOperateLayer; // +0xb8
    VoiceRecordArcLabel * _cancelArcLabel; // +0xc0
    VoiceRecordArcLabel * _translateArcLabel; // +0xc8
    VoiceRecordArcLabel * _cancelTipsArcLabel; // +0xd0
    VoiceRecordArcLabel * _translateTipsArcLabel; // +0xd8
    UILabel * _tipsLabel; // +0xe0
    VoiceRecordTextureButtonView * _bottomContentView; // +0xe8
    RecordInfoContentView * _infoContentView; // +0xf0
    MMUIButton * _closeButton; // +0xf8
    UIView * _displayBackgroundContentView; // +0x100
    UIView * _inputToolView; // +0x108
    MMUIButton * _inputModeButton; // +0x110
    UIButton * _inputCancelButton; // +0x118
    UILabel * _inputCancelLabel; // +0x120
    UIButton * _inputSendOriginButton; // +0x128
    UILabel * _inputSendOriginLabel; // +0x130
    UIButton * _inputSendTextButton; // +0x138
    SightIconView * _inputSendLoadingView; // +0x140
    long long _inputSendTextButtonState; // +0x148
    UILabel * _timeoutCountdownLabel; // +0x150
    TranslateButton * _translateButton; // +0x158
    TranslateFunctionButton * _translateFunctionButton; // +0x160
    UIView * _callInterruptToolView; // +0x168
    UIButton * _callInterruptCancelButton; // +0x170
    UILabel * _callInterruptCancelLabel; // +0x178
    UIButton * _callInterruptTranslateButton; // +0x180
    UILabel * _callInterruptTranslateLabel; // +0x188
    UIButton * _callInterruptSendVoiceButton; // +0x190
    NSString * _reportSessionID; // +0x198
    unsigned long long _timeoutReason; // +0x1a0
    UIEdgeInsets _operateViewLayoutInsets; // +0x1a8
}
- (id)initWithFrame:(CGRect)arg1 config:(id)arg2;
- (void)dealloc;
- (UIEdgeInsets)horizontalLayoutInsets;
- (double)horizontalLayoutWidth;
- (double)horizontalLayoutCenterX;
- (void)updateOperateArcGradientMaskForLayer:(id)arg1 isLeft:(BOOL)arg2 animated:(BOOL)arg3;
- (void)animateOperateArcLayer:(id)arg1 strokeColor:(id)arg2 lineWidth:(double)arg3;
- (void)safeAreaInsetsDidChange;
- (void)setFrame:(CGRect)arg1;
- (void)layoutOperateViewsForCurrentBounds;
- (void)prepareLayoutForPresentation;
- (void)voiceRecordAudioServiceDidReceiveCallInterruption;
- (void)onCallInterrupted;
- (void)onClickCallInterruptCancelBtn;
- (void)onClickCallInterruptTranslateBtn;
- (void)onClickCallInterruptSendVoiceBtn;
- (void)removeFromSuperview;
- (void)setNavigationBarDisable:(BOOL)arg1;
- (void)restoreHostContentAnimated:(BOOL)arg1;
- (void)changeButtonWithScale:(float)arg1 Button:(id)arg2;
- (double)getOperateButtonSeparateProportion;
- (BOOL)needOpenRealTimeTranslate;
- (void)layoutEditingBackgroundView;
- (id)backgroundBlurView;
- (void)onTranslateStateChangeBlurView:(BOOL)arg1;
- (id)cancelOperateLayer;
- (id)translateOperateLayer;
- (id)cancelArcLabel;
- (id)translateArcLabel;
- (id)cancelTipsArcLabel;
- (id)translateTipsArcLabel;
- (id)tipsLabel;
- (id)bottomContentView;
- (id)infoContentView;
- (id)translateButton;
- (id)translateFunctionButton;
- (id)displayBackgroundContentView;
- (id)inputToolView;
- (id)closeButton;
- (id)inputModeButton;
- (id)inputCancelButton;
- (id)inputCancelLabel;
- (id)inputSendOriginButton;
- (id)inputSendOriginLabel;
- (id)inputSendTextButton;
- (id)inputSendLoadingView;
- (id)callInterruptToolView;
- (id)callInterruptCancelButton;
- (id)callInterruptCancelLabel;
- (id)callInterruptTranslateButton;
- (id)callInterruptTranslateLabel;
- (id)callInterruptSendVoiceButton;
- (void)layoutSubviews;
- (unsigned long long)getRecordState;
- (BOOL)bPrepare;
- (void)prepareForContinueRecording;
- (void)startRecordingWithRecordBtn:(id)arg1;
- (void)onTouchMoveWithTouches:(id)arg1;
- (void)setPeakPower:(float)arg1;
- (void)onVoiceRecordFinishSetp1;
- (void)onVoiceRecordFinish;
- (void)sendVoiceMsgWithFailStatus;
- (void)sendVoiceMsgForContinueVoice;
- (void)onTimelableChangeToStop;
- (void)stopVoiceForSecondTimeout;
- (void)reportVoiceStopScene:(unsigned long long)arg1;
- (void)onTouchEndSendVoiceMsg;
- (void)exitVoiceRecordNeedDelay:(BOOL)arg1 andViewControllerPopAnimated:(BOOL)arg2;
- (void)exitVoiceRecord;
- (void)exitVoiceRecord:(BOOL)arg1;
- (void)doRealExitVoiceRecordWithViewControllerPopAnimated:(BOOL)arg1;
- (void)ShowPreparing;
- (void)ShowRecording;
- (void)StartRecordAnimate;
- (void)StartTooShortTips;
- (void)StartTooLongTips;
- (void)ensureTimeoutCountdownLabelCreated;
- (void)updateTimeoutCountdownLabelCenterX;
- (void)ShowTimeoutCountdownLabelIsShow:(BOOL)arg1;
- (void)hideTimeoutCountdownLabel;
- (void)setTimeoutCountdownLabelText:(id)arg1;
- (void)setTimeoutCountdownLabelText:(id)arg1 updateCenterXOnly:(BOOL)arg2;
- (void)showTimeoutCountdownLabelWithText:(id)arg1;
- (void)fadeOutTimeoutCountdownLabel;
- (void)onFirstTimeoutLableShow:(long long)arg1;
- (void)onWillStopLableShow:(long long)arg1;
- (void)onWillOverLableShow:(long long)arg1;
- (void)HiddenRecordView;
- (void)setReportObj:(id)arg1;
- (void)initReportVoiceSessionId;
- (void)makeImpactFeedback;
- (void)transformToRecordState:(unsigned long long)arg1;
- (void)doFadeAnimationCompletion:(id /* block */)arg1;
- (void)animateShowMsgWithLocalId:(unsigned int)arg1;
- (void)setInputSendTextButtonState:(long long)arg1;
- (BOOL)isInFloatingPageSheetMode;
- (void)onTapInputModeButton;
- (void)onClickDeleteBtn;
- (void)onClickSendOriVoiceBtn;
- (void)onClickSendTextBtn;
- (void)onBeginEditWithInputBar:(id)arg1;
- (void)enableEdgePanGestureIfNeeded;
- (void)handleEdgePanGesture:(id)arg1;
- (void)onUpdateInputModeButtonForMode:(long long)arg1;
- (void)onWorldTranslateButtonTap:(BOOL)arg1;
- (void)onEndEditing;
- (void)onInputViewChangedWithInputBar:(id)arg1;
- (double)getVisibleHeight;
- (double)getResultBubbleMaxBottom;
- (double)getParentViewWidth;
- (double)getVoiceViewBottomPadding;
- (double)getContentYOffset;
- (void)onTransSuccess;
- (void)onTransFail;
- (void)onVoiceTransEndRequiresRecordFinish;
- (void)onCommitText;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)recordDelegate;
- (void)setRecordDelegate:(id)arg1;
- (id)reportObj;
- (id)messageHandler;
- (void)setMessageHandler:(id)arg1;
- (id)hostUIDelegate;
- (void)setHostUIDelegate:(id)arg1;
- (id)audioService;
- (void)setAudioService:(id)arg1;
- (BOOL)bPreventRecordViewExit;
- (void)setBPreventRecordViewExit:(BOOL)arg1;
- (BOOL)bNeedPopUpBackgroundViewController;
- (void)setBNeedPopUpBackgroundViewController:(BOOL)arg1;
- (id)originTouches;
- (void)setOriginTouches:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (BOOL)isEnableVoiceTrans;
- (void)setIsEnableVoiceTrans:(BOOL)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (void)setBackgroundBlurView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)editingBackgroundView;
- (void)setEditingBackgroundView:(id)arg1;
- (id)backgroundGradientLayer;
- (void)setBackgroundGradientLayer:(id)arg1;
- (BOOL)needsInputLayoutUpdateForSizeChange;
- (void)setNeedsInputLayoutUpdateForSizeChange:(BOOL)arg1;
- (id)disabledNavigationBar;
- (void)setDisabledNavigationBar:(id)arg1;
- (UIEdgeInsets)operateViewLayoutInsets;
- (void)setOperateViewLayoutInsets:(UIEdgeInsets)arg1;
- (id)edgePanGesture;
- (void)setEdgePanGesture:(id)arg1;
- (double)edgePanStartTop;
- (void)setEdgePanStartTop:(double)arg1;
- (double)edgePanPreviousTranslationX;
- (void)setEdgePanPreviousTranslationX:(double)arg1;
- (double)operateButtonSeparateProportion;
- (void)setOperateButtonSeparateProportion:(double)arg1;
- (void)setCancelOperateLayer:(id)arg1;
- (void)setTranslateOperateLayer:(id)arg1;
- (void)setCancelArcLabel:(id)arg1;
- (void)setTranslateArcLabel:(id)arg1;
- (void)setCancelTipsArcLabel:(id)arg1;
- (void)setTranslateTipsArcLabel:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void)setBottomContentView:(id)arg1;
- (void)setInfoContentView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setDisplayBackgroundContentView:(id)arg1;
- (void)setInputToolView:(id)arg1;
- (void)setInputModeButton:(id)arg1;
- (void)setInputCancelButton:(id)arg1;
- (void)setInputCancelLabel:(id)arg1;
- (void)setInputSendOriginButton:(id)arg1;
- (void)setInputSendOriginLabel:(id)arg1;
- (void)setInputSendTextButton:(id)arg1;
- (void)setInputSendLoadingView:(id)arg1;
- (long long)inputSendTextButtonState;
- (BOOL)needShowFirstTips;
- (void)setNeedShowFirstTips:(BOOL)arg1;
- (BOOL)needShowSecondTips;
- (void)setNeedShowSecondTips:(BOOL)arg1;
- (BOOL)recordTooShortTips;
- (void)setRecordTooShortTips:(BOOL)arg1;
- (unsigned int)inputLanguageType;
- (void)setInputLanguageType:(unsigned int)arg1;
- (id)timeoutCountdownLabel;
- (void)setTimeoutCountdownLabel:(id)arg1;
- (void)setTranslateButton:(id)arg1;
- (void)setTranslateFunctionButton:(id)arg1;
- (void)setCallInterruptToolView:(id)arg1;
- (void)setCallInterruptCancelButton:(id)arg1;
- (void)setCallInterruptCancelLabel:(id)arg1;
- (void)setCallInterruptTranslateButton:(id)arg1;
- (void)setCallInterruptTranslateLabel:(id)arg1;
- (void)setCallInterruptSendVoiceButton:(id)arg1;
- (id)reportSessionID;
- (void)setReportSessionID:(id)arg1;
- (BOOL)interruptFromCall;
- (void)setInterruptFromCall:(BOOL)arg1;
- (unsigned long long)timeoutReason;
- (void)setTimeoutReason:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
