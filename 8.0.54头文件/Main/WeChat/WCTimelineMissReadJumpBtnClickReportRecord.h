@interface WCTimelineMissReadJumpBtnClickReportRecord : MMObject
{
    unsigned int _jumpBtnId; // +0x8
    unsigned int _jumpSkipCount; // +0xc
    unsigned int _jumpItemCreatTimeToNowInterval; // +0x10
    NSString * _sessionId; // +0x18
    unsigned long long _missReadRecordId; // +0x20
    long long _isJumpToFirstMissReadRecord; // +0x28
    NSArray * _missReadFeedIds; // +0x30
    NSMutableArray * _exposureFeedIds; // +0x38
}
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned int)jumpBtnId;
- (void)setJumpBtnId:(unsigned int)arg1;
- (unsigned long long)missReadRecordId;
- (void)setMissReadRecordId:(unsigned long long)arg1;
- (long long)isJumpToFirstMissReadRecord;
- (void)setIsJumpToFirstMissReadRecord:(long long)arg1;
- (unsigned int)jumpSkipCount;
- (void)setJumpSkipCount:(unsigned int)arg1;
- (id)missReadFeedIds;
- (void)setMissReadFeedIds:(id)arg1;
- (id)exposureFeedIds;
- (void)setExposureFeedIds:(id)arg1;
- (unsigned int)jumpItemCreatTimeToNowInterval;
- (void)setJumpItemCreatTimeToNowInterval:(unsigned int)arg1;
- (void).cxx_destruct;
@end

