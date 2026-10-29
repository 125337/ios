@interface PSTNMgr : MMUserService <IAUAudioDeviceExt, AUAudioDataSource, IPSTNSyncExt, ISysCallCheckExt, PBMessageObserverDelegate, INetworkStatusMgrExt, CNetworkStatusExt, MMServiceProtocol>
{
    int mStatus; // +0x8
    BOOL mIsInterrupted; // +0xc
    BOOL mIsCanConnect; // +0xd
    BOOL mIsConnected; // +0xe
    BOOL mIsCanTalk; // +0xf
    BOOL mIsTalked; // +0x10
    BOOL mIsEngineStarted; // +0x11
    BOOL mIsCanSendData; // +0x12
    BOOL mIsAudioStarted; // +0x13
    BOOL mIsRecordStarted; // +0x14
    BOOL mIsPreConnectFail; // +0x15
    BOOL mIsPSTNAnswer; // +0x16
    BOOL mIsPSTNAccepted; // +0x17
    unsigned int mLastNetworkStatus; // +0x18
    int mAudioCodecType; // +0x1c
    int mShutDownStatus; // +0x20
    BOOL mIsSpeaker; // +0x24
    unsigned int mLastNetType; // +0x28
    VOIPKernelLog * mPstnKernelLog; // +0x30
    int mErrCode; // +0x38
    int mCntTryStartAudioDev; // +0x3c
    unsigned int mInviteId; // +0x40
    PSTNDialData * mDialData; // +0x48
    PSTNComponent * mComponent; // +0x50
    AUAudioDevice * mAudioDevice; // +0x58
    NSRecursiveLock * mAudioEncLock; // +0x60
    NSRecursiveLock * mAudioDecLock; // +0x68
    NSRecursiveLock * mStartAudioLock; // +0x70
    NSRecursiveLock * mStartRecordLock; // +0x78
    NSRecursiveLock * inputVideoRenderLock; // +0x80
    MMTimer * mPSTNHeartbeatTimer; // +0x88
    MMTimer * mPSTNDialStatusTimer; // +0x90
    unsigned long long mLastDisconnectSysCallTime; // +0x98
    NSRecursiveLock * _mAudioPlayLock; // +0xa0
}
- (void)audioDevicePluginHeadset:(id)arg1;
- (void)audioDeviceUnPluginHeadset:(id)arg1;
- (void)audioDeviceStartedFail:(id)arg1;
- (void)EventNotify:(long long)arg1 param:(int)arg2 type:(int)arg3;
- (void)InfoNotify:(char *)arg1;
- (void)DataNotify:(char *)arg1 len:(int)arg2 param:(void *)arg3;
- (void)DataNotify_pp:(char *)arg1 len:(int)arg2 param:(short)arg3;
- (void)DataNotify_Arq:(char *)arg1 len:(int)arg2 type:(unsigned char)arg3;
- (int)OnTransportChannelData:(int)arg1 pData:(void *)arg2 len:(int)arg3;
- (int)AudioDevPutData:(char *)arg1 length:(unsigned int)arg2;
- (int)AudioDevGetData:(char *)arg1 length:(unsigned int)arg2;
- (void)tryStartTalk;
- (void)StartTalk;
- (void)StartRecordAndPlayAudioForVoip;
- (void)StartAudioDataInNewThread;
- (void)StartAudioData;
- (void)StopTalk;
- (void)TalkBroken:(id)arg1;
- (void)OnSyncError:(int)arg1;
- (void)OnGotDTMFPayloadType:(unsigned int)arg1;
- (void)OnGotRemoteStatus:(unsigned int)arg1 ErrNo:(int)arg2 ErrLevel:(int)arg3 ErrMsg:(id)arg4 ErrTitle:(id)arg5 DataFlag:(unsigned int)arg6;
- (void)InitAll;
- (void)UnInitAll;
- (void)HeartbeatTimerCheck;
- (void)DialStatusTimerCheck;
- (void)BeginInterruption;
- (void)EndInterruption;
- (void)restartAudioDevicePSTN;
- (void)OnSysCallState:(int)arg1 andCallId:(id)arg2;
- (void)interruptWcoCall;
- (void)handleEnterBackground;
- (void)handleEnterForeground;
- (void)StartSession;
- (void)StopSession;
- (void)StopSessionWithProtocolErr:(int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandlePSTNInviteResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandlePSTNCancelInviteResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandlePSTNShutdownResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandlePSTNHeartbeatResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandlePSTNStatReportResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandlePSTNRedirectResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandlePSTNCheckNumberResp:(id)arg1 Event:(unsigned int)arg2;
- (void)SetReportData:(id *)arg1 channelReport:(id *)arg2 engineReport:(id *)arg3;
- (void)SendInviteRequestBy:(id)arg1 phoneNum:(id)arg2 withCallType:(int)arg3 DialScene:(unsigned int)arg4 CountryCodeFrom:(unsigned int)arg5;
- (void)SendCancelInviteRequest;
- (void)SendShutdownRequest;
- (void)SendHeartbeatRequest;
- (void)SendStatReportRequest;
- (void)SendRedirectRequest;
- (void)SendCheckNumberRequest:(id)arg1;
- (void)tryStartConnect;
- (void)StartConnect;
- (void)StopConnect;
- (void)ConnectFail:(id)arg1;
- (void)onAcceptBydata;
- (int)OnTransportChannelCmd:(void *)arg1 len:(int)arg2;
- (int)OnTransportChannelEvent:(unsigned short)arg1 ErrNo:(int)arg2;
- (unsigned int)GetNetType;
- (int)GetCPUCapacity;
- (void)SetMVEInfo:(struct *)arg1;
- (id)init;
- (void)dealloc;
- (int)getNetSpeed;
- (void)PSTNCall:(id)arg1 phoneNum:(id)arg2 withCallType:(int)arg3 DialScene:(unsigned int)arg4 CountryCodeFrom:(unsigned int)arg5;
- (void)CancelCall;
- (void)Hangup;
- (void)PressButton:(int)arg1;
- (void)SetMicroPhoneMute:(BOOL)arg1;
- (void)SetSpeakerPhone:(BOOL)arg1;
- (void)SetCountryCode:(id)arg1;
- (void)SetAudioCodecType:(int)arg1;
- (unsigned int)getIsConnected;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)PstnCheckCountryCode:(id)arg1;
- (int)mStatus;
- (void)setMStatus:(int)arg1;
- (int)mErrCode;
- (void)setMErrCode:(int)arg1;
- (id)mDialData;
- (void)setMDialData:(id)arg1;
- (id)mComponent;
- (void)setMComponent:(id)arg1;
- (id)mAudioDevice;
- (void)setMAudioDevice:(id)arg1;
- (id)mAudioEncLock;
- (void)setMAudioEncLock:(id)arg1;
- (id)mAudioDecLock;
- (void)setMAudioDecLock:(id)arg1;
- (id)mStartAudioLock;
- (void)setMStartAudioLock:(id)arg1;
- (id)mStartRecordLock;
- (void)setMStartRecordLock:(id)arg1;
- (id)inputVideoRenderLock;
- (void)setInputVideoRenderLock:(id)arg1;
- (id)mPSTNHeartbeatTimer;
- (void)setMPSTNHeartbeatTimer:(id)arg1;
- (id)mPSTNDialStatusTimer;
- (void)setMPSTNDialStatusTimer:(id)arg1;
- (int)mCntTryStartAudioDev;
- (void)setMCntTryStartAudioDev:(int)arg1;
- (unsigned int)mInviteId;
- (void)setMInviteId:(unsigned int)arg1;
- (unsigned long long)mLastDisconnectSysCallTime;
- (void)setMLastDisconnectSysCallTime:(unsigned long long)arg1;
- (id)mAudioPlayLock;
- (void)setMAudioPlayLock:(id)arg1;
- (void).cxx_destruct;
@end

