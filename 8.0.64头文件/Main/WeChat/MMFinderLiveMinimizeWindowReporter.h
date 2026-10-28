@interface MMFinderLiveMinimizeWindowReporter : NSObject
{
    id <MMFinderLiveMinimizeWindowReporterDelegate> _delegate; // +0x8
    unsigned long long _lastOpenType; // +0x10
    unsigned long long _minimizeStartTime; // +0x18
    unsigned long long _lastPauseTime; // +0x20
    unsigned long long _pauseDuration; // +0x28
}
- (void)reportForStartMinimizeWindowFrom:(unsigned long long)arg1 sizeType:(unsigned long long)arg2 liveType:(unsigned long long)arg3;
- (void)reportForStopMinimizeWindowForLive:(unsigned long long)arg1;
- (void)reportForCloseMinimizeWindow;
- (void)reportOnDismissLiveMinimizedWindowOverLiveVC;
- (void)reportOnMinimizeWindowPause;
- (void)reportOnMinimizeWindowResume;
- (void)reportAudioModeChangeToNextMode:(BOOL)arg1;
- (unsigned long long)getLastEnterMode;
- (id)audienceLogReporter;
- (void)onMinimizeWindowPause;
- (void)onMinimizeWindowResume;
- (void)onAudioModeChangeToNextMode:(BOOL)arg1;
- (void)clearLastDatas;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)lastOpenType;
- (void)setLastOpenType:(unsigned long long)arg1;
- (unsigned long long)minimizeStartTime;
- (void)setMinimizeStartTime:(unsigned long long)arg1;
- (unsigned long long)lastPauseTime;
- (void)setLastPauseTime:(unsigned long long)arg1;
- (unsigned long long)pauseDuration;
- (void)setPauseDuration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
