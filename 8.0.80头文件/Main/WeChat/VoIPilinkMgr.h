@interface VoIPilinkMgr : MMUserService <MMKernelExt, VoipUIManagerExt, ilinkApiDelegate, MonoServiceMsgDelegate, VoIPConfSDKServiceExtension, IVoipCXMgrExt, MMServiceProtocol>
{
    BOOL mIsMinimizeView; // +0x8
    BOOL mIsLocalVideoClosed; // +0x9
    BOOL mIsRemoteVideoClosed; // +0xa
    BOOL mIsInterrupted; // +0xb
    BOOL _isThisTalkIlink; // +0xc
    BOOL _isAudio; // +0xd
    BOOL _isCaller; // +0xe
    BOOL _isConnected; // +0xf
    BOOL _isLockScreen; // +0x10
    BOOL _joinToRoom; // +0x11
    BOOL _isSpeakerOn; // +0x12
    BOOL _remoteSupportLandscapeMode; // +0x13
    BOOL _remoteSupportNewScreenProject; // +0x14
    BOOL _isRemoteLandscapeMode; // +0x15
    BOOL _acceptNewCall; // +0x16
    BOOL _isLocalCaptureSuspended; // +0x17
    BOOL _remoteSupportAdaptiveRotate; // +0x18
    BOOL _shouldCheckLocalCaptureIsActive; // +0x19
    BOOL _isIlinkFailed; // +0x1a
    BOOL _isActived; // +0x1b
    BOOL _changeToMultiTalk; // +0x1c
    BOOL _startWithExternalDevice; // +0x1d
    BOOL _isCallKit; // +0x1e
    BOOL _isLocalRendered; // +0x1f
    BOOL _isRemoteRendered; // +0x20
    BOOL _isInAudioInterruption; // +0x21
    BOOL _isCameraSetOn; // +0x22
    BOOL _isMicMute; // +0x23
    BOOL _isLocalCaptureCheckingActiveContinually; // +0x24
    BOOL _isInBackground; // +0x25
    BOOL _mIsInterruptByPhoneCall; // +0x26
    BOOL _mIsPausedByInterrupt; // +0x27
    BOOL _isAlreadyHangup; // +0x28
    BOOL _mEnableDirectRendering; // +0x29
    BOOL _localSupportVideoAspectAdaptation; // +0x2a
    BOOL _remoteSupportVideoAspectAdaptation; // +0x2b
    BOOL _isRenderFirstFrameRemote; // +0x2c
    BOOL _isRenderFirstFrameLocal; // +0x2d
    BOOL _isInviteInitEngineFail; // +0x2e
    BOOL _isInviteDeviceWaiting; // +0x2f
    BOOL _startedAudioDeviceEarlier; // +0x30
    BOOL _startedSecondPart; // +0x31
    BOOL _hangupByCall; // +0x32
    BOOL _isJoinedRoom; // +0x33
    int _remoteVideoFrameRatio; // +0x34
    unsigned int _mInviteId; // +0x38
    unsigned int _remoteWxVer; // +0x3c
    int _remoteRatio; // +0x40
    unsigned int _changeToCelluarCount; // +0x44
    int _netSpeed; // +0x48
    unsigned int _mRaisrCapacity; // +0x4c
    unsigned int _mRaisrStrength; // +0x50
    int _mRaisrIPhoneVersion; // +0x54
    int _mRaisrIPadVersion; // +0x58
    unsigned int _nextEnableTimeForCreateRoom; // +0x5c
    int _notificationPushType; // +0x60
    unsigned int _callType; // +0x64
    unsigned int _receiveMsgTime; // +0x68
    int _mCntTryStartAudioDev; // +0x6c
    id <IVOIPVideoDeviceDelegate> m_videoDeviceDelegate; // +0x70
    id <IlinkMultiTalkDelegate> _multiTalkDelegate; // +0x78
    unsigned long long _modeActionStatus; // +0x80
    unsigned long long _mRoomId; // +0x88
    NSString * _callID; // +0x90
    NSString * _mRemoteUserName; // +0x98
    long long _m_videoOrientation; // +0xa0
    NSString * _remoteSourceDevice; // +0xa8
    unsigned long long _mStartTalkingTime; // +0xb0
    unsigned long long _mStartAcceptTime; // +0xb8
    unsigned long long _remoteCaptureStatus; // +0xc0
    CContact * _remoteContact; // +0xc8
    XImageViewRenderer * _localViewRenderer; // +0xd0
    XImageViewRenderer * _remoteViewRenderer; // +0xd8
    XImageContext * _remoteImageContext; // +0xe0
    VoIPNotificationContentInfo * _notificationContentInfo; // +0xe8
    NSString * _clientGroupId; // +0xf0
    double _lastLocalCaptureSuspendedTimestamp; // +0xf8
    NSMutableArray * _observsers; // +0x100
    unsigned long long _lastLocalCaptureFrameIndex; // +0x108
    unsigned long long _exceptionType; // +0x110
    NSMutableDictionary * _lowVersionMembers; // +0x118
    CMessageWrap * _changeToMultiTalkMsg; // +0x120
    unsigned long long _cancelRoomId; // +0x128
    unsigned long long _localCaptureUnactiveCount; // +0x130
    unsigned long long _localFrameDiscardCount; // +0x138
    NSMutableSet * _localViewRendererSet; // +0x140
    VoIPRenderData * _lastRenderData; // +0x148
    VoIPRenderData * _lastRemoteRenderData; // +0x150
    CGSize _lastLocalImageSize; // +0x158
}
+ (BOOL)isHavingIlinkCall;
+ (BOOL)shouldSupportAddMembers;
+ (BOOL)startVoipViewByVoipMonoMsg:(id)arg1;
- (void)resetLocalViewRenderers;
- (void)resetRemoteViewRenderers;
- (id)localViewRendererArray;
- (void)registerLocalViewRenderer:(id)arg1;
- (void)unregisterLocalViewRenderer:(id)arg1;
- (void)renderLastFrameToLocalRenderer:(id)arg1;
- (void)renderLastFrameToRemoteRenderer:(id)arg1;
- (void)setupInviteId;
- (void)handleSubCallWithInviteInfo:(id)arg1 inviteMsg:(id)arg2 wragMsg:(id)arg3;
- (void)acceptSubCallWithInviteInfo:(id)arg1 inviteMsg:(id)arg2 wragMsg:(id)arg3;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)setIsThisTalkIlink:(BOOL)arg1;
- (void)setChangeToMultiTalk:(BOOL)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)videoDevice;
- (void)appendObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)commonSetup;
- (void)reset;
- (void)setIsAlreadyHangup:(BOOL)arg1;
- (BOOL)getIfThisTalkIlink;
- (BOOL)getIfThisTalkIlinkButNotMultiTalk;
- (void)changeFloatingWindowStatus:(int)arg1;
- (void)receiveCancelFromSDK:(unsigned long long)arg1 usrName:(id)arg2;
- (void)makeMonoMsg:(unsigned long long)arg1 usrName:(id)arg2 msgType:(unsigned int)arg3;
- (void)tryAddMembersForIlink:(id)arg1 inviteId:(unsigned long long)arg2;
- (void)onDidSelectNormalContact:(id)arg1;
- (void)onIlinkChangeToMultiTalk:(id)arg1;
- (void)onMultiTalkVCHangupWithGroup:(id)arg1 isClickHangup:(BOOL)arg2 isMeExitLatest:(BOOL)arg3;
- (id)getLowVersionMembers;
- (id)getCallerName;
- (unsigned long long)getCurrentRoomMembersCount;
- (void)voIPAudioServiceDidStartAudioUnitButFailed;
- (void)voIPAudioServiceInterruptionBegin;
- (void)voIPAudioServiceInterruptionEnd;
- (void)voIPAudioServiceQuitCompulsivelyFromInterruption;
- (void)BeginInterruption;
- (void)EndInterruption;
- (void)interruptVoipByNonPhoneCall;
- (void)restartAudioDevice;
- (void)OnSysCallState:(int)arg1 andCallId:(id)arg2;
- (void)interruptVoipByCall:(BOOL)arg1;
- (BOOL)ilinkOpenWindowWithContact:(id)arg1 msgWrap:(id)arg2 isCaller:(BOOL)arg3 from:(unsigned long long)arg4 startInApp:(BOOL)arg5 isEarMode:(BOOL)arg6 isAudioMode:(BOOL)arg7;
- (void)RealCall:(id)arg1 isAudioMode:(BOOL)arg2 withCallType:(unsigned int)arg3;
- (void)receiveVoIPMTMessageForIlink:(id)arg1 username:(id)arg2 receiveMsgTime:(unsigned int)arg3 notifyFrom:(int)arg4;
- (void)receiveVoIPMTMessageForIlink:(id)arg1 username:(id)arg2 MsgWrap:(id)arg3 notifyFrom:(int)arg4;
- (void)HandleVoIPNotifyForIlink:(id)arg1 username:(id)arg2 MsgWrap:(id)arg3;
- (BOOL)handleNotificationContentInfo:(id)arg1 pushType:(int)arg2;
- (void)receiveVoIPMTCancelInviteForIlink:(id)arg1 username:(id)arg2 groupId:(id)arg3 receiveMsgTime:(unsigned int)arg4 roomID:(unsigned long long)arg5 notifyFrom:(int)arg6;
- (void)hangupWithVoIPCancelType:(int)arg1;
- (void)hangupWithVoIPShutdownReason:(int)arg1 ifIsConnect:(BOOL)arg2;
- (void)hangup;
- (void)hangupWithRoomID:(unsigned long long)arg1;
- (void)rejectWithRoomID:(unsigned long long)arg1;
- (void)accept:(unsigned long long)arg1;
- (void)joinRoomWithRoomID:(unsigned long long)arg1 contact:(id)arg2;
- (void)sendWxVersion:(int)arg1;
- (void)sendRemoteSourceDevice:(int)arg1;
- (void)sendRemoteClientInfo:(int)arg1;
- (BOOL)isVideoAspectAdaptationEnabled;
- (void)updateRemoteVideoAspectAdaptationFrameRatio:(int)arg1;
- (void)sendIfCanSupportAddMembers:(BOOL)arg1 sendToMemberId:(int)arg2;
- (BOOL)checkHasChangedToCelluar;
- (void)resetRaisrPara;
- (void)InitAll;
- (void)UnInitAll;
- (void)StopSession;
- (void)StopTalk;
- (void)StartSession;
- (void)handleEnterBackground;
- (void)handleEnterForeground;
- (BOOL)mIsMinimizeView;
- (void)setVideoDeviceDelegate:(id)arg1;
- (void)onVideoSessionStartComplete;
- (void)onVideoSessionRecvFirstFrame;
- (void)onVideoSessionStopComplete;
- (void)OngetVideoFrameWithOrientation:(long long)arg1;
- (void)OnGetRemoteLandscapeMode:(BOOL)arg1;
- (void)resetVoipRender;
- (void)HeadSetPlugin:(BOOL)arg1;
- (void)StartSessionWithWorkModeSecondPart;
- (void)startAudioDeviceWithPrewarmOnly:(BOOL)arg1;
- (void)notifyAudioDeviceChange:(BOOL)arg1 isWirelessDevice:(BOOL)arg2 isWiredDevice:(BOOL)arg3;
- (BOOL)getIfCurrentSpeaker;
- (id)getAudioRouteMgr;
- (void)SetLocalVideoEnable:(BOOL)arg1;
- (void)onLocalCaptureResume;
- (void)onLocalCatpureSuspend;
- (void)VideoStatusChange:(BOOL)arg1 update:(BOOL)arg2 notify:(BOOL)arg3;
- (void)setVirtualBackground:(BOOL)arg1 isFront:(BOOL)arg2;
- (BOOL)isCameraFront;
- (void)FlipCamera;
- (void)StartLocalVideo;
- (BOOL)isLocalVideoClosed;
- (BOOL)isRemoteVideoClosed;
- (double)localPreviewBaseRotationDegrees;
- (void)renderToLocalView:(id)arg1;
- (void)renderYuvToLocalView:(__CVBuffer *)arg1;
- (void)renderToRemoteView:(__CVBuffer *)arg1;
- (void)renderLocalImage:(void *)arg1 frameIndex:(unsigned long long)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4 rgbaTexture:(id)arg5;
- (void)UIManagerDidClose;
- (void)UIManagerDidCloseCompletely;
- (void)updateSpeakerButtonStatus:(id)arg1 hasExtenalOutput:(BOOL)arg2;
- (void)onAuthOK;
- (void)onInviteMultiTalk:(id)arg1;
- (void)onEnterMultiTalk:(id)arg1;
- (void)onInviteOrAcceptTimeout:(id)arg1;
- (void)onMemberChange:(id)arg1;
- (void)onAcceptSubCallMultiTalk:(id)arg1;
- (void)onMultiTalkReady;
- (void)onMultiTalkDeviceLauchSuccess;
- (void)onMuteStateChange:(BOOL)arg1;
- (void)OnVideoStateChange:(BOOL)arg1 VideoOn:(BOOL)arg2;
- (void)onAddMultiTalkMemberFailedDueToCallerRisk;
- (void)onAddMultiTalkMemberFailedDueToRiskWithUserNames:(id)arg1 groupInfo:(id)arg2 isAll:(BOOL)arg3;
- (void)onErr:(int)arg1 groupUserName:(id)arg2;
- (void)onVideoData:(unsigned int)arg1 Bgra:(char *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4 frontCamera:(BOOL)arg5 screenData:(BOOL)arg6 format:(int)arg7;
- (void)onSpeakerStateChange:(BOOL)arg1;
- (void)onAddMultiTalkMemberResult:(BOOL)arg1 errorType:(int)arg2 groupInfo:(id)arg3;
- (void)onReceiveVideoMemberChangeMsg:(id)arg1 extArray:(id)arg2;
- (void)onOtherDeviceHandleTalk:(id)arg1;
- (void)onRejectToCreateRoomForServerOverloadWithTimeInterval:(int)arg1;
- (int)getVideoErrorCode;
- (void)onSetRoomID:(unsigned long long)arg1;
- (void)onCall;
- (void)receiverOpenUIForRoomInfo:(id)arg1 username:(id)arg2 receiveMsgTime:(unsigned int)arg3;
- (void)onRecvInviteBusy;
- (void)onRecvNotifyFail;
- (void)onRecvSimuCall;
- (void)onChangeOfjoinedMemberCnt:(int)arg1 joiningMemberCnt:(int)arg2;
- (void)onCallEndWithoutCheck:(unsigned long long)arg1;
- (void)resetByNoVCCreate;
- (void)hangupByInterruptWithRoom:(unsigned long long)arg1;
- (void)onCallEnd:(id)arg1;
- (BOOL)getIfIsConnected;
- (void)remoteVideoStatusChange:(BOOL)arg1 isScreenActive:(BOOL)arg2;
- (void)setRemoteContact:(id)arg1;
- (void)ilinkInviteFailedToVoIPMgrWithUserName:(id)arg1;
- (void)OnBeAccepted;
- (void)OnBeRejected;
- (void)OnCancel;
- (void)onSendCmdMsg;
- (void)onSendCmdMsgTo:(int)arg1;
- (void)onRecvCmdMsg:(id)arg1;
- (void)simuCallFromCallerToReceiver:(id)arg1;
- (void)onSimuCallerCloseVideo;
- (void)supplementLocalBubbleWithConfCallWordingInfo:(id)arg1;
- (void)onReceiveConfCallWordingInfo:(id)arg1;
- (void)confSDKOnRecvCmdMsg:(id)arg1;
- (void)hangupMultiTalkByCallEnd:(id)arg1;
- (void)setNetworkStatus:(int)arg1;
- (void)setGPUReslution:(int)arg1;
- (BOOL)get720pCaptureStatus;
- (BOOL)getEnableDirectRendering;
- (void)changeToHighCapture:(int)arg1;
- (void)onRecvAckFail:(unsigned long long)arg1 username:(id)arg2;
- (void)onStartRecvInvite:(id)arg1 muteNotification:(BOOL)arg2;
- (void)onStartRecvInvite:(id)arg1 inviteMsg:(id)arg2;
- (id)currentRemoteSourceDevice;
- (id)getClientGroupId;
- (void)showAddMembersNotSupportToast:(id)arg1;
- (void)readyJoinRoomForIlink:(unsigned int)arg1 roomID:(unsigned long long)arg2;
- (void)getIlinkAddMembersResult:(id)arg1;
- (void)onInviteFailedBecauseOfRiskControlWithErrorCode:(int)arg1 groupUserName:(id)arg2 verificationUrlBase64:(id)arg3;
- (unsigned long long)getRoomID;
- (void)receiveInviteNotFriendWithErrCode:(int)arg1;
- (void)inviteInitEngineFail;
- (BOOL)hasStartedAudioDeviceEarlier;
- (void)startAudioDeviceSucc;
- (BOOL)getIfCallKitStatus;
- (int)getTryStartAudioDevCnt;
- (BOOL)getIfCaller;
- (BOOL)getIfCallkitWithRoom:(unsigned long long)arg1;
- (void)setMicroPhoneMute:(BOOL)arg1;
- (void)setSpeakerPhone:(BOOL)arg1;
- (void)notifyReceiverCanStart:(BOOL)arg1;
- (void)receiverCanStartCamera;
- (void)ilinkVoIPMainWindowQuitAnimationDidEnd;
- (void)onMonoServiceMsgStartWithMsg:(id)arg1;
- (BOOL)onMonoServiceMsgHandleWithMsg:(id)arg1;
- (BOOL)onMonoServiceMsgRejectWithMsg:(id)arg1;
- (BOOL)onMonoServiceMsgCancelWithMsg:(id)arg1;
- (BOOL)onMonoServiceMsgHoldWithMsg:(id)arg1;
- (BOOL)isMonoServiceUIWorking;
- (void)checkLocalCaptureActive;
- (void)onReceiveVoIPPushInfo:(id)arg1;
- (void)voIPConfSDKServiceOnReceiveEvent:(int)arg1 errCode:(int)arg2 data:(id)arg3 ret:(id)arg4 roomId:(unsigned long long)arg5;
- (void)audioDeviceStartedFail:(id)arg1;
- (void)audioDeviceDidReceiveCallbackFirstEachStartup;
- (void)audioDeviceDidReceivePlaybackCallbackFirstEachStartup:(id)arg1;
- (void)audioDeviceDidReceiveRecordingCallbackFirstEachStartup:(id)arg1;
- (void)OnVoipCXHungUp:(unsigned long long)arg1;
- (void)OnVoipCXSetMuted2:(BOOL)arg1;
- (void)setMIsMinimizeView:(BOOL)arg1;
- (id)m_videoDeviceDelegate;
- (void)setM_videoDeviceDelegate:(id)arg1;
- (BOOL)mIsLocalVideoClosed;
- (void)setMIsLocalVideoClosed:(BOOL)arg1;
- (BOOL)mIsRemoteVideoClosed;
- (void)setMIsRemoteVideoClosed:(BOOL)arg1;
- (BOOL)mIsInterrupted;
- (void)setMIsInterrupted:(BOOL)arg1;
- (BOOL)isThisTalkIlink;
- (BOOL)isAudio;
- (void)setIsAudio:(BOOL)arg1;
- (BOOL)isCaller;
- (void)setIsCaller:(BOOL)arg1;
- (BOOL)isConnected;
- (void)setIsConnected:(BOOL)arg1;
- (BOOL)isLockScreen;
- (void)setIsLockScreen:(BOOL)arg1;
- (BOOL)joinToRoom;
- (void)setJoinToRoom:(BOOL)arg1;
- (BOOL)isSpeakerOn;
- (void)setIsSpeakerOn:(BOOL)arg1;
- (BOOL)remoteSupportLandscapeMode;
- (void)setRemoteSupportLandscapeMode:(BOOL)arg1;
- (BOOL)remoteSupportNewScreenProject;
- (void)setRemoteSupportNewScreenProject:(BOOL)arg1;
- (BOOL)isRemoteLandscapeMode;
- (void)setIsRemoteLandscapeMode:(BOOL)arg1;
- (int)remoteVideoFrameRatio;
- (void)setRemoteVideoFrameRatio:(int)arg1;
- (id)multiTalkDelegate;
- (void)setMultiTalkDelegate:(id)arg1;
- (unsigned long long)modeActionStatus;
- (void)setModeActionStatus:(unsigned long long)arg1;
- (BOOL)acceptNewCall;
- (void)setAcceptNewCall:(BOOL)arg1;
- (unsigned long long)mRoomId;
- (void)setMRoomId:(unsigned long long)arg1;
- (id)callID;
- (void)setCallID:(id)arg1;
- (id)mRemoteUserName;
- (void)setMRemoteUserName:(id)arg1;
- (unsigned int)mInviteId;
- (void)setMInviteId:(unsigned int)arg1;
- (BOOL)isLocalCaptureSuspended;
- (void)setIsLocalCaptureSuspended:(BOOL)arg1;
- (long long)m_videoOrientation;
- (void)setM_videoOrientation:(long long)arg1;
- (unsigned int)remoteWxVer;
- (void)setRemoteWxVer:(unsigned int)arg1;
- (id)remoteSourceDevice;
- (void)setRemoteSourceDevice:(id)arg1;
- (BOOL)remoteSupportAdaptiveRotate;
- (void)setRemoteSupportAdaptiveRotate:(BOOL)arg1;
- (unsigned long long)mStartTalkingTime;
- (void)setMStartTalkingTime:(unsigned long long)arg1;
- (unsigned long long)mStartAcceptTime;
- (void)setMStartAcceptTime:(unsigned long long)arg1;
- (int)remoteRatio;
- (void)setRemoteRatio:(int)arg1;
- (unsigned long long)remoteCaptureStatus;
- (void)setRemoteCaptureStatus:(unsigned long long)arg1;
- (unsigned int)changeToCelluarCount;
- (void)setChangeToCelluarCount:(unsigned int)arg1;
- (int)netSpeed;
- (void)setNetSpeed:(int)arg1;
- (id)remoteContact;
- (unsigned int)mRaisrCapacity;
- (void)setMRaisrCapacity:(unsigned int)arg1;
- (unsigned int)mRaisrStrength;
- (void)setMRaisrStrength:(unsigned int)arg1;
- (int)mRaisrIPhoneVersion;
- (void)setMRaisrIPhoneVersion:(int)arg1;
- (int)mRaisrIPadVersion;
- (void)setMRaisrIPadVersion:(int)arg1;
- (BOOL)shouldCheckLocalCaptureIsActive;
- (void)setShouldCheckLocalCaptureIsActive:(BOOL)arg1;
- (BOOL)isIlinkFailed;
- (void)setIsIlinkFailed:(BOOL)arg1;
- (BOOL)isActived;
- (void)setIsActived:(BOOL)arg1;
- (BOOL)changeToMultiTalk;
- (unsigned int)nextEnableTimeForCreateRoom;
- (void)setNextEnableTimeForCreateRoom:(unsigned int)arg1;
- (id)localViewRenderer;
- (void)setLocalViewRenderer:(id)arg1;
- (id)remoteViewRenderer;
- (void)setRemoteViewRenderer:(id)arg1;
- (id)remoteImageContext;
- (void)setRemoteImageContext:(id)arg1;
- (BOOL)startWithExternalDevice;
- (void)setStartWithExternalDevice:(BOOL)arg1;
- (id)notificationContentInfo;
- (void)setNotificationContentInfo:(id)arg1;
- (int)notificationPushType;
- (void)setNotificationPushType:(int)arg1;
- (BOOL)isCallKit;
- (void)setIsCallKit:(BOOL)arg1;
- (BOOL)isLocalRendered;
- (void)setIsLocalRendered:(BOOL)arg1;
- (BOOL)isRemoteRendered;
- (void)setIsRemoteRendered:(BOOL)arg1;
- (BOOL)isInAudioInterruption;
- (void)setIsInAudioInterruption:(BOOL)arg1;
- (id)clientGroupId;
- (void)setClientGroupId:(id)arg1;
- (BOOL)isCameraSetOn;
- (void)setIsCameraSetOn:(BOOL)arg1;
- (double)lastLocalCaptureSuspendedTimestamp;
- (void)setLastLocalCaptureSuspendedTimestamp:(double)arg1;
- (unsigned int)callType;
- (void)setCallType:(unsigned int)arg1;
- (BOOL)isMicMute;
- (void)setIsMicMute:(BOOL)arg1;
- (id)observsers;
- (void)setObservsers:(id)arg1;
- (unsigned long long)lastLocalCaptureFrameIndex;
- (void)setLastLocalCaptureFrameIndex:(unsigned long long)arg1;
- (BOOL)isLocalCaptureCheckingActiveContinually;
- (void)setIsLocalCaptureCheckingActiveContinually:(BOOL)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (BOOL)mIsInterruptByPhoneCall;
- (void)setMIsInterruptByPhoneCall:(BOOL)arg1;
- (BOOL)mIsPausedByInterrupt;
- (void)setMIsPausedByInterrupt:(BOOL)arg1;
- (unsigned long long)exceptionType;
- (void)setExceptionType:(unsigned long long)arg1;
- (BOOL)isAlreadyHangup;
- (unsigned int)receiveMsgTime;
- (void)setReceiveMsgTime:(unsigned int)arg1;
- (BOOL)mEnableDirectRendering;
- (void)setMEnableDirectRendering:(BOOL)arg1;
- (BOOL)localSupportVideoAspectAdaptation;
- (void)setLocalSupportVideoAspectAdaptation:(BOOL)arg1;
- (BOOL)remoteSupportVideoAspectAdaptation;
- (void)setRemoteSupportVideoAspectAdaptation:(BOOL)arg1;
- (id)lowVersionMembers;
- (void)setLowVersionMembers:(id)arg1;
- (id)changeToMultiTalkMsg;
- (void)setChangeToMultiTalkMsg:(id)arg1;
- (unsigned long long)cancelRoomId;
- (void)setCancelRoomId:(unsigned long long)arg1;
- (int)mCntTryStartAudioDev;
- (void)setMCntTryStartAudioDev:(int)arg1;
- (BOOL)isRenderFirstFrameRemote;
- (void)setIsRenderFirstFrameRemote:(BOOL)arg1;
- (BOOL)isRenderFirstFrameLocal;
- (void)setIsRenderFirstFrameLocal:(BOOL)arg1;
- (BOOL)isInviteInitEngineFail;
- (void)setIsInviteInitEngineFail:(BOOL)arg1;
- (BOOL)isInviteDeviceWaiting;
- (void)setIsInviteDeviceWaiting:(BOOL)arg1;
- (BOOL)startedAudioDeviceEarlier;
- (void)setStartedAudioDeviceEarlier:(BOOL)arg1;
- (BOOL)startedSecondPart;
- (void)setStartedSecondPart:(BOOL)arg1;
- (BOOL)hangupByCall;
- (void)setHangupByCall:(BOOL)arg1;
- (BOOL)isJoinedRoom;
- (void)setIsJoinedRoom:(BOOL)arg1;
- (unsigned long long)localCaptureUnactiveCount;
- (void)setLocalCaptureUnactiveCount:(unsigned long long)arg1;
- (CGSize)lastLocalImageSize;
- (void)setLastLocalImageSize:(CGSize)arg1;
- (unsigned long long)localFrameDiscardCount;
- (void)setLocalFrameDiscardCount:(unsigned long long)arg1;
- (id)localViewRendererSet;
- (void)setLocalViewRendererSet:(id)arg1;
- (id)lastRenderData;
- (void)setLastRenderData:(id)arg1;
- (id)lastRemoteRenderData;
- (void)setLastRemoteRenderData:(id)arg1;
- (void).cxx_destruct;
@end
