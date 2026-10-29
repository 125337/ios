@interface VoIPMiniInAppView : UIView
{
    BOOL _isAudioMode; // +0x8
    BOOL _isLocalCaptureBack; // +0x9
    BOOL _isLocalCaptureSuspend; // +0xa
    BOOL _isRemoteCaptureSuspend; // +0xb
    id <VoIPMiniInAppViewDelegate> _delegate; // +0x10
    CContact * _remoteContact; // +0x18
    unsigned long long _talkingStatus; // +0x20
    unsigned long long _extendStatus; // +0x28
    double _rotateDegree; // +0x30
    UIView * _mainView; // +0x38
    VoipMinimizeView * _minimizeView; // +0x40
    VOIPVideoRender * _m_peerRender; // +0x48
    XImageViewRenderer * _rciLocalRenderer; // +0x50
    XImageViewRenderer * _rciRemoteRenderer; // +0x58
    UIView * _m_peerRenderView; // +0x60
    VOIPVideoRender * _m_selfRender; // +0x68
    UIView * _m_selfRenderView; // +0x70
    MultiTalkHDHeadView * _headImageView; // +0x78
    VoIPHeadImageBlurView * _localHeadImageBlurView; // +0x80
    VoIPHeadImageBlurView * _remoteHeadImageBlurView; // +0x88
    UIButton * _mainButton; // +0x90
    UIView * _speratorLineView; // +0x98
    UIView * _extendView; // +0xa0
    UILabel * _extendLabel; // +0xa8
    UIButton * _extendButton; // +0xb0
}
- (id)mainRender;
- (id)smallRender;
- (id)localViewRenderer;
- (id)remoteViewRenderer;
- (void)reset;
- (void)setupDuration:(double)arg1;
- (void)setIsAudioMode:(BOOL)arg1;
- (void)updateDescMode:(unsigned long long)arg1 withDisplayTime:(double)arg2;
- (void)layoutContentView;
- (void)layoutMinimizeView;
- (void)layoutPeerRenderView;
- (void)layoutSelfRenderView;
- (void)layoutHeadImageView;
- (void)layoutLocalHeadImageBlurView;
- (void)layoutRemoteHeadImageBlurView;
- (void)layoutMainButton;
- (void)onMainButtonClick:(id)arg1;
- (void)layoutSperatorLineView;
- (void)layoutExtendView;
- (void)layoutExtendLabel;
- (void)layoutExtendButton;
- (void)onExtendButtonClick:(id)arg1;
- (CGSize)defaultContentViewSize;
- (CGSize)contentViewSize;
- (CGSize)preferredSize;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)remoteContact;
- (void)setRemoteContact:(id)arg1;
- (BOOL)isAudioMode;
- (BOOL)isLocalCaptureBack;
- (void)setIsLocalCaptureBack:(BOOL)arg1;
- (BOOL)isLocalCaptureSuspend;
- (void)setIsLocalCaptureSuspend:(BOOL)arg1;
- (BOOL)isRemoteCaptureSuspend;
- (void)setIsRemoteCaptureSuspend:(BOOL)arg1;
- (unsigned long long)talkingStatus;
- (void)setTalkingStatus:(unsigned long long)arg1;
- (unsigned long long)extendStatus;
- (void)setExtendStatus:(unsigned long long)arg1;
- (double)rotateDegree;
- (void)setRotateDegree:(double)arg1;
- (id)mainView;
- (void)setMainView:(id)arg1;
- (id)minimizeView;
- (void)setMinimizeView:(id)arg1;
- (id)m_peerRender;
- (void)setM_peerRender:(id)arg1;
- (id)rciLocalRenderer;
- (void)setRciLocalRenderer:(id)arg1;
- (id)rciRemoteRenderer;
- (void)setRciRemoteRenderer:(id)arg1;
- (id)m_peerRenderView;
- (void)setM_peerRenderView:(id)arg1;
- (id)m_selfRender;
- (void)setM_selfRender:(id)arg1;
- (id)m_selfRenderView;
- (void)setM_selfRenderView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)localHeadImageBlurView;
- (void)setLocalHeadImageBlurView:(id)arg1;
- (id)remoteHeadImageBlurView;
- (void)setRemoteHeadImageBlurView:(id)arg1;
- (id)mainButton;
- (void)setMainButton:(id)arg1;
- (id)speratorLineView;
- (void)setSperatorLineView:(id)arg1;
- (id)extendView;
- (void)setExtendView:(id)arg1;
- (id)extendLabel;
- (void)setExtendLabel:(id)arg1;
- (id)extendButton;
- (void)setExtendButton:(id)arg1;
- (void).cxx_destruct;
@end

