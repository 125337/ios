@interface ILinkPushService : MMUserService <MMConfSDKVideoHWencDelegate, VoIPConfSDKNativeCallbackMgrDelegate, MMServiceProtocol>
{
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x8
    MMConfSDKMemberMgr * _memberMgr; // +0x10
    MMConfSDKAudioMgr * _audioMgr; // +0x18
    MMConfSDKNetworkMgr * _networkMgr; // +0x20
    MMConfSDKCGIImp * _CGIImp; // +0x28
    id <ILinkPushApiDelegate> _apiDelegate; // +0x30
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
    id /* block */ _currentInterruptedCallback; // +0xf8
    id /* block */ _currentSpeakerChangedCallback; // +0x100
    ConfAVMemberList * confAVMemberList; // +0x108
    int _currentStatus; // +0x110
    NSString * _currentAppId; // +0x118
    int _exitReason; // +0x120
    BOOL _isInited; // +0x124
    BOOL _isIniting; // +0x125
    int _errCode; // +0x128
    int _initRet; // +0x12c
    BOOL _isRequireExit; // +0x130
    id /* block */ _pendingExitCallback; // +0x138
    BOOL _isSyncJoinDone; // +0x140
    BOOL _isCallbackJoinDone; // +0x141
    BOOL _isCallbackTalkDone; // +0x142
    BOOL _isCameraStarted; // +0x143
    BOOL _isHandsFree; // +0x144
    int _screenStatus; // +0x148
    BOOL _alreadyNotifyReady; // +0x14c
    BOOL _alreadyNotifyScreenSharing; // +0x14d
    BOOL _isProcessingMemberChg; // +0x14e
    long long _roomId; // +0x150
    int _audioType; // +0x158
    int _roomType; // +0x15c
    int _videoRatio; // +0x160
    int _videoLength; // +0x164
    BOOL _isMicrophoneMute; // +0x168
    int mLastSimCardType; // +0x16c
    int _hwEncStatus; // +0x170
    int _capW; // +0x174
    int _capH; // +0x178
    int[2] _encStatusList; // +0x17c
    BOOL _isSWEncUsing; // +0x184
    int _capStatus; // +0x188
    MMConfSDKVideoHWenc *[2] _hwEncoderList; // +0x190
    stCloudVHWParam *[2] _qosParam; // +0x1a0
    struct _encModeStatus; // +0x1b0
    int[2] _screenEncStatusList; // +0x1b4
    BOOL _isSWScreenEncUsing; // +0x1bc
    MMConfSDKVideoHWenc *[2] _hwScreenEncoderList; // +0x1c0
    __sFILE *[2] _pfEncSteam; // +0x1d0
    int[2] _hwFrameCnt; // +0x1e0
    NSString * selfUsername; // +0x1e8
    long long selfUin; // +0x1f0
    NSString * callerName; // +0x1f8
    NSString * _currentGroupid; // +0x200
    NSString * _currentSdkGroupid; // +0x208
    MMTimer * _timer; // +0x210
    NSMutableArray * _displayUserList; // +0x218
    int _memberRole; // +0x220
    NSMutableArray * _cachedVideoMemberIds; // +0x228
    NSMutableArray * _cachedInviteNotify; // +0x230
    NSMutableDictionary * _bannerCreateUserNameInfo; // +0x238
    __CVBuffer * _screenPixelBuffer; // +0x240
    int _lastScreenPlaneWidth; // +0x248
    int _lastScreenPlaneHeight; // +0x24c
    NSMutableDictionary * _cachedJoinRoom; // +0x250
    long long mStartInviteTime; // +0x258
    long long mStartJoinTime; // +0x260
    long long mRecvInviteTime; // +0x268
    BOOL _enableCustomAudio; // +0x270
    NSMutableArray * _msgArray; // +0x278
    BOOL _needReInit; // +0x280
    BOOL _isPaused; // +0x281
    NSMutableData * _xpsData; // +0x288
    int mApplicationState; // +0x290
}
- (void)whenDidActive;
- (void)whenGoingToResign;
- (id)init;
- (void)setMultitalkSelf:(id)arg1 useruin:(long long)arg2 enableCustomAudio:(BOOL)arg3 multitalkApiDelegate:(id)arg4;
- (void)initEngine:(id /* block */)arg1;
- (void)dealloc;
- (void)BeginSysCallInterruption;
- (void)EndSysCallInterruption;
- (void)HeadSetPlugin:(BOOL)arg1;
- (void)notifyAudioDeviceChange:(BOOL)arg1 isWirelessDevice:(BOOL)arg2 isWiredDevice:(BOOL)arg3;
- (void)pauseEncode;
- (void)resumeEncode;
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
- (void)callbackDeviceStartFailed:(id /* block */)arg1 errCode:(int)arg2;
- (void)cleanUpJoinStatus;
- (void)startListenNetworkChange;
- (void)stopListenNetworkChange;
- (int)initWithSession:(BOOL)arg1;
- (void)callbackJoin:(id /* block */)arg1 errType:(int)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (int)convertReason:(int)arg1;
- (int)exitConferenceSyncWithReason:(int)arg1;
- (void)cleanUpLongTermCallbacks;
- (void)setSpeakerPhone:(BOOL)arg1;
- (void)setMicroPhoneMute:(BOOL)arg1;
- (void)updateConfig:(id)arg1 callback:(id /* block */)arg2;
- (void)mayRelease:(BOOL)arg1;
- (void)subscribeAll;
- (void)subscribeByUsername:(id)arg1 NeedBigVideo:(BOOL)arg2;
- (int)GetEncWidth:(int)arg1 rmtDispW:(int)arg2 rmtDispH:(int)arg3 mode:(int)arg4;
- (int)GetEncHeight:(int)arg1 rmtDispW:(int)arg2 rmtDispH:(int)arg3 mode:(int)arg4;
- (int)SetTestParam:(int)arg1 hwParam:(stCloudVHWParam *)arg2;
- (void)CloseCodec:(int)arg1 codecFlag:(int)arg2;
- (void)doQosCtrl:(BOOL)arg1;
- (int)sendVideoData:(void *)arg1;
- (int)sendVideoData:(char *)arg1 dataLen:(int)arg2 imgBuf:(__CVBuffer *)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6;
- (int)sendAudioData:(char *)arg1 length:(unsigned int)arg2;
- (int)sendVideoData:(char *)arg1 dataLen:(int)arg2 imgBuf:(__CVBuffer *)arg3 width:(int)arg4 height:(int)arg5;
- (int)sendScreenData:(void *)arg1;
- (void)onVideoFrame:(int)arg1 data:(const char *)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6;
- (void)switchVideoWithCameraEnabled:(BOOL)arg1 screenStatus:(int)arg2;
- (void)switchVideoToCamera;
- (void)switchVideoToScreen;
- (void)doVideoScreenSharingSecurityCheck:(id)arg1 fileId:(id)arg2;
- (void)switchVideoToScreenPaused;
- (void)stopVideo;
- (id)add_emulation_prevention_three_byte:(id)arg1;
- (id)appendSEIBuffer:(unsigned long long)arg1 msg:(id)arg2;
- (BOOL)sendMessageEx:(id)arg1;
- (id)getHEX:(id)arg1 limit:(int)arg2;
- (id)getLastSEIDataForLive;
- (int)gotEncodedData:(id)arg1 isKeyFrame:(BOOL)arg2 codecType:(int)arg3 encIdx:(int)arg4 isScreen:(BOOL)arg5;
- (int)gotXpsData:(id)arg1 codecType:(int)arg2 encIdx:(int)arg3 isScreen:(BOOL)arg4;
- (int)sendCustomVideoEncData:(id)arg1 width:(double)arg2 height:(double)arg3 frameType:(long long)arg4;
- (int)gotEncodeErrCode:(int)arg1 encIdx:(int)arg2;
- (void)exitLiveRoom;
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
- (int)joinroom:(id)arg1 wxGroupId:(id)arg2;
- (void)joinSync:(id)arg1 wxGroupId:(id)arg2;
- (void)joinimp:(id)arg1 wxGroupId:(id)arg2;
- (void)svrReport;
- (void)releaseDevice;
- (void)uninitEngine;
- (void)onTimerExpired;
- (void)renewTimer;
- (void)updateLiveRemoteStatus:(BOOL)arg1;
- (void)callIfNotNil:(id)arg1 errCode:(int)arg2 data:(id)arg3 callbackData:(id)arg4;
- (void)OnConfEvent:(int)arg1 errCode:(int)arg2 data:(id)arg3 callbackData:(id)arg4;
- (void).cxx_destruct;
@end

