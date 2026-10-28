@interface VoiceRecordView : UIView <RecordInfoContentViewDelegate>
{
    BOOL _bPreventRecordViewExit; // +0x8
    BOOL _bNeedPopUpBackgroundViewController; // +0x9
    BOOL _isEnableVoiceTrans; // +0xa
    BOOL _isStartEditing; // +0xb
    BOOL _needShowFirstTips; // +0xc
    BOOL _needShowSecondTips; // +0xd
    BOOL _recordTooShortTips; // +0xe
    unsigned int _inputLanguageType; // +0x10
    id <RecordViewDelegate> _delegate; // +0x18
    id <VoiceRecordViewDelegate> _recordDelegate; // +0x20
    MMNewVoiceInputReportObj * _reportObj; // +0x28
    NSSet * _originTouches; // +0x30
    NSString * _chatName; // +0x38
    UIView * _backgroundBlurView; // +0x40
    UIView * _backgroundView; // +0x48
    CAGradientLayer * _backgroundGradientLayer; // +0x50
    double _operateButtonSeparateProportion; // +0x58
    CAShapeLayer * _cancelOperateLayer; // +0x60
    CAShapeLayer * _translateOperateLayer; // +0x68
    VoiceRecordArcLabel * _cancelArcLabel; // +0x70
    VoiceRecordArcLabel * _translateArcLabel; // +0x78
    VoiceRecordArcLabel * _cancelTipsArcLabel; // +0x80
    VoiceRecordArcLabel * _translateTipsArcLabel; // +0x88
    UILabel * _tipsLabel; // +0x90
    VoiceRecordTextureButtonView * _bottomContentView; // +0x98
    RecordInfoContentView * _infoContentView; // +0xa0
    UIView * _displayBackgroundContentView; // +0xa8
    UIView * _inputToolView; // +0xb0
    UIButton * _inputCancelButton; // +0xb8
    UILabel * _inputCancelLabel; // +0xc0
    UIButton * _inputSendOriginButton; // +0xc8
    UILabel * _inputSendOriginLabel; // +0xd0
    UIButton * _inputSendTextButton; // +0xd8
    SightIconView * _inputSendLoadingView; // +0xe0
    long long _inputSendTextButtonState; // +0xe8
}
- (id)initWithFrame:(CGRect)arg1 forbidVoiceTrans:(BOOL)arg2 chatName:(id)arg3;
- (void)dealloc;
- (id)getBaseMsgContentViewController;
- (void)removeFromSuperview;
- (void)setNavigationBarDisable:(BOOL)arg1;
- (void)restoreBaseMsgContentViewControllerAnimated:(BOOL)arg1;
- (void)changeButtonWithScale:(float)arg1 Button:(id)arg2;
- (double)getOperateButtonSeparateProportion;
- (BOOL)needOpenRealTimeTranslate;
- (id)backgroundBlurView;
- (id)cancelOperateLayer;
- (id)translateOperateLayer;
- (id)cancelArcLabel;
- (id)translateArcLabel;
- (id)cancelTipsArcLabel;
- (id)translateTipsArcLabel;
- (id)tipsLabel;
- (id)bottomContentView;
- (id)infoContentView;
- (id)displayBackgroundContentView;
- (id)inputToolView;
- (id)inputCancelButton;
- (id)inputCancelLabel;
- (id)inputSendOriginButton;
- (id)inputSendOriginLabel;
- (id)inputSendTextButton;
- (id)inputSendLoadingView;
- (void)layoutSubviews;
- (unsigned long long)getRecordState;
- (BOOL)bPrepare;
- (void)startRecordingWithRecordBtn:(id)arg1;
- (void)onTouchMoveWithTouches:(id)arg1;
- (void)setPeakPower:(float)arg1;
- (void)startTextMsgAnimate:(id)arg1;
- (void)onVoiceRecordFinish;
- (void)sendVoiceMsgWithFailStatus;
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
- (void)ShowRecordingTimeoutCount:(long long)arg1 isShow:(BOOL)arg2;
- (void)HiddenRecordView;
- (void)setReportObj:(id)arg1;
- (void)makeImpactFeedback;
- (void)transformToRecordState:(unsigned long long)arg1;
- (void)doFadeAnimationCompletion:(id /* block */)arg1;
- (void)animateShowMsg:(id)arg1;
- (void)addVoiceMsgToScreen:(id)arg1;
- (void)setInputSendTextButtonState:(long long)arg1;
- (BOOL)isInPageSheetMode;
- (void)onClickDeleteBtn;
- (void)onClickSendOriVoiceBtn;
- (void)onClickSendTextBtn;
- (void)onBeginEditWithInputBar:(id)arg1;
- (void)onEndEditing;
- (void)onInputViewChangedWithInputBar:(id)arg1;
- (double)getVisibleHeight;
- (double)getVoiceViewBottomPadding;
- (double)getContentYOffset;
- (void)onReTrans;
- (void)onTransSuccess;
- (void)onTransFail;
- (void)onStartSimplifyText;
- (void)onStopSimplifyText;
- (void)onCommitText;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)recordDelegate;
- (void)setRecordDelegate:(id)arg1;
- (id)reportObj;
- (BOOL)bPreventRecordViewExit;
- (void)setBPreventRecordViewExit:(BOOL)arg1;
- (BOOL)bNeedPopUpBackgroundViewController;
- (void)setBNeedPopUpBackgroundViewController:(BOOL)arg1;
- (id)originTouches;
- (void)setOriginTouches:(id)arg1;
- (BOOL)isEnableVoiceTrans;
- (void)setIsEnableVoiceTrans:(BOOL)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (void)setBackgroundBlurView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)backgroundGradientLayer;
- (void)setBackgroundGradientLayer:(id)arg1;
- (BOOL)isStartEditing;
- (void)setIsStartEditing:(BOOL)arg1;
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
- (void)setDisplayBackgroundContentView:(id)arg1;
- (void)setInputToolView:(id)arg1;
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
- (void).cxx_destruct;
@end
