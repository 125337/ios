@interface WCAdFinderLiveStreamReportInfo : NSObject
{
    BOOL _joinLiveFlag; // +0x8
    unsigned int _joinLiveStartTimestamp; // +0xc
    unsigned int _joinLiveEndTimestamp; // +0x10
    long long _playStartTimestampMs; // +0x18
    long long _totalPlayTimeMs; // +0x20
}
- (void)recordPlayStart;
- (void)recordPlayEnd;
- (long long)fetchTotalPlayTimeMs;
- (void)processBeforeReport;
- (BOOL)joinLiveFlag;
- (void)setJoinLiveFlag:(BOOL)arg1;
- (unsigned int)joinLiveStartTimestamp;
- (void)setJoinLiveStartTimestamp:(unsigned int)arg1;
- (unsigned int)joinLiveEndTimestamp;
- (void)setJoinLiveEndTimestamp:(unsigned int)arg1;
- (long long)playStartTimestampMs;
- (void)setPlayStartTimestampMs:(long long)arg1;
- (long long)totalPlayTimeMs;
- (void)setTotalPlayTimeMs:(long long)arg1;
@end

