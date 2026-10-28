@interface RecordInfoContentView : UIView <InputControllerDelegate, VoiceRecordSelectLanguageViewDelegate, IAudioSenderExt>
{
    BOOL _prepare; // +0x8
    BOOL _bIsForceEndTrans; // +0x9
    BOOL _needShowCountDown; // +0xa
    BOOL _bNeedShowTips; // +0xb
    BOOL _bTransStartSucc; // +0xc
    BOOL _bCanStartTextViewAnimation; // +0xd
    BOOL _bRealTimeTranslate; // +0xe
    BOOL _canShowSimplifyButton; // +0xf
    unsigned int _localId; // +0x10
    unsigned int _inputLanguageType; // +0x14
    int _simplifyTextState; // +0x18
    NSString * _chatName; // +0x20
    UIView * _inputBar; // +0x28
    UIView * _operatePanelView; // +0x30
    UIView * _arrowIconView; // +0x38
    MMNewVoiceInputReportObj * _reportObj; // +0x40
    unsigned long long _recordState; // +0x48
    AudioRecorderUserData * _recordInfo; // +0x50
    id <RecordInfoContentViewDelegate> _delegate; // +0x58
    unsigned long long _transState; // +0x60
    NSMutableArray * _arrVoiceIds; // +0x68
    UIView * _bottomView; // +0x70
    UIView * _contentView; // +0x78
    MMGrowTextView * _transTextView; // +0x80
    UIView * _caretView; // +0x88
    EmoticonBoardView * _emoticonBoardView; // +0x90
    WCInputController * _inputController; // +0x98
    WCRecordFeedbackView * _feedbackView; // +0xa0
    SightIconView * _preparingView; // +0xa8
    UILabel * _countdownLabel; // +0xb0
    UIButton * _errorButton; // +0xb8
    UILabel * _tipsLabel; // +0xc0
    UIButton * _inputModeButton; // +0xc8
    double _originBottom; // +0xd0
    MMUIButton * _moreButton; // +0xd8
    VoiceRecordSelectLanguageView * _selectedLanguageView; // +0xe0
    double _currentLength; // +0xe8
    double _widthGrowBeginTimeStamp; // +0xf0
    CADisplayLink * _widthGrowDisplayLink; // +0xf8
    CALayer * _fakeAnimateLayer; // +0x100
    NSString * _translatedText; // +0x108
    SimplifyTextLogic * _simplifyTextLogic; // +0x110
    NSString * _simplifyButtonText; // +0x118
    NSString * _cancelSimplifyButtonText; // +0x120
    MMUIButton * _simplifyTextButton; // +0x128
    SightIconView * _simplifingView; // +0x130
    double _startTime; // +0x138
    double _endTime; // +0x140
}
- (id)initWithBottomView:(id)arg1;
- (void)dealloc;
- (id)createTransTextView;
- (void)removeFeedbackView;
- (id)contentView;
- (id)arrowIconView;
- (id)countdownLabel;
- (id)errorButton;
- (id)inputController;
- (id)inputBar;
- (id)inputModeButton;
- (id)emoticonBoardView;
- (id)createPreparingView;
- (id)fakeAnimateLayer;
- (id)simplifyTextButton;
- (id)simplifingView;
- (id)moreButton;
- (id)selectedLanguageView;
- (id)tipsLabel;
- (id)simplifyTextLogic;
- (void)layoutSubviews;
- (void)updateCountDownLabelAndFeedbackViewWithRecordState:(unsigned long long)arg1;
- (void)updateFeedbackViewWithRecordState:(unsigned long long)arg1;
- (void)resizeTextView;
- (void)adjustTextMaxSize;
- (void)updateInputModeButton:(long long)arg1;
- (void)updateSubviews;
- (void)onTapInputModeButton;
- (void)onTapMoreButton;
- (void)onTapSimplifyTextButton;
- (void)setOperatePanelView:(id)arg1;
- (void)setPrepare:(BOOL)arg1;
- (void)setPeakPower:(float)arg1;
- (void)setBubbleBackgroundColor:(id)arg1;
- (void)setTimeoutCountDown:(long long)arg1 needShow:(BOOL)arg2;
- (void)setTransState:(unsigned long long)arg1;
- (void)setSimplifyTextState:(int)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setBNeedShowTips:(BOOL)arg1;
- (void)removeWidthGrowDisplayLink;
- (void)startWidthGrowDisplayLink;
- (void)onGrowWidthDisplayLinkCallback;
- (id)getContentView;
- (id)getTransResult;
- (void)resignFirstResponder;
- (void)onRotate;
- (void)changeRecordStateTo:(unsigned long long)arg1 CenterX:(double)arg2;
- (void)startTranslateTimer;
- (void)startRealTimeTranslate;
- (void)startTranslate;
- (void)realStartTranslate;
- (void)pauseTranslate;
- (void)makeTranslateStopWithError:(id)arg1;
- (void)updateTranslatingWording:(BOOL)arg1;
- (unsigned int)getSuffixDotCountWithString:(id)arg1;
- (unsigned int)getUncertainLength;
- (void)displayTranslateResultText;
- (void)displayTranslateResultText:(BOOL)arg1;
- (id)generateAttrTextFrom:(id)arg1;
- (void)OnVoiceTransEnd:(unsigned int)arg1 VoiceIds:(id)arg2 showSimplifyButton:(BOOL)arg3 simplifyButtonText:(id)arg4 cancelSimplifyButtonText:(id)arg5;
- (void)OnVoiceTransTimeout:(unsigned int)arg1;
- (void)OnVoiceTransResultChange:(id)arg1 InputId:(unsigned int)arg2;
- (void)OnRecordVoiceChangeWithUserData:(id)arg1;
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
- (void)onConfirmedWithLanguageType:(unsigned int)arg1;
- (void)startSimplifyTextTimer;
- (void)invalidateSimplifyTextTimer;
- (void)updateDisplayText;
- (void)updateDisplayText:(id)arg1;
- (void)setAttributedText:(id)arg1 animated:(BOOL)arg2;
- (BOOL)canShowSimplifyTextButton;
- (BOOL)canShowMoreButton;
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
- (unsigned int)inputLanguageType;
- (void)setInputLanguageType:(unsigned int)arg1;
- (id)recordInfo;
- (void)setRecordInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)transState;
- (id)arrVoiceIds;
- (void)setArrVoiceIds:(id)arg1;
- (BOOL)bIsForceEndTrans;
- (void)setBIsForceEndTrans:(BOOL)arg1;
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
- (void)setInputModeButton:(id)arg1;
- (double)originBottom;
- (void)setOriginBottom:(double)arg1;
- (void)setMoreButton:(id)arg1;
- (void)setSelectedLanguageView:(id)arg1;
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
- (void)setSimplifyTextLogic:(id)arg1;
- (int)simplifyTextState;
- (BOOL)canShowSimplifyButton;
- (void)setCanShowSimplifyButton:(BOOL)arg1;
- (id)simplifyButtonText;
- (void)setSimplifyButtonText:(id)arg1;
- (id)cancelSimplifyButtonText;
- (void)setCancelSimplifyButtonText:(id)arg1;
- (void)setSimplifyTextButton:(id)arg1;
- (void)setSimplifingView:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)endTime;
- (void)setEndTime:(double)arg1;
- (void).cxx_destruct;
@end
