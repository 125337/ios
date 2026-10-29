@interface WCTimelineSessionStatItem : MMObject <NSCopying>
{
    BOOL _lastStayed; // +0x8
    BOOL _isReport; // +0x9
    unsigned int _pId; // +0xc
    unsigned int _seq; // +0x10
    unsigned int _scrollTotalCount; // +0x14
    unsigned int _scrollErrorCount; // +0x18
    NSString * _pName; // +0x20
    NSString * _sessionId; // +0x28
    NSString * _formSessionId; // +0x30
    unsigned long long _frontTime; // +0x38
    unsigned long long _scrollTotalTime; // +0x40
    unsigned long long _stayTotalTime; // +0x48
    NSMutableDictionary * _reportFeedDic; // +0x50
    unsigned long long _lastEnterTimelinePageTime; // +0x58
    unsigned long long _lastExitTimelinePageTime; // +0x60
    unsigned long long _lastCalcTime; // +0x68
    double _lastCalcOffsetY; // +0x70
    unsigned long long _lastCalcOffsetTime; // +0x78
    unsigned long long _scrollTotalCostTime; // +0x80
    unsigned long long _scrollOriginalTotalCostTime; // +0x88
    NSMutableArray * _adSessionIDs; // +0x90
    NSMutableArray * _nextPageLocations; // +0x98
}
- (id)init;
- (id)toString;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned int)pId;
- (void)setPId:(unsigned int)arg1;
- (id)pName;
- (void)setPName:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)formSessionId;
- (void)setFormSessionId:(id)arg1;
- (unsigned int)seq;
- (void)setSeq:(unsigned int)arg1;
- (unsigned long long)frontTime;
- (void)setFrontTime:(unsigned long long)arg1;
- (unsigned long long)scrollTotalTime;
- (void)setScrollTotalTime:(unsigned long long)arg1;
- (unsigned long long)stayTotalTime;
- (void)setStayTotalTime:(unsigned long long)arg1;
- (id)reportFeedDic;
- (void)setReportFeedDic:(id)arg1;
- (unsigned long long)lastEnterTimelinePageTime;
- (void)setLastEnterTimelinePageTime:(unsigned long long)arg1;
- (unsigned long long)lastExitTimelinePageTime;
- (void)setLastExitTimelinePageTime:(unsigned long long)arg1;
- (unsigned long long)lastCalcTime;
- (void)setLastCalcTime:(unsigned long long)arg1;
- (double)lastCalcOffsetY;
- (void)setLastCalcOffsetY:(double)arg1;
- (unsigned long long)lastCalcOffsetTime;
- (void)setLastCalcOffsetTime:(unsigned long long)arg1;
- (BOOL)lastStayed;
- (void)setLastStayed:(BOOL)arg1;
- (BOOL)isReport;
- (void)setIsReport:(BOOL)arg1;
- (unsigned long long)scrollTotalCostTime;
- (void)setScrollTotalCostTime:(unsigned long long)arg1;
- (unsigned long long)scrollOriginalTotalCostTime;
- (void)setScrollOriginalTotalCostTime:(unsigned long long)arg1;
- (unsigned int)scrollTotalCount;
- (void)setScrollTotalCount:(unsigned int)arg1;
- (unsigned int)scrollErrorCount;
- (void)setScrollErrorCount:(unsigned int)arg1;
- (id)adSessionIDs;
- (void)setAdSessionIDs:(id)arg1;
- (id)nextPageLocations;
- (void)setNextPageLocations:(id)arg1;
- (void).cxx_destruct;
@end

