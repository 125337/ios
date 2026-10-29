@interface WCFinderPIPMgrHelper : MMUserService <MMServiceProtocol>
{
    BOOL _hasReportedBackground; // +0x8
    BOOL _hasReportedForeground; // +0x9
    double _startTotalPlaybackTime; // +0x10
    double _currentTotalPlaybackTime; // +0x18
    NSMutableDictionary * _timeDic; // +0x20
}
- (id)init;
- (double)currentTotalPlaybackTime;
- (void)setStartTime:(double)arg1;
- (void)resetTotalTime;
- (void)addTotalTime:(double)arg1 tid:(id)arg2;
- (BOOL)hasReportedBackground;
- (void)setHasReportedBackground:(BOOL)arg1;
- (BOOL)hasReportedForeground;
- (void)setHasReportedForeground:(BOOL)arg1;
- (double)startTotalPlaybackTime;
- (void)setStartTotalPlaybackTime:(double)arg1;
- (void)setCurrentTotalPlaybackTime:(double)arg1;
- (id)timeDic;
- (void)setTimeDic:(id)arg1;
- (void).cxx_destruct;
@end
