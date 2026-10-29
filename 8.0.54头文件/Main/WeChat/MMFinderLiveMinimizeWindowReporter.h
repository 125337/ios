@interface MMFinderLiveMinimizeWindowReporter : NSObject
{
    id <MMFinderLiveMinimizeWindowReporterDelegate> _delegate; // +0x8
    unsigned long long _minimizeStartTime; // +0x10
    unsigned long long _lastPauseTime; // +0x18
    unsigned long long _pauseDuration; // +0x20
}
- (void)reportForStartMinimizeWindowFrom:(unsigned long long)arg1 sizeType:(unsigned long long)arg2 liveType:(unsigned long long)arg3;
- (void)reportForStopMinimizeWindowForLive:(unsigned long long)arg1;
- (void)reportForCloseMinimizeWindow;
- (id)audienceLogReporter;
- (void)onMinimizeWindowPause;
- (void)onMinimizeWindowResume;
- (void)clearLastDatas;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)minimizeStartTime;
- (void)setMinimizeStartTime:(unsigned long long)arg1;
- (unsigned long long)lastPauseTime;
- (void)setLastPauseTime:(unsigned long long)arg1;
- (unsigned long long)pauseDuration;
- (void)setPauseDuration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

