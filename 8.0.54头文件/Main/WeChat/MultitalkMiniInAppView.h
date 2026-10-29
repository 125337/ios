@interface MultitalkMiniInAppView : UIView
{
    BOOL _isMyCameraOn; // +0x8
    BOOL _isMyMicrophoneOn; // +0x9
    MultitalkMinimizeView * _baseView; // +0x10
    UIView * _extendView; // +0x18
    UIImageView * _captureImageView; // +0x20
    UIImageView * _microphoneImageView; // +0x28
    MultiTalkHDHeadView * _talkingHeadView; // +0x30
    UIView * _talkingRenderContainerView; // +0x38
    UIView * _talkingRenderView; // +0x40
    id /* block */ _autoResetTalkingInfoBlock; // +0x48
    UIView * _talkingNameBackground; // +0x50
    CAGradientLayer * _talkingNameBackgroundGradientLayer; // +0x58
    UILabel * _talkingNameLabel; // +0x60
    MultitalkMiniInAppTalkingInfo * _talkingInfo; // +0x68
}
+ (CGSize)preferredRenderViewSize;
+ (id)miniInAppView;
- (void)cancelAutoResetTalkingInfoBlock;
- (void)setupTalkingInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)baseView;
- (void)setBaseView:(id)arg1;
- (BOOL)isMyCameraOn;
- (void)setIsMyCameraOn:(BOOL)arg1;
- (BOOL)isMyMicrophoneOn;
- (void)setIsMyMicrophoneOn:(BOOL)arg1;
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
- (void).cxx_destruct;
@end

