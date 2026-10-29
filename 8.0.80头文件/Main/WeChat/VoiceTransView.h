@interface VoiceTransView : UIView <VoiceTransLogicObserver, VoiceTransView_ContentDelegate>
{
    BOOL _bNeedPopUpBackgroundViewController; // +0x8
    BOOL _didStartRecord; // +0x9
    BOOL _didReceiveTouchEnd; // +0xa
    id <VoiceTransViewDelegate> _delegate; // +0x10
    NSString * _customLooseSendTipsText; // +0x18
    NSString * _customSendTextTipsText; // +0x20
    long long _scene; // +0x28
    UIView * _backgroundBlurView; // +0x30
    UIView * _backgroundView; // +0x38
    CAGradientLayer * _backgroundGradientLayer; // +0x40
    VoiceTransView_Content * _infoContentView; // +0x48
    UILabel * _tipsLabel; // +0x50
    UIView * _bottomBackgroundView; // +0x58
    UILabel * _bottomLabel; // +0x60
    VoiceTransView_Bottom * _bottomContentView; // +0x68
    VoiceRecordArcButton * _cancelArcButton; // +0x70
    VoiceRecordArcButton * _editArcButton; // +0x78
    VoiceTransArcFeedbackView * _feedbackView; // +0x80
    VoiceTransLogic * _voiceTransLogic; // +0x88
}
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 scene:(long long)arg3;
- (void)onRotate;
- (void)dealloc;
- (void)layoutSubviews;
- (void)startRecordingWithRect:(CGRect)arg1;
- (void)onTouchMoveWithTouches:(id)arg1;
- (void)onTouchMoveWithTouchPoint:(CGPoint)arg1;
- (void)onTouchEndWithTouches:(id)arg1;
- (void)onTouchCancelWithTouches:(id)arg1;
- (void)doShowAnimation:(CGRect)arg1;
- (void)doExitAnimation;
- (void)doFadeAnimationCompletion:(id /* block */)arg1;
- (void)doAnimationForEdit;
- (void)setBNeedPopUpBackgroundViewController:(BOOL)arg1;
- (void)updateBackgroundPopUp;
- (void)setCustomLooseSendTipsText:(id)arg1;
- (void)setCustomSendTextTipsText:(id)arg1;
- (id)backgroundBlurView;
- (id)infoContentView;
- (id)tipsLabel;
- (id)bottomBackgroundView;
- (id)bottomLabel;
- (id)bottomContentView;
- (id)cancelArcButton;
- (id)editArcButton;
- (id)feedbackView;
- (void)transformToRecordState:(unsigned long long)arg1;
- (id)getBaseMsgContentViewController;
- (double)voiceTransCheckMeterInterval;
- (void)onVoiceTransBegan:(id)arg1;
- (void)onVoiceTransLevelMeter:(float)arg1;
- (void)onVoiceTransResultChange;
- (void)onVoiceTransDidEnd:(int)arg1;
- (void)onVoiceTransFail:(long long)arg1;
- (void)onClickCancelButton;
- (void)onClickSendButton;
- (void)updateBackgroundGradient;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)bNeedPopUpBackgroundViewController;
- (id)customLooseSendTipsText;
- (id)customSendTextTipsText;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (void)setBackgroundBlurView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)backgroundGradientLayer;
- (void)setBackgroundGradientLayer:(id)arg1;
- (void)setInfoContentView:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void)setBottomBackgroundView:(id)arg1;
- (void)setBottomLabel:(id)arg1;
- (void)setBottomContentView:(id)arg1;
- (void)setCancelArcButton:(id)arg1;
- (void)setEditArcButton:(id)arg1;
- (void)setFeedbackView:(id)arg1;
- (id)voiceTransLogic;
- (void)setVoiceTransLogic:(id)arg1;
- (BOOL)didStartRecord;
- (void)setDidStartRecord:(BOOL)arg1;
- (BOOL)didReceiveTouchEnd;
- (void)setDidReceiveTouchEnd:(BOOL)arg1;
- (void).cxx_destruct;
@end
