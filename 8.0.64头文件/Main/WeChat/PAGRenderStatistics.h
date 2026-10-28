@interface PAGRenderStatistics : NSObject
{
    BOOL _useStrategy; // +0x8
    BOOL _isTargetViewPlaying; // +0x9
    long long _liveUserType; // +0x10
    MMLiveTaskId * _liveTaskId; // +0x18
    long long _pagModuleType; // +0x20
    long long _perfMode; // +0x28
    long long _frameTime; // +0x30
    long long _avgFrameTime; // +0x38
    double _avgFrameTimeFp; // +0x40
    long long _recent3AvgFrameTime; // +0x48
    double _time; // +0x50
    NSMutableArray * _frames; // +0x58
    NSMutableArray * _recentStatisticResults; // +0x60
    long long _worstAnalysisRet; // +0x68
    NSRecursiveLock * _actionLock; // +0x70
    double _lastTargetPAGPlayTime; // +0x78
    double _lastTargetPAGPlayInterval; // +0x80
}
+ (void)setPagTargetView:(void *)arg1;
+ (void *)getPagTargetView;
+ (void)setRfxTargetView:(void *)arg1;
+ (void *)getRfxTargetView;
- (id)init;
- (void)handleFrameTime:(double)arg1;
- (long long)analyzeCurrentFrameTime;
- (double)avg;
- (double)recent3FramesTime;
- (void)updatePerfMode:(long long)arg1;
- (void)updateTargetViewIsPlaying:(BOOL)arg1;
- (void)onTargetViewPlayingChanged;
- (void)invokeAutoDowngradePerfModeIfNeed;
- (double)getAutoDowngradeDuration;
- (void)clear;
- (void)analyzeStatisticsDataWhenEnd;
- (BOOL)tryToDowngradePerfModeIfEnabled;
- (id)getRecentStatisticsResultsNotMoreThanAnalysisRet:(long long)arg1;
- (unsigned long long)getDowngradeFitRequireCount;
- (void)scheduleAutoDowngradePerfMode;
- (void)checkRecentStatisticResultsOverLimit;
- (long long)transferAnalysisRetToPerfMode:(long long)arg1;
- (long long)transferPerfModeToAnalysisRet:(long long)arg1;
- (void)notifyPerfModeForMonitorIfNeeded:(long long)arg1;
- (void)notifyPerfMode:(long long)arg1 targetViewState:(BOOL)arg2;
- (void)report;
- (void)updateTargetPAGPlayTime;
- (void)recordAveFrameTime;
- (id)currLiveTask;
- (void)onTargetViewStartPlay;
- (void)onTargetViewStopPlay;
- (long long)getPerfMode;
- (BOOL)getIsTargetViewRunning;
- (long long)liveUserType;
- (void)setLiveUserType:(long long)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (long long)pagModuleType;
- (void)setPagModuleType:(long long)arg1;
- (BOOL)useStrategy;
- (void)setUseStrategy:(BOOL)arg1;
- (long long)perfMode;
- (void)setPerfMode:(long long)arg1;
- (long long)frameTime;
- (void)setFrameTime:(long long)arg1;
- (long long)avgFrameTime;
- (void)setAvgFrameTime:(long long)arg1;
- (double)avgFrameTimeFp;
- (void)setAvgFrameTimeFp:(double)arg1;
- (long long)recent3AvgFrameTime;
- (void)setRecent3AvgFrameTime:(long long)arg1;
- (double)time;
- (void)setTime:(double)arg1;
- (id)frames;
- (void)setFrames:(id)arg1;
- (id)recentStatisticResults;
- (void)setRecentStatisticResults:(id)arg1;
- (long long)worstAnalysisRet;
- (void)setWorstAnalysisRet:(long long)arg1;
- (id)actionLock;
- (void)setActionLock:(id)arg1;
- (BOOL)isTargetViewPlaying;
- (void)setIsTargetViewPlaying:(BOOL)arg1;
- (double)lastTargetPAGPlayTime;
- (void)setLastTargetPAGPlayTime:(double)arg1;
- (double)lastTargetPAGPlayInterval;
- (void)setLastTargetPAGPlayInterval:(double)arg1;
- (void).cxx_destruct;
@end
