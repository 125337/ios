@interface SendPatReportObject : NSObject
{
    BOOL _createNewChat; // +0x8
    BOOL _exposeSetSuffixEducation; // +0x9
    int _errorCode; // +0xc
    SendPatWrap * _sendPatWrap; // +0x10
    unsigned long long _patTime; // +0x18
    unsigned long long _timeInterval; // +0x20
    unsigned long long _patIndex; // +0x28
    unsigned long long _revokeType; // +0x30
}
- (void)prepareReport;
- (void)reportFromHitFrequencyLimit;
- (void)reportFromServerReturn:(int)arg1;
- (void)reportFromCancelSendingRevokeAction:(unsigned long long)arg1;
- (void)reportFromReturnCode:(int)arg1 reportType:(unsigned long long)arg2 andRevokeAction:(unsigned long long)arg3;
- (id)sendPatWrap;
- (void)setSendPatWrap:(id)arg1;
- (unsigned long long)patTime;
- (void)setPatTime:(unsigned long long)arg1;
- (unsigned long long)timeInterval;
- (void)setTimeInterval:(unsigned long long)arg1;
- (int)errorCode;
- (void)setErrorCode:(int)arg1;
- (unsigned long long)patIndex;
- (void)setPatIndex:(unsigned long long)arg1;
- (BOOL)createNewChat;
- (void)setCreateNewChat:(BOOL)arg1;
- (unsigned long long)revokeType;
- (void)setRevokeType:(unsigned long long)arg1;
- (BOOL)exposeSetSuffixEducation;
- (void)setExposeSetSuffixEducation:(BOOL)arg1;
- (void).cxx_destruct;
@end
