@interface VoIPReceiverViewController : VoIPViewController <IVoipCXMgrExt, VoIPInvitationBreadthViewDelegate, _TtP6WeChat13ICarPlayUIExt_, _TtP6WeChat26CarPlayVoIPReceiveDelegate_, IRecordPermissionCheckExt>
{
    VoipMonoMsg * m_monoMsg; // +0xb0
    BOOL hasAcceptCall; // +0xb8
    BOOL hasHangUp; // +0xb9
    BOOL isNeedHangupForInvalidScene; // +0xba
    BOOL hasCheckedRoomIsAlive; // +0xbb
    BOOL hasRealShowReceiveView; // +0xbc
    BOOL _fromIgnore; // +0xbd
    BOOL _isUsingVirtualBackground; // +0xbe
    BOOL _m_hasInitCameraDevice; // +0xbf
    BOOL _isAuthing; // +0xc0
    BOOL _isSetupedSceneQuickReplyFromBreadth; // +0xc1
    BOOL _isFliping; // +0xc2
    BOOL _hasReportFullScreenHideBtnExp; // +0xc3
    BOOL _hasReportHiddenWithin1hBtnExp; // +0xc4
    BOOL _hasReportVoipBannerExp; // +0xc5
    VoipDescriptionButton * m_acceptBtn; // +0xc8
    VoipDescriptionButton * m_hangupButton; // +0xd0
    VoipDescriptionButton * m_videoModeButton; // +0xd8
    UIView * m_cameraPreviewView; // +0xe0
    MMUIActivityIndicatorView * _acceptIndicatorView; // +0xe8
    VoipDescriptionButton * _m_speakerButton; // +0xf0
    VoipDescriptionButton * _m_micButton; // +0xf8
    MMUIButton * _m_ignoreButton; // +0x100
    MMUIButton * _m_ignoreActionButton; // +0x108
    MMUIButton * _m_miniwindowStyleButton; // +0x110
    VoipDescriptionButton * _m_virtualBackgroundButton; // +0x118
    VoipDescriptionButton * _m_flipCameraButton; // +0x120
    VOIPVideoRender * _m_localRender; // +0x128
    XImageViewRenderer * _rciLocalRender; // +0x130
    VoIPInvitationBreadthView * _breadthView; // +0x138
    UIImageView * _breadthInviteTransformView; // +0x140
    VoipForceStartObject * _inviteBreadthShowStatForceStartObject; // +0x148
    VoipMonoMsg * _inviteMonoMsg; // +0x150
    UIView * _cameraBlurView; // +0x158
    VoIPInComingReportManager * _voipReportManager; // +0x160
}
- (BOOL)shouldUseCompactButtonDescription;
- (BOOL)shouldUseAudioOptimizedPanel;
- (void)setAudioPanelDescription:(id)arg1 forButton:(id)arg2 offsetY:(double)arg3;
- (void)layoutAudioOptimizedPanelIfNeeded;
- (void)layoutSpeakerButton;
- (void)showAirplayLoadingState:(BOOL)arg1;
- (void)endAirplayLoadingState;
- (void)updateSpeakerButton;
- (void)updateSpeakerButtonByPort:(id)arg1 hasChanged:(BOOL)arg2;
- (void)onClickMicButton;
- (void)updateMicButtonText;
- (void)layoutIgnoreButton;
- (void)onIgnoreButtonClick:(id)arg1;
- (void)UIManagerDidExtendWindow;
- (void)layoutMiniwindowStyleButton;
- (void)onMiniwindowStyleButtonClick;
- (void)layoutIgnoreActionButton;
- (void)onIgnoreActionButtonClick:(id)arg1;
- (id)fullScreenButtonReportParamsWithViewId:(id)arg1;
- (void)reportFullScreenHideBtnExpIfNeeded;
- (void)reportFullScreenHideBtnClick;
- (void)reportHiddenWithin1hBtnExpIfNeeded;
- (void)reportHiddenWithin1hBtnClick;
- (void)reportVoipBannerExpIfNeeded;
- (void)reportFullScreenButtonsExposureIfNeeded;
- (void)updateStatusLabel;
- (BOOL)accessibilityPerformMagicTap;
- (void)layoutHeadImageView;
- (double)voipAudioFromIgnoreExtraSpace;
- (double)voipAudioPreTalkHangupButtonTopInView;
- (void)layoutUsernameLabel;
- (void)layoutHangupButton;
- (void)layoutAcceptButton;
- (void)updateVideoModeButtonText;
- (void)onVirtualBackgroundTap;
- (void)onBackgroundSelect;
- (void)layoutFlipCameraButton;
- (void)updateVideoSpeakerButtonStatus:(id)arg1 hasExtenalOutput:(BOOL)arg2;
- (void)updateSpeakerButtonStatus:(id)arg1 hasExtenalOutput:(BOOL)arg2;
- (void)updateProximityBySpeakerButtonState;
- (void)updateProximityWithPort:(id)arg1;
- (void)initCameraView;
- (id)getVideoSnapshotViewBeforeTalk;
- (void)reinitCameraDeviceForVoIPLCK;
- (void)initCameraDevice;
- (void)startCamera;
- (BOOL)isCaller;
- (void)setMonoMsg:(id)arg1;
- (void)asyncAcceptVideo;
- (void)asyncAcceptAudio;
- (void)asyncPlaySound;
- (void)onFromBackgroundToForeground;
- (void)onChangeVideoMode;
- (void)acceptCall;
- (void)layoutAcceptIndicatorView;
- (void)reportAllButtonStatus:(int)arg1;
- (void)realAcceptCall;
- (void)onAcceptButtonClick:(id)arg1;
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
- (void)collapseInvitationBreadthViewForAutoIgnore;
- (void)slipToMinimizeView:(id)arg1;
- (void)resetAddBackgroundView;
- (void)expandVideoVipView;
- (BOOL)isInBreathInviteScene;
- (BOOL)isInBreathQuickReplyScene;
- (BOOL)isInBreath;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
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
- (id)breadthAnimationView;
- (void)loadBreadthInviteTransformView;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)layoutTalkingView;
- (void)layoutCameraPreview;
- (void)layoutCameraBlurView;
- (void)onMPUIButtonClickWithSender:(id)arg1;
- (void)layoutOptimizedMPUIPanel;
- (void)layoutMPUIPanel;
- (void)layoutMicButton;
- (void)layoutSubViews;
- (void)checkAndShowToast;
- (void)startShowView;
- (void)didEnterBackground;
- (void)didTurnOffScreen;
- (void)checkLostNotifySync;
- (void)checkAndUpdateProximityBeforeTalkStart;
- (BOOL)shouldFormVoIPMessageWhenCall;
- (BOOL)isFromMyselfForFormingVOIPMessageWhenCall;
- (BOOL)shouldLaunchEndingFeedbackWhenEndingCall;
- (BOOL)shouldQuitAutomaticallyWhenEndingCall;
- (void)endCallAfterDelay:(double)arg1 withCompletion:(id /* block */)arg2;
- (void)endCallByCancel;
- (void)doEndCallByCancel;
- (void)fakeEndVoIPByChangingToMultiTalk;
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
- (void)voIPInvitationBreadthViewDidInviteViewIgnore:(id)arg1;
- (void)voIPInvitationBreadthViewDidQuickReplyViewClick:(id)arg1;
- (void)voIPInvitationBreadthViewDidFullScreenMiniInAppClick:(id)arg1;
- (void)voIPInvitationBreadthViewDidFullScreenAccept:(id)arg1;
- (void)voIPInvitationBreadthViewDidFullScreenHangup:(id)arg1;
- (BOOL)shouldBlockGesture;
- (void)UIManagerWillExtendWindow;
- (void)onCarPlayConnected;
- (void)onCarPlayVoIPReceiveTemplateClickAcceptWithNeedCloseCamera:(BOOL)arg1;
- (void)onCarPlayVoIPReceiveTemplateClickHangup;
- (double)panelHeight;
- (void)ringBackSoundCoordinatorDidMuteWhenIsVolumeUp:(BOOL)arg1;
- (BOOL)isInMinimizeModeToShowVoIPToast;
- (void)updateFlipCameraButtonAccessibility;
- (id)m_acceptBtn;
- (void)setM_acceptBtn:(id)arg1;
- (id)m_hangupButton;
- (void)setM_hangupButton:(id)arg1;
- (id)m_videoModeButton;
- (void)setM_videoModeButton:(id)arg1;
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
- (BOOL)fromIgnore;
- (void)setFromIgnore:(BOOL)arg1;
- (id)acceptIndicatorView;
- (void)setAcceptIndicatorView:(id)arg1;
- (id)m_speakerButton;
- (void)setM_speakerButton:(id)arg1;
- (id)m_micButton;
- (void)setM_micButton:(id)arg1;
- (id)m_ignoreButton;
- (void)setM_ignoreButton:(id)arg1;
- (id)m_ignoreActionButton;
- (void)setM_ignoreActionButton:(id)arg1;
- (id)m_miniwindowStyleButton;
- (void)setM_miniwindowStyleButton:(id)arg1;
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
- (id)cameraBlurView;
- (void)setCameraBlurView:(id)arg1;
- (BOOL)isFliping;
- (void)setIsFliping:(BOOL)arg1;
- (id)voipReportManager;
- (void)setVoipReportManager:(id)arg1;
- (BOOL)hasReportFullScreenHideBtnExp;
- (void)setHasReportFullScreenHideBtnExp:(BOOL)arg1;
- (BOOL)hasReportHiddenWithin1hBtnExp;
- (void)setHasReportHiddenWithin1hBtnExp:(BOOL)arg1;
- (BOOL)hasReportVoipBannerExp;
- (void)setHasReportVoipBannerExp:(BOOL)arg1;
- (void).cxx_destruct;
@end
