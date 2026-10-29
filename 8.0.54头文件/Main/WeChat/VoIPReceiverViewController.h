@interface VoIPReceiverViewController : VoIPViewController <IVoipCXMgrExt, VoIPInvitationBreadthViewDelegate, _TtP6WeChat13ICarPlayUIExt_, _TtP6WeChat26CarPlayVoIPReceiveDelegate_, IRecordPermissionCheckExt>
{
    VoipMonoMsg * m_monoMsg; // +0xa8
    BOOL isNeedFormSysMsg; // +0xb0
    BOOL hasAcceptCall; // +0xb1
    BOOL hasHangUp; // +0xb2
    BOOL isNeedHangupForInvalidScene; // +0xb3
    BOOL hasCheckedRoomIsAlive; // +0xb4
    BOOL hasRealShowReceiveView; // +0xb5
    BOOL _isUsingVirtualBackground; // +0xb6
    BOOL _m_hasInitCameraDevice; // +0xb7
    BOOL _isAuthing; // +0xb8
    BOOL _isSetupedSceneQuickReplyFromBreadth; // +0xb9
    unsigned int _m_timerCnt; // +0xbc
    VoipDescriptionButton * m_acceptBtn; // +0xc0
    VoipDescriptionButton * m_hangupButton; // +0xc8
    VoipDescriptionButton * m_videoModeButton; // +0xd0
    UIView * m_cameraPreviewView; // +0xd8
    MMUIActivityIndicatorView * _acceptIndicatorView; // +0xe0
    VoipDescriptionButton * _m_speakerButton; // +0xe8
    VoipDescriptionButton * _m_micButton; // +0xf0
    VoipDescriptionButton * _m_virtualBackgroundButton; // +0xf8
    VoipDescriptionButton * _m_flipCameraButton; // +0x100
    VOIPVideoRender * _m_localRender; // +0x108
    XImageViewRenderer * _rciLocalRender; // +0x110
    VoIPInvitationBreadthView * _breadthView; // +0x118
    UIImageView * _breadthInviteTransformView; // +0x120
    VoipForceStartObject * _inviteBreadthShowStatForceStartObject; // +0x128
    VoipMonoMsg * _inviteMonoMsg; // +0x130
}
- (void)layoutSpeakerButton;
- (void)showAirplayLoadingState:(BOOL)arg1;
- (void)endAirplayLoadingState;
- (void)updateSpeakerButton;
- (void)updateSpeakerButtonByPort:(id)arg1 hasChanged:(BOOL)arg2;
- (void)audioDeviceFarawayEar:(id)arg1;
- (void)onClickMicButton;
- (void)updateMicButtonText;
- (void)updateStatusLabel;
- (BOOL)accessibilityPerformMagicTap;
- (void)layoutHeadImageView;
- (void)layoutUsernameLabel;
- (void)layoutHangupButton;
- (void)layoutAcceptButton;
- (void)layoutVideoModeButton;
- (void)updateVideoModeButtonText;
- (void)layoutVirtualBackgroundButton;
- (void)onVirtualBackgroundTap;
- (void)onBackgroundSelect;
- (void)layoutFlipCameraButton;
- (void)VoIPMPUI_updateSpeakerButtonStatus:(id)arg1 hasExtenalOutput:(BOOL)arg2;
- (void)updateSpeakerButtonStatus:(id)arg1 hasExtenalOutput:(BOOL)arg2;
- (void)updateProximityBySpeakerButtonState;
- (void)VoIPMPUI_updateProximityWithPort:(id)arg1;
- (void)updateProximityWithPort:(id)arg1;
- (void)VoIPUpdateProximityWithPort:(int)arg1;
- (void)VoIPMPUI_VoIPMPUpdateSpeakerButtonStatus:(int)arg1 name:(id)arg2 hasOutput:(BOOL)arg3;
- (void)VoIPMPUpdateSpeakerButtonStatus:(int)arg1 name:(id)arg2 hasOutput:(BOOL)arg3;
- (void)initCameraView;
- (id)getVideoSnapshotViewBeforeTalk;
- (void)reinitCameraDeviceForVoIPLCK;
- (void)initCameraDevice;
- (void)startCamera;
- (BOOL)isCaller;
- (void)setMonoMsg:(id)arg1;
- (void)markLastVoipInfo;
- (void)asyncAcceptVideo;
- (void)asyncAcceptAudio;
- (void)asyncPlaySound;
- (void)onFromBackgroundToForeground;
- (void)onChangeVideoMode;
- (void)acceptCall;
- (void)layoutAcceptIndicatorView;
- (void)reportAllButtonStatus:(int)arg1;
- (void)realAcceptCall;
- (void)onHangupButtonClick:(id)arg1;
- (void)hangup;
- (void)hangupImmediately:(BOOL)arg1;
- (void)backFromMinimise;
- (void)changeToMinimizeViewFromBreadth;
- (void)onVideoSessionStartComplete;
- (void)onVideoSessionStopComplete;
- (void)setCameraBtnEnable;
- (void)resetExpandViewElement:(BOOL)arg1;
- (void)tryToShowViopReceivedCard;
- (void)changeToMinimizeView;
- (void)resetAddBackgroundView;
- (void)expandVideoVipView;
- (BOOL)isInBreathInviteScene;
- (BOOL)isInBreathQuickReplyScene;
- (BOOL)isInBreath;
- (id)specialTouchAreaView;
- (void)didOnVideoVoipViewChangeToMinimizeMode;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnRecordDeniedByWeChat;
- (unsigned long long)roomID;
- (long long)roomKey;
- (id)initWithFrame:(CGRect)arg1 andContact:(id)arg2 isEarMode:(BOOL)arg3 andInitViewMode:(int)arg4 openFrom:(unsigned long long)arg5 monoMsg:(id)arg6 delegate:(id)arg7;
- (BOOL)isOnCheckingRoomIsAlive;
- (void)checkRoomIsAlive;
- (void)checkIsAnwseredForAliveRoomWithRoomID:(unsigned long long)arg1 RoomKey:(long long)arg2 RoomType:(unsigned int)arg3;
- (void)unregisterAllExtensions;
- (void)dealloc;
- (void)loadBreadthView;
- (void)loadBreadthInviteTransformView;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)layoutTalkingView;
- (void)layoutCameraPreview;
- (void)layoutMPUIPanel;
- (void)layoutSubViews;
- (void)checkAndShowToast;
- (void)startShowView;
- (void)checkLostNotifySync;
- (void)checkAndUpdateProximityBeforeTalkStart;
- (BOOL)shouldFormVoIPMessageWhenCall;
- (BOOL)isFromMyselfForFormingVOIPMessageWhenCall;
- (BOOL)shouldLaunchEndingFeedbackWhenEndingCall;
- (BOOL)shouldQuitAutomaticallyWhenEndingCall;
- (void)endCallAfterDelay:(double)arg1 withCompletion:(id /* block */)arg2;
- (void)endCallByCancel;
- (void)doEndCallByCancel;
- (void)OnAccept:(id)arg1 ErrNo:(int)arg2;
- (void)OnPreConnect:(id)arg1;
- (void)OnBeginTalk:(id)arg1;
- (void)OnCallInterrupt:(id)arg1;
- (void)OnAutoHangUp:(id)arg1;
- (void)OnTimeOut:(id)arg1;
- (void)OnTalkBrokenError:(id)arg1 ErrNo:(int)arg2;
- (void)OnError:(id)arg1 ErrNo:(int)arg2;
- (void)OnSyncError:(id)arg1 ErrNo:(int)arg2;
- (void)OnBeHanguped:(id)arg1;
- (void)onOtherDeviceHandleTalk:(id)arg1 WithStatus:(unsigned int)arg2;
- (void)clossLocalNotifyForInvalidInvitation;
- (void)changeToAcceptedAnimation;
- (void)changeToRemoteEarModeBeforeAnswer;
- (BOOL)hasVideoVoipTalkingViewClickChangeToAudioMode;
- (void)switchToAudioModeAnimation;
- (void)OnRemoteEarMode;
- (void)OnRemoteEarModeFor2G;
- (void)OnVoipCXReject;
- (BOOL)useTransparentNavibar;
- (long long)preferredStatusBarStyle;
- (void)OnTalkingViewLoad:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)onFlipCamera;
- (void)videoDeviceCameraFront:(id)arg1;
- (void)videoDeviceCameraBack:(id)arg1;
- (void)setupNormalModeFromBreadthModeWithAnimated:(BOOL)arg1;
- (void)voIPInvitationBreadthViewWillSetupScene:(id)arg1;
- (void)voIPInvitationBreadthViewDidSetupScene:(id)arg1;
- (void)voIPInvitationBreadthViewWillScrollOut:(id)arg1 manually:(BOOL)arg2;
- (void)voIPInvitationBreadthViewDidScrollOut:(id)arg1 manually:(BOOL)arg2;
- (void)voIPInvitationBreadthViewDidInterceptScrollingOut:(id)arg1;
- (void)voIPInvitationBreadthViewDidInviteViewClick:(id)arg1;
- (void)voIPInvitationBreadthViewDidInviteViewAccept:(id)arg1;
- (void)voIPInvitationBreadthViewDidInviteViewHangup:(id)arg1;
- (void)voIPInvitationBreadthViewDidQuickReplyViewClick:(id)arg1;
- (void)voIPInvitationBreadthViewDidFullScreenMiniInAppClick:(id)arg1;
- (void)voIPInvitationBreadthViewDidFullScreenAccept:(id)arg1;
- (void)voIPInvitationBreadthViewDidFullScreenHangup:(id)arg1;
- (BOOL)shouldBlockGesture;
- (void)UIManagerWillExtendWindow;
- (void)onCarPlayConnected;
- (void)onCarPlayVoIPReceiveTemplateClickAcceptWithNeedCloseCamera:(BOOL)arg1;
- (void)onCarPlayVoIPReceiveTemplateClickHangup;
- (id)m_acceptBtn;
- (void)setM_acceptBtn:(id)arg1;
- (id)m_hangupButton;
- (void)setM_hangupButton:(id)arg1;
- (id)m_videoModeButton;
- (void)setM_videoModeButton:(id)arg1;
- (BOOL)isNeedFormSysMsg;
- (void)setIsNeedFormSysMsg:(BOOL)arg1;
- (BOOL)hasAcceptCall;
- (void)setHasAcceptCall:(BOOL)arg1;
- (BOOL)hasHangUp;
- (void)setHasHangUp:(BOOL)arg1;
- (id)m_cameraPreviewView;
- (void)setM_cameraPreviewView:(id)arg1;
- (BOOL)isNeedHangupForInvalidScene;
- (void)setIsNeedHangupForInvalidScene:(BOOL)arg1;
- (BOOL)hasCheckedRoomIsAlive;
- (void)setHasCheckedRoomIsAlive:(BOOL)arg1;
- (BOOL)hasRealShowReceiveView;
- (void)setHasRealShowReceiveView:(BOOL)arg1;
- (id)acceptIndicatorView;
- (void)setAcceptIndicatorView:(id)arg1;
- (id)m_speakerButton;
- (void)setM_speakerButton:(id)arg1;
- (id)m_micButton;
- (void)setM_micButton:(id)arg1;
- (id)m_virtualBackgroundButton;
- (void)setM_virtualBackgroundButton:(id)arg1;
- (BOOL)isUsingVirtualBackground;
- (void)setIsUsingVirtualBackground:(BOOL)arg1;
- (id)m_flipCameraButton;
- (void)setM_flipCameraButton:(id)arg1;
- (id)m_localRender;
- (void)setM_localRender:(id)arg1;
- (id)rciLocalRender;
- (void)setRciLocalRender:(id)arg1;
- (unsigned int)m_timerCnt;
- (void)setM_timerCnt:(unsigned int)arg1;
- (BOOL)m_hasInitCameraDevice;
- (void)setM_hasInitCameraDevice:(BOOL)arg1;
- (id)breadthView;
- (void)setBreadthView:(id)arg1;
- (id)breadthInviteTransformView;
- (void)setBreadthInviteTransformView:(id)arg1;
- (BOOL)isAuthing;
- (void)setIsAuthing:(BOOL)arg1;
- (id)inviteBreadthShowStatForceStartObject;
- (void)setInviteBreadthShowStatForceStartObject:(id)arg1;
- (id)inviteMonoMsg;
- (void)setInviteMonoMsg:(id)arg1;
- (BOOL)isSetupedSceneQuickReplyFromBreadth;
- (void)setIsSetupedSceneQuickReplyFromBreadth:(BOOL)arg1;
- (void).cxx_destruct;
@end

