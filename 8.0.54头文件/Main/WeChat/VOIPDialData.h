@interface VOIPDialData : NSObject
{
    int mStrategy; // +0x8
    int mRoomMemberId; // +0xc
    int mLinkDisconnectHbInterval; // +0x10
    int mLinkDisconnectHbCnt; // +0x14
    int mEncryptLength; // +0x18
    int mARQStrategy; // +0x1c
    int mARQCacheLen; // +0x20
    int mARQRttThreshold; // +0x24
    int mARQUsedRateThreshold; // +0x28
    int mARQRespRateThreshold; // +0x2c
    int mEncryptStrategy; // +0x30
    int mRedirectReqThreshold; // +0x34
    int mBothSideGeneralSwitch; // +0x38
    int mQosStrategyVideo; // +0x3c
    int mQosStrategyAudio; // +0x40
    int mQosStrategyLink; // +0x44
    int mCSTcpStartCnt; // +0x48
    int mFECSvrCtr; // +0x4c
    int _mDataChannelType; // +0x50
    NSData * mLocalPid; // +0x58
    NSData * mLocalCapInfo; // +0x60
    NSData * mRemotePid; // +0x68
    NSData * mRemoteCapInfo; // +0x70
    unsigned long long mRoomId; // +0x78
    unsigned long long mRoomId64; // +0x80
    long long mRoomKey; // +0x88
    CContact * mContact; // +0x90
    NSString * mCaller; // +0x98
    NSData * mClientSigns; // +0xa0
    NSData * mRemoteDirectInfo; // +0xa8
    NSData * mEncryptKey; // +0xb0
    NSData * mBothSideGeneralStrategy; // +0xb8
    NSData * mGeneralStrategy; // +0xc0
    NSMutableArray * mRelaySvrIp; // +0xc8
    NSMutableArray * mRelaySvrIpStr; // +0xd0
    NSMutableArray * mRelaySvrPort; // +0xd8
    NSMutableArray * mPunchSvrIp; // +0xe0
    NSMutableArray * mPunchSvrPort; // +0xe8
    NSMutableArray * mTcpSvrIp; // +0xf0
    NSMutableArray * mTcpSvrPort; // +0xf8
    NSMutableArray * mTcpSvrIpStr; // +0x100
    NSMutableArray * mNatSvrAddr; // +0x108
    NSMutableArray * mRelayConns; // +0x110
    NSMutableArray * mDirectConns; // +0x118
    NSMutableArray * mNicWanApples; // +0x120
    NSMutableArray * mCSSvrIp; // +0x128
    NSMutableArray * mCSSvrPort; // +0x130
    NSMutableArray * mCSTcpSvrIp; // +0x138
    NSMutableArray * mCSTcpSvrPort; // +0x140
    NSData * mFECKeyPara1; // +0x148
    NSData * mFECKeyPara2; // +0x150
    struct * mAudioSvrParams; // +0x158
    NSMutableArray * _mPunchSvrIpStr; // +0x160
}
- (id)init;
- (void)dealloc;
- (void)SetRoomId:(unsigned long long)arg1;
- (void)SetRoomMemberId:(int)arg1;
- (void)SetRoomKey:(long long)arg1;
- (void)reset;
- (BOOL)isValidKey;
- (id)mLocalPid;
- (void)setMLocalPid:(id)arg1;
- (id)mLocalCapInfo;
- (void)setMLocalCapInfo:(id)arg1;
- (id)mRemotePid;
- (void)setMRemotePid:(id)arg1;
- (id)mRemoteCapInfo;
- (void)setMRemoteCapInfo:(id)arg1;
- (int)mStrategy;
- (void)setMStrategy:(int)arg1;
- (unsigned long long)mRoomId;
- (void)setMRoomId:(unsigned long long)arg1;
- (unsigned long long)mRoomId64;
- (void)setMRoomId64:(unsigned long long)arg1;
- (int)mRoomMemberId;
- (void)setMRoomMemberId:(int)arg1;
- (long long)mRoomKey;
- (void)setMRoomKey:(long long)arg1;
- (id)mContact;
- (void)setMContact:(id)arg1;
- (id)mCaller;
- (void)setMCaller:(id)arg1;
- (int)mLinkDisconnectHbInterval;
- (void)setMLinkDisconnectHbInterval:(int)arg1;
- (int)mLinkDisconnectHbCnt;
- (void)setMLinkDisconnectHbCnt:(int)arg1;
- (int)mEncryptLength;
- (void)setMEncryptLength:(int)arg1;
- (id)mClientSigns;
- (void)setMClientSigns:(id)arg1;
- (id)mRemoteDirectInfo;
- (void)setMRemoteDirectInfo:(id)arg1;
- (int)mARQStrategy;
- (void)setMARQStrategy:(int)arg1;
- (int)mARQCacheLen;
- (void)setMARQCacheLen:(int)arg1;
- (int)mARQRttThreshold;
- (void)setMARQRttThreshold:(int)arg1;
- (int)mARQUsedRateThreshold;
- (void)setMARQUsedRateThreshold:(int)arg1;
- (int)mARQRespRateThreshold;
- (void)setMARQRespRateThreshold:(int)arg1;
- (int)mEncryptStrategy;
- (void)setMEncryptStrategy:(int)arg1;
- (id)mEncryptKey;
- (void)setMEncryptKey:(id)arg1;
- (int)mRedirectReqThreshold;
- (void)setMRedirectReqThreshold:(int)arg1;
- (int)mBothSideGeneralSwitch;
- (void)setMBothSideGeneralSwitch:(int)arg1;
- (id)mBothSideGeneralStrategy;
- (void)setMBothSideGeneralStrategy:(id)arg1;
- (id)mGeneralStrategy;
- (void)setMGeneralStrategy:(id)arg1;
- (int)mQosStrategyVideo;
- (void)setMQosStrategyVideo:(int)arg1;
- (int)mQosStrategyAudio;
- (void)setMQosStrategyAudio:(int)arg1;
- (int)mQosStrategyLink;
- (void)setMQosStrategyLink:(int)arg1;
- (id)mRelaySvrIp;
- (void)setMRelaySvrIp:(id)arg1;
- (id)mRelaySvrIpStr;
- (void)setMRelaySvrIpStr:(id)arg1;
- (id)mRelaySvrPort;
- (void)setMRelaySvrPort:(id)arg1;
- (id)mPunchSvrIp;
- (void)setMPunchSvrIp:(id)arg1;
- (id)mPunchSvrPort;
- (void)setMPunchSvrPort:(id)arg1;
- (id)mTcpSvrIp;
- (void)setMTcpSvrIp:(id)arg1;
- (id)mTcpSvrPort;
- (void)setMTcpSvrPort:(id)arg1;
- (id)mTcpSvrIpStr;
- (void)setMTcpSvrIpStr:(id)arg1;
- (id)mNatSvrAddr;
- (void)setMNatSvrAddr:(id)arg1;
- (id)mRelayConns;
- (void)setMRelayConns:(id)arg1;
- (id)mDirectConns;
- (void)setMDirectConns:(id)arg1;
- (id)mNicWanApples;
- (void)setMNicWanApples:(id)arg1;
- (id)mCSSvrIp;
- (void)setMCSSvrIp:(id)arg1;
- (id)mCSSvrPort;
- (void)setMCSSvrPort:(id)arg1;
- (id)mCSTcpSvrIp;
- (void)setMCSTcpSvrIp:(id)arg1;
- (id)mCSTcpSvrPort;
- (void)setMCSTcpSvrPort:(id)arg1;
- (int)mCSTcpStartCnt;
- (void)setMCSTcpStartCnt:(int)arg1;
- (int)mFECSvrCtr;
- (void)setMFECSvrCtr:(int)arg1;
- (id)mFECKeyPara1;
- (void)setMFECKeyPara1:(id)arg1;
- (id)mFECKeyPara2;
- (void)setMFECKeyPara2:(id)arg1;
- (struct *)mAudioSvrParams;
- (void)setMAudioSvrParams:(struct *)arg1;
- (id)mPunchSvrIpStr;
- (void)setMPunchSvrIpStr:(id)arg1;
- (int)mDataChannelType;
- (void)setMDataChannelType:(int)arg1;
- (void).cxx_destruct;
@end

