@interface PSTNDialData : NSObject
{
    int mRoomId; // +0x8
    int mRoomMemberId; // +0xc
    int mCallType; // +0x10
    int mLinkDisconnectHbInterval; // +0x14
    int mLinkDisconnectHbCnt; // +0x18
    int mInviteRet; // +0x1c
    int mIsGotRing; // +0x20
    int mIsGotAnswer; // +0x24
    int mIsGotShutdown; // +0x28
    int mIsSendCancel; // +0x2c
    int mIsSendShutdown; // +0x30
    int mEncryptLength; // +0x34
    int mSwitchTcpPktCnt; // +0x38
    int mEncryptStrategy; // +0x3c
    unsigned int mKeypadNumberClickCount; // +0x40
    unsigned int mCallFlag; // +0x44
    long long mRoomKey; // +0x48
    CContact * mContact; // +0x50
    NSString * mCaller; // +0x58
    NSString * mPhoneNum; // +0x60
    NSString * mRetPhoneNumber; // +0x68
    long long mCallSeq; // +0x70
    NSMutableArray * mRelaySvrIp; // +0x78
    NSMutableArray * mRelaySvrPort; // +0x80
    NSMutableArray * mPunchSvrIp; // +0x88
    NSMutableArray * mPunchSvrPort; // +0x90
    NSMutableArray * mRelayTcpSvrIp; // +0x98
    NSMutableArray * mRelayTcpSvrPort; // +0xa0
    unsigned long long mInviteTime; // +0xa8
    unsigned long long mRingRecvTime; // +0xb0
    unsigned long long mAnswerRecvTime; // +0xb8
    unsigned long long mStopTalkTime; // +0xc0
    unsigned long long mConnectTime; // +0xc8
    unsigned long long mCancelTime; // +0xd0
    NSData * mClientSigns; // +0xd8
    NSString * mCountryCode; // +0xe0
    NSData * mEncryptKey; // +0xe8
}
- (id)init;
- (void)dealloc;
- (void)SetRoomId:(int)arg1;
- (void)SetRoomMemberId:(int)arg1;
- (void)SetRoomKey:(long long)arg1;
- (void)reset;
- (BOOL)isValidKey;
- (int)mRoomId;
- (void)setMRoomId:(int)arg1;
- (int)mRoomMemberId;
- (void)setMRoomMemberId:(int)arg1;
- (long long)mRoomKey;
- (void)setMRoomKey:(long long)arg1;
- (id)mContact;
- (void)setMContact:(id)arg1;
- (id)mCaller;
- (void)setMCaller:(id)arg1;
- (int)mCallType;
- (void)setMCallType:(int)arg1;
- (id)mPhoneNum;
- (void)setMPhoneNum:(id)arg1;
- (id)mRetPhoneNumber;
- (void)setMRetPhoneNumber:(id)arg1;
- (int)mLinkDisconnectHbInterval;
- (void)setMLinkDisconnectHbInterval:(int)arg1;
- (int)mLinkDisconnectHbCnt;
- (void)setMLinkDisconnectHbCnt:(int)arg1;
- (long long)mCallSeq;
- (void)setMCallSeq:(long long)arg1;
- (id)mRelaySvrIp;
- (void)setMRelaySvrIp:(id)arg1;
- (id)mRelaySvrPort;
- (void)setMRelaySvrPort:(id)arg1;
- (id)mPunchSvrIp;
- (void)setMPunchSvrIp:(id)arg1;
- (id)mPunchSvrPort;
- (void)setMPunchSvrPort:(id)arg1;
- (id)mRelayTcpSvrIp;
- (void)setMRelayTcpSvrIp:(id)arg1;
- (id)mRelayTcpSvrPort;
- (void)setMRelayTcpSvrPort:(id)arg1;
- (int)mInviteRet;
- (void)setMInviteRet:(int)arg1;
- (int)mIsGotRing;
- (void)setMIsGotRing:(int)arg1;
- (int)mIsGotAnswer;
- (void)setMIsGotAnswer:(int)arg1;
- (int)mIsGotShutdown;
- (void)setMIsGotShutdown:(int)arg1;
- (int)mIsSendCancel;
- (void)setMIsSendCancel:(int)arg1;
- (int)mIsSendShutdown;
- (void)setMIsSendShutdown:(int)arg1;
- (unsigned long long)mInviteTime;
- (void)setMInviteTime:(unsigned long long)arg1;
- (unsigned long long)mRingRecvTime;
- (void)setMRingRecvTime:(unsigned long long)arg1;
- (unsigned long long)mAnswerRecvTime;
- (void)setMAnswerRecvTime:(unsigned long long)arg1;
- (unsigned long long)mStopTalkTime;
- (void)setMStopTalkTime:(unsigned long long)arg1;
- (unsigned long long)mConnectTime;
- (void)setMConnectTime:(unsigned long long)arg1;
- (unsigned long long)mCancelTime;
- (void)setMCancelTime:(unsigned long long)arg1;
- (int)mEncryptLength;
- (void)setMEncryptLength:(int)arg1;
- (id)mClientSigns;
- (void)setMClientSigns:(id)arg1;
- (int)mSwitchTcpPktCnt;
- (void)setMSwitchTcpPktCnt:(int)arg1;
- (id)mCountryCode;
- (void)setMCountryCode:(id)arg1;
- (int)mEncryptStrategy;
- (void)setMEncryptStrategy:(int)arg1;
- (id)mEncryptKey;
- (void)setMEncryptKey:(id)arg1;
- (unsigned int)mKeypadNumberClickCount;
- (void)setMKeypadNumberClickCount:(unsigned int)arg1;
- (unsigned int)mCallFlag;
- (void)setMCallFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end
