@interface VoIPTalkingView : MMUIView <MMTipsViewControllerDelegate, WCActionSheetDelegate, WCAudioSessionExt, IVOIPVideoDeviceDelegate, VideoHintTopViewDelegate, SmallCameraViewDelegate, AVVideoDeviceDelegate, IVOIPModeSwitchExt, IVOIPExt, VOIPVideoToVoiceViewDelegate, VoipUIManagerExt, _TtP6WeChat23CarPlayVoIPTalkDelegate_>
{
    CContact * _contact; // +0x8
    unsigned int _status; // +0x10
    UIView * _backgroundView; // +0x18
    MMTimerLabel * _timer; // +0x20
    UIView * _bigCameraView; // +0x28
    UIView * _peerRenderView; // +0x30
    UILabel * _voiceTipsLabel; // +0x38
    UIView * decLayerView; // +0x40
    BOOL _isMyselfInMainView; // +0x48
    BOOL _isEndCall; // +0x49
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
    BOOL m_isOperating; // +0xc0
    BOOL m_hasEncounterBackgroundCameraStart; // +0xc1
    BOOL _isCaller; // +0xc2
    BOOL _frontVirtualBackgroundOn; // +0xc3
    BOOL _backVirtualBackgroundOn; // +0xc4
    BOOL _isFrontCamera; // +0xc5
    BOOL _shouldMaskRemoteCapture; // +0xc6
    BOOL _isSmallCameraViewAlphaAnimating; // +0xc7
    BOOL _isTalking; // +0xc8
    BOOL _isSpeakerReady; // +0xc9
    BOOL _isMiniInAppActived; // +0xca
    BOOL _isMicOpen; // +0xcb
    BOOL _isSpeakModeOpen; // +0xcc
    BOOL _isInitSpeakModeClose; // +0xcd
    BOOL _isUsingVirtualBackground; // +0xce
    BOOL _isRecentStatusUnFolded; // +0xcf
    BOOL _isRecentStatusCardViewShowLogged; // +0xd0
    BOOL _isLocalHasOverlayView; // +0xd1
    BOOL _isRemoteHasOverlayView; // +0xd2
    BOOL _isOrientationServiceEnable; // +0xd3
    BOOL _canClickAddMembersBtn; // +0xd4
    BOOL _hasShowVideoHint; // +0xd5
    BOOL _canShowVideoHint; // +0xd6
    BOOL _needShowVideoHint; // +0xd7
    BOOL _isCameraViewAnimation; // +0xd8
    BOOL _clearedScreen; // +0xd9
    unsigned int _deviceStatus; // +0xdc
    id <NSObject><VoIPTalkingViewDelegate> _delegate; // +0xe0
    VoipDescriptionButton * m_flipCameraView; // +0xe8
    SmallCameraView * m_smallCameraView; // +0xf0
    UIView * m_blurView; // +0xf8
    VoipDescriptionButton * m_videoModeButton; // +0x100
    VoipDescriptionButton * m_hangupBtn; // +0x108
    UIView * m_cameraClipView; // +0x110
    UIView * m_smallRenderView; // +0x118
    UIView * m_smallRenderBackClipView; // +0x120
    MMUIButton * m_minimizeButton; // +0x128
    AVSampleBufferDisplayLayer * m_videoHWDecLayer; // +0x130
    double _smallCameraViewAlpha; // +0x138
    long long _videoStatus; // +0x140
    VoipDescriptionButton * _m_micButton; // +0x148
    VoipDescriptionButton * _m_speakerButton; // +0x150
    CAGradientLayer * _topBackgroundLayer; // +0x158
    VOIPVideoRender * _m_bigLocalRender; // +0x160
    XImageViewRenderer * _rciRemoteSmallRender; // +0x168
    XImageViewRenderer * _rciRemoteBigRender; // +0x170
    XImageViewRenderer * _rciLocalSmallRender; // +0x178
    XImageViewRenderer * _rciLocalBigRender; // +0x180
    VoIPHeadImageBlurView * _smallBlurView; // +0x188
    VoIPHeadImageBlurView * _bigBlurView; // +0x190
    UIView * _m_warningView; // +0x198
    UILabel * _m_warningLabel; // +0x1a0
    double _cacheRemoteWH; // +0x1a8
    UIView * _clickView; // +0x1b0
    VoipDescriptionButton * _m_virtualBackgroundButton; // +0x1b8
    VoipRecentStatusUnFoldButton * _recentStatusUnFoldButton; // +0x1c0
    UIView * _recentStatusUnFoldHotView; // +0x1c8
    UIView * _recentStatusContentsView; // +0x1d0
    VoipRecentStatusCardView * _recentStatusCardView; // +0x1d8
    UIView * _mainCameraMaskView; // +0x1e0
    UILabel * _mainCameraSuspendTipsLabel; // +0x1e8
    UIView * _subCameraMaskView; // +0x1f0
    UILabel * _subCameraSuspendTipsLabel; // +0x1f8
    unsigned long long _openFrom; // +0x200
    MMUIButton * _m_addMemberButton; // +0x208
    VideoHintTopView * _videoHintView; // +0x210
    double _videoHintMargin; // +0x218
    VoIPMPUIScreenView * _screenView; // +0x220
    CGRect _storeSmallCameraViewFrame; // +0x228
}
+ (double)smallCameraAlphaAnmationTime;
- (void)layoutMPUIScreenView;
- (void)setIsMiniInAppActived:(BOOL)arg1;
- (void)setIsSpeakerReady:(BOOL)arg1;
- (id)mainRender;
- (id)smallRender;
- (id)myCameraView;
- (void)setupSmallCameraViewAlpha:(double)arg1 isAnimated:(BOOL)arg2 delay:(double)arg3;
- (void)clearRenderView;
- (void)startTalkWithAllowVideo:(BOOL)arg1;
- (void)updateInitMode:(BOOL)arg1 initMicOpen:(BOOL)arg2 videoOpen:(BOOL)arg3 deviceStatus:(unsigned int)arg4;
- (void)reportTalkingAllButtonStatus:(int)arg1;
- (void)teardownSampleBufferDisplayLayer:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 andContact:(id)arg2 AllowVideo:(BOOL)arg3 AndIsMinimizeMode:(BOOL)arg4 delegate:(id)arg5 openFrom:(unsigned long long)arg6;
- (BOOL)isMainCameraLocal;
- (void)applicationGotoBackground;
- (void)applicationBecomeActive;
- (void)dealloc;
- (void)updateTipsStatusLabel;
- (void)updateTipsView;
- (void)checkSmallCameraHide;
- (void)updateVoipImageRenderer:(BOOL)arg1;
- (void)switchRenderViewHidden;
- (void)__updateVoipImageRenderer:(BOOL)arg1 isNotBack:(BOOL)arg2 needAnimation:(BOOL)arg3;
- (void)updateInputOutputRender:(BOOL)arg1;
- (void)updateLocalRender;
- (void)updateRemoteRender;
- (void)checkAndUpdateProximity;
- (void)reportViewStatus;
- (void)layoutSubviews;
- (void)layoutMainCameraMaskView;
- (void)layoutSubCameraMaskView;
- (void)layoutMainCameraSuspendTipsLabel;
- (void)layoutSubCameraSuspendTipsLabel;
- (void)layoutRecentStatus;
- (void)layoutRecentStatusUnFoldButton;
- (void)layoutRecentStatusUnFoldHotView;
- (void)onClickRecentStatusUnFoldHotViewWithSender:(id)arg1;
- (void)layoutRecentStatusContentsView;
- (void)onClickRecentStatusContentsViewWithSender:(id)arg1;
- (void)layoutRecentStatusCardView;
- (void)layoutVideoToVoiceView;
- (void)layoutBackgroundView;
- (id)getVideoSnapshotViewWhenTalking;
- (void)layoutTopBackgroundLayer;
- (void)layoutNewMinimizeButton;
- (void)layoutMinimizeButton;
- (void)layoutFlipCameraButton;
- (void)layoutVideoHintTopView;
- (void)onSmallSwitchButtonClick;
- (void)changeToMinimizeView;
- (BOOL)isOrientationLandscape;
- (CGSize)viewSize;
- (BOOL)isSmallCameraViewSuspend;
- (void)completeSecondAnimationForCameraSwitch;
- (void)layoutSmallCameraView;
- (void)updateCameraRotate:(double)arg1;
- (void)updateSmallCameraViews:(CGRect)arg1;
- (void)layoutSmallCameraViewComplete:(CGRect)arg1 isStoreSmallCameraViewFrameLoaded:(BOOL)arg2;
- (void)layoutClickView;
- (BOOL)isBigCameraViewSuspend;
- (void)layoutBigCarmeraView;
- (void)layoutNewTimerView;
- (void)layoutTimerView;
- (void)layoutHeadImageBlurView;
- (void)layoutFooterView;
- (void)layoutMPUIPanel;
- (void)updateVideoModeButtonText;
- (void)showAirplayLoadingState:(BOOL)arg1;
- (void)showAirplayLoading;
- (void)updateSpeakerButton;
- (void)updateSpeakerButtonByPort:(id)arg1 hasChanged:(BOOL)arg2;
- (void)updateSpeakerButtonStatus:(id)arg1 hasExtenalOutput:(BOOL)arg2 force:(BOOL)arg3;
- (void)updateSpeakerButtonStatus:(id)arg1 hasExtenalOutput:(BOOL)arg2;
- (void)updateProximityBySpeakerButtonState;
- (void)updateProximityWithPort:(id)arg1;
- (void)VoIPUpdateProximityWithPort:(int)arg1;
- (void)VoIPMPUpdateSpeakerButtonStatus:(int)arg1 name:(id)arg2 hasOutput:(BOOL)arg3;
- (void)updateMicButtonText;
- (void)onClickMicButton;
- (void)onVirtualBackgroundTap;
- (void)onBackgroundSelect;
- (void)layoutWarningView;
- (void)layoutAddMemberButton;
- (void)onAddMemberButtonClick;
- (void)enbaleClickAddMembersBtn;
- (void)onConfirmSwitchToVoice;
- (void)onChangeVideoMode;
- (void)videoDevice:(id)arg1 updateFilterSetting:(id)arg2 fromABTest:(BOOL)arg3;
- (void)setVoiceStatusOn;
- (void)updateEarModeStatusView:(int)arg1;
- (void)videoDeviceCameraFront:(id)arg1;
- (void)videoDeviceCameraBack:(id)arg1;
- (void)videoDevice:(id)arg1 didChangeRotation:(int)arg2;
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
- (void)OnMonitorChannelInfo:(unsigned long long)arg1 andConnStrategy:(int)arg2 debugString:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg3;
- (void)OnMonitorWithSendFPS:(int)arg1 andRecvFPS:(int)arg2;
- (void)OnMonitorWithSendRecvInfo:(int)arg1 andSendFPS:(int)arg2 andRecvFPS:(int)arg3 andSendKbps:(int)arg4 andRecvKbps:(int)arg5 andP2SInfo:(id)arg6 andSpeed:(int *)arg7;
- (void)OnMonitorWithSendRecvInfo:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg1 debugString:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg2;
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
- (void)OnVideoModeChangeToVoiceMode;
- (void)updateEarModeTalkingGesture;
- (void)switchToMyselfSmallViewIfNeeded;
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
- (void)onVideoSessionStartComplete;
- (void)onVideoSessionStopComplete;
- (void)setCameraBtnEnable;
- (void)onClickMinimizeButton;
- (void)onVoiceViewCloseMic;
- (void)onVoiceViewCloseSpeaker;
- (void)onVoiceViewHangup;
- (void)onVoiceViewOpenMic;
- (void)onVoiceViewOpenSpeaker;
- (BOOL)onVoiceViewIsVoipTalking;
- (void)ReportVoIPButtonStatus:(id)arg1 dialStatus:(int)arg2 audioData:(id)arg3 actionResult:(id)arg4;
- (BOOL)getIfThisTalkIlink;
- (BOOL)getIsVoiceMode;
- (unsigned int)getRemoteUserIlinkSupportStatus:(id)arg1;
- (void)addScrollingStringOutsideVoIP:(id)arg1 withDisplayTime:(double)arg2;
- (void)onAddMemberPageForIlink;
- (void)onVideoToVoiceView:(id)arg1 durationTimerUpdated:(id)arg2;
- (BOOL)isAllowVideo;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)UIManagerDidExtendWindow;
- (void)onVoipWarningMsgArrived;
- (BOOL)isVideoToVoiceViewRecentStatusEnable;
- (int)videoToVoiceViewRecentStatusUserSexType;
- (id)videoToVoiceViewRecentStatusUserName;
- (id)videoToVoiceViewRecentStatusModel;
- (void)foldupRecentStatus;
- (BOOL)getVoiceViewSpeakerMode;
- (void)setCameraVirtualBackgroundState:(BOOL)arg1 frontOn:(BOOL)arg2 backOn:(BOOL)arg3;
- (void)refreshViewByVideoStatus;
- (void)VoIPPIPServiceEnterForeground:(BOOL)arg1;
- (void)onVoIPExtEnterForeground;
- (void)onCarPlayVoIPTalkTemplateClickHangup;
- (void)onCarPlayVoIPTalkTemplateClickMute;
- (BOOL)isMicrOpen;
- (void)onClickMore;
- (void)onClickClose;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)m_flipCameraView;
- (void)setM_flipCameraView:(id)arg1;
- (BOOL)m_isOperating;
- (void)setM_isOperating:(BOOL)arg1;
- (id)m_smallCameraView;
- (void)setM_smallCameraView:(id)arg1;
- (id)m_timerBackgroundView;
- (void)setM_timerBackgroundView:(id)arg1;
- (id)m_footerView;
- (void)setM_footerView:(id)arg1;
- (id)m_blurView;
- (void)setM_blurView:(id)arg1;
- (id)m_videoModeButton;
- (void)setM_videoModeButton:(id)arg1;
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
- (id)m_videoHWDecLayer;
- (void)setM_videoHWDecLayer:(id)arg1;
- (BOOL)isCaller;
- (void)setIsCaller:(BOOL)arg1;
- (BOOL)frontVirtualBackgroundOn;
- (void)setFrontVirtualBackgroundOn:(BOOL)arg1;
- (BOOL)backVirtualBackgroundOn;
- (void)setBackVirtualBackgroundOn:(BOOL)arg1;
- (BOOL)isFrontCamera;
- (void)setIsFrontCamera:(BOOL)arg1;
- (BOOL)shouldMaskRemoteCapture;
- (void)setShouldMaskRemoteCapture:(BOOL)arg1;
- (double)smallCameraViewAlpha;
- (void)setSmallCameraViewAlpha:(double)arg1;
- (BOOL)isSmallCameraViewAlphaAnimating;
- (void)setIsSmallCameraViewAlphaAnimating:(BOOL)arg1;
- (BOOL)isTalking;
- (void)setIsTalking:(BOOL)arg1;
- (BOOL)isSpeakerReady;
- (BOOL)isMiniInAppActived;
- (long long)videoStatus;
- (void)setVideoStatus:(long long)arg1;
- (id)m_micButton;
- (void)setM_micButton:(id)arg1;
- (BOOL)isMicOpen;
- (void)setIsMicOpen:(BOOL)arg1;
- (id)m_speakerButton;
- (void)setM_speakerButton:(id)arg1;
- (BOOL)isSpeakModeOpen;
- (void)setIsSpeakModeOpen:(BOOL)arg1;
- (BOOL)isInitSpeakModeClose;
- (void)setIsInitSpeakModeClose:(BOOL)arg1;
- (id)topBackgroundLayer;
- (void)setTopBackgroundLayer:(id)arg1;
- (id)m_bigLocalRender;
- (void)setM_bigLocalRender:(id)arg1;
- (id)rciRemoteSmallRender;
- (void)setRciRemoteSmallRender:(id)arg1;
- (id)rciRemoteBigRender;
- (void)setRciRemoteBigRender:(id)arg1;
- (id)rciLocalSmallRender;
- (void)setRciLocalSmallRender:(id)arg1;
- (id)rciLocalBigRender;
- (void)setRciLocalBigRender:(id)arg1;
- (id)smallBlurView;
- (void)setSmallBlurView:(id)arg1;
- (id)bigBlurView;
- (void)setBigBlurView:(id)arg1;
- (id)m_warningView;
- (void)setM_warningView:(id)arg1;
- (id)m_warningLabel;
- (void)setM_warningLabel:(id)arg1;
- (double)cacheRemoteWH;
- (void)setCacheRemoteWH:(double)arg1;
- (id)clickView;
- (void)setClickView:(id)arg1;
- (id)m_virtualBackgroundButton;
- (void)setM_virtualBackgroundButton:(id)arg1;
- (BOOL)isUsingVirtualBackground;
- (void)setIsUsingVirtualBackground:(BOOL)arg1;
- (BOOL)isRecentStatusUnFolded;
- (void)setIsRecentStatusUnFolded:(BOOL)arg1;
- (BOOL)isRecentStatusCardViewShowLogged;
- (void)setIsRecentStatusCardViewShowLogged:(BOOL)arg1;
- (id)recentStatusUnFoldButton;
- (void)setRecentStatusUnFoldButton:(id)arg1;
- (id)recentStatusUnFoldHotView;
- (void)setRecentStatusUnFoldHotView:(id)arg1;
- (id)recentStatusContentsView;
- (void)setRecentStatusContentsView:(id)arg1;
- (id)recentStatusCardView;
- (void)setRecentStatusCardView:(id)arg1;
- (id)mainCameraMaskView;
- (void)setMainCameraMaskView:(id)arg1;
- (id)mainCameraSuspendTipsLabel;
- (void)setMainCameraSuspendTipsLabel:(id)arg1;
- (id)subCameraMaskView;
- (void)setSubCameraMaskView:(id)arg1;
- (id)subCameraSuspendTipsLabel;
- (void)setSubCameraSuspendTipsLabel:(id)arg1;
- (CGRect)storeSmallCameraViewFrame;
- (void)setStoreSmallCameraViewFrame:(CGRect)arg1;
- (unsigned long long)openFrom;
- (void)setOpenFrom:(unsigned long long)arg1;
- (BOOL)isLocalHasOverlayView;
- (void)setIsLocalHasOverlayView:(BOOL)arg1;
- (BOOL)isRemoteHasOverlayView;
- (void)setIsRemoteHasOverlayView:(BOOL)arg1;
- (unsigned int)deviceStatus;
- (void)setDeviceStatus:(unsigned int)arg1;
- (BOOL)isOrientationServiceEnable;
- (void)setIsOrientationServiceEnable:(BOOL)arg1;
- (id)m_addMemberButton;
- (void)setM_addMemberButton:(id)arg1;
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
- (double)videoHintMargin;
- (void)setVideoHintMargin:(double)arg1;
- (BOOL)isCameraViewAnimation;
- (void)setIsCameraViewAnimation:(BOOL)arg1;
- (id)screenView;
- (void)setScreenView:(id)arg1;
- (BOOL)clearedScreen;
- (void)setClearedScreen:(BOOL)arg1;
- (void).cxx_destruct;
@end

