@interface WCFinderPrefetchModel : NSObject
{
    id <WCFinderPrefetchModelDelegate> _delegate; // +0x8
    WCFinderUserPrefetchRelatedInfo * _userRelatedInfo; // +0x10
    NSTimer * _updateTimer; // +0x18
    unsigned long long _scene; // +0x20
    NSMutableArray * _probMatrix; // +0x28
    NSMutableArray * _timeProbArray; // +0x30
    unsigned long long _lastForegroundPrefetchTimestamp; // +0x38
    NSTimer * _prefetchTimer; // +0x40
}
+ (id)MMKVKeyWithPrfetchScene:(unsigned long long)arg1;
+ (id)prefetchConfigWithScene:(unsigned long long)arg1;
- (id)initWithPrefetchScene:(unsigned long long)arg1;
- (void)dealloc;
- (void)save;
- (void)updateModel;
- (BOOL)shouldPrefetchNow;
- (void)updateUserRelatedInfoIfNeeded:(unsigned long long)arg1 config:(id)arg2;
- (double)currentEnterProb;
- (double)enterProbBaseOnTime;
- (double)enterProbBaseOnActionSeries;
- (double)currentEnterProbWithCurrentTimestamp:(unsigned long long)arg1 config:(id)arg2;
- (double)probDueToTime:(unsigned long long)arg1 config:(id)arg2;
- (double)probDueToSeriesWithConfig:(id)arg1;
- (BOOL)isPrefetchSwitchOn;
- (void)resumeModel;
- (void)calculateProbMatrixWithConfig:(id)arg1;
- (void)calculateTimeRelatedDataWithConfig:(id)arg1;
- (void)addCountFromScene:(unsigned long long)arg1 toScene:(unsigned long long)arg2;
- (void)enablePrefetchTimerIfNeeded;
- (void)foregroundPrefetchIfNeeded;
- (void)foregroundPrefetchNow;
- (void)onWechatEnterForeground:(id)arg1;
- (void)onWechatEnterBackground:(id)arg1;
- (void)addObserverForForegroundNotification;
- (void)removeObserverForForegroundNotification;
- (id)probMatrix;
- (id)timeProbArray;
- (unsigned long long)getPrefetchSceneWithLastFeature:(id)arg1 timestamp:(unsigned long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)userRelatedInfo;
- (void)setUserRelatedInfo:(id)arg1;
- (id)updateTimer;
- (void)setUpdateTimer:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (void)setProbMatrix:(id)arg1;
- (void)setTimeProbArray:(id)arg1;
- (unsigned long long)lastForegroundPrefetchTimestamp;
- (void)setLastForegroundPrefetchTimestamp:(unsigned long long)arg1;
- (id)prefetchTimer;
- (void)setPrefetchTimer:(id)arg1;
- (void).cxx_destruct;
@end

