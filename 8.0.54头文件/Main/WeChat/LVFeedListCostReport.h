@interface LVFeedListCostReport : NSObject
{
    BOOL _isFromPreload; // +0x8
    BOOL _isShowBeforeEnter; // +0x9
    BOOL _watchLaterCountWhenShow; // +0xa
    BOOL _feedCountWhenShow; // +0xb
    NSString * _sessionId; // +0x10
    unsigned long long _enterTime; // +0x18
    unsigned long long _timeCost; // +0x20
    unsigned long long _exitTimeCost; // +0x28
}
- (unsigned int)logId;
- (void)markEnter;
- (void)markShow:(BOOL)arg1 watchLaterCount:(long long)arg2 feedCount:(long long)arg3;
- (void)markExit;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (unsigned long long)timeCost;
- (void)setTimeCost:(unsigned long long)arg1;
- (BOOL)isFromPreload;
- (void)setIsFromPreload:(BOOL)arg1;
- (unsigned long long)exitTimeCost;
- (void)setExitTimeCost:(unsigned long long)arg1;
- (BOOL)isShowBeforeEnter;
- (void)setIsShowBeforeEnter:(BOOL)arg1;
- (BOOL)watchLaterCountWhenShow;
- (void)setWatchLaterCountWhenShow:(BOOL)arg1;
- (BOOL)feedCountWhenShow;
- (void)setFeedCountWhenShow:(BOOL)arg1;
- (void).cxx_destruct;
@end

