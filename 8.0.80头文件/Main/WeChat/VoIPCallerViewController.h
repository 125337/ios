@interface VoIPCallerViewController : VoIPViewController <IRecordPermissionCheckExt, IVoipCXMgrExt, VoipUIManagerExt, WCAudioSessionExt, IVideoRingNetProviderExt, _TtP6WeChat13ICarPlayUIExt_, _TtP6WeChat23CarPlayVoIPCallDelegate_, ISysCallCheckExt>
{
    BOOL _shouldPlayRecentStatusSound; // +0xaf
    BOOL _disableToPlayRecentStatusSound; // +0xb0
    BOOL _m_hasHangup; // +0xb1
    BOOL _canClickAddMembersBtn; // +0xb2
    BOOL _isUsingVirtualBackground; // +0xb3
    BOOL _isRecentStatusFirstLayouted; // +0xb4
    BOOL _isRecentStatusUnFolded; // +0xb5
    BOOL _isRecentStatusCardViewShowLogged; // +0xb6
    BOOL _isFliping; // +0xb7
    BOOL _isSysCallingBeforeAcception; // +0xb8
    int _recentStatusUserSexType; // +0xbc
    UIView * m_cameraPreviewView; // +0xc0
    VoipDescriptionButton * m_videoModeButton; // +0xc8
    VoipDescriptionButton * m_forceToAudioButton; // +0xd0
    MMTimer * m_notOnlineTimer; // +0xd8
    NSDictionary * _chatRoomReportCtx; // +0xe0
    VoipDescriptionButton * _m_hangupButton; // +0xe8
    VoipDescriptionButton * _m_speakerButton; // +0xf0
    VoipDescriptionButton * _m_micButton; // +0xf8
    UIImageView * _footerView; // +0x100
    MMUIButton * _addMemberButton; // +0x108
    VoipDescriptionButton * _m_virtualBackgroundButton; // +0x110
    VoipDescriptionButton * _m_flipCameraButton; // +0x118
    VOIPVideoRender * _m_localRender; // +0x120
    XImageViewRenderer * _rciLocalRenderer; // +0x128
    VoipRecentStatusUnFoldButton * _recentStatusUnFoldButton; // +0x130
    UIView * _recentStatusUnFoldHotView; // +0x138
    VoipRecentStatusFoldButton * _recentStatusFoldButton; // +0x140
    UIView * _recentStatusFoldHotView; // +0x148
    UIView * _recentStatusContentsView; // +0x150
    UIView * _recentStatusBlurView; // +0x158
    VoipRecentStatusCardView<VoipRecentStatusProperties> * _recentStatusCardView; // +0x160
    AnyPromise * _recentStatusPromise; // +0x168
    NSString * _recentStatusUserName; // +0x170
    id _recentStatusModel; // +0x178
    UIView * _cameraBlurView; // +0x180
}
- (void)layoutToastView;
- (void)updateStatusLabel;
- (void)layoutAddMemberButton;
- (void)layoutStatusLabel;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 andContact:(id)arg2 isEarMode:(BOOL)arg3 andInitViewMode:(int)arg4 openFrom:(unsigned long long)arg5 delegate:(id)arg6;
- (BOOL)isCaller;
- (void)unregisterAllExtensions;
- (void)showRemoteNotOnlineTips;
- (void)checkAndShowToast;
- (void)layoutMPUIDotsLoadingView;
- (double)voipAudioPreTalkHangupButtonTopInView;
- (double)voipAudioSolvedHeadTop;
- (void)onMPUIButtonClickWithSender:(id)arg1;
- (void)layoutMPUIPanel;
- (void)layoutSubViews;
- (void)viewDidLoad;
- (BOOL)enableRecentStatusSound;
- (void)refreshRecentStatusAudioSession;
- (BOOL)isRecentStatusEnable;
- (void)layoutRecentStatusFirstTime;
- (void)layoutRecentStatusWithAnimate:(BOOL)arg1;
- (void)layoutRecentStatusUnFoldButton;
- (void)relayoutRingDancingButtonWithRecentStatue;
- (void)layoutRecentStatusUnFoldHotView;
- (void)showButtons;
- (void)hideButtons;
- (void)onClickRecentStatusUnFoldHotViewWithSender:(id)arg1;
- (void)layoutRecentStatusFoldButton;
- (void)layoutRecentStatusFoldHotView;
- (void)onClickRecentStatusFoldHotViewWithSender:(id)arg1;
- (void)layoutRecentStatusContentsView;
- (void)layoutRecentStatusBlurView;
- (double)recentStatusCardHeightForWidth:(double)arg1;
- (void)layoutRecentSitutaionCardView;
- (void)layoutTalkingView;
- (void)layoutHeadImageView;
- (void)layoutUsernameLabel;
- (void)layoutCameraPreview;
- (void)layoutCameraBlurView;
- (void)layoutFooterView;
- (void)onVideoSessionStartComplete;
- (void)onVideoSessionStopComplete;
- (void)setCameraBtnEnable;
- (void)call;
- (void)cancelCall;
- (void)quickCancelOrEndCallAction;
- (void)cancelOrEndCallActionImmediately:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)initCameraView;
- (id)getVideoSnapshotViewBeforeTalk;
- (void)UIManagerDidExtendWindow;
- (void)switchToAudioModeAnimation;
- (BOOL)shouldUseCompactButtonDescription;
- (BOOL)shouldUseAudioOptimizedPanel;
- (void)setAudioPanelDescription:(id)arg1 forButton:(id)arg2 offsetY:(double)arg3;
- (void)layoutAudioOptimizedPanelIfNeeded;
- (void)layoutSpeakerButton;
- (void)showAirplayLoadingState:(BOOL)arg1;
- (void)endAirplayLoadingState;
- (void)updateSpeakerButton;
- (void)updateSpeakerButtonByPort:(id)arg1 hasChanged:(BOOL)arg2;
- (void)updateSpeakerButtonStatus:(id)arg1 hasExtenalOutput:(BOOL)arg2;
- (void)updateProximityBySpeakerButtonState;
- (void)updateProximityWithPort:(id)arg1;
- (void)audioDeviceFarawayEar:(id)arg1;
- (void)layoutMicButton;
- (void)onClickMicButton;
- (void)updateMicButtonText;
- (void)layoutHangupButton;
- (void)onVirtualBackgroundButtonTap;
- (void)onBackgroundSelect;
- (void)updateVideoModeButtonText;
- (void)layoutFlipCameraButton;
- (void)onConfirmSwitchToVoice;
- (void)onClickVideoToVoiceButton;
- (void)onChangeVideoMode;
- (void)switchToAudioViewAnimation;
- (void)onFlipCamera;
- (void)showAlertTips;
- (void)reportAllButtonStatus:(int)arg1;
- (BOOL)accessibilityPerformMagicTap;
- (void)OnCall:(id)arg1 ErrNo:(int)arg2;
- (void)OnCallBanned:(id)arg1 errNo:(int)arg2 errMsg:(id)arg3;
- (void)OnCallOverLoad:(id)arg1 errNo:(int)arg2 errMsg:(id)arg3;
- (void)startCamera;
- (void)OnNoAnswer:(id)arg1;
- (void)OnPreConnect:(id)arg1;
- (void)OnBeAccepted:(id)arg1;
- (void)OnTimeOut:(id)arg1;
- (void)OnBeRejected:(id)arg1;
- (void)OnBeHanguped:(id)arg1;
- (void)OnBeginTalk:(id)arg1;
- (void)OnTalkBrokenError:(id)arg1 ErrNo:(int)arg2;
- (void)OnError:(id)arg1 ErrNo:(int)arg2;
- (void)OnSyncError:(id)arg1 ErrNo:(int)arg2;
- (void)OnCallInterrupt:(id)arg1;
- (void)OnAutoHangUp:(id)arg1;
- (void)OnStopPlaySound;
- (void)checkAndUpdateProximityBeforeTalkStart;
- (BOOL)hasVideoVoipTalkingViewClickChangeToAudioMode;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnRecordDeniedByWeChat;
- (void)OnVoipCXCancel;
- (void)foldupRecentStatus;
- (void)onSupportClickAddMembersBtnBeforeAccept;
- (BOOL)isVideoVoipTalkingViewRecentStatusEnable;
- (int)videoVoipTalkingViewRecentStatusUserSexType;
- (id)videoVoipTalkingViewRecentStatusUserName;
- (id)videoVoipTalkingViewRecentStatusModel;
- (void)onUpdateRecentStatusEnable:(BOOL)arg1;
- (void)videoDeviceCameraFront:(id)arg1;
- (void)videoDeviceCameraBack:(id)arg1;
- (void)onCarPlayConnected;
- (void)onCarPlayVoIPCallTemplateClickHangup;
- (void)onCarPlayVoIPCallTemplateClickMute;
- (double)panelHeight;
- (void)OnSysCallState:(int)arg1 andCallId:(id)arg2;
- (void)endCallAfterDelay:(double)arg1 withCompletion:(id /* block */)arg2;
- (void)updateFlipCameraButtonAccessibility;
- (id)m_cameraPreviewView;
- (void)setM_cameraPreviewView:(id)arg1;
- (id)m_videoModeButton;
- (void)setM_videoModeButton:(id)arg1;
- (id)m_forceToAudioButton;
- (void)setM_forceToAudioButton:(id)arg1;
- (id)m_notOnlineTimer;
- (void)setM_notOnlineTimer:(id)arg1;
- (BOOL)shouldPlayRecentStatusSound;
- (void)setShouldPlayRecentStatusSound:(BOOL)arg1;
- (BOOL)disableToPlayRecentStatusSound;
- (void)setDisableToPlayRecentStatusSound:(BOOL)arg1;
- (id)chatRoomReportCtx;
- (void)setChatRoomReportCtx:(id)arg1;
- (id)m_hangupButton;
- (void)setM_hangupButton:(id)arg1;
- (id)m_speakerButton;
- (void)setM_speakerButton:(id)arg1;
- (id)m_micButton;
- (void)setM_micButton:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)addMemberButton;
- (void)setAddMemberButton:(id)arg1;
- (BOOL)m_hasHangup;
- (void)setM_hasHangup:(BOOL)arg1;
- (BOOL)canClickAddMembersBtn;
- (void)setCanClickAddMembersBtn:(BOOL)arg1;
- (id)m_virtualBackgroundButton;
- (void)setM_virtualBackgroundButton:(id)arg1;
- (BOOL)isUsingVirtualBackground;
- (void)setIsUsingVirtualBackground:(BOOL)arg1;
- (id)m_flipCameraButton;
- (void)setM_flipCameraButton:(id)arg1;
- (id)m_localRender;
- (void)setM_localRender:(id)arg1;
- (id)rciLocalRenderer;
- (void)setRciLocalRenderer:(id)arg1;
- (BOOL)isRecentStatusFirstLayouted;
- (void)setIsRecentStatusFirstLayouted:(BOOL)arg1;
- (BOOL)isRecentStatusUnFolded;
- (void)setIsRecentStatusUnFolded:(BOOL)arg1;
- (BOOL)isRecentStatusCardViewShowLogged;
- (void)setIsRecentStatusCardViewShowLogged:(BOOL)arg1;
- (id)recentStatusUnFoldButton;
- (void)setRecentStatusUnFoldButton:(id)arg1;
- (id)recentStatusUnFoldHotView;
- (void)setRecentStatusUnFoldHotView:(id)arg1;
- (id)recentStatusFoldButton;
- (void)setRecentStatusFoldButton:(id)arg1;
- (id)recentStatusFoldHotView;
- (void)setRecentStatusFoldHotView:(id)arg1;
- (id)recentStatusContentsView;
- (void)setRecentStatusContentsView:(id)arg1;
- (id)recentStatusBlurView;
- (void)setRecentStatusBlurView:(id)arg1;
- (id)recentStatusCardView;
- (void)setRecentStatusCardView:(id)arg1;
- (id)recentStatusPromise;
- (void)setRecentStatusPromise:(id)arg1;
- (id)recentStatusUserName;
- (void)setRecentStatusUserName:(id)arg1;
- (int)recentStatusUserSexType;
- (void)setRecentStatusUserSexType:(int)arg1;
- (id)recentStatusModel;
- (void)setRecentStatusModel:(id)arg1;
- (id)cameraBlurView;
- (void)setCameraBlurView:(id)arg1;
- (BOOL)isFliping;
- (void)setIsFliping:(BOOL)arg1;
- (BOOL)isSysCallingBeforeAcception;
- (void)setIsSysCallingBeforeAcception:(BOOL)arg1;
- (void).cxx_destruct;
@end
