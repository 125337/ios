@interface VideoVoipCSView : MMUIViewController <WCActionSheetDelegate, WCActionSheetDelegate, IVOIPModeSwitchExt, IVOIPExt, AVVideoDeviceDelegate, SmallCameraViewDelegate, VideoVoipCSTalkingViewDelegate, IVOIPVideoDeviceDelegate, IStrangerContactMgrExt>
{
    unsigned int _status; // +0x70
    NSString * m_nsAppId; // +0x78
    UIImageView * _backgroundView; // +0x80
    CMessageWrap * _msgWrap; // +0x88
    BOOL _isConnectOK; // +0x90
    AVAudioPlayer * _player; // +0x98
    BOOL _isAcceptVoice; // +0xa0
    BOOL _canUpdateStatusMachine; // +0xa1
    unsigned int _startTalkingTime; // +0xa4
    int m_viewInitMode; // +0xa8
    UILabel * m_mainStatusLabel; // +0xb0
    BOOL m_forceToVoice; // +0xb8
    BOOL m_hasStopBellSound; // +0xb9
    BOOL m_hasInvokeToAudioAnimation; // +0xba
    BOOL m_isMinimizeMode; // +0xbb
    BOOL _m_isEndCall; // +0xbc
    BOOL _m_hasCalculateBlurView; // +0xbd
    BOOL _m_shouldChange; // +0xbe
    BOOL _m_isLandSpaceMode; // +0xbf
    BOOL _m_bAllowBackCamera; // +0xc0
    BOOL _m_bShowCSVideo; // +0xc1
    MultiTalkHDHeadView * m_headImageView; // +0xc8
    UILabel * m_usrnameLabel; // +0xd0
    UIImageView * m_blurView; // +0xd8
    UIImageView * m_profileBackgroundView; // +0xe0
    VoipMinimizeReportObject * m_reportObject; // +0xe8
    MMTimer * m_netStatusUpdateTimer; // +0xf0
    CContact * m_contact; // +0xf8
    NSString * m_nsHeadImageUrl; // +0x100
    id <VideoVoipCSViewDelegate> _m_delegate; // +0x108
    WCUIAlertView * _alertView; // +0x110
    VideoVoipCSTalkingView * _m_talkingView; // +0x118
    double _m_oldOriginY; // +0x120
    UILabel * _m_netStatusLabel; // +0x128
    WavAudioPlayer * _m_wavAudioPlayer; // +0x130
}
+ (void)updateLabel:(id)arg1 WithWidth:(double)arg2 WithHeight:(double)arg3 AndLastLineWidth:(double)arg4 AndUpDownMargin:(double)arg5;
- (BOOL)accessibilityViewIsModal;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)updateStatusLabel;
- (CGSize)viewSize;
- (void)layoutBackgroundView;
- (void)layoutProfileBackgroundView;
- (void)layoutBlurView;
- (void)layoutHeadImageView;
- (void)layoutUsernameLabel;
- (id)getDisplayNameByUsername:(id)arg1;
- (void)layoutMainStatusLabel;
- (void)initTipsView;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewDidAppear:(BOOL)arg1;
- (void)initView;
- (void)layoutTalkingView;
- (id)initWithFrame:(CGRect)arg1 andContact:(id)arg2 isEarMode:(BOOL)arg3 andInitViewMode:(int)arg4 appid:(id)arg5 headUrl:(id)arg6 isAllowBackCamera:(BOOL)arg7 isShowCSVideo:(BOOL)arg8;
- (void)preSetAudioCategory;
- (void)dealloc;
- (void)onVideoSessionStartComplete;
- (BOOL)isCaller;
- (void)playSound:(id)arg1 OfType:(id)arg2 numberOfLoops:(long long)arg3;
- (void)playEndingSound;
- (void)stopPlaySound;
- (void)onConfirm;
- (void)OnTalkingViewLoad:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)switchToTalkingView;
- (void)OnLocalEarModeFor2G;
- (void)OnRemoteEarModeFor2G;
- (void)OnLocalEarMode;
- (void)OnRemoteEarMode;
- (void)OnOneWayRemoteEarModeForBadNetwork;
- (void)OnOneWayLocalEarModeForBadNetwork;
- (void)OnVideoModeChangeToVoiceMode;
- (void)updateNetTypeStatus;
- (void)endCallAfterDelay:(double)arg1;
- (void)quitAnimation;
- (void)clearRenderView;
- (void)forceEndCall;
- (void)onVideoVoipCSTalkingViewHangUp;
- (void)onVideoVoipCSTalkingViewEndCall;
- (BOOL)isVideoVoipCSTalkingViewInitWithVideoMode;
- (void)onVideoVoipCSTalkingViewSwitchToSmall;
- (BOOL)onVideoVoipCSTalkingViewRequestMinimizeStatus;
- (void)onVideoVoipCSTalkingViewShowStatusBar;
- (void)onVideoVoipCSTalkingViewHideStatusBar;
- (void)setMainStatusString:(id)arg1;
- (BOOL)isVideoMode;
- (BOOL)isInitVideoMode;
- (void)switchToAudioModeAnimation;
- (id)getContact;
- (void)initNetStatusLabel;
- (void)layoutNetStatusLabel;
- (void)updateNetStatus;
- (void)viewDidLayoutSubviews;
- (void)adjustViewAndNavBarRect;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)setAlertView:(id)arg1;
- (void)cancelOrEndCallAction;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)m_mainStatusLabel;
- (void)setM_mainStatusLabel:(id)arg1;
- (id)m_headImageView;
- (void)setM_headImageView:(id)arg1;
- (id)m_usrnameLabel;
- (void)setM_usrnameLabel:(id)arg1;
- (id)m_blurView;
- (void)setM_blurView:(id)arg1;
- (id)m_profileBackgroundView;
- (void)setM_profileBackgroundView:(id)arg1;
- (BOOL)m_isMinimizeMode;
- (void)setM_isMinimizeMode:(BOOL)arg1;
- (id)m_reportObject;
- (void)setM_reportObject:(id)arg1;
- (id)m_netStatusUpdateTimer;
- (void)setM_netStatusUpdateTimer:(id)arg1;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)m_nsHeadImageUrl;
- (void)setM_nsHeadImageUrl:(id)arg1;
- (BOOL)m_isEndCall;
- (void)setM_isEndCall:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)alertView;
- (BOOL)m_hasCalculateBlurView;
- (void)setM_hasCalculateBlurView:(BOOL)arg1;
- (id)m_talkingView;
- (void)setM_talkingView:(id)arg1;
- (BOOL)m_shouldChange;
- (void)setM_shouldChange:(BOOL)arg1;
- (double)m_oldOriginY;
- (void)setM_oldOriginY:(double)arg1;
- (BOOL)m_isLandSpaceMode;
- (void)setM_isLandSpaceMode:(BOOL)arg1;
- (id)m_netStatusLabel;
- (void)setM_netStatusLabel:(id)arg1;
- (id)m_wavAudioPlayer;
- (void)setM_wavAudioPlayer:(id)arg1;
- (BOOL)m_bAllowBackCamera;
- (void)setM_bAllowBackCamera:(BOOL)arg1;
- (BOOL)m_bShowCSVideo;
- (void)setM_bShowCSVideo:(BOOL)arg1;
- (void).cxx_destruct;
@end
