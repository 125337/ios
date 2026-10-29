@interface MMConfSDKService : MMUserService <MMConfSDKVideoHWencDelegate, MMConfSDKVideoHWdecDelegate, VoIPConfSDKNativeCallbackMgrDelegate, MMServiceProtocol>
{
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x8
    MMConfSDKMemberMgr * _memberMgr; // +0x10
    MMConfSDKAudioMgr * _audioMgr; // +0x18
    MMConfSDKNetworkMgr * _networkMgr; // +0x20
    MMConfSDKCGIImp * _CGIImp; // +0x28
    id <MultitalkApiDelegate> _apiDelegate; // +0x30
    VoIPConfSDKNativeCallbackMgr * voipCallbackMgr; // +0x38
    IConfSDKRegisterableCallbackHolder * joinSucc; // +0x40
    IConfSDKRegisterableCallbackHolder * joinFail; // +0x48
    IConfSDKRegisterableCallbackHolder * inviteSucc; // +0x50
    IConfSDKRegisterableCallbackHolder * inviteFail; // +0x58
    IConfSDKRegisterableCallbackHolder * inviteTimeout; // +0x60
    IConfSDKRegisterableCallbackHolder * recvInvite; // +0x68
    IConfSDKRegisterableCallbackHolder * recvInviteBusy; // +0x70
    IConfSDKRegisterableCallbackHolder * recvNotifyFail; // +0x78
    IConfSDKRegisterableCallbackHolder * ackSucc; // +0x80
    IConfSDKRegisterableCallbackHolder * ackFail; // +0x88
    IConfSDKRegisterableCallbackHolder * acceptSucc; // +0x90
    IConfSDKRegisterableCallbackHolder * acceptFail; // +0x98
    IConfSDKRegisterableCallbackHolder * acceptTimeout; // +0xa0
    IConfSDKRegisterableCallbackHolder * acceptByOtherDevice; // +0xa8
    IConfSDKRegisterableCallbackHolder * addResult; // +0xb0
    IConfSDKRegisterableCallbackHolder * memberChange; // +0xb8
    IConfSDKRegisterableCallbackHolder * videoMemberChange; // +0xc0
    IConfSDKRegisterableCallbackHolder * talkSucc; // +0xc8
    IConfSDKRegisterableCallbackHolder * talkFail; // +0xd0
    IConfSDKRegisterableCallbackHolder * callBroken; // +0xd8
    IConfSDKRegisterableCallbackHolder * callExit; // +0xe0
    IConfSDKRegisterableCallbackHolder * sessionExpiredCallback; // +0xe8
    IConfSDKRegisterableCallbackHolder * recvMissInvite; // +0xf0
    IConfSDKRegisterableCallbackHolder * recvCmdMsg; // +0xf8
    IConfSDKRegisterableCallbackHolder * confCloudRequest; // +0x100
    IConfSDKRegisterableCallbackHolder * switchAVFail; // +0x108
    IConfSDKRegisterableCallbackHolder * callWording; // +0x110
    id /* block */ _currentInterruptedCallback; // +0x118
    id /* block */ _currentSpeakerChangedCallback; // +0x120
    ConfAVMemberList * confAVMemberList; // +0x128
    int _currentStatus; // +0x130
    NSString * _currentAppId; // +0x138
    int _exitReason; // +0x140
    BOOL _isInited; // +0x144
    BOOL _isIniting; // +0x145
    int _errCode; // +0x148
    int _initRet; // +0x14c
    id /* block */ _pendingExitCallback; // +0x150
    BOOL _isSyncJoinDone; // +0x158
    BOOL _isCallbackJoinDone; // +0x159
    BOOL _isCallbackTalkDone; // +0x15a
    BOOL _isCameraStarted; // +0x15b
    BOOL _isHandsFree; // +0x15c
    int _screenStatus; // +0x160
    BOOL _alreadyNotifyReady; // +0x164
    BOOL _alreadyNotifyScreenSharing; // +0x165
    BOOL _isProcessingMemberChg; // +0x166
    long long _roomId; // +0x168
    int _audioType; // +0x170
    int _roomType; // +0x174
    int _videoRatio; // +0x178
    int _videoLength; // +0x17c
    BOOL _isMicrophoneMute; // +0x180
    int mLastSimCardType; // +0x184
    int _hwEncStatus; // +0x188
    int _capW; // +0x18c
    int _capH; // +0x190
    int _capScreenW; // +0x194
    int _capScreenH; // +0x198
    int[2] _encStatusList; // +0x19c
    BOOL _isSWEncUsing; // +0x1a4
    int _capStatus; // +0x1a8
    MMConfSDKVideoHWenc *[2] _hwEncoderList; // +0x1b0
    struct _encModeStatus; // +0x1c0
    int[2] _screenEncStatusList; // +0x1c4
    BOOL _isSWScreenEncUsing; // +0x1cc
    MMConfSDKVideoHWenc *[2] _hwScreenEncoderList; // +0x1d0
    MMConfSDKVideoHWdec *[16] _hwDecoderList; // +0x1e0
    int[16] _hwDecoderUsingList; // +0x260
    MMContext * m_context; // +0x2a0
    NSString * selfUsername; // +0x2a8
    long long selfUin; // +0x2b0
    NSString * callerName; // +0x2b8
    NSString * _currentGroupid; // +0x2c0
    NSString * _currentSdkGroupid; // +0x2c8
    MMTimer * _timer; // +0x2d0
    NSMutableArray * _displayUserList; // +0x2d8
    int _memberRole; // +0x2e0
    NSMutableArray * _cachedVideoMemberIds; // +0x2e8
    NSMutableArray * _cachedInviteNotify; // +0x2f0
    NSMutableDictionary * _bannerCreateUserNameInfo; // +0x2f8
    __CVBuffer * _screenPixelBuffer; // +0x300
    int _lastScreenPlaneWidth; // +0x308
    int _lastScreenPlaneHeight; // +0x30c
    NSMutableDictionary * _cachedJoinRoom; // +0x310
    long long mStartInviteTime; // +0x318
    long long mStartJoinTime; // +0x320
    long long mRecvInviteTime; // +0x328
    BOOL _isNotSendBanner; // +0x330
}
- (id)init;
- (void)setMultitalkSelf:(id)arg1 useruin:(long long)arg2 multitalkApiDelegate:(id)arg3;
- (void)initEngine:(id /* block */)arg1;
- (void)dealloc;
- (void)BeginSysCallInterruption;
- (void)EndSysCallInterruption;
- (void)HeadSetPlugin:(BOOL)arg1;
- (void)notifyAudioDeviceChange:(BOOL)arg1 isWirelessDevice:(BOOL)arg2 isWiredDevice:(BOOL)arg3;
- (void)onServiceTerminate;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)readyToTalk;
- (void)notifyVideoMemberChange:(id)arg1;
- (void)HandleMemberchangeEvent:(id)arg1 users:(id)arg2;
- (void)setUpLongTermCallbackAfterJoin;
- (void)tryTriggerJoinSucc:(id /* block */)arg1;
- (void)tryTriggerInviteSucc:(id /* block */)arg1;
- (void)tryTriggerAcceptSucc:(id /* block */)arg1;
- (void)callbackDeviceStartFailed:(id /* block */)arg1 errCode:(int)arg2;
- (void)cleanUpJoinStatus;
- (void)startListenNetworkChange;
- (void)stopListenNetworkChange;
- (int)initWithSession:(BOOL)arg1;
- (void)callbackJoin:(id /* block */)arg1 errType:(int)arg2 errCode:(int)arg3 errMsg:(id)arg4;
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
- (id)currentMembers;
- (id)getTalkingMember;
- (id)sortedTalkingMembers;
- (id)getMemberQualityInfoList;
- (int)checkUsingMultiPathCellularConn;
- (id)getMemberByOpenid:(id)arg1;
- (id)getMemberByUsername:(id)arg1;
- (id)getMemberByMemberid:(int)arg1;
- (int)engineDoMemberSelectForView:(id)arg1;
- (void)sendBannerMsg:(unsigned int)arg1;
- (void)hangup:(int)arg1;
- (void)addMembers:(id)arg1;
- (void)accept;
- (int)invite:(id)arg1 groupId:(id)arg2;
- (void)inviteSync:(id)arg1;
- (void)inviteImp:(id)arg1 inviteCallback:(id /* block */)arg2;
- (int)joinroom:(id)arg1 wxGroupId:(id)arg2;
- (void)joinSync:(id)arg1 wxGroupId:(id)arg2;
- (void)joinimp:(id)arg1 wxGroupId:(id)arg2;
- (void)recvNotify:(id)arg1 datalen:(int)arg2 groupId:(id)arg3 sdkGroupId:(id)arg4 displayUserList:(id)arg5;
- (void)RecvNotifyImp:(id)arg1 datalen:(int)arg2 groupId:(id)arg3 sdkGroupId:(id)arg4 displayUserList:(id)arg5;
- (void)handleBannerMsg:(id)arg1 datelen:(int)arg2;
- (void)svrReport;
- (void)releaseDevice;
- (void)uninitEngine;
- (void)onTimerExpired;
- (void)renewTimer;
- (void)callIfNotNil:(id)arg1 errCode:(int)arg2 data:(id)arg3 callbackData:(id)arg4;
- (void)OnConfEvent:(int)arg1 errCode:(int)arg2 data:(id)arg3 callbackData:(id)arg4;
- (BOOL)isNotSendBanner;
- (void)setIsNotSendBanner:(BOOL)arg1;
- (void).cxx_destruct;
@end

