@interface RevokePatReportObject : NSObject
{
    SendPatWrap * _sendPatWrap; // +0x8
    PatWrap * _patWrap; // +0x10
    NSString * _chatUserName; // +0x18
    unsigned long long _revokeType; // +0x20
    unsigned long long _revokeTime; // +0x28
}
- (void)reportFromResult:(BOOL)arg1 andAction:(unsigned long long)arg2;
- (void)reportFromSendPat:(id)arg1 result:(BOOL)arg2 action:(unsigned long long)arg3;
- (void)reportFromPat:(id)arg1 chat:(id)arg2 result:(BOOL)arg3 action:(unsigned long long)arg4;
- (id)sendPatWrap;
- (void)setSendPatWrap:(id)arg1;
- (id)patWrap;
- (void)setPatWrap:(id)arg1;
- (id)chatUserName;
- (void)setChatUserName:(id)arg1;
- (unsigned long long)revokeType;
- (void)setRevokeType:(unsigned long long)arg1;
- (unsigned long long)revokeTime;
- (void)setRevokeTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

