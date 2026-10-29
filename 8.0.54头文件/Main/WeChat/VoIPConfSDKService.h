@interface VoIPConfSDKService : MMUserService <MMConfSDKVideoHWencDelegate, MMConfSDKVideoHWdecDelegate, VoIPOrientationServiceExtension, VoIPConfSDKNativeCallbackMgrDelegate, MMServiceProtocol>
{
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x8
    MMConfSDKMemberMgr * _memberMgr; // +0x10
    MMConfSDKAudioMgr * _audioMgr; // +0x18
    MMConfSDKNetworkMgr * _networkMgr; // +0x20
    MMConfSDKCGIImp * _CGIImp; // +0x28
    id <MultitalkApiDelegate> _apiDelegate; // +0x30
    id <ilinkApiDelegate> _ilinkApiDelegate; // +0x38
    VoIPConfSDKNativeCallbackMgr * voipCallbackMgr; // +0x40
    IConfSDKRegisterableCallbackHolder * inviteSucc; // +0x48
    IConfSDKRegisterableCallbackHolder * inviteFail; // +0x50
    IConfSDKRegisterableCallbackHolder * inviteTimeout; // +0x58
    IConfSDKRegisterableCallbackHolder * recvInvite; // +0x60
    IConfSDKRegisterableCallbackHolder * recvInviteBusy; // +0x68
    IConfSDKRegisterableCallbackHolder * recvNotifyFail; // +0x70
    IConfSDKRegisterableCallbackHolder * ackSucc; // +0x78
    IConfSDKRegisterableCallbackHolder * ackFail; // +0x80
    IConfSDKRegisterableCallbackHolder * acceptSucc; // +0x88
    IConfSDKRegisterableCallbackHolder * acceptFail; // +0x90
    IConfSDKRegisterableCallbackHolder * acceptTimeout; // +0x98
    IConfSDKRegisterableCallbackHolder * acceptByOtherDevice; // +0xa0
    IConfSDKRegisterableCallbackHolder * addResult; // +0xa8
    IConfSDKRegisterableCallbackHolder * memberChange; // +0xb0
    IConfSDKRegisterableCallbackHolder * videoMemberChange; // +0xb8
    IConfSDKRegisterableCallbackHolder * talkSucc; // +0xc0
    IConfSDKRegisterableCallbackHolder * talkFail; // +0xc8
    IConfSDKRegisterableCallbackHolder * callBroken; // +0xd0
    IConfSDKRegisterableCallbackHolder * callWording; // +0xd8
    IConfSDKRegisterableCallbackHolder * callExit; // +0xe0
    IConfSDKRegisterableCallbackHolder * switchAVFail; // +0xe8
    IConfSDKRegisterableCallbackHolder * ilinkInviteAck; // +0xf0
    IConfSDKRegisterableCallbackHolder * recvCmdMsg; // +0xf8
    IConfSDKRegisterableCallbackHolder * simuCall; // +0x100
    IConfSDKRegisterableCallbackHolder * networkType; // +0x108
    IConfSDKRegisterableCallbackHolder * simuCallerColseVideo; // +0x110
    id /* block */ _currentInterruptedCallback; // +0x118
    id /* block */ _currentSpeakerChangedCallback; // +0x120
    ConfAVMemberList * confAVMemberList; // +0x128
    int _currentStatus; // +0x130
    NSString * _currentAppId; // +0x138
    int _exitReason; // +0x140
    BOOL _isInited; // +0x144
    BOOL _isIniting; // +0x145
    id /* block */ _pendingExitCallback; // +0x148
    BOOL _isSyncJoinDone; // +0x150
    BOOL _isCallbackJoinDone; // +0x151
    BOOL _isCallbackTalkDone; // +0x152
    BOOL _isCameraStarted; // +0x153
    BOOL _isHandsFree; // +0x154
    int _screenStatus; // +0x158
    BOOL _alreadyNotifyReady; // +0x15c
    BOOL _alreadyNotifyScreenSharing; // +0x15d
    BOOL _isProcessingMemberChg; // +0x15e
    unsigned long long _roomId; // +0x160
    int _audioType; // +0x168
    int _roomType; // +0x16c
    int _videoRatio; // +0x170
    int _videoLength; // +0x174
    BOOL _isMicrophoneMute; // +0x178
    int mLastSimCardType; // +0x17c
    int _hwEncStatus; // +0x180
    int _capW; // +0x184
    int _capH; // +0x188
    int _capScreenW; // +0x18c
    int _capScreenH; // +0x190
    int[2] _encStatusList; // +0x194
    BOOL _isSWEncUsing; // +0x19c
    int _capStatus; // +0x1a0
    MMConfSDKVideoHWenc *[2] _hwEncoderList; // +0x1a8
    struct _encModeStatus; // +0x1b8
    int[2] _screenEncStatusList; // +0x1bc
    BOOL _isSWScreenEncUsing; // +0x1c4
    MMConfSDKVideoHWenc *[2] _hwScreenEncoderList; // +0x1c8
    MMConfSDKVideoHWdec *[16] _hwDecoderList; // +0x1d8
    int[16] _hwDecoderUsingList; // +0x258
    MMContext * m_context; // +0x298
    NSString * selfUsername; // +0x2a0
    long long selfUin; // +0x2a8
    NSString * callerName; // +0x2b0
    NSString * _currentGroupid; // +0x2b8
    NSString * _currentSdkGroupid; // +0x2c0
    NSMutableArray * _displayUserList; // +0x2c8
    int _memberRole; // +0x2d0
    NSMutableArray * _cachedVideoMemberIds; // +0x2d8
    NSMutableArray * _cachedInviteNotify; // +0x2e0
    __CVBuffer * _screenPixelBuffer; // +0x2e8
    int _lastScreenPlaneWidth; // +0x2f0
    int _lastScreenPlaneHeight; // +0x2f4
    __CVBuffer * _videoPixelBuffer; // +0x2f8
    int _lastVideoPlaneWidth; // +0x300
    int _lastVideoPlaneHeight; // +0x304
    NSString * _talkingToUserName; // +0x308
    BOOL _isSimuCall; // +0x310
    BOOL _isChangeToMultiTalk; // +0x311
    long long mStartInviteTime; // +0x318
    long long mStartJoinTime; // +0x320
    long long mRecvInviteTime; // +0x328
    BOOL isAlreadySetAudio; // +0x330
    long long _deviceOrientation; // +0x338
}
- (int)currentStatus;
- (BOOL)isMemberWithUserName:(id)arg1;
- (void)setMultitalkSelf:(id)arg1 useruin:(long long)arg2 multitalkApiDelegate:(id)arg3 ilinkDelegate:(id)arg4;
- (void)initEngine:(id /* block */)arg1;
- (void)initEngineForInviteVoIP;
- (void)dealloc;
- (void)interruptByCall:(BOOL)arg1;
- (void)BeginSysCallInterruption;
- (void)EndSysCallInterruption;
- (void)sendCmdMsgData:(id)arg1;
- (int)getRemoteVideoRatio;
- (void)setIsHandsFree:(BOOL)arg1;
- (id)getCurrentConfSDKMemberMgr;
- (int)getSelfMemberID;
- (void)restartDeviceForFail;
- (void)HeadSetPlugin:(BOOL)arg1;
- (void)notifyAudioDeviceChange:(BOOL)arg1 isWirelessDevice:(BOOL)arg2 isWiredDevice:(BOOL)arg3;
- (id)getCallerName;
- (void)startRecord:(int)arg1 channels:(int)arg2 frameDuration:(int)arg3;
- (void)startPlay:(int)arg1 channels:(int)arg2 frameDuration:(int)arg3;
- (void)onServiceTerminate;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)readyToTalk;
- (void)canSwitchToTalkingStatus;
- (void)notifyVideoMemberChange:(id)arg1;
- (void)setUpLongTermCallbackAfterJoin:(unsigned long long)arg1;
- (void)tryTriggerInviteSucc:(id /* block */)arg1;
- (void)tryTriggerAcceptSucc:(id /* block */)arg1;
- (void)startAudioDevice:(id /* block */)arg1;
- (void)notifyRemoteDeviceStartSucc;
- (void)callbackDeviceStartFailed:(id /* block */)arg1 errCode:(int)arg2;
- (void)cleanUpJoinStatus;
- (void)startListenNetworkChange;
- (void)stopListenNetworkChange;
- (int)initWithSession:(BOOL)arg1 isSubCallEnable:(BOOL)arg2;
- (void)receiveInviteFailedDueToCallerRiskWithErrCode:(int)arg1 verificationUrlBase64:(id)arg2;
- (void)callbackInvite:(id /* block */)arg1 errType:(int)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (void)callbackAccept:(id /* block */)arg1 errType:(int)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (int)convertReason:(int)arg1;
- (int)exitConferenceSyncWithReason:(int)arg1;
- (void)cleanUpLongTermCallbacks;
- (void)setSpeakerPhone:(BOOL)arg1;
- (void)setMicroPhoneMute:(BOOL)arg1;
- (void)updateConfig:(id)arg1 callback:(id /* block */)arg2;
- (void)mayRelease:(BOOL)arg1;
- (void)subscribeAll;
- (void)subscribeByUsernameList:(id)arg1 LargeUsers:(id)arg2;
- (void)subscribeByUsername:(id)arg1 NeedBigVideo:(BOOL)arg2;
- (int)GetScreenHWEncWidth:(int)arg1;
- (int)GetScreenHWEncHeight:(int)arg1;
- (void)CloseCodec:(int)arg1 codecFlag:(int)arg2;
- (void)doQosCtrl:(BOOL)arg1;
- (int)sendVideoData:(void *)arg1;
- (int)sendVideoData:(char *)arg1 dataLen:(int)arg2 imgBuf:(__CVBuffer *)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6;
- (int)sendVideoData:(char *)arg1 dataLen:(int)arg2 imgBuf:(__CVBuffer *)arg3 width:(int)arg4 height:(int)arg5;
- (int)sendScreenData:(void *)arg1;
- (long long)getRemoteVideoOrientation:(int)arg1;
- (BOOL)checkIfMemberVideoOn:(int)arg1;
- (void)onVideoFrame:(int)arg1 data:(const char *)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6;
- (void)switchVideoWithCameraEnabled:(BOOL)arg1 screenStatus:(int)arg2;
- (void)switchVideoToCamera;
- (void)switchVideoToScreen;
- (void)doVideoScreenSharingSecurityCheck:(id)arg1 fileId:(id)arg2;
- (void)switchVideoToScreenPaused;
- (void)stopVideo;
- (void)gotDecVideoFrame:(int)arg1 Frame:(char *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4 format:(int)arg5;
- (int)CloseHWDecoder:(int)arg1 codecType:(int)arg2;
- (int)gotEncodedData:(id)arg1 isKeyFrame:(BOOL)arg2 codecType:(int)arg3 encIdx:(int)arg4 isScreen:(BOOL)arg5;
- (int)gotXpsData:(id)arg1 codecType:(int)arg2 encIdx:(int)arg3 isScreen:(BOOL)arg4;
- (int)gotEncodeErrCode:(int)arg1 encIdx:(int)arg2;
- (void)forceExitRoom:(int)arg1;
- (id)getTalkingMember;
- (id)sortedTalkingMembers;
- (id)getMemberQualityInfoList;
- (int)checkUsingMultiPathCellularConn;
- (id)getMemberByOpenid:(id)arg1;
- (id)getMemberByUsername:(id)arg1;
- (id)getMemberByMemberid:(int)arg1;
- (int)engineDoMemberSelectForView:(id)arg1;
- (void)sendBannerMsg:(unsigned int)arg1;
- (void)changeFloatingWindowStatus:(int)arg1;
- (void)hangup:(int)arg1 isSubCall:(BOOL)arg2;
- (void)hangup:(int)arg1;
- (void)addMembers:(id)arg1;
- (void)acceptWithRegister;
- (void)accept:(BOOL)arg1;
- (void)acceptSubCallWithInviteInfo:(id)arg1 inviteMsg:(id)arg2 muteVideo:(BOOL)arg3;
- (void)supplyInfo:(BOOL)arg1;
- (int)invite:(id)arg1 groupId:(id)arg2 isAudio:(BOOL)arg3 username:(id)arg4;
- (void)inviteSync:(id)arg1 username:(id)arg2;
- (void)inviteImp:(id)arg1 inviteCallback:(id /* block */)arg2 username:(id)arg3;
- (void)recvNotify:(id)arg1 datalen:(int)arg2 groupId:(id)arg3 sdkGroupId:(id)arg4 displayUserList:(id)arg5 username:(id)arg6 receiveMsgTime:(unsigned int)arg7 roomID:(unsigned long long)arg8 isCancelMsg:(BOOL)arg9;
- (void)RecvNotifyImp:(id)arg1 datalen:(int)arg2 groupId:(id)arg3 sdkGroupId:(id)arg4 displayUserList:(id)arg5 username:(id)arg6 receiveMsgTime:(unsigned int)arg7 roomID:(unsigned long long)arg8;
- (void)svrReport;
- (void)releaseDevice;
- (void)VoIPMPReleaseDevice;
- (void)uninitEngine;
- (void)resetStatus;
- (void)voIPOrientationServiceDidChangeDeviceOrientation;
- (void)voIPOrientationServiceDidChangeDeviceAngleDegree;
- (void)voIPOrientationServiceDidChangeMotionOrientation;
- (void)startThermalStateDurationReport;
- (void)stopReportThermalStateDuration;
- (void)thermalStateDidChange;
- (void)callIfNotNil:(id)arg1 errCode:(int)arg2 data:(id)arg3 callbackData:(id)arg4;
- (void)OnConfEvent:(int)arg1 errCode:(int)arg2 data:(id)arg3 callbackData:(id)arg4;
- (long long)deviceOrientation;
- (void)setDeviceOrientation:(long long)arg1;
- (void).cxx_destruct;
@end

