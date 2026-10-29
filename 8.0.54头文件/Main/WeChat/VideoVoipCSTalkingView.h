@interface VideoVoipCSTalkingView : MMUIView <MMTipsViewControllerDelegate, SmallCameraViewDelegate, AVVideoDeviceDelegate, IVOIPModeSwitchExt, IVOIPExt, VOIPVideoToVoiceViewDelegate, IStrangerContactMgrExt>
{
    CContact * _contact; // +0x8
    unsigned int _status; // +0x10
    UIView * _backgroundView; // +0x18
    MMTimerLabel * _timer; // +0x20
    UIView * _bigCameraView; // +0x28
    UIView * _peerRenderView; // +0x30
    UILabel * _voiceTipsLabel; // +0x38
    BOOL _isMyselfInMainView; // +0x40
    BOOL _isEndCall; // +0x41
    AVAudioPlayer * _player; // +0x48
    UIImageView * m_localDefaultView; // +0x50
    UIImageView * m_remoteDefaultView; // +0x58
    MMHDHeadImageView * m_localHeadView; // +0x60
    MMHDHeadImageView * m_remoteHeadView; // +0x68
    UILabel * m_myNameLabel; // +0x70
    UILabel * m_remoteNameLabel; // +0x78
    BOOL m_imIs2GWhenConnectToOldVersion; // +0x80
    BOOL m_remoteIs2GWhenConnectToOldVersion; // +0x81
    UIView * m_timerBackgroundView; // +0x88
    UIView * m_footerView; // +0x90
    VOIPVideoRender * m_peerRender; // +0x98
    VOIPVideoRender * m_localRender; // +0xa0
    VOIPVideoRender * m_smallPeerRender; // +0xa8
    BOOL m_allowVideo; // +0xb0
    VOIPVideoToVoiceView * m_videoToVoiceView; // +0xb8
    BOOL m_hasInvokeToAudioAnimation; // +0xc0
    BOOL m_bShowCSVideo; // +0xc1
    BOOL m_bAllowBackCamera; // +0xc2
    BOOL m_hasEncounterBackgroundCameraStart; // +0xc3
    BOOL _isTalking; // +0xc4
    id <NSObject><VideoVoipCSTalkingViewDelegate> _delegate; // +0xc8
    VoipDescriptionButton * m_flipCameraView; // +0xd0
    SmallCameraView * m_smallCameraView; // +0xd8
    UIView * m_blurView; // +0xe0
    VoipDescriptionButton * m_voiceModeButton; // +0xe8
    VoipDescriptionButton * m_hangupBtn; // +0xf0
    UIView * m_cameraClipView; // +0xf8
    UIView * m_smallRenderView; // +0x100
    UIView * m_smallRenderBackClipView; // +0x108
    MMUIButton * m_minimizeButton; // +0x110
    MultiTalkHDHeadView * m_headImageView; // +0x118
    UILabel * m_usrnameLabel; // +0x120
    UILabel * _m_mainStatusLabel; // +0x128
    long long _m_videoOrientation; // +0x130
    NSString * _m_nsHeadImageUrl; // +0x138
}
- (void)clearRenderView;
- (void)startTalkWithAllowVideo:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1 andContact:(id)arg2 AllowVideo:(BOOL)arg3 AndIsMinimizeMode:(BOOL)arg4 delegate:(id)arg5 headUrl:(id)arg6 isAllowBackCamera:(BOOL)arg7 isShowCSVideo:(BOOL)arg8;
- (void)applicationGotoBackground;
- (void)applicationBecomeActive;
- (void)dealloc;
- (void)updateTipsStatusLabel;
- (void)updateTipsView;
- (void)checkSmallCameraHide;
- (void)updateInputOutputRender:(BOOL)arg1;
- (void)updateLocalRender;
- (void)asyncPlayTipsSound;
- (void)playTipsSound:(id)arg1 ofType:(id)arg2;
- (void)stopPlaySound;
- (void)initView;
- (void)layoutHeadImageView;
- (void)layoutUsernameLabel;
- (id)getDisplayNameByUsername:(id)arg1;
- (void)layoutSubviews;
- (void)layoutVideoToVoiceView;
- (void)layoutBackgroundView;
- (void)layoutMinimizeButton;
- (void)layoutFlipCameraButton;
- (void)onSmallSwitchButtonClick;
- (void)changeToMinimizeView;
- (BOOL)isOrientationLandscape;
- (BOOL)isOrientationPortrait;
- (CGSize)viewSize;
- (void)layoutMainStatusLabel;
- (void)layoutSmallCameraView;
- (void)layoutBigCameraView;
- (void)layoutCarmeraView;
- (void)layoutTimerView;
- (void)layoutFooterView;
- (void)onConfirmSwitchToVoice;
- (void)setVoiceStatusOn;
- (void)updateEarModeStatusView:(int)arg1;
- (void)videoDeviceCameraFront:(id)arg1;
- (void)videoDeviceCameraBack:(id)arg1;
- (void)videoDevice:(id)arg1 updateFilterSetting:(id)arg2 fromABTest:(BOOL)arg3;
- (void)onSmallCameraViewSingleTap;
- (void)onMoveEnd;
- (void)hideButtons;
- (void)showButtons;
- (void)clearButtonsAnimation;
- (void)autoHideButtons;
- (void)cancelAutoHideButtons;
- (void)startAutoHideButtonsTimer;
- (void)handleSingleTap:(id)arg1;
- (BOOL)canHideButtons;
- (void)OnMonitorChannelInfo:(unsigned long long)arg1 andChannelType:(int)arg2 andConnStrategy:(int)arg3;
- (void)OnMonitorWithSendFPS:(int)arg1 andRecvFPS:(int)arg2;
- (void)OnMonitorWithSendRecvInfo:(int)arg1 andSendFPS:(int)arg2 andRecvFPS:(int)arg3 andSendKbps:(int)arg4 andRecvKbps:(int)arg5 andP2SInfo:(id)arg6 andSpeed:(int *)arg7;
- (void)OnLightInterrupt:(BOOL)arg1;
- (void)onVideoOrientationChangeTo:(long long)arg1;
- (void)showLocalVideoModeTipsWhenConnectTo5_1OrLower;
- (void)showEarModeTipsWhenConnectTo5_1OrLower;
- (void)showRemoteVideoModeWhenConnectTo5_1OrLower;
- (void)showLocalEarModeTipsForBadNetwork;
- (void)showRemoteEarModeTipsForBadNetwork;
- (void)showOneWayLocalEarModeTips;
- (void)showOneWayLocalEarMode2GTips;
- (void)showOneWayRemoteEarModeTips;
- (void)showOneWayRemoteEarMode2GTips;
- (void)showOneWayLocalVideoModeTips;
- (void)showOneWayRemoteVideoModeTips;
- (void)resetButtonsAnimation;
- (void)OnFromLocalVideoToBothVideo;
- (void)OnFromRemoteVideoToBothVideo;
- (void)OnLocalEarModeFor2G;
- (void)OnRemoteEarModeFor2G;
- (void)OnBothVideoMode;
- (void)OnLocalEarMode;
- (void)OnLocalVideoMode;
- (void)OnRemoteEarMode;
- (void)OnRemoteVideoMode;
- (void)OnOneWayLocalEarMode;
- (void)OnOneWayLocalEarModeFor2G;
- (void)OnOneWayRemoteEarMode;
- (void)OnOneWayRemoteEarModeFor2G;
- (void)OnOneWayLocalVideoMode;
- (void)OnOneWayRemoteVideoMode;
- (void)OnOneWayRemoteEarModeForBadNetwork;
- (void)OnOneWayLocalEarModeForBadNetwork;
- (void)updateEarModeTalkingGesture;
- (void)onFlipCamera;
- (void)makeFlipCameraAnimation;
- (void)onAnimationDidStop;
- (void)onHangup;
- (void)onClickVideoToVoiceButton;
- (void)changeToVoiceView;
- (void)changeToAudioViewAnimation:(BOOL)arg1;
- (void)OnBeHanguped:(id)arg1;
- (void)OnCallInterrupt:(id)arg1;
- (void)OnAutoHangUp:(id)arg1;
- (void)OnTalkBrokenError:(id)arg1 ErrNo:(int)arg2;
- (void)OnError:(id)arg1 ErrNo:(int)arg2;
- (void)OnSyncError:(id)arg1 ErrNo:(int)arg2;
- (BOOL)isInitWithVideoMode;
- (void)onClickMinimizeButton;
- (void)onVoiceViewCloseMic;
- (void)onVoiceViewCloseSpeaker;
- (void)onVoiceViewHangup;
- (void)onVoiceViewOpenMic;
- (void)onVoiceViewOpenSpeaker;
- (BOOL)getIsVoiceMode;
- (BOOL)isAllowVideo;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)onStrangerContactUpdated:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)m_flipCameraView;
- (void)setM_flipCameraView:(id)arg1;
- (id)m_smallCameraView;
- (void)setM_smallCameraView:(id)arg1;
- (id)m_timerBackgroundView;
- (void)setM_timerBackgroundView:(id)arg1;
- (id)m_footerView;
- (void)setM_footerView:(id)arg1;
- (id)m_blurView;
- (void)setM_blurView:(id)arg1;
- (id)m_voiceModeButton;
- (void)setM_voiceModeButton:(id)arg1;
- (id)m_hangupBtn;
- (void)setM_hangupBtn:(id)arg1;
- (id)m_localRender;
- (void)setM_localRender:(id)arg1;
- (id)m_peerRender;
- (void)setM_peerRender:(id)arg1;
- (id)m_videoToVoiceView;
- (void)setM_videoToVoiceView:(id)arg1;
- (id)m_smallPeerRender;
- (void)setM_smallPeerRender:(id)arg1;
- (id)m_cameraClipView;
- (void)setM_cameraClipView:(id)arg1;
- (id)m_smallRenderView;
- (void)setM_smallRenderView:(id)arg1;
- (id)m_smallRenderBackClipView;
- (void)setM_smallRenderBackClipView:(id)arg1;
- (id)m_minimizeButton;
- (void)setM_minimizeButton:(id)arg1;
- (BOOL)m_hasEncounterBackgroundCameraStart;
- (void)setM_hasEncounterBackgroundCameraStart:(BOOL)arg1;
- (id)m_headImageView;
- (void)setM_headImageView:(id)arg1;
- (id)m_usrnameLabel;
- (void)setM_usrnameLabel:(id)arg1;
- (id)m_mainStatusLabel;
- (void)setM_mainStatusLabel:(id)arg1;
- (BOOL)isTalking;
- (void)setIsTalking:(BOOL)arg1;
- (long long)m_videoOrientation;
- (void)setM_videoOrientation:(long long)arg1;
- (id)m_nsHeadImageUrl;
- (void)setM_nsHeadImageUrl:(id)arg1;
- (void).cxx_destruct;
@end

