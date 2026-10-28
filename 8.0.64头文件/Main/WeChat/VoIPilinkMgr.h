@interface VoIPilinkMgr : MMUserService <MMKernelExt, VoipUIManagerExt, MultitalkApiDelegate, ilinkApiDelegate, MonoServiceMsgDelegate, VoIPConfSDKServiceExtension, IVoipCXMgrExt, MMServiceProtocol>
{
    char * mCameraBuf; // +0x8
    char * mHWYUVbuffer; // +0x10
    BOOL mIsMinimizeView; // +0x18
    BOOL mIsLocalVideoClosed; // +0x19
    BOOL mIsRemoteVideoClosed; // +0x1a
    BOOL mIsInterrupted; // +0x1b
    BOOL _supportIlinkCloudService; // +0x1c
    BOOL _isThisTalkIlink; // +0x1d
    BOOL _isAudio; // +0x1e
    BOOL _isCaller; // +0x1f
    BOOL _isConnected; // +0x20
    BOOL _joinToRoom; // +0x21
    BOOL _isSpeakerOn; // +0x22
    BOOL _isLocalCaptureSuspended; // +0x23
    BOOL _shouldCheckLocalCaptureIsActive; // +0x24
    BOOL _isIlinkFailed; // +0x25
    BOOL _isActived; // +0x26
    BOOL _changeToMultiTalk; // +0x27
    BOOL _startWithExternalDevice; // +0x28
    BOOL _isCallKit; // +0x29
    BOOL _isLocalRendered; // +0x2a
    BOOL _isRemoteRendered; // +0x2b
    BOOL _isInAudioInterruption; // +0x2c
    BOOL _isCameraSetOn; // +0x2d
    BOOL _isMicMute; // +0x2e
    BOOL _isLocalCaptureCheckingActiveContinually; // +0x2f
    BOOL _isInBackground; // +0x30
    BOOL _mIsInterruptByPhoneCall; // +0x31
    BOOL _mIsPausedByInterrupt; // +0x32
    BOOL _isAlreadyHangup; // +0x33
    BOOL _mEnableDirectRendering; // +0x34
    BOOL _isRenderFirstFrameRemote; // +0x35
    BOOL _isRenderFirstFrameLocal; // +0x36
    BOOL _isInviteInitEngineFail; // +0x37
    BOOL _isInviteDeviceWaiting; // +0x38
    BOOL _enableVoIPMPAudioUnit; // +0x39
    BOOL _acceptNewCall; // +0x3a
    BOOL _startedSecondPart; // +0x3b
    BOOL _hangupByCall; // +0x3c
    int _modeActionStatus; // +0x40
    unsigned int _mInviteId; // +0x44
    unsigned int _remoteWxVer; // +0x48
    int _remoteRatio; // +0x4c
    unsigned int _changeToCelluarCount; // +0x50
    int _netSpeed; // +0x54
    int _notificationPushType; // +0x58
    unsigned int _callType; // +0x5c
    unsigned int _receiveMsgTime; // +0x60
    int _mCntTryStartAudioDev; // +0x64
    VOIPVideoRender * inputVideoRender; // +0x68
    VOIPVideoRender * outputVideoRender; // +0x70
    VOIPVideoRender * smallInputVideoRender; // +0x78
    VOIPVideoRender * smallOutputVideoRender; // +0x80
    NSRecursiveLock * outputVideoRenderLock; // +0x88
    NSRecursiveLock * inputVideoRenderLock; // +0x90
    id <IVOIPVideoDeviceDelegate> m_videoDeviceDelegate; // +0x98
    id <IlinkMultiTalkDelegate> _multiTalkDelegate; // +0xa0
    unsigned long long _mRoomId; // +0xa8
    NSString * _callID; // +0xb0
    NSString * _mRemoteUserName; // +0xb8
    NSRecursiveLock * _smallOutputVideoRenderLock; // +0xc0
    long long _m_videoOrientation; // +0xc8
    NSString * _remoteSourceDevice; // +0xd0
    unsigned long long _mStartTalkingTime; // +0xd8
    unsigned long long _mStartAcceptTime; // +0xe0
    unsigned long long _remoteCaptureStatus; // +0xe8
    CContact * _remoteContact; // +0xf0
    XImageViewRenderer * _localViewRenderer; // +0xf8
    XImageViewRenderer * _remoteViewRenderer; // +0x100
    XImageContext * _remoteImageContext; // +0x108
    VoIPNotificationContentInfo * _notificationContentInfo; // +0x110
    NSString * _clientGroupId; // +0x118
    double _lastLocalCaptureSuspendedTimestamp; // +0x120
    NSMutableArray * _observsers; // +0x128
    unsigned long long _lastLocalCaptureFrameIndex; // +0x130
    unsigned long long _exceptionType; // +0x138
    NSMutableDictionary * _lowVersionMembers; // +0x140
    CMessageWrap * _changeToMultiTalkMsg; // +0x148
    unsigned long long _cancelRoomId; // +0x150
    unsigned long long _localCaptureUnactiveCount; // +0x158
}
+ (BOOL)isHavingIlinkCall;
+ (BOOL)shouldSupportIlinkCloudService;
+ (BOOL)shouldSupportAddMembers;
+ (BOOL)startVoipViewByVoipMonoMsg:(id)arg1;
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
- (void)tryAddMembersForIlink:(id)arg1;
- (void)onDidSelectNormalContact:(id)arg1;
- (void)onIlinkChangeToMultiTalk:(id)arg1;
- (void)onMultiTalkVCHangupWithGroup:(id)arg1 isClickHangup:(BOOL)arg2 isInviterQuitEarly:(BOOL)arg3;
- (id)getLowVersionMembers;
- (id)getCallerName;
- (void)startRecord:(int)arg1 channels:(int)arg2 frameDuration:(int)arg3;
- (void)startPlay:(int)arg1 channels:(int)arg2 frameDuration:(int)arg3;
- (void)VoIPMPReleaseDevice;
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
- (int)ilinkOpenWindowWithContact:(id)arg1 msgWrap:(id)arg2 isCaller:(BOOL)arg3 from:(unsigned long long)arg4 startInApp:(BOOL)arg5 isEarMode:(BOOL)arg6 isAudioMode:(BOOL)arg7;
- (void)RealCall:(id)arg1 isAudioMode:(BOOL)arg2 withCallType:(unsigned int)arg3;
- (BOOL)isOutOfDate:(unsigned int)arg1;
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
- (void)sendWxVersion;
- (void)sendRemoteSourceDevice;
- (void)sendIfCanSupportAddMembers:(BOOL)arg1;
- (BOOL)checkHasChangedToCelluar;
- (void)InitAll;
- (void)UnInitAll;
- (void)StopSession;
- (void)StopTalk;
- (void)StartSession;
- (void)handleEnterBackground;
- (void)handleEnterForeground;
- (void)setOutputVideoRender:(id)arg1;
- (void)setInputVideoRender:(id)arg1;
- (id)inputVideoRender;
- (id)smallInputVideoRender;
- (void)setSmallInputVideoRender:(id)arg1;
- (void)setSmallOutputVideoRender:(id)arg1;
- (id)smallOutputVideoRender;
- (BOOL)mIsMinimizeView;
- (void)setVideoDeviceDelegate:(id)arg1;
- (void)onVideoSessionStartComplete;
- (void)onVideoSessionRecvFirstFrame;
- (void)onVideoSessionStopComplete;
- (void)OngetVideoFrameWithOrientation:(long long)arg1;
- (void)resetVoipRender;
- (void)HeadSetPlugin:(BOOL)arg1;
- (void)StartSessionWithWorkModeSecondPart;
- (void)startAudioDevice:(id /* block */)arg1;
- (void)notifyAudioDeviceChange:(BOOL)arg1 isWirelessDevice:(BOOL)arg2 isWiredDevice:(BOOL)arg3;
- (BOOL)getIfCurrentSpeaker;
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
- (void)renderToLocalView:(id)arg1;
- (void)renderYuvToLocalView:(__CVBuffer *)arg1;
- (void)renderToRemoteView:(__CVBuffer *)arg1;
- (void)renderLocalImage:(void *)arg1 frameIndex:(unsigned long long)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4 rgbaTexture:(id)arg5;
- (void)VideoDevPutDataFromMultiTalkToVoIP:(int)arg1 frmData:(char *)arg2 frmIndex:(unsigned long long)arg3 imageWidth:(unsigned int)arg4 imageHeight:(unsigned int)arg5;
- (void)UIManagerDidClose;
- (void)UIManagerDidCloseCompletely;
- (void)updateSpeakerButtonStatus:(id)arg1 hasExtenalOutput:(BOOL)arg2;
- (void)onAuthOK;
- (void)onInviteMultiTalk:(id)arg1;
- (void)onCreateMultiTalk:(id)arg1;
- (void)onCancelCreateMultiTalk:(id)arg1;
- (void)onEnterMultiTalk:(id)arg1;
- (void)onInviteOrAcceptTimeout:(id)arg1;
- (void)onReceiveMissMultiTalk:(id)arg1;
- (void)onMemberChange:(id)arg1;
- (void)onAcceptSubCallMultiTalk:(id)arg1;
- (void)onMemberChange:(id)arg1 withNewJoinedMembers:(id)arg2;
- (void)onMultiTalkReady;
- (void)onMultiTalkDeviceLauchSuccess;
- (void)onMuteStateChange:(BOOL)arg1;
- (void)OnVideoStateChange:(BOOL)arg1 VideoOn:(BOOL)arg2;
- (void)onCreateFailedDueToCallerRisk;
- (void)onCreateFailedDueToRequireVerification:(id)arg1;
- (void)onJoinFailedDueToCallerRisk;
- (void)onCreateUnsafelyDueToCalleeRiskWithUserNames:(id)arg1 isAll:(BOOL)arg2;
- (void)onAddMultiTalkMemberFailedDueToCallerRisk;
- (void)onAddMultiTalkMemberFailedDueToRiskWithUserNames:(id)arg1 groupInfo:(id)arg2 isAll:(BOOL)arg3;
- (void)onErr:(int)arg1 groupUserName:(id)arg2;
- (void)onVideoData:(unsigned int)arg1 Bgra:(char *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4 frontCamera:(BOOL)arg5 screenData:(BOOL)arg6 format:(int)arg7;
- (void)onSpeakerStateChange:(BOOL)arg1;
- (void)onAddMultiTalkMemberResult:(BOOL)arg1 errorType:(int)arg2 groupInfo:(id)arg3;
- (void)OnSysCallNotifyInterrupt:(int)arg1;
- (void)onReceiveVideoMemberChangeMsg:(id)arg1 extArray:(id)arg2;
- (void)onReceiveSubscribeMemberChangeMsg:(int)arg1;
- (void)onMultiTalkRedirectOk;
- (void)onOtherDeviceHandleTalk:(id)arg1;
- (void)onMultiTalkBannerChange:(id)arg1;
- (void)onMultiTalkJoinLimit:(unsigned int)arg1;
- (void)onMultiTalkCreateLimit:(unsigned int)arg1;
- (void)onMultiTalkNotAllowCameraLimit:(unsigned int)arg1;
- (void)onSetMultiTalkScreenSharingStatus:(int)arg1 ScreenSharingStatus:(int)arg2;
- (void)onDoScreenSharingSecurityCheck:(int)arg1 checkStatus:(int)arg2 fileMd5:(id)arg3;
- (void)onRejectToCreateRoomForServerOverloadWithTimeInterval:(int)arg1;
- (void)onRejectToOpenCameraForServerOverloadWithTimeInterval:(int)arg1;
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
- (void)onCallEnd:(unsigned long long)arg1 callResult:(unsigned int)arg2;
- (BOOL)getIfIsConnected;
- (int)getRemoteVideoRatio;
- (void)remoteVideoStatusChange:(BOOL)arg1;
- (void)setRemoteContact:(id)arg1;
- (void)ilinkInviteFailedToVoIPMgrWithUserName:(id)arg1;
- (void)OnBeAccepted;
- (void)OnBeRejected;
- (void)OnCancel;
- (void)onSendCmdMsg;
- (void)onRecvCmdMsg:(id)arg1;
- (void)simuCallFromCallerToReceiver:(id)arg1;
- (void)onSimuCallerCloseVideo;
- (void)supplementLocalBubbleWithConfCallWordingInfo:(id)arg1;
- (void)onReceiveConfCallWordingInfo:(id)arg1;
- (void)confSDKOnRecvCmdMsg:(id)arg1;
- (void)setNetworkStatus:(int)arg1;
- (void)setGPUReslution:(int)arg1;
- (BOOL)get720pCaptureStatus;
- (BOOL)getEnableDirectRendering;
- (void)changeToHighCapture:(int)arg1;
- (void)onRecvAckFail:(unsigned long long)arg1 username:(id)arg2;
- (void)onStartRecvInvite:(id)arg1;
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
- (BOOL)shouldBluetoothStartEarlier;
- (void)startAudioDeviceSucc;
- (BOOL)getIfCallKitStatus;
- (int)getTryStartAudioDevCnt;
- (BOOL)getIfEnableVoIPMPAudioUnit;
- (void)setAudioParams:(id)arg1;
- (void)releaseDevice;
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
- (void)voIPConfSDKServiceOnReceiveEvent:(int)arg1 errCode:(int)arg2 data:(id)arg3 ret:(id)arg4;
- (void)audioDeviceStartedFail:(id)arg1;
- (void)audioDeviceDidReceiveCallbackFirstEachStartup;
- (void)audioDeviceDidReceivePlaybackCallbackFirstEachStartup:(id)arg1;
- (void)audioDeviceDidReceiveRecordingCallbackFirstEachStartup:(id)arg1;
- (void)OnVoipCXHungUp:(unsigned long long)arg1;
- (id)outputVideoRender;
- (id)outputVideoRenderLock;
- (void)setOutputVideoRenderLock:(id)arg1;
- (id)inputVideoRenderLock;
- (void)setInputVideoRenderLock:(id)arg1;
- (void)setMIsMinimizeView:(BOOL)arg1;
- (id)m_videoDeviceDelegate;
- (void)setM_videoDeviceDelegate:(id)arg1;
- (BOOL)mIsLocalVideoClosed;
- (void)setMIsLocalVideoClosed:(BOOL)arg1;
- (BOOL)mIsRemoteVideoClosed;
- (void)setMIsRemoteVideoClosed:(BOOL)arg1;
- (BOOL)mIsInterrupted;
- (void)setMIsInterrupted:(BOOL)arg1;
- (BOOL)supportIlinkCloudService;
- (void)setSupportIlinkCloudService:(BOOL)arg1;
- (BOOL)isThisTalkIlink;
- (BOOL)isAudio;
- (void)setIsAudio:(BOOL)arg1;
- (BOOL)isCaller;
- (void)setIsCaller:(BOOL)arg1;
- (BOOL)isConnected;
- (void)setIsConnected:(BOOL)arg1;
- (BOOL)joinToRoom;
- (void)setJoinToRoom:(BOOL)arg1;
- (BOOL)isSpeakerOn;
- (void)setIsSpeakerOn:(BOOL)arg1;
- (id)multiTalkDelegate;
- (void)setMultiTalkDelegate:(id)arg1;
- (int)modeActionStatus;
- (void)setModeActionStatus:(int)arg1;
- (unsigned long long)mRoomId;
- (void)setMRoomId:(unsigned long long)arg1;
- (id)callID;
- (void)setCallID:(id)arg1;
- (id)mRemoteUserName;
- (void)setMRemoteUserName:(id)arg1;
- (unsigned int)mInviteId;
- (void)setMInviteId:(unsigned int)arg1;
- (id)smallOutputVideoRenderLock;
- (void)setSmallOutputVideoRenderLock:(id)arg1;
- (BOOL)isLocalCaptureSuspended;
- (void)setIsLocalCaptureSuspended:(BOOL)arg1;
- (long long)m_videoOrientation;
- (void)setM_videoOrientation:(long long)arg1;
- (unsigned int)remoteWxVer;
- (void)setRemoteWxVer:(unsigned int)arg1;
- (id)remoteSourceDevice;
- (void)setRemoteSourceDevice:(id)arg1;
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
- (BOOL)shouldCheckLocalCaptureIsActive;
- (void)setShouldCheckLocalCaptureIsActive:(BOOL)arg1;
- (BOOL)isIlinkFailed;
- (void)setIsIlinkFailed:(BOOL)arg1;
- (BOOL)isActived;
- (void)setIsActived:(BOOL)arg1;
- (BOOL)changeToMultiTalk;
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
- (BOOL)enableVoIPMPAudioUnit;
- (void)setEnableVoIPMPAudioUnit:(BOOL)arg1;
- (BOOL)acceptNewCall;
- (void)setAcceptNewCall:(BOOL)arg1;
- (BOOL)startedSecondPart;
- (void)setStartedSecondPart:(BOOL)arg1;
- (BOOL)hangupByCall;
- (void)setHangupByCall:(BOOL)arg1;
- (unsigned long long)localCaptureUnactiveCount;
- (void)setLocalCaptureUnactiveCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
