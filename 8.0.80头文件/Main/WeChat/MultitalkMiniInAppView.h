@interface MultitalkMiniInAppView : UIView
{
    BOOL _isMyCameraOn; // +0x8
    BOOL _isMyMicrophoneOn; // +0x9
    BOOL _isInAudioInterruption; // +0xa
    MultitalkMinimizeView * _baseView; // +0x10
    unsigned long long _talkingStatus; // +0x18
    unsigned long long _subCallStatus; // +0x20
    id /* block */ _onMainCallClickCallback; // +0x28
    id /* block */ _onSubCallClickCallback; // +0x30
    UIView * _mainView; // +0x38
    UIView * _extendView; // +0x40
    UIImageView * _captureImageView; // +0x48
    UIImageView * _microphoneImageView; // +0x50
    MultiTalkHDHeadView * _talkingHeadView; // +0x58
    UIView * _talkingRenderContainerView; // +0x60
    UIView * _talkingRenderView; // +0x68
    id /* block */ _autoResetTalkingInfoBlock; // +0x70
    UIView * _talkingNameBackground; // +0x78
    CAGradientLayer * _talkingNameBackgroundGradientLayer; // +0x80
    UILabel * _talkingNameLabel; // +0x88
    MultitalkMiniInAppTalkingInfo * _talkingInfo; // +0x90
    UIButton * _mainButton; // +0x98
    UIView * _subCallView; // +0xa0
    VoipMinimizeView * _subCallMinimizeView; // +0xa8
    UIButton * _subCallButton; // +0xb0
}
+ (CGSize)preferredRenderViewSize;
+ (id)miniInAppView;
- (CGSize)mainViewSize;
- (void)cancelAutoResetTalkingInfoBlock;
- (void)layoutMainButton;
- (void)onMainButtonClick:(id)arg1;
- (void)layoutContentView;
- (void)layoutSubCallView;
- (void)layoutSubCallMinimizeView;
- (void)layoutSubCallButton;
- (void)onExtendButtonClick:(id)arg1;
- (void)setupTalkingInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)sizeToFit;
- (void)layoutSubviews;
- (id)baseView;
- (void)setBaseView:(id)arg1;
- (BOOL)isMyCameraOn;
- (void)setIsMyCameraOn:(BOOL)arg1;
- (BOOL)isMyMicrophoneOn;
- (void)setIsMyMicrophoneOn:(BOOL)arg1;
- (BOOL)isInAudioInterruption;
- (void)setIsInAudioInterruption:(BOOL)arg1;
- (unsigned long long)talkingStatus;
- (void)setTalkingStatus:(unsigned long long)arg1;
- (unsigned long long)subCallStatus;
- (void)setSubCallStatus:(unsigned long long)arg1;
- (id /* block */)onMainCallClickCallback;
- (void)setOnMainCallClickCallback:(id /* block */)arg1;
- (id /* block */)onSubCallClickCallback;
- (void)setOnSubCallClickCallback:(id /* block */)arg1;
- (id)mainView;
- (void)setMainView:(id)arg1;
- (id)extendView;
- (void)setExtendView:(id)arg1;
- (id)captureImageView;
- (void)setCaptureImageView:(id)arg1;
- (id)microphoneImageView;
- (void)setMicrophoneImageView:(id)arg1;
- (id)talkingHeadView;
- (void)setTalkingHeadView:(id)arg1;
- (id)talkingRenderContainerView;
- (void)setTalkingRenderContainerView:(id)arg1;
- (id)talkingRenderView;
- (void)setTalkingRenderView:(id)arg1;
- (id /* block */)autoResetTalkingInfoBlock;
- (void)setAutoResetTalkingInfoBlock:(id /* block */)arg1;
- (id)talkingNameBackground;
- (void)setTalkingNameBackground:(id)arg1;
- (id)talkingNameBackgroundGradientLayer;
- (void)setTalkingNameBackgroundGradientLayer:(id)arg1;
- (id)talkingNameLabel;
- (void)setTalkingNameLabel:(id)arg1;
- (id)talkingInfo;
- (void)setTalkingInfo:(id)arg1;
- (id)mainButton;
- (void)setMainButton:(id)arg1;
- (id)subCallView;
- (void)setSubCallView:(id)arg1;
- (id)subCallMinimizeView;
- (void)setSubCallMinimizeView:(id)arg1;
- (id)subCallButton;
- (void)setSubCallButton:(id)arg1;
- (void).cxx_destruct;
@end
