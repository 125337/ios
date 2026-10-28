@interface MMFinderLiveKSKitLyricContainerView : MMFinderLiveKTVBaseView <MMFinderLiveKSKitAudioExt, MMFinderLiveKTVSEISyncRecvExt, MMFinderLiveKTVProgressExt>
{
    BOOL _isStart; // +0x8
    BOOL _isStartDisplay; // +0x9
    BOOL _hasStartFirstSentence; // +0xa
    BOOL _ignorePrepareCountDown; // +0xb
    BOOL _isPositionUpdated; // +0xc
    BOOL _openFpsStatistic; // +0xd
    int _currSentenceIndex; // +0x10
    int _currPosition; // +0x14
    int _progressSyncBeginPosition; // +0x18
    int _endTransferPosition; // +0x1c
    int _maxRefreshFPS; // +0x20
    id /* block */ _proceedEndCallback; // +0x28
    NSString * _uniqueId; // +0x30
    MMFinderLiveKSKitLyricPreparingView * _preparingView; // +0x38
    MMFinderLiveKSKitLyricWrapper * _currLyricWrapper; // +0x40
    MMFinderLiveKSKitLyricWrapper * _nextLyricWrapper; // +0x48
    MMFinderLiveKSKitLyricWrapper * _afterLyricWrapper; // +0x50
    NSMutableArray * _lyricSentenceList; // +0x58
    MMFinderLiveKSKitLyricSentence * _nextSentence; // +0x60
    unsigned long long _refreshTime; // +0x68
    long long _lastRefreshDriveMode; // +0x70
    long long _currRefreshSrc; // +0x78
    double _lastRecordSeiInterval; // +0x80
    unsigned long long _refreshFrameCnt; // +0x88
    long long _refreshFps; // +0x90
    unsigned long long _refreshFpsStatCnt; // +0x98
    id /* block */ _refreshFpsReport; // +0xa0
    long long _fpsCounter; // +0xa8
    double _lastRefreshTime; // +0xb0
}
+ (id /* block */)createReportTimer:(long long)arg1 block:(id /* block */)arg2;
- (void)initRefreshStats;
- (void)updateRefreshStats;
- (void)clearRefreshStats;
- (id /* block */)createRefreshFpsReporter;
- (void)increaseRefreshFrameCnt;
- (void)increaseRefreshFpsStatCnt;
- (void)logForRefreshStatIfNeed;
- (BOOL)checkNeedSkipRefreshFrame:(long long)arg1;
- (void)clearFPSControl;
- (long long)getFrameInterval:(long long)arg1;
- (BOOL)checkNeedSkipRefreshFrameWithTimeInterval;
- (double)maxRefreshTimeInterval;
- (void)updateLastRefreshTime;
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)initDefaultDatas;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)layoutSubviews;
- (void)layoutUI;
- (double)lyricWrapperDistanceVNew;
- (double)preferHeight;
- (void)startWithLyricSentenceList:(id)arg1 uniqueId:(id)arg2;
- (void)stop;
- (void)updateEndTransferPosition:(int)arg1;
- (void)updateProgressSyncBeginPosition:(int)arg1;
- (void)updateSelfHidden;
- (void)initDatas:(id)arg1;
- (void)clearDatas;
- (void)removeAllLyricViews;
- (void)updateHasStartFirstSentence:(BOOL)arg1;
- (void)startDisplaySentenceIfNeed;
- (BOOL)isCurrSentenceEnd;
- (BOOL)isNextSentenceBegin;
- (BOOL)isAfterSentenceEnd;
- (BOOL)checkCurrPositionCanStartDisplay;
- (void)startPreparingCountDown;
- (void)checkNeedPrepareToCountDown;
- (int)getInitSentenceIndex;
- (int)startPosition;
- (BOOL)disappearCurrSentence:(double)arg1;
- (BOOL)transfeNextSentenceToCurr:(double)arg1 animated:(BOOL)arg2;
- (void)checkCurrSentenceIsEnd;
- (BOOL)transferAfterSentenceToNext:(double)arg1 animated:(BOOL)arg2;
- (BOOL)checkCurrPositionIsInvalidOverAfterSentenceEnd;
- (BOOL)checkAfterSentenceNeedInitTransferToNext;
- (void)updateLyricSentenceWrappers:(id /* block */)arg1;
- (void)updateNextSentence:(id)arg1;
- (double)maxLyricSentenceWidth;
- (void)onPositionChanged:(int)arg1;
- (void)refreshIfNeed;
- (void)onRefreshModeUpdate:(long long)arg1;
- (void)updateRefreshSrcWithSeiRecvInterval:(double)arg1;
- (void)updateMaxRefreshFPS;
- (void)onKSKitKalaPositionChanged:(int)arg1 uniqueId:(id)arg2 taskId:(id)arg3;
- (void)onLiveSEIKTVProgressSyncRecv:(id)arg1 continuous:(BOOL)arg2 stick:(BOOL)arg3 ktvSeiData:(id)arg4 taskId:(id)arg5;
- (void)onLiveSEIKTVRecvTimeIntervalUpdate:(double)arg1 taskId:(id)arg2;
- (void)onLiveKTVProgressRefresh:(long long)arg1 currFPS:(long long)arg2 taskId:(id)arg3;
- (void)onLiveKTVProgressPositionChange:(int)arg1 uniqueId:(id)arg2 taskId:(id)arg3;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id /* block */)proceedEndCallback;
- (void)setProceedEndCallback:(id /* block */)arg1;
- (BOOL)isStart;
- (void)setIsStart:(BOOL)arg1;
- (id)uniqueId;
- (void)setUniqueId:(id)arg1;
- (BOOL)isStartDisplay;
- (void)setIsStartDisplay:(BOOL)arg1;
- (BOOL)hasStartFirstSentence;
- (void)setHasStartFirstSentence:(BOOL)arg1;
- (BOOL)ignorePrepareCountDown;
- (void)setIgnorePrepareCountDown:(BOOL)arg1;
- (id)preparingView;
- (void)setPreparingView:(id)arg1;
- (id)currLyricWrapper;
- (void)setCurrLyricWrapper:(id)arg1;
- (id)nextLyricWrapper;
- (void)setNextLyricWrapper:(id)arg1;
- (id)afterLyricWrapper;
- (void)setAfterLyricWrapper:(id)arg1;
- (id)lyricSentenceList;
- (void)setLyricSentenceList:(id)arg1;
- (int)currSentenceIndex;
- (void)setCurrSentenceIndex:(int)arg1;
- (int)currPosition;
- (void)setCurrPosition:(int)arg1;
- (BOOL)isPositionUpdated;
- (void)setIsPositionUpdated:(BOOL)arg1;
- (id)nextSentence;
- (void)setNextSentence:(id)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (BOOL)openFpsStatistic;
- (void)setOpenFpsStatistic:(BOOL)arg1;
- (long long)lastRefreshDriveMode;
- (void)setLastRefreshDriveMode:(long long)arg1;
- (long long)currRefreshSrc;
- (void)setCurrRefreshSrc:(long long)arg1;
- (double)lastRecordSeiInterval;
- (void)setLastRecordSeiInterval:(double)arg1;
- (int)progressSyncBeginPosition;
- (void)setProgressSyncBeginPosition:(int)arg1;
- (int)endTransferPosition;
- (void)setEndTransferPosition:(int)arg1;
- (unsigned long long)refreshFrameCnt;
- (void)setRefreshFrameCnt:(unsigned long long)arg1;
- (long long)refreshFps;
- (void)setRefreshFps:(long long)arg1;
- (unsigned long long)refreshFpsStatCnt;
- (void)setRefreshFpsStatCnt:(unsigned long long)arg1;
- (id /* block */)refreshFpsReport;
- (void)setRefreshFpsReport:(id /* block */)arg1;
- (int)maxRefreshFPS;
- (void)setMaxRefreshFPS:(int)arg1;
- (long long)fpsCounter;
- (void)setFpsCounter:(long long)arg1;
- (double)lastRefreshTime;
- (void)setLastRefreshTime:(double)arg1;
- (void).cxx_destruct;
@end
