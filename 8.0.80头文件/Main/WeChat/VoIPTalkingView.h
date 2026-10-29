@interface VoIPTalkingView : MMUIView <MMTipsViewControllerDelegate, WCActionSheetDelegate, WCAudioSessionExt, IVOIPVideoDeviceDelegate, VideoHintTopViewDelegate, VoIPLockScreenButtonDelegate, IlinkVoIPStreamEventExt, MMScreenShotExt, AVVideoDeviceDelegate, IVOIPModeSwitchExt, IVOIPExt, VOIPVideoToVoiceViewDelegate, VoipUIManagerExt, _TtP6WeChat23CarPlayVoIPTalkDelegate_>
{
    CContact * _contact; // +0x8
    unsigned int _status; // +0x10
    UIView * _backgroundView; // +0x18
    MMTimerLabel * _timer; // +0x20
    UIView * m_timerBackgroundView; // +0x28
    UIView * m_footerView; // +0x30
    BOOL m_allowVideo; // +0x38
    VOIPVideoToVoiceView * m_videoToVoiceView; // +0x40
    BOOL m_isOperating; // +0x48
    BOOL m_hasEncounterBackgroundCameraStart; // +0x49
    BOOL _isCaller; // +0x4a
    BOOL _frontVirtualBackgroundOn; // +0x4b
    BOOL _backVirtualBackgroundOn; // +0x4c
    BOOL _isFrontCamera; // +0x4d
    BOOL _shouldMaskRemoteCapture; // +0x4e
    BOOL _isTalking; // +0x4f
    BOOL _isSpeakerReady; // +0x50
    BOOL _isMiniInAppActived; // +0x51
    BOOL _screenProjectEntryPageVisible; // +0x52
    BOOL _isEnding; // +0x53
    BOOL _isAudioInterruption; // +0x54
    BOOL _isAddMemberDisable; // +0x55
    BOOL _isMicOpen; // +0x56
    BOOL _isScreenShotButtonsHidden; // +0x57
    BOOL _isWaitingForSaveToastDismiss; // +0x58
    BOOL _isOrientationServiceEnable; // +0x59
    BOOL _remoteSupportNewScreenProject; // +0x5a
    BOOL _canClickAddMembersBtn; // +0x5b
    BOOL _hasShowVideoHint; // +0x5c
    BOOL _canShowVideoHint; // +0x5d
    BOOL _needShowVideoHint; // +0x5e
    BOOL _clearedScreen; // +0x5f
    BOOL _v2_isUsingVirtualBackground; // +0x60
    BOOL _enableOpenLandscapeModeOnSplit; // +0x61
    BOOL _isLocked; // +0x62
    unsigned int _deviceStatus; // +0x64
    id <NSObject><VoIPTalkingViewDelegate> _delegate; // +0x68
    VoipDescriptionButton * m_flipCameraView; // +0x70
    VoipDescriptionButton * m_videoModeButton; // +0x78
    VoipDescriptionButton * m_hangupBtn; // +0x80
    long long _videoStatus; // +0x88
    VoipDescriptionButton * _m_micButton; // +0x90
    VoipDescriptionButton * _m_speakerButton; // +0x98
    _TtC6WeChat22VoIPExtOperateMenuView * _extOperateMenu; // +0xa0
    MMUIButton * _minimizeButton; // +0xa8
    CAGradientLayer * _topBackgroundLayer; // +0xb0
    UIView * _m_warningView; // +0xb8
    UILabel * _m_warningLabel; // +0xc0
    UIView * _clickView; // +0xc8
    VoipDescriptionButton * _m_virtualBackgroundButton; // +0xd0
    unsigned long long _openFrom; // +0xd8
    MMUIButton * _addMemberButton; // +0xe0
    MMUIButton * _screenProjectButton; // +0xe8
    _TtC6WeChat22VoIPExtOperateMenuView * _screenProjectSourceMenu; // +0xf0
    VideoHintTopView * _videoHintView; // +0xf8
    VoIPMPUIv2ScreenView * _v2_screenView; // +0x100
    VoIPLockScreenButton * _lockButton; // +0x108
    VoIPLockScreenTip * _lockScreenTip; // +0x110
    UITapGestureRecognizer * _lockedTapGesture; // +0x118
    VoIPEnhanceVoiceCoordinator * _enhanceVoiceCoordinator; // +0x120
}
- (void)setFrontVirtualBackgroundOn:(BOOL)arg1;
- (void)setBackVirtualBackgroundOn:(BOOL)arg1;
- (void)startupLocalRendering;
- (void)startupRemoteRendering;
- (BOOL)isSpeakerOn;
- (BOOL)shouldUseCompactButtonDescription;
- (BOOL)shouldUseAudioOptimizedPanel;
- (void)setAudioPanelDescription:(id)arg1 forButton:(id)arg2 offsetY:(double)arg3;
- (BOOL)isSplit;
- (unsigned long long)splitAxis;
- (unsigned long long)localSplitSlot;
- (BOOL)isSplitLocalOnTop;
- (BOOL)isMainLocal;
- (BOOL)isSubWindowFolded;
- (void)configureRenderRaisrPara:(id)arg1;
- (BOOL)isClearedScreen;
- (double)connectedPanelTopButtonTop;
- (BOOL)shouldInterceptLeftEdgeGestureWithTouchPoint:(CGPoint)arg1;
- (void)onTapEvent;
- (void)layoutMPUIScreenView;
- (double)normalizedRemoteRotateDegree;
- (void)setIsMiniInAppActived:(BOOL)arg1;
- (void)setIsSpeakerReady:(BOOL)arg1;
- (void)setIsFrontCamera:(BOOL)arg1;
- (void)startTalkWithAllowVideo:(BOOL)arg1;
- (void)updateInitMode:(BOOL)arg1 initMicOpen:(BOOL)arg2 videoOpen:(BOOL)arg3 deviceStatus:(unsigned int)arg4;
- (void)reportTalkingAllButtonStatus:(int)arg1;
- (id)initWithFrame:(CGRect)arg1 andContact:(id)arg2 AllowVideo:(BOOL)arg3 AndIsMinimizeMode:(BOOL)arg4 delegate:(id)arg5 openFrom:(unsigned long long)arg6;
- (BOOL)isMainCameraLocal;
- (void)applicationGotoBackground;
- (void)applicationBecomeActive;
- (void)dealloc;
- (void)updateInputOutputRender:(BOOL)arg1;
- (void)checkAndUpdateProximity;
- (void)setIsEnding:(BOOL)arg1;
- (void)reportViewStatus;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)layoutVideoToVoiceView;
- (void)layoutExtOperatePanel;
- (void)configExtOperatePanel;
- (void)configScreenProjectSourceMenu;
- (void)layoutBackgroundView;
- (BOOL)isLocalLandscapeMode;
- (id)getVideoSnapshotViewWhenTalking;
- (void)layoutTopBackgroundLayer;
- (void)layoutMPUIMinimizeButton;
- (void)layoutMinimizeButton;
- (void)layoutFlipCameraButton;
- (void)layoutVideoHintTopView;
- (void)onTalkMemberDidTapped:(id)arg1;
- (void)onSmallSwitchButtonClick;
- (void)changeToMinimizeView;
- (void)layoutClickView;
- (void)layoutMPUITimerView;
- (void)layoutTimerView;
- (void)layoutFooterView;
- (void)onMPUIButtonClickWithSender:(id)arg1;
- (void)layoutMPUIPanel;
- (void)updateVideoModeButtonText;
- (void)showAirplayLoadingState:(BOOL)arg1;
- (void)showAirplayLoading;
- (void)updateSpeakerButton;
- (void)updateSpeakerButtonWhenStartedSuccess:(BOOL)arg1 canShowAirPlay:(BOOL)arg2 hasChanged:(BOOL)arg3;
- (void)updateSpeakerButtonByPort:(id)arg1 hasChanged:(BOOL)arg2 shouldIgnoreToast:(BOOL)arg3;
- (void)updateSpeakerButtonStatus:(id)arg1 hasExtenalOutput:(BOOL)arg2 force:(BOOL)arg3;
- (void)updateSpeakerButtonStatus:(id)arg1 hasExtenalOutput:(BOOL)arg2;
- (void)updateProximityWithPort:(id)arg1;
- (void)syncMicButtonWithMicOpen:(BOOL)arg1;
- (void)updateMicButtonText;
- (void)onClickMicButton;
- (void)expandExtendPanel;
- (long long)landscapeMenuMemberType;
- (void)bindLandscapeMenuEntryReportIfNeededForButton:(id)arg1;
- (id)landscapeMenuReportParams;
- (void)reportMenuItemExposure;
- (void)reportMenuItemClickWithViewId:(id)arg1;
- (void)reportFloat2SplitLandscapeSucc;
- (void)onVirtualBackgroundTap;
- (void)onBackgroundSelect;
- (void)layoutWarningView;
- (void)layoutAddMemberButton;
- (void)updateScreenProjectEntryPageVisible:(BOOL)arg1;
- (BOOL)canExposeScreenProjectEntry;
- (BOOL)isScreenProjectVoiceEntryVisible;
- (void)reportScreenProjectEntryExposureIfNeeded;
- (BOOL)shouldShowScreenProjectButton;
- (void)layoutScreenProjectButton;
- (void)layoutTopRightButtons;
- (void)onScreenProjectButtonClick;
- (id)screenProjectPresentingViewController;
- (void)onScreenProjectSelectFile;
- (void)onScreenProjectSelectMedia;
- (void)onAddMemberButtonClick;
- (void)enbaleClickAddMembersBtn:(BOOL)arg1;
- (void)updateRemoteSupportNewScreenProject:(BOOL)arg1;
- (void)onRemoteSupportNewScreenProjectChanged:(BOOL)arg1;
- (void)onRemoteSupportAdaptiveRotateChanged:(BOOL)arg1;
- (void)onChangeVideoMode;
- (void)videoDevice:(id)arg1 updateFilterSetting:(id)arg2 fromABTest:(BOOL)arg3;
- (void)setVoiceStatusOn;
- (void)updateEarModeStatusView:(unsigned long long)arg1;
- (void)videoDeviceCameraFront:(id)arg1;
- (void)videoDeviceCameraBack:(id)arg1;
- (void)videoDevice:(id)arg1 didChangeRotation:(int)arg2;
- (double)p_normalizedRotateDegree:(double)arg1;
- (BOOL)p_mainWindowUseAspectFitWithLocalIsBigWindow:(BOOL)arg1 mainWindowLandscapeMode:(BOOL)arg2 remoteAngle:(double)arg3;
- (void)p_reportRecordingUIStateWithSource:(long long)arg1;
- (void)p_reportRecordingUIStateWithSourceIfNotSplit:(long long)arg1;
- (void)reportRecordingUIStateForLocalDeviceRotation;
- (void)updateRecordingCanvasSizeIfNeeded;
- (void)reportRecordingUIStateForInitial;
- (void)hideButtonsManually:(BOOL)arg1;
- (void)hideButtons;
- (void)showButtonsManually:(BOOL)arg1;
- (void)showButtons;
- (void)onMMScreenShotWillShow;
- (void)onFinishScreenShot;
- (void)p_onRecordingSaveDidBegin:(id)arg1;
- (void)p_onRecordingSaveToastDidDismiss:(id)arg1;
- (void)p_onRecordingSaveDidFail:(id)arg1;
- (void)clearButtonsAnimation;
- (void)autoHideButtons;
- (void)forceAutoHideButtons;
- (void)cancelAutoHideButtons;
- (void)startAutoHideButtonsTimer;
- (void)handleSingleTap:(id)arg1;
- (BOOL)canHideButtons;
- (void)onVoIPExtRemoteCaptureResume;
- (void)onVoIPExtRemoteCaptureSuspend;
- (void)OnMonitorChannelInfo:(unsigned long long)arg1 andConnStrategy:(int)arg2 debugString:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg3;
- (void)OnMonitorWithSendFPS:(int)arg1 andRecvFPS:(int)arg2;
- (void)OnMonitorWithSendRecvInfo:(int)arg1 andSendFPS:(int)arg2 andRecvFPS:(int)arg3 andSendKbps:(int)arg4 andRecvKbps:(int)arg5 andP2SInfo:(id)arg6 andSpeed:(int *)arg7;
- (void)OnMonitorWithSendRecvInfo:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg1 debugString:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg2;
- (void)OnLightInterrupt:(BOOL)arg1;
- (void)onVideoOrientationChangeTo:(long long)arg1;
- (void)showEarModeTipsWhenConnectTo5_1OrLower;
- (void)showRemoteVideoModeWhenConnectTo5_1OrLower;
- (void)showLocalEarModeTipsForBadNetwork;
- (void)showRemoteEarModeTipsForBadNetwork;
- (void)showOneWayLocalEarMode2GTips;
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
- (void)OnTalkingViewEndCall;
- (BOOL)isInitWithVideoMode;
- (void)onVideoSessionStartComplete;
- (void)onVideoSessionStopComplete;
- (void)setCameraBtnEnable;
- (void)onClickMinimizeButton;
- (void)onVoiceViewCloseMic;
- (void)onVoiceViewCloseSpeaker;
- (void)onVoiceViewHangup;
- (void)onVoiceViewHangupWithRoomID:(unsigned long long)arg1;
- (void)onVoiceViewOpenMic;
- (void)onVoiceViewOpenSpeaker;
- (BOOL)onVoiceViewIsVoipTalking;
- (void)ReportVoIPButtonStatus:(id)arg1 dialStatus:(int)arg2 audioData:(id)arg3 actionResult:(id)arg4;
- (BOOL)getIfThisTalkIlink;
- (BOOL)getIsVoiceMode;
- (unsigned int)getRemoteUserIlinkSupportStatus:(id)arg1;
- (void)showVoIPToastWithFineTuneBlock:(id /* block */)arg1;
- (void)showVoIPToastWithText:(id)arg1;
- (void)onAddMemberPageForIlink;
- (void)onVideoToVoiceView:(id)arg1 durationTimerUpdated:(id)arg2;
- (id)screenProjectPresentingViewControllerForVideoToVoiceView:(id)arg1;
- (unsigned long long)getRoomId;
- (BOOL)isAllowVideo;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)UIManagerDidExtendWindow;
- (void)onVoipWarningMsgArrived;
- (BOOL)isVideoToVoiceViewRecentStatusEnable;
- (int)videoToVoiceViewRecentStatusUserSexType;
- (id)videoToVoiceViewRecentStatusUserName;
- (id)videoToVoiceViewRecentStatusModel;
- (BOOL)getVoiceViewSpeakerMode;
- (void)setCameraVirtualBackgroundState:(BOOL)arg1 frontOn:(BOOL)arg2 backOn:(BOOL)arg3 isUsing:(BOOL)arg4;
- (void)refreshViewByVideoStatus;
- (void)VoIPPIPServiceEnterForeground:(BOOL)arg1;
- (void)onCarPlayVoIPTalkTemplateClickHangup;
- (void)onCarPlayVoIPTalkTemplateClickMute;
- (BOOL)isMicrOpen;
- (void)onClickMore;
- (void)onClickClose;
- (BOOL)accessibilityPerformMagicTap;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)updateScreenLock:(BOOL)arg1;
- (void)onScreenLockedTap:(id)arg1;
- (void)layoutLockScreenButton;
- (BOOL)shouldPlaceLockButtonAtLeft;
- (void)positionLockButtonForCurrentScreenProjectState;
- (void)lockScreenButtonTapped:(id)arg1 toLocked:(BOOL)arg2;
- (BOOL)lockScreenButtonCanExitShakeAnimation:(id)arg1;
- (void)lockScreenButtonWillLock:(id)arg1;
- (void)lockScreenButtonWillUnlock:(id)arg1;
- (void)OnLocalLandscapeModeChange:(BOOL)arg1;
- (void)OnRemoteLandscapeModeChange:(BOOL)arg1;
- (void)p_onTapSaveLast5SecondsMenuItem;
- (void)stopEnhanceVoicePollTimer;
- (void)layoutEnhanceVoiceBubble;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)m_flipCameraView;
- (void)setM_flipCameraView:(id)arg1;
- (BOOL)m_isOperating;
- (void)setM_isOperating:(BOOL)arg1;
- (id)m_timerBackgroundView;
- (void)setM_timerBackgroundView:(id)arg1;
- (id)m_footerView;
- (void)setM_footerView:(id)arg1;
- (id)m_videoModeButton;
- (void)setM_videoModeButton:(id)arg1;
- (id)m_hangupBtn;
- (void)setM_hangupBtn:(id)arg1;
- (id)m_videoToVoiceView;
- (void)setM_videoToVoiceView:(id)arg1;
- (BOOL)m_hasEncounterBackgroundCameraStart;
- (void)setM_hasEncounterBackgroundCameraStart:(BOOL)arg1;
- (BOOL)isCaller;
- (void)setIsCaller:(BOOL)arg1;
- (BOOL)frontVirtualBackgroundOn;
- (BOOL)backVirtualBackgroundOn;
- (BOOL)isFrontCamera;
- (BOOL)shouldMaskRemoteCapture;
- (void)setShouldMaskRemoteCapture:(BOOL)arg1;
- (BOOL)isTalking;
- (void)setIsTalking:(BOOL)arg1;
- (BOOL)isSpeakerReady;
- (BOOL)isMiniInAppActived;
- (BOOL)screenProjectEntryPageVisible;
- (void)setScreenProjectEntryPageVisible:(BOOL)arg1;
- (long long)videoStatus;
- (void)setVideoStatus:(long long)arg1;
- (BOOL)isEnding;
- (BOOL)isAudioInterruption;
- (void)setIsAudioInterruption:(BOOL)arg1;
- (BOOL)isAddMemberDisable;
- (void)setIsAddMemberDisable:(BOOL)arg1;
- (id)m_micButton;
- (void)setM_micButton:(id)arg1;
- (BOOL)isMicOpen;
- (void)setIsMicOpen:(BOOL)arg1;
- (id)m_speakerButton;
- (void)setM_speakerButton:(id)arg1;
- (id)extOperateMenu;
- (void)setExtOperateMenu:(id)arg1;
- (BOOL)isScreenShotButtonsHidden;
- (void)setIsScreenShotButtonsHidden:(BOOL)arg1;
- (BOOL)isWaitingForSaveToastDismiss;
- (void)setIsWaitingForSaveToastDismiss:(BOOL)arg1;
- (id)minimizeButton;
- (void)setMinimizeButton:(id)arg1;
- (id)topBackgroundLayer;
- (void)setTopBackgroundLayer:(id)arg1;
- (id)m_warningView;
- (void)setM_warningView:(id)arg1;
- (id)m_warningLabel;
- (void)setM_warningLabel:(id)arg1;
- (id)clickView;
- (void)setClickView:(id)arg1;
- (id)m_virtualBackgroundButton;
- (void)setM_virtualBackgroundButton:(id)arg1;
- (unsigned long long)openFrom;
- (void)setOpenFrom:(unsigned long long)arg1;
- (unsigned int)deviceStatus;
- (void)setDeviceStatus:(unsigned int)arg1;
- (BOOL)isOrientationServiceEnable;
- (void)setIsOrientationServiceEnable:(BOOL)arg1;
- (id)addMemberButton;
- (void)setAddMemberButton:(id)arg1;
- (id)screenProjectButton;
- (void)setScreenProjectButton:(id)arg1;
- (id)screenProjectSourceMenu;
- (void)setScreenProjectSourceMenu:(id)arg1;
- (BOOL)remoteSupportNewScreenProject;
- (void)setRemoteSupportNewScreenProject:(BOOL)arg1;
- (BOOL)canClickAddMembersBtn;
- (void)setCanClickAddMembersBtn:(BOOL)arg1;
- (id)videoHintView;
- (void)setVideoHintView:(id)arg1;
- (BOOL)hasShowVideoHint;
- (void)setHasShowVideoHint:(BOOL)arg1;
- (BOOL)canShowVideoHint;
- (void)setCanShowVideoHint:(BOOL)arg1;
- (BOOL)needShowVideoHint;
- (void)setNeedShowVideoHint:(BOOL)arg1;
- (BOOL)clearedScreen;
- (void)setClearedScreen:(BOOL)arg1;
- (id)v2_screenView;
- (void)setV2_screenView:(id)arg1;
- (BOOL)v2_isUsingVirtualBackground;
- (void)setV2_isUsingVirtualBackground:(BOOL)arg1;
- (BOOL)enableOpenLandscapeModeOnSplit;
- (void)setEnableOpenLandscapeModeOnSplit:(BOOL)arg1;
- (id)lockButton;
- (void)setLockButton:(id)arg1;
- (id)lockScreenTip;
- (void)setLockScreenTip:(id)arg1;
- (id)lockedTapGesture;
- (void)setLockedTapGesture:(id)arg1;
- (BOOL)isLocked;
- (void)setIsLocked:(BOOL)arg1;
- (id)enhanceVoiceCoordinator;
- (void)setEnhanceVoiceCoordinator:(id)arg1;
- (void).cxx_destruct;
@end
