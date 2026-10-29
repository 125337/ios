@interface VoipUIManager : MMUserService <MMKernelExt, VoIPMainWindowDelegate, VoIPViewControllerDelegate, MMTipsViewControllerDelegate, IVOIPModeSwitchExt, WCAudioSessionExt, IAUAudioDeviceExt, VoIPOrientationServiceExtension, VoIPIlinkToUIManager, AVAudioRouteManagerDelegate, VoipmpCoreImplServiceBase, MMServiceProtocol, IVOIPExt, MMConfigMgrExt>
{
    BOOL _isAudioMode; // +0x8
    BOOL _speakerStatusOnTalking; // +0x9
    BOOL _isSoundSettingOff; // +0xa
    BOOL _isVoIPViewControllerExtendAtFirst; // +0xb
    BOOL _isVoIPReceiverCardExtendAtFirst; // +0xc
    BOOL _hasShownChangeToCelluarTip; // +0xd
    BOOL _hasShownLongUseCellularTips; // +0xe
    BOOL _m_hasBeganTalk; // +0xf
    BOOL _isAuthing; // +0x10
    BOOL _isMainCameraMyselfBeforePIP; // +0x11
    BOOL _isLocalCaptureBack; // +0x12
    BOOL _shouldHandleWindowInMgr; // +0x13
    BOOL _isInSpeakerModeBeforeAudioDeviceRestart; // +0x14
    BOOL _hasSetActived; // +0x15
    BOOL _isUIShowedAtApplcationStateActive; // +0x16
    BOOL _enableVoIPCoreAudioLogic; // +0x17
    unsigned int _lastAudioNotifyTimeForNetStatus; // +0x18
    VoIPCallerViewController * m_videoVoipCallerViewController; // +0x20
    VoIPReceiverViewController * m_videoVoipReceiverViewController; // +0x28
    MMVoipToastWindow * m_voipToastWindow; // +0x30
    VoIPMainWindow * m_mainWindow; // +0x38
    MMTipsViewController * m_tipsViewController; // +0x40
    VOIPVideoRender * _mainRender; // +0x48
    VOIPVideoRender * _smallRender; // +0x50
    MMTimer * _netStatusUpdateTimer; // +0x58
    WavAudioPlayer * _wavAudioPlayer; // +0x60
    VoipCheckAudioDeviceObj * _checkAudioDeviceObj; // +0x68
    CContact * _startCallContactFromCallKit; // +0x70
    NSDate * _dateOfIncomingInvitationFromPushKit; // +0x78
    unsigned long long _openFrom; // +0x80
    CContact * _currentRemoteContact; // +0x88
    unsigned long long _audioDeviceStartedSucessAfterBeganTalkCount; // +0x90
    double _startTalkTimestamp; // +0x98
    AVAudioRouteManager * _audioRouteMgr; // +0xa0
    double _suspendTimestamp; // +0xa8
}
+ (BOOL)canStartVoipWithOpenFrom:(unsigned long long)arg1 isVideoMode:(BOOL)arg2;
+ (BOOL)canStartVideoWithContact:(id)arg1;
+ (BOOL)canForceStartVoiceWithContact:(id)arg1;
+ (void)tryGetRemoteUserIlinkStatus:(id)arg1;
+ (BOOL)isVoIPLCKAvailable;
+ (unsigned int)getVoIPType;
+ (unsigned int)getNextInviteAvailable;
- (BOOL)isIlinkTalking;
- (id)window;
- (void)didCloseCompeletly;
- (void)dealloc;
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)clearData;
- (void)prepareForIncomingInvitationFromPushKit;
- (void)initVoipCheckAudioDeviceObj;
- (BOOL)isTheSameContactWithCurrentVoip:(id)arg1;
- (BOOL)isMinCardMode;
- (void)appDidFirstBecomeActive;
- (void)checkAndOpenVoipCallerViewByCallKit;
- (void)closeWithCompletion:(id /* block */)arg1;
- (BOOL)closeByCancellationWithMonoMsg:(id)arg1;
- (void)closeForcibly;
- (void)hideVoipCard;
- (void)displayViopCard;
- (BOOL)showVideoEntranceInMainFrame;
- (BOOL)isViewEnding;
- (BOOL)isVoipWorking;
- (BOOL)isVideoVoipWorking;
- (BOOL)isVoipCalling;
- (BOOL)isVoipTalking;
- (BOOL)isTalking;
- (BOOL)isVoipSpeakerMode:(BOOL)arg1;
- (void)showConflictWording;
- (id)getConflictWording;
- (void)showCannotStartVoipTwice;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2 showAtMinimizeMode:(BOOL)arg3;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2 showAtMinimizeMode:(BOOL)arg3 type:(unsigned long long)arg4;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2 showAtMinimizeMode:(BOOL)arg3 type:(unsigned long long)arg4 isDiff:(BOOL)arg5;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2 withKeyboardHeight:(double)arg3;
- (void)changeVoIPToastWindowOriginY:(double)arg1 height:(double)arg2;
- (void)setToastAlpha:(double)arg1;
- (void)onTapNetStatusTipView;
- (void)clearCurrentString;
- (void)clearAllString;
- (void)switchToSpeakPhoneMode:(BOOL)arg1;
- (void)updateWarningTipsWithRoomid:(unsigned long long)arg1 roomkey:(unsigned long long)arg2 type:(unsigned int)arg3 tips:(id)arg4;
- (void)setReceiverViewMonoMsgForCloseNotification:(id)arg1;
- (BOOL)isValidVoipViewController:(id)arg1;
- (id)getVoIPCallOutUserName;
- (id)currentVoipViewController;
- (id)currentViewController;
- (BOOL)shouldBluetoothStartEarlier;
- (void)checkIfCanAcceptAndStartAudio;
- (id)normalVoipDescriptButtonBackImage;
- (id)selectedVoipDescriptButtonBackImage;
- (id)disabledVoipDescriptButtonBackImage;
- (id)voipAcceptButtonBackImage;
- (id)voipHangupButtonBackImage;
- (id)voipSelectHangupAndAcceptButtonBackImage;
- (int)getRemoteVideoRatio;
- (unsigned int)getRemoteUserIlinkSupportStatus:(id)arg1;
- (void)onVideoVoipViewCloseWithCompletion:(id /* block */)arg1 delay:(float)arg2;
- (void)onVideoVoipViewCloseWithCompletionNoAnimation:(id /* block */)arg1 delay:(float)arg2;
- (void)setupBeforeCollapsingWindow;
- (void)onVideoVoipViewChangeToMinimizeMode;
- (void)onVideoVoipViewSlipToMinimizeMode:(id)arg1;
- (void)onVideoVoipViewMinCardModeChangeToMinimizeMode;
- (BOOL)onVideoVoipViewRequestMinimizeStatus;
- (void)videoVoipViewDidLoadView:(id)arg1;
- (void)videoVoipViewDidSwitchToTalk;
- (void)videoVoipViewDidClose:(id)arg1;
- (void)onVoIPMainWindowExtendAnimationWillStart;
- (void)ReportVoIPButtonStatus:(id)arg1 dialStatus:(int)arg2 audioData:(id)arg3 actionResult:(id)arg4;
- (void)ReportVoIPButtonAction:(int)arg1 dialStatus:(int)arg2 audioData:(id)arg3;
- (void)StopTalk;
- (void)StartNetDetect;
- (unsigned int)getVoIPType;
- (void)setVideoDelegate:(id)arg1;
- (void)SetMicroPhoneMute:(BOOL)arg1;
- (id)getDangerUserTips;
- (BOOL)getIsDangerTalk;
- (unsigned long long)getRoomId;
- (long long)getRoomKey;
- (unsigned int)getRoomType;
- (unsigned long long)getDangerRoomId;
- (unsigned long long)getDangerRoomKey;
- (unsigned int)getInviteId;
- (BOOL)getIsTalked;
- (void)setIsUserAbort:(unsigned int)arg1;
- (void)FlipCamera;
- (void)setVirtualBackground:(BOOL)arg1 isFront:(BOOL)arg2;
- (BOOL)isRemoteUsePhone;
- (BOOL)getIsCameraFront;
- (BOOL)getIsMinimizeView;
- (void)setIsMinimizeView:(BOOL)arg1;
- (void)voipAppBecomeActive;
- (void)voipAppGotoBackground;
- (void)setVideoDeviceDelegate:(id)arg1;
- (void)reportVoipIncomingCallLogWithActionCode:(unsigned int)arg1;
- (void)StopSession;
- (void)BeCanceled;
- (id)getRemoteUserName;
- (void)StartLocalVideo;
- (void)startVideoDeviceSession;
- (id)videoDevice;
- (void)resetCameraDevice;
- (void)changeRenderFrame:(CGRect)arg1;
- (void)VideoStatusChange:(BOOL)arg1 update:(BOOL)arg2 notify:(BOOL)arg3;
- (void)setOutputVideoRender:(id)arg1;
- (void)setInputVideoRender:(id)arg1;
- (void)setSmallInputVideoRender:(id)arg1;
- (void)setSmallOutputVideoRender:(id)arg1;
- (id)getOutputVideoRenderView;
- (id)getInputVideoRenderLock;
- (id)getOutputVideoRenderLock;
- (void)changeInputRenderFrame:(CGRect)arg1;
- (id)getInputVideoRenderView;
- (BOOL)isCameraFront;
- (BOOL)isLocalCaptureSuspended;
- (unsigned long long)remoteCaptureStatus;
- (void)reinitCameraForVoIPLCK;
- (void)extendInviteToFullScreen;
- (void)AudioCall:(id)arg1 withCallType:(unsigned int)arg2;
- (void)VideoCall:(id)arg1 withCallType:(unsigned int)arg2;
- (void)CancelCall:(int)arg1;
- (void)AcceptAudio:(id)arg1 withRoomId:(unsigned long long)arg2 andKey:(long long)arg3;
- (void)AcceptVideo:(id)arg1 withRoomId:(unsigned long long)arg2 andKey:(long long)arg3 forceToVoice:(BOOL)arg4;
- (void)Reject:(id)arg1 withRoomId:(unsigned long long)arg2 andKey:(long long)arg3;
- (void)HangupWithReason:(int)arg1;
- (void)HangupWithReason:(int)arg1 ifIsConnect:(BOOL)arg2;
- (long long)getVideoOrientation;
- (unsigned int)getRemoteWxVer;
- (id)getRemoteSourceDevice;
- (int)getUseSharpenFilterConfig;
- (int)getUse1080pSharpen;
- (void)tryAddMembersForIlink:(id)arg1;
- (void)onIlinkChangeToMultiTalk;
- (unsigned long long)getMemberCountLimitForSelectContacts;
- (id)getLowVersionMembers;
- (void)onDetermineIfNeedReset;
- (void)onVideoSessionStartCompleteAtFirst;
- (void)onVideoSessionRecvFrameAtFirst;
- (BOOL)getIfEnableRCI;
- (void)setLocalViewRenderer:(id)arg1;
- (id)getLocalViewRenderer;
- (void)setRemoteViewRenderer:(id)arg1;
- (BOOL)getRemoteVideoClosed;
- (BOOL)getLocalVideoClosed;
- (int)getModeActionStatus;
- (BOOL)getIsVoiceMode;
- (void)VideoSwitchToVoiceModeNotPushStatus;
- (BOOL)checkHasChangedToCelluar;
- (unsigned int)getChangeToCelluarCount;
- (void)SetSpeakerPhone:(BOOL)arg1;
- (void)setIsDangerTalk:(BOOL)arg1;
- (void)setWarningString:(id)arg1;
- (void)setDangerRoomId:(unsigned long long)arg1;
- (void)setDangerRoomKey:(unsigned long long)arg1;
- (void)setRemoteUserName:(id)arg1;
- (void)resetVoipRender;
- (BOOL)getIfThisTalkIlink;
- (BOOL)isHavingIlinkCall;
- (unsigned long long)getStartTalkingTime;
- (void)showUIAtApplcationStateActive:(BOOL)arg1;
- (void)onMultiTalkMainWindowExtendAnimationDidEnd;
- (void)onVoIPMainWindowExtendAnimationDidEnd;
- (void)onVoIPMainWindowQuitAnimationWillStart;
- (void)onVoIPMainWindowQuitAnimationDidEnd;
- (void)onVoIPMainWindowCollapseAnimationDidEnd;
- (void)onVoIPMainWindowCollapseAnimationWillStart;
- (void)onVoIPMainWindowExtendFromCollapseAnimationWillStart;
- (void)onVoIPMainWindowExtendFromCollapseAnimationDidEnd;
- (CGRect)onVoIPMainWindowRequestMinimizeFrame;
- (long long)onVoIPMainWindowRequestPreviousOrientation;
- (id)onVoIPMainWindowGetMinimizeImage;
- (id)onVoIPMainWindowGetCustomSnapshot;
- (void)OnCall:(id)arg1 ErrNo:(int)arg2;
- (void)VoIPExt_onCallFailedWithRiskControlReasonType:(unsigned long long)arg1;
- (void)VoIPExt_onCallFailedWithRiskControlReasonType:(unsigned long long)arg1 verificationUrlBase64:(id)arg2;
- (void)OnAccept:(id)arg1 ErrNo:(int)arg2;
- (void)OnNoAnswer:(id)arg1;
- (void)OnHangup:(id)arg1;
- (void)OnCacnel:(id)arg1 withType:(int)arg2;
- (void)OnTimeOut:(id)arg1;
- (void)OnError:(id)arg1 ErrNo:(int)arg2;
- (void)OnSyncError:(id)arg1 ErrNo:(int)arg2;
- (void)OnTalkBrokenError:(id)arg1 ErrNo:(int)arg2;
- (void)OnCallInterrupt:(id)arg1;
- (void)OnAutoHangUp:(id)arg1;
- (void)onOtherDeviceHandleTalk:(id)arg1 WithStatus:(unsigned int)arg2;
- (void)OnTellMeViewIsExist:(BOOL *)arg1;
- (void)OnTellMeIsAuthing:(BOOL *)arg1;
- (void)OnBeginTalk:(id)arg1;
- (void)onVideoOrientationChangeTo:(long long)arg1;
- (void)OnMicStartFailed;
- (void)OnMicRMSCheckBad;
- (void)onVoIPExtLocalCaptureToggleWithIsBack:(BOOL)arg1;
- (void)willVoIPExtRestartAudioDevice;
- (void)onAudioStartComplete;
- (void)onMMDynamicConfigUpdated;
- (void)onPreQuit;
- (void)acceptCallUseCallkit;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3 withTipsVC:(id)arg4;
- (void)audioDevicePlugin;
- (void)audioDeviceUnPlugin;
- (void)OnVideoModeChangeToVoiceMode;
- (void)extendWindowToFullScreen;
- (void)extendWindowToFullScreenImmediately;
- (void)checkAndUpdateNetStatus;
- (void)showBadNetwork:(int)arg1;
- (BOOL)canPlayOtherAudio;
- (void)setRoomInfoToCurrentVoipViewWith:(unsigned long long)arg1 And:(long long)arg2;
- (unsigned long long)getRoomIDForCurrentVoipView;
- (long long)getRoomKeyForCurrentVoipView;
- (id)messageWrapForCurrentVoipView;
- (BOOL)checkIfDuplicateContact:(id)arg1;
- (BOOL)openWindowWithContact:(id)arg1 msgWrap:(id)arg2 monoMsg:(id)arg3 isCaller:(BOOL)arg4 from:(unsigned long long)arg5 startInApp:(BOOL)arg6 isEarMode:(BOOL)arg7 isAudioMode:(BOOL)arg8 completion:(id /* block */)arg9;
- (id)getVoIPWindow;
- (void)openAudioWindowWithContact:(id)arg1 msgWrap:(id)arg2 monoMsg:(id)arg3 isCaller:(BOOL)arg4 from:(unsigned long long)arg5 startInApp:(BOOL)arg6 completion:(id /* block */)arg7;
- (void)openAudioWindowWithContact:(id)arg1 msgWrap:(id)arg2 monoMsg:(id)arg3 isCaller:(BOOL)arg4 from:(unsigned long long)arg5 startInApp:(BOOL)arg6;
- (void)openAudioWindowWithContact:(id)arg1 msgWrap:(id)arg2 monoMsg:(id)arg3 isCaller:(BOOL)arg4 from:(unsigned long long)arg5;
- (void)openAudioWindowWithContact:(id)arg1 msgWrap:(id)arg2 isCaller:(BOOL)arg3 from:(unsigned long long)arg4;
- (void)openVideoWindowWithContact:(id)arg1 msgWrap:(id)arg2 monoMsg:(id)arg3 isCaller:(BOOL)arg4 from:(unsigned long long)arg5 startInApp:(BOOL)arg6 completion:(id /* block */)arg7;
- (void)openVideoWindowWithContact:(id)arg1 msgWrap:(id)arg2 monoMsg:(id)arg3 isCaller:(BOOL)arg4 from:(unsigned long long)arg5 startInApp:(BOOL)arg6;
- (void)openVideoWindowWithContact:(id)arg1 msgWrap:(id)arg2 monoMsg:(id)arg3 isCaller:(BOOL)arg4 from:(unsigned long long)arg5;
- (void)openVideoWindowWithContact:(id)arg1 msgWrap:(id)arg2 isCaller:(BOOL)arg3 from:(unsigned long long)arg4;
- (void)openVoipCallerViewByCallKitWithContact:(id)arg1;
- (void)acceptInvitaionInfo:(id)arg1 needCloseCamera:(BOOL)arg2;
- (id)view;
- (void)updateAfterRestoringUserInterfacePictureInPictureStop;
- (void)updateAfterStartingPictureInPicture;
- (void)updateAfterStoppingPictureInPicture;
- (void)updateAfterEnteringForegroundFromPictureInPicture:(BOOL)arg1;
- (void)setupPictureInPictureEnable:(BOOL)arg1;
- (void)setupPictureInPictureDisplayed:(BOOL)arg1;
- (id)viewForPictureInPicture;
- (void)setAudioSessionStatus:(BOOL)arg1;
- (BOOL)getIfCameraInterrupt;
- (id)settingPortType;
- (BOOL)hasExtenalOutput;
- (id)curOutputPort;
- (BOOL)showAirplayOrJustChange;
- (void)changeAudioToPort:(id)arg1 hasChanged:(BOOL)arg2;
- (void)__changeAudioToPort:(id)arg1 hasChanged:(BOOL)arg2;
- (id)getSpeakerBtnText:(id)arg1;
- (id)getSpeakerBtnNewText:(id)arg1;
- (id)getSpeakerBtnNewStatus:(id)arg1;
- (id)VoIPMPGetSpeakerBtnText:(int)arg1;
- (id)VoIPMPGetSpeakerBtnNewText:(int)arg1;
- (id)VoIPMPGetSpeakerBtnNewStatus:(int)arg1;
- (void)updatePortWithReasonValue:(unsigned long long)arg1 prevPort:(id)arg2;
- (void)updateSpeakerButtonStatus:(id)arg1 hasExtenalOutput:(BOOL)arg2;
- (void)notifyAudioDeviceChange;
- (void)audioDeviceStartedSuccess:(id)arg1;
- (void)voIPOrientationServiceDidChangeDeviceOrientation;
- (void)voIPOrientationServiceDidChangeDeviceAngleDegree;
- (void)voIPOrientationServiceDidChangeMotionOrientation;
- (void)voIPInvitationServiceWillScrollIn;
- (void)voIPInvitationServiceDidScrollIn;
- (void)voIPInvitationServiceWillScrollOut;
- (void)voIPInvitationServiceDidScrollOut;
- (void)voIPInvitationServiceWillClear;
- (void)voIPInvitationServiceDidClear;
- (void)onSetRoomID:(unsigned long long)arg1;
- (void)ilinkReceiverOpenWindowWithContact:(id)arg1 msgWrap:(id)arg2 monoMsg:(id)arg3 from:(unsigned long long)arg4 isAudioMode:(BOOL)arg5 completion:(id /* block */)arg6;
- (void)onCancelCreateMultiTalk;
- (void)ilinkInviteFailedToVoIPMgr:(id)arg1 withCallType:(unsigned int)arg2 isAudio:(BOOL)arg3 status:(id)arg4;
- (void)fakeEndVoIPByChangingToMultiTalk;
- (BOOL)isCarPlayConnected;
- (void)applicationWillSuspend;
- (void)applicationWillEnterForeground;
- (void)audioUIRouteToAsync:(unsigned long long)arg1 device:(id)arg2;
- (id)getAvailableDevices;
- (id)getCurrentDevice;
- (void)deviceRouteToAsync:(unsigned long long)arg1 device:(id)arg2;
- (void)updateAudioScene:(int)arg1;
- (BOOL)startPlay:(BOOL)arg1 sampleRate:(int)arg2 channels:(int)arg3 frameDuration:(int)arg4;
- (BOOL)startRecord:(int)arg1 channels:(int)arg2 frameDuration:(int)arg3;
- (BOOL)stopPlay;
- (BOOL)stopRecord;
- (BOOL)muteMicrophone;
- (BOOL)unMuteMicroPhone;
- (BOOL)isRecording;
- (id)m_videoVoipCallerViewController;
- (void)setM_videoVoipCallerViewController:(id)arg1;
- (id)m_videoVoipReceiverViewController;
- (void)setM_videoVoipReceiverViewController:(id)arg1;
- (id)m_voipToastWindow;
- (void)setM_voipToastWindow:(id)arg1;
- (id)m_mainWindow;
- (void)setM_mainWindow:(id)arg1;
- (id)m_tipsViewController;
- (void)setM_tipsViewController:(id)arg1;
- (BOOL)isAudioMode;
- (void)setIsAudioMode:(BOOL)arg1;
- (id)mainRender;
- (id)smallRender;
- (BOOL)speakerStatusOnTalking;
- (void)setSpeakerStatusOnTalking:(BOOL)arg1;
- (BOOL)isSoundSettingOff;
- (void)setIsSoundSettingOff:(BOOL)arg1;
- (BOOL)isVoIPViewControllerExtendAtFirst;
- (void)setIsVoIPViewControllerExtendAtFirst:(BOOL)arg1;
- (BOOL)isVoIPReceiverCardExtendAtFirst;
- (void)setIsVoIPReceiverCardExtendAtFirst:(BOOL)arg1;
- (id)netStatusUpdateTimer;
- (void)setNetStatusUpdateTimer:(id)arg1;
- (id)wavAudioPlayer;
- (void)setWavAudioPlayer:(id)arg1;
- (unsigned int)lastAudioNotifyTimeForNetStatus;
- (void)setLastAudioNotifyTimeForNetStatus:(unsigned int)arg1;
- (BOOL)hasShownChangeToCelluarTip;
- (void)setHasShownChangeToCelluarTip:(BOOL)arg1;
- (BOOL)hasShownLongUseCellularTips;
- (void)setHasShownLongUseCellularTips:(BOOL)arg1;
- (BOOL)m_hasBeganTalk;
- (void)setM_hasBeganTalk:(BOOL)arg1;
- (id)checkAudioDeviceObj;
- (void)setCheckAudioDeviceObj:(id)arg1;
- (id)startCallContactFromCallKit;
- (void)setStartCallContactFromCallKit:(id)arg1;
- (id)dateOfIncomingInvitationFromPushKit;
- (void)setDateOfIncomingInvitationFromPushKit:(id)arg1;
- (BOOL)isAuthing;
- (void)setIsAuthing:(BOOL)arg1;
- (BOOL)isMainCameraMyselfBeforePIP;
- (void)setIsMainCameraMyselfBeforePIP:(BOOL)arg1;
- (unsigned long long)openFrom;
- (void)setOpenFrom:(unsigned long long)arg1;
- (id)currentRemoteContact;
- (void)setCurrentRemoteContact:(id)arg1;
- (BOOL)isLocalCaptureBack;
- (void)setIsLocalCaptureBack:(BOOL)arg1;
- (unsigned long long)audioDeviceStartedSucessAfterBeganTalkCount;
- (void)setAudioDeviceStartedSucessAfterBeganTalkCount:(unsigned long long)arg1;
- (BOOL)shouldHandleWindowInMgr;
- (void)setShouldHandleWindowInMgr:(BOOL)arg1;
- (BOOL)isInSpeakerModeBeforeAudioDeviceRestart;
- (void)setIsInSpeakerModeBeforeAudioDeviceRestart:(BOOL)arg1;
- (double)startTalkTimestamp;
- (void)setStartTalkTimestamp:(double)arg1;
- (BOOL)hasSetActived;
- (void)setHasSetActived:(BOOL)arg1;
- (id)audioRouteMgr;
- (void)setAudioRouteMgr:(id)arg1;
- (double)suspendTimestamp;
- (void)setSuspendTimestamp:(double)arg1;
- (BOOL)isUIShowedAtApplcationStateActive;
- (void)setIsUIShowedAtApplcationStateActive:(BOOL)arg1;
- (BOOL)enableVoIPCoreAudioLogic;
- (void)setEnableVoIPCoreAudioLogic:(BOOL)arg1;
- (void).cxx_destruct;
@end

