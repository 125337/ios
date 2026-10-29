@interface VoIPConfSDKService : MMUserService <MMConfSDKVideoHWencDelegate, MMConfSDKVideoHWdecDelegate, VoIPOrientationServiceExtension, VoIPConfSDKNativeCallbackMgrDelegate, MMServiceProtocol>
{
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x8
    MMConfSDKMemberMgr * _memberMgr; // +0x10
    MMConfSDKAudioMgr * _audioMgr; // +0x18
    MMConfSDKNetworkMgr * _networkMgr; // +0x20
    MMConfSDKCGIImp * _CGIImp; // +0x28
    VoIPConfSDKNativeCallbackMgr * voipCallbackMgr; // +0x30
    IConfSDKRegisterableCallbackHolder * joinSucc; // +0x38
    IConfSDKRegisterableCallbackHolder * joinFail; // +0x40
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
    IConfSDKRegisterableCallbackHolder * ackIgnore; // +0x118
    IConfSDKRegisterableCallbackHolder * inviteIgnore; // +0x120
    id /* block */ _currentInterruptedCallback; // +0x128
    id /* block */ _currentSpeakerChangedCallback; // +0x130
    ConfAVMemberList * confAVMemberList; // +0x138
    unsigned long long _currentStatus; // +0x140
    NSString * _currentAppId; // +0x148
    int _exitReason; // +0x150
    BOOL _isInited; // +0x154
    BOOL _isIniting; // +0x155
    id /* block */ _pendingExitCallback; // +0x158
    BOOL _isSyncJoinDone; // +0x160
    BOOL _isCallbackJoinDone; // +0x161
    BOOL _isCallbackTalkDone; // +0x162
    BOOL _isCameraStarted; // +0x163
    BOOL _isHandsFree; // +0x164
    int _screenStatus; // +0x168
    int _subVideoType; // +0x16c
    int _screenProjectQosLogFrameCount; // +0x170
    BOOL _alreadyNotifyReady; // +0x174
    BOOL _isProcessingMemberChg; // +0x175
    unsigned long long _roomId; // +0x178
    int _audioType; // +0x180
    int _roomType; // +0x184
    int _videoRatio; // +0x188
    int _videoLength; // +0x18c
    int _videoAspectAdaptationEncRatio; // +0x190
    int _remoteVideoAspectAdaptationFrameRatio; // +0x194
    BOOL _isMicrophoneMute; // +0x198
    int mLastSimCardType; // +0x19c
    int _hwEncStatus; // +0x1a0
    int _capW; // +0x1a4
    int _capH; // +0x1a8
    int _capScreenW; // +0x1ac
    int _capScreenH; // +0x1b0
    int[2] _encStatusList; // +0x1b4
    BOOL _isSWEncUsing; // +0x1bc
    int _capStatus; // +0x1c0
    MMConfSDKVideoHWenc *[2] _hwEncoderList; // +0x1c8
    BOOL[2] _isHW2SW_encode; // +0x1d8
    BOOL[2] _isHW2SW_screen; // +0x1da
    int[2] _screenEncStatusList; // +0x1dc
    BOOL _isSWScreenEncUsing; // +0x1e4
    MMConfSDKVideoHWenc *[2] _hwScreenEncoderList; // +0x1e8
    MMConfSDKVideoHWdec *[16] _hwDecoderList; // +0x1f8
    int[16] _hwDecoderUsingList; // +0x278
    MMContext * m_context; // +0x2b8
    NSString * selfUsername; // +0x2c0
    unsigned long long selfUin; // +0x2c8
    NSString * callerName; // +0x2d0
    NSString * _currentGroupid; // +0x2d8
    NSString * _currentSdkGroupid; // +0x2e0
    NSMutableArray * _displayUserList; // +0x2e8
    int _memberRole; // +0x2f0
    NSMutableArray * _cachedVideoMemberIds; // +0x2f8
    NSMutableArray * _cachedInviteNotify; // +0x300
    __CVBuffer * _screenPixelBuffer; // +0x308
    int _lastScreenPlaneWidth; // +0x310
    int _lastScreenPlaneHeight; // +0x314
    __CVBuffer * _videoPixelBuffer; // +0x318
    int _lastVideoPlaneWidth; // +0x320
    int _lastVideoPlaneHeight; // +0x324
    NSString * _talkingToUserName; // +0x328
    BOOL _isSimuCall; // +0x330
    BOOL _isChangeToMultiTalk; // +0x331
    long long mStartInviteTime; // +0x338
    long long mStartJoinTime; // +0x340
    long long mRecvInviteTime; // +0x348
    BOOL isAlreadySetAudio; // +0x350
    BOOL _needSendRemoteResendInfoCMDs; // +0x351
    VoIPLandscapeCompatContext * _landscapeCompatContext; // +0x358
    long long _deviceOrientation; // +0x360
    unsigned long long _cameraFlowFrameIndex; // +0x368
    id <ilinkApiDelegate> _ilinkApiDelegate; // +0x370
    VoIPSWClipContext * _swClipContext; // +0x378
}
- (id)audioMgr;
- (unsigned long long)currentStatus;
- (BOOL)isMemberWithUserName:(id)arg1;
- (void)setMultitalkSelf:(id)arg1 useruin:(unsigned long long)arg2 ilinkDelegate:(id)arg3;
- (void)joinRoom:(BOOL)arg1 sdkGroupID:(id)arg2 wxGroupID:(id)arg3 roomID:(unsigned long long)arg4 remoteUserName:(id)arg5 joinSuccessHandler:(id /* block */)arg6;
- (void)initEngine:(id /* block */)arg1;
- (void)initEngineForInviteVoIP;
- (void)dealloc;
- (void)interruptByCall:(BOOL)arg1;
- (void)BeginSysCallInterruption;
- (void)EndSysCallInterruption;
- (void)sendCmdMsgData:(id)arg1 sendToMemberId:(int)arg2;
- (int)getRemoteVideoRatio;
- (void)updateVideoAspectAdaptationEncRatio:(int)arg1;
- (void)resetVideoAspectAdaptationEncRatioCache;
- (BOOL)shouldSkipLocalLandscapeAspectRewriteWithIsScreen:(BOOL)arg1;
- (void)updateRemoteVideoFrameRatioWithWidth:(int)arg1 height:(int)arg2;
- (void)setIsHandsFree:(BOOL)arg1;
- (id)getCurrentConfSDKMemberMgr;
- (int)getSelfMemberID;
- (void)restartDeviceForFail;
- (void)forceRestartDeviceForFail;
- (void)HeadSetPlugin:(BOOL)arg1;
- (void)notifyAudioDeviceChange:(BOOL)arg1 isWirelessDevice:(BOOL)arg2 isWiredDevice:(BOOL)arg3;
- (id)getCallerName;
- (void)changeToMultiTalk;
- (void)queryEnhanceVoiceAmbientStatus:(id /* block */)arg1;
- (void)setEnhanceVoiceEnabled:(BOOL)arg1 deviceType:(int)arg2 completion:(id /* block */)arg3;
- (void)trySendRemoteResendInfoCMDs;
- (void)onServiceTerminate;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)readyToTalk;
- (void)canSwitchToTalkingStatus;
- (void)notifyVideoMemberChange:(id)arg1;
- (void)setUpCallbackAfterInit;
- (void)setUpLongTermCallbackAfterJoin:(unsigned long long)arg1;
- (void)tryTriggerInviteSucc:(id /* block */)arg1;
- (void)tryTriggerAcceptSucc:(id /* block */)arg1;
- (void)startAudioDeviceWithPrewarmOnly:(BOOL)arg1;
- (void)notifyRemoteDeviceStartSucc;
- (void)callbackDeviceStartFailed:(id /* block */)arg1 errCode:(int)arg2;
- (void)cleanUpJoinStatus;
- (void)startListenNetworkChange;
- (void)stopListenNetworkChange;
- (id)createLinkEngineParams;
- (int)initWithSession:(BOOL)arg1;
- (void)receiveInviteFailedDueToCallerRiskWithErrCode:(int)arg1 verificationUrlBase64:(id)arg2;
- (void)callbackInvite:(id /* block */)arg1 errType:(int)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (void)callbackAccept:(id /* block */)arg1 errType:(int)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (int)convertReason:(int)arg1;
- (int)exitConferenceSyncWithReason:(int)arg1;
- (void)cleanUpLongTermCallbacks;
- (void)setSpeakerPhone:(BOOL)arg1;
- (BOOL)isMicrophoneMuted;
- (void)setMicroPhoneMute:(BOOL)arg1;
- (void)updateConfig:(id)arg1 callback:(id /* block */)arg2;
- (void)mayRelease:(BOOL)arg1;
- (void)subscribeAll;
- (void)subscribeByUsernameList:(id)arg1 LargeUsers:(id)arg2;
- (void)subscribeByUsername:(id)arg1 NeedBigVideo:(BOOL)arg2;
- (int)currentResolution;
- (int)GetScreenHWEncWidth:(int)arg1;
- (int)GetScreenHWEncHeight:(int)arg1;
- (void)CloseCodec:(int)arg1 codecFlag:(int)arg2;
- (void)doQosCtrl:(BOOL)arg1;
- (BOOL)shouldEnableLandscapeCompatMode;
- (__CVBuffer *)rotateCVPixelBuffer90:(__CVBuffer *)arg1 width:(int)arg2 height:(int)arg3;
- (void)releaseLandscapeCompatResources;
- (BOOL)shouldApplyLandscapeSWClipForVideoWithIsScreen:(BOOL)arg1 landscapeCompat:(BOOL)arg2 data:(char *)arg3;
- (BOOL)shouldUseLandscapeAspectForQoS;
- (vImage_Buffer)vImageBufferOfPlane:(unsigned long long)arg1 pixelBuffer:(__CVBuffer *)arg2;
- (int)sendLandscapeCompatSoftwareVideoDataWithBuffer:(__CVBuffer *)arg1 width:(int)arg2 height:(int)arg3 format:(int)arg4;
- (int)sendClippedLandscapeSoftwareVideoData:(char *)arg1 dataLen:(int)arg2 width:(int)arg3 height:(int)arg4 format:(int)arg5;
- (int)sendSoftwareVideoData:(char *)arg1 dataLen:(int)arg2 isScreen:(BOOL)arg3 landscapeCompat:(BOOL)arg4 rotatedBuffer:(__CVBuffer *)arg5 sourceWidth:(int)arg6 sourceHeight:(int)arg7 encodeWidth:(int)arg8 encodeHeight:(int)arg9 format:(int)arg10;
- (int)setRaisrPara:(char *)arg1 dataLen:(int)arg2;
- (int)sendVideoData:(void *)arg1;
- (int)sendVideoData:(char *)arg1 dataLen:(int)arg2 imgBuf:(__CVBuffer *)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6;
- (int)sendVideoData:(char *)arg1 dataLen:(int)arg2 imgBuf:(__CVBuffer *)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6 frameIndex:(unsigned long long)arg7;
- (int)sendVideoData:(char *)arg1 dataLen:(int)arg2 imgBuf:(__CVBuffer *)arg3 width:(int)arg4 height:(int)arg5;
- (int)sendVideoData:(char *)arg1 dataLen:(int)arg2 imgBuf:(__CVBuffer *)arg3 width:(int)arg4 height:(int)arg5 frameIndex:(unsigned long long)arg6;
- (int)sendScreenData:(void *)arg1;
- (long long)getRemoteVideoOrientation:(int)arg1;
- (BOOL)checkIfMemberVideoOn:(int)arg1;
- (void)onVideoFrame:(int)arg1 data:(const char *)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6;
- (void)switchVideoWithCameraEnabled:(BOOL)arg1 screenStatus:(int)arg2 subVideoType:(int)arg3;
- (void)switchVideoToCamera;
- (void)switchVideoToScreen;
- (void)switchScreenEnabled:(BOOL)arg1 keepCameraEnabled:(BOOL)arg2;
- (void)switchScreenEnabled:(BOOL)arg1 keepCameraEnabled:(BOOL)arg2 subVideoType:(int)arg3;
- (void)switchCameraEnabledPreservingScreenStatus:(BOOL)arg1;
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
- (unsigned long long)getCurrentRoomMembersCount;
- (id)sortedTalkingMembers;
- (id)getMemberQualityInfoList;
- (int)checkUsingMultiPathCellularConn;
- (id)getMemberByOpenid:(id)arg1;
- (id)getMemberByUsername:(id)arg1;
- (id)getMemberByMemberid:(int)arg1;
- (int)engineDoMemberSelectForView:(id)arg1;
- (void)changeFloatingWindowStatus:(int)arg1;
- (void)hangup:(int)arg1 isSubCall:(BOOL)arg2;
- (void)hangup:(int)arg1;
- (void)hangup:(int)arg1 roomID:(unsigned long long)arg2;
- (void)addMembers:(id)arg1 inviteId:(unsigned long long)arg2;
- (void)acceptWithRegister;
- (void)accept:(BOOL)arg1;
- (void)acceptSubCallWithInviteInfo:(id)arg1 inviteMsg:(id)arg2 muteVideo:(BOOL)arg3;
- (void)supplyInfo:(BOOL)arg1;
- (int)invite:(id)arg1 groupId:(id)arg2 isAudio:(BOOL)arg3 username:(id)arg4 inviteId:(unsigned long long)arg5;
- (void)inviteSync:(id)arg1 username:(id)arg2 inviteId:(unsigned long long)arg3;
- (void)inviteImp:(id)arg1 inviteCallback:(id /* block */)arg2 username:(id)arg3 inviteId:(unsigned long long)arg4;
- (void)recvNotify:(id)arg1 datalen:(int)arg2 groupId:(id)arg3 sdkGroupId:(id)arg4 displayUserList:(id)arg5 username:(id)arg6 receiveMsgTime:(unsigned int)arg7 roomID:(unsigned long long)arg8 isCancelMsg:(BOOL)arg9 muteNotification:(BOOL)arg10 notifyFrom:(int)arg11;
- (void)RecvNotifyImp:(id)arg1 datalen:(int)arg2 groupId:(id)arg3 sdkGroupId:(id)arg4 displayUserList:(id)arg5 username:(id)arg6 receiveMsgTime:(unsigned int)arg7 roomID:(unsigned long long)arg8 muteNotification:(BOOL)arg9 notifyFrom:(int)arg10;
- (void)svrReport;
- (void)releaseDevice;
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
- (BOOL)IsInWxGroup:(const char *)arg1 userName:(const char *)arg2;
- (id)landscapeCompatContext;
- (void)setLandscapeCompatContext:(id)arg1;
- (long long)deviceOrientation;
- (void)setDeviceOrientation:(long long)arg1;
- (unsigned long long)cameraFlowFrameIndex;
- (void)setCameraFlowFrameIndex:(unsigned long long)arg1;
- (BOOL)needSendRemoteResendInfoCMDs;
- (void)setNeedSendRemoteResendInfoCMDs:(BOOL)arg1;
- (id)ilinkApiDelegate;
- (void)setIlinkApiDelegate:(id)arg1;
- (id)swClipContext;
- (void)setSwClipContext:(id)arg1;
- (void).cxx_destruct;
@end
