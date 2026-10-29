@interface BizTLResortEventInfo : NSObject
{
    int _unreadMsgCount; // +0x8
    int _unExposeMsgCount; // +0xc
    int _unValidExposeMsgCount; // +0x10
    int _covBoxIndex; // +0x14
    int _digestMsgIdx; // +0x18
    long long _sessionId; // +0x20
    NSArray * _unreadMsgTimeStampList; // +0x28
    long long _digestMsgBizUin; // +0x30
    long long _digestMsgId; // +0x38
    NSString * _digestWording; // +0x40
}
+ (id)initWithSessionId:(long long)arg1;
+ (id)initWithSessionId:(long long)arg1 unreadMsgCount:(int)arg2 unExposeMsgCount:(int)arg3 unValidExposeMsgCount:(int)arg4 unreadMsgTimeStampList:(id)arg5 covBoxIndex:(int)arg6 digestMsgBizUin:(long long)arg7 digestMsgId:(long long)arg8 digestMsgIdx:(int)arg9 digestWording:(id)arg10;
- (long long)sessionId;
- (void)setSessionId:(long long)arg1;
- (int)unreadMsgCount;
- (void)setUnreadMsgCount:(int)arg1;
- (int)unExposeMsgCount;
- (void)setUnExposeMsgCount:(int)arg1;
- (int)unValidExposeMsgCount;
- (void)setUnValidExposeMsgCount:(int)arg1;
- (id)unreadMsgTimeStampList;
- (void)setUnreadMsgTimeStampList:(id)arg1;
- (int)covBoxIndex;
- (void)setCovBoxIndex:(int)arg1;
- (long long)digestMsgBizUin;
- (void)setDigestMsgBizUin:(long long)arg1;
- (long long)digestMsgId;
- (void)setDigestMsgId:(long long)arg1;
- (int)digestMsgIdx;
- (void)setDigestMsgIdx:(int)arg1;
- (id)digestWording;
- (void)setDigestWording:(id)arg1;
- (void).cxx_destruct;
@end

