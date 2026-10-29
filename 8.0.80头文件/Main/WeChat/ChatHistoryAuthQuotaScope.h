@interface ChatHistoryAuthQuotaScope : NSObject
{
    BOOL _applies; // +0x8
    unsigned int _startTime; // +0xc
    unsigned int _endTime; // +0x10
    long long _limitPerSession; // +0x18
}
- (BOOL)applies;
- (void)setApplies:(BOOL)arg1;
- (unsigned int)startTime;
- (void)setStartTime:(unsigned int)arg1;
- (unsigned int)endTime;
- (void)setEndTime:(unsigned int)arg1;
- (long long)limitPerSession;
- (void)setLimitPerSession:(long long)arg1;
@end
