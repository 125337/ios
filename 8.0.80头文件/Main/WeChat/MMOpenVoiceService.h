@interface MMOpenVoiceService : MMUserService <ISysCallCheckExt, MonoServiceLogicExt, MMConfSDKVideoHWencDelegate, WCAudioModuleDelegate, MonoServiceMsgLogicDelegate, VoIPConfSDKNativeCallbackMgrDelegate, MMOpenVoiceAudioMgrDelegate, MMServiceProtocol>
{
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x8
    MMOpenVoiceSessionMgr * _sessionMgr; // +0x10
    MMOpenVoiceMemberMgr * _memberMgr; // +0x18
    MMOpenVoiceAudioMgr * _audioMgr; // +0x20
    MMOpenVoiceVideoMgr * _videoMgr; // +0x28
    MMOpenVoiceNetworkMgr * _networkMgr; // +0x30
    MMOpenVoiceJoinRoomCGIImp * _joinRoomImp; // +0x38
    VoIPConfSDKNativeCallbackMgr * voipCallbackMgr; // +0x40
    MMOpenVoiceRecorder * _recorder; // +0x48
    IConfSDKRegisterableCallbackHolder * joinSucc; // +0x50
    IConfSDKRegisterableCallbackHolder * joinFail; // +0x58
    IConfSDKRegisterableCallbackHolder * talkSucc; // +0x60
    IConfSDKRegisterableCallbackHolder * talkFail; // +0x68
    IConfSDKRegisterableCallbackHolder * callBroken; // +0x70
    IConfSDKRegisterableCallbackHolder * callExit; // +0x78
    IConfSDKRegisterableCallbackHolder * sessionExpiredCallback; // +0x80
    IConfSDKRegisterableCallbackHolder * memberChange; // +0x88
    IConfSDKRegisterableCallbackHolder * videoMemberChange; // +0x90
    IConfSDKRegisterableCallbackHolder * receiveCmdMsg; // +0x98
    id /* block */ _currentInterruptedCallback; // +0xa0
    id /* block */ _currentMemberChangeCallback; // +0xa8
    id /* block */ _currentVideoMemberChangeCallback; // +0xb0
    id /* block */ _currentSpeakerChangedCallback; // +0xb8
    id /* block */ _currentReceiveCmdMsg; // +0xc0
    id /* block */ _currentEventCallback; // +0xc8
    int _currentStatus; // +0xd0
    BOOL _isQuitingRoom; // +0xd4
    NSString * _currentAppId; // +0xd8
    NSString * _busiAppId; // +0xe0
    NSString * _privateData; // +0xe8
    int _exitReason; // +0xf0
    BOOL _isJoiningRoom; // +0xf4
    BOOL _isInit; // +0xf5
    BOOL _isRequireExit; // +0xf6
    id /* block */ _pendingExitCallback; // +0xf8
    BOOL _isSyncJoinDone; // +0x100
    BOOL _isCallbackJoinDone; // +0x101
    BOOL _isCallbackTalkDone; // +0x102
    BOOL _isCameraStarted; // +0x103
    BOOL _isMicStarted; // +0x104
    BOOL _isHandsFree; // +0x105
    BOOL _isScreenStarted; // +0x106
    BOOL _isForceCellularNetwork; // +0x107
    long long _roomId; // +0x108
    int _audioType; // +0x110
    int _roomType; // +0x114
    int _maxWidth; // +0x118
    int _maxHeight; // +0x11c
    int _videoRatio; // +0x120
    int _videoConfig; // +0x124
    int _fixedVideoResolution; // +0x128
    int _maxDecodeFPS; // +0x12c
    int _hwEncStatus; // +0x130
    int _capW; // +0x134
    int _capH; // +0x138
    int[2] _encStatusList; // +0x13c
    BOOL _isSWEncUsing; // +0x144
    int _capStatus; // +0x148
    MMConfSDKVideoHWenc *[2] _hwEncoderList; // +0x150
    __CVBuffer * _encodePixelBuffer; // +0x160
    int _lastEncodePlaneWidth; // +0x168
    int _lastEncodePlaneHeight; // +0x16c
    int _encodeWidth; // +0x170
    int _encodeHeight; // +0x174
    int _first5Frames; // +0x178
    int _expectedRatio; // +0x17c
    BOOL _enable720pCapture; // +0x180
    BOOL _enableDirectRendering; // +0x181
}
- (id)init;
- (void)dealloc;
- (void)OnSysCallState:(int)arg1 andCallId:(id)arg2;
- (void)onServiceTerminate;
- (void)setAudioActive:(BOOL)arg1;
- (BOOL)isMonoServiceUIExist;
- (BOOL)isMonoServiceUIWorking;
- (BOOL)isMonoServiceCheckingServer;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (BOOL)resolveExternalConflicts;
- (void)joinConference:(id)arg1 joinCallback:(id /* block */)arg2 interruptedCallback:(id /* block */)arg3 memberChangeCallback:(id /* block */)arg4 videoMemberChangeCallback:(id /* block */)arg5 speakerChangeCallback:(id /* block */)arg6 receiveCmdMsgCallback:(id /* block */)arg7 eventCallback:(id /* block */)arg8;
- (void)joinConferenceSync:(id)arg1 joinCallback:(id /* block */)arg2 interruptedCallback:(id /* block */)arg3 memberChangeCallback:(id /* block */)arg4 videoMemberChangeCallback:(id /* block */)arg5 speakerChangeCallback:(id /* block */)arg6 receiveCmdMsgCallback:(id /* block */)arg7 eventCallback:(id /* block */)arg8;
- (void)join1v1Conference:(id)arg1 joinCallback:(id /* block */)arg2 interruptedCallback:(id /* block */)arg3 memberChangeCallback:(id /* block */)arg4 videoMemberChangeCallback:(id /* block */)arg5 speakerChangeCallback:(id /* block */)arg6 eventCallback:(id /* block */)arg7;
- (void)join1v1ConferenceSync:(id)arg1 joinCallback:(id /* block */)arg2 interruptedCallback:(id /* block */)arg3 memberChangeCallback:(id /* block */)arg4 videoMemberChangeCallback:(id /* block */)arg5 speakerChangeCallback:(id /* block */)arg6 eventCallback:(id /* block */)arg7;
- (id)minimizationHostForAppid:(id)arg1;
- (void)joinRoomImp:(id)arg1 groupId:(id)arg2 nonceStr:(id)arg3 timeStamp:(int)arg4 joinRoomCallback:(id /* block */)arg5 shouldMuteMicroPhone:(BOOL)arg6;
- (void)furtherJoinCheck:(long long)arg1 IOpenVoiceCallback:(id /* block */)arg2 shouldMuteMicroPhone:(BOOL)arg3;
- (void)setUpLongTermCallbackAfterJoin;
- (void)tryTriggerSucc:(id /* block */)arg1 shouldMuteMicroPhone:(BOOL)arg2;
- (void)callbackDeviceStartFailed:(id /* block */)arg1 errCode:(int)arg2;
- (void)suspendByExitRequest:(id /* block */)arg1;
- (void)cleanUpJoinStatus;
- (void)startListenNetworkChange;
- (void)stopListenNetworkChange;
- (int)initWithSession:(id)arg1;
- (void)callbackJoinConference:(id /* block */)arg1 errType:(int)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (BOOL)isVoIPWorking;
- (BOOL)isVideoVoIPWorking;
- (BOOL)isVoIPWorkingForAppId:(id)arg1;
- (BOOL)isVoIPMuteMicroPhoneForAppId:(id)arg1;
- (void)showConflictAlertForVoIP;
- (id)getConflictWording;
- (void)pauseCameraIfInVideoRoom;
- (void)resumeCameraIfInVideoRoom;
- (void)exitConference:(id /* block */)arg1;
- (void)exitConference:(id /* block */)arg1 reason:(int)arg2;
- (int)convertReason:(int)arg1;
- (int)exitConferenceSyncWithReason:(int)arg1;
- (void)cleanUpLongTermCallbacks;
- (void)subscribe:(id)arg1 callback:(id /* block */)arg2;
- (void)updateConfig:(id)arg1 callback:(id /* block */)arg2;
- (void)mayRelease;
- (int)resetSync;
- (void)insertView:(id)arg1 callback:(id /* block */)arg2;
- (void)updateView:(id)arg1 callback:(id /* block */)arg2;
- (void)removeView:(id)arg1 callback:(id /* block */)arg2;
- (long long)getCurrentRoomId;
- (BOOL)getEnable720pCapture;
- (void)checkEnable720pCapture;
- (int)GetEncWidth:(int)arg1 rmtDispW:(int)arg2 rmtDispH:(int)arg3 mode:(int)arg4;
- (void)CloseCodec:(int)arg1 codecFlag:(int)arg2;
- (BOOL)doQosCtrl:(int)arg1;
- (void)onVideoCapture:(__CVBuffer *)arg1 orien:(int)arg2;
- (void)onVideoFrame:(int)arg1 data:(const char *)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6;
- (void)onCameraSwitch:(BOOL)arg1;
- (void)onMicSwitch:(BOOL)arg1;
- (void)onAudioData:(char *)arg1 length:(unsigned int)arg2 timestamp:(double)arg3;
- (void)onLocalAudioData:(char *)arg1 length:(unsigned int)arg2 timestamp:(double)arg3;
- (int)gotEncodedData:(id)arg1 isKeyFrame:(BOOL)arg2 codecType:(int)arg3 encIdx:(int)arg4 isScreen:(BOOL)arg5;
- (int)gotXpsData:(id)arg1 codecType:(int)arg2 encIdx:(int)arg3 isScreen:(BOOL)arg4;
- (int)gotEncodeErrCode:(int)arg1 encIdx:(int)arg2;
- (void)forceExitRoom:(int)arg1;
- (void)notifyEventCallback:(int)arg1 data:(id)arg2;
- (int)sendCmdData:(id)arg1 targetMemberId:(int)arg2;
- (void)callIfNotNil:(id)arg1 errCode:(int)arg2 data:(id)arg3 callbackData:(id)arg4;
- (void)OnConfEvent:(int)arg1 errCode:(int)arg2 data:(id)arg3 callbackData:(id)arg4;
- (void)takeSnapshotWithOpenId:(id)arg1 complete:(id /* block */)arg2;
- (void)startRecordWithOpenId:(id)arg1 recordMode:(long long)arg2 shouldSaveRecordFile:(long long)arg3 extraData:(id)arg4 complete:(id /* block */)arg5;
- (void)stopRecordWithOpenId:(id)arg1 args:(id)arg2 complete:(id /* block */)arg3;
- (void)setBackgroundEffectMode:(id)arg1 mode:(int)arg2 enable:(BOOL)arg3 complete:(id /* block */)arg4;
- (void)requestFullScreenWithOpenId:(id)arg1 direction:(int)arg2 complete:(id /* block */)arg3;
- (void)exitFullScreenWithOpenId:(id)arg1 complete:(id /* block */)arg2;
- (BOOL)enable720pCapture;
- (void)setEnable720pCapture:(BOOL)arg1;
- (BOOL)enableDirectRendering;
- (void)setEnableDirectRendering:(BOOL)arg1;
- (void).cxx_destruct;
@end
