@interface MMFinderLiveKSKitMusicNoteScrollView : UIScrollView
{
    BOOL _hasVisibleNoteLine; // +0x8
    BOOL _isStart; // +0x9
    BOOL _singBySelf; // +0xa
    BOOL _needStartAdjustDisplaylink; // +0xb
    BOOL _isStartAdjustDisplaylink; // +0xc
    BOOL _isPause; // +0xd
    BOOL _isGoing; // +0xe
    BOOL _hasDisplayKalaPosition; // +0xf
    int _currMaxTimeOffset; // +0x10
    int _currKalaPosition; // +0x14
    int _adjustKalaPosition; // +0x18
    int _currScrollKalaPosition; // +0x1c
    int _currInitialKalaPosition; // +0x20
    double _prepareAdvanceTimeOffset; // +0x28
    UIColor * _notesColor; // +0x30
    id /* block */ _getNextBatchNoteListCallback; // +0x38
    id /* block */ _currMusicNoteChangeCallback; // +0x40
    id /* block */ _currPositionChangeCallback; // +0x48
    id /* block */ _getRemoteProgressUpdateIntervalCallback; // +0x50
    id /* block */ _currHasVisibleNoteChangeCallback; // +0x58
    id <MMLiveUniqueTaskId> _taskId; // +0x60
    NSString * _uniqueId; // +0x68
    NSMutableArray * _displayMusicNoteLineList; // +0x70
    MMFinderLiveKSKitMusicNoteLine * _currMusicNoteLine; // +0x78
    MMFinderLiveKSKitMusicNoteLine * _lastMusicNoteLine; // +0x80
    double _selfHeight; // +0x88
    double _afterwardsContentOffsetX; // +0x90
    double _advanceContentOffsetX; // +0x98
    double _currMaxOffsetX; // +0xa0
    CADisplayLink * _adjustDisplayLink; // +0xa8
    NSThread * _displayLinkThread; // +0xb0
    double _currNaturalTime; // +0xb8
    double _adjustNaturalTime; // +0xc0
    double _unVisibleDistance; // +0xc8
    double _maxAcceptMistake; // +0xd0
    double _sumMaxAcceptMistake; // +0xd8
    unsigned long long _maxAcceptMistakeUpdateCnt; // +0xe0
    double _remotePositionUpdateInterval; // +0xe8
    double _sumPositionUpdateInterval; // +0xf0
    unsigned long long _positionUpdateIntervalCnt; // +0xf8
    double _advanceTimeOffset; // +0x100
    double _lastCheckRecycleTime; // +0x108
    MMFinderLiveKTVReporter * _reporter; // +0x110
    unsigned long long _sumMistakeCnt; // +0x118
    double _startTime; // +0x120
    NSMutableArray * _mistakeRecordList; // +0x128
    long long _fpsCounter; // +0x130
    unsigned long long _refreshFrameCnt; // +0x138
    long long _refreshFps; // +0x140
    unsigned long long _refreshFpsStatCnt; // +0x148
    id /* block */ _refreshFpsReport; // +0x150
    unsigned long long _recvFrameCnt; // +0x158
    long long _recvFps; // +0x160
    unsigned long long _recvFpsStatCnt; // +0x168
    id /* block */ _recvFpsReport; // +0x170
}
+ (id /* block */)createReportTimer:(long long)arg1 block:(id /* block */)arg2;
- (void)initRefreshStats;
- (void)updateRefreshStats;
- (void)clearRefreshStats;
- (void)initRecvStats;
- (void)updateRecvStats;
- (void)clearRecvStats;
- (id /* block */)createRefreshFpsReporter;
- (id /* block */)createRecvFpsReporter;
- (void)increaseRefreshFrameCnt;
- (void)increaseRefreshFpsStatCnt;
- (void)logForRefreshStatIfNeed;
- (void)increaseRecvFrameCnt;
- (void)increaseRecvFpsStatCnt;
- (void)logForRecvStatIfNeed;
- (BOOL)checkNeedSkipRefreshFrame:(long long)arg1;
- (void)clearFPSControl;
- (long long)getFrameInterval:(long long)arg1;
- (double)maxRefreshTimeInterval;
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)initDefaultUI;
- (void)initDefaultDatas;
- (void)layoutSubviews;
- (BOOL)checkSelfHeightChanged;
- (void)updateAfterwardsContentOffsetX:(double)arg1;
- (void)updateAdvanceContentOffsetX:(double)arg1;
- (void)startBySelf:(BOOL)arg1 uniqueId:(id)arg2;
- (void)stop;
- (void)resetScrollState:(BOOL)arg1;
- (void)onKalaPositionChanged:(int)arg1 preAdjust:(int)arg2;
- (void)notifyProgressRefreshInOuterDriveModeIfNeed;
- (void)onKalaVoiceReachNoteHeight:(float)arg1 noteValue:(float)arg2 timeOffset:(int)arg3 duration:(int)arg4 hit:(BOOL)arg5 hitNote:(id *)arg6;
- (void)onNotifyTimeToPrepareNextBatchMusicNotes;
- (void)pause;
- (void)resume;
- (double)getNotePositionContentHeight;
- (double)getNotePositionTopOffset;
- (void)updateRemoteMaxAcceptMistake;
- (void)updateMaxAcceptMistake:(double)arg1;
- (double)getAdvanceTimeOffset;
- (unsigned long long)currProgressRefreshFPS;
- (int)getCurrScrollKalaPosition;
- (void)synchronizeCurrKTVState:(id)arg1;
- (void)clearAllNoteLinesBefore:(int)arg1 after:(int)arg2;
- (double)getRemoteProgressUpdateInterval;
- (void)addMusicNotLine:(id)arg1;
- (void)updateNoteLineOrigin:(id)arg1;
- (void)updateContentSize;
- (void)updateMaxTimeAndXOffset;
- (void)resetMaxTimeAndXOffset;
- (void)updateCurrMaxOffsetX:(double)arg1;
- (void)resetAllDisplayNoteLinesOriginX;
- (void)resetAllDisplayNoteLinesOriginY;
- (BOOL)adjustCurrPositionIfNeed:(int)arg1;
- (void)updateAdjustKalaPosition:(int)arg1 naturalTime:(double)arg2;
- (void)checkCurrMusicNoteLineChangeWithPosition:(int)arg1;
- (id)tryGetMusicNoteLineWithPosition:(int)arg1;
- (id)tryGetNextMusicNoteLineWithPosition:(int)arg1;
- (void)scrollToTimeOffset:(int)arg1;
- (void)adjustTimeOffset:(int)arg1;
- (void)startAdjustDisplayLink;
- (void)startAdjustDisplayLinkInSpecificThread;
- (void)activeAdjustDisplayLink;
- (void)onAdjustDisplaylink:(id)arg1;
- (void)scheduleToAdjustKalaPosition;
- (void)onPositionMistakeOccur:(int)arg1;
- (void)cancelAdjustDisplaylink;
- (void)cancelDisplayLinkThread;
- (void)clearAdjustDatas;
- (void)updatePrepareAdvanceTimeOffset;
- (void)updateCurrScrollKalaPosition:(int)arg1;
- (void)notifyProgressRefresh:(long long)arg1;
- (void)checkProgressChanged:(int)arg1;
- (void)interruptProgress;
- (void)updateGoingState:(BOOL)arg1;
- (void)checkKalaPositionHasDisplay;
- (void)reportMistakeRecords;
- (id)currMusicNote;
- (void)setNotesColor:(id)arg1;
- (int)maxRefreshFPS;
- (id)ktvReporter;
- (id)getNextBatchMusicNoteList;
- (id)getNextBatchMusicNoteLineList;
- (void)addNextBatchMusicNoteLines;
- (void)clearDatas;
- (BOOL)checkNeedRecycleUnVisibleNoteLines;
- (void)recycleUnVisibleNoteLines:(id)arg1;
- (id)getUnVisibleNoteLineList;
- (void)checkMusicNoteLinesUnVisible;
- (void)checkHasVisibleNoteLine;
- (void)updateHasVisibleNoteLine:(BOOL)arg1;
- (void)checkDisplayMusicNoteLineListEmpty;
- (void)updateNeedStartAdjustDisplaylink:(BOOL)arg1;
- (void)checkAdjustDisplayLinkState;
- (id)getNoteLineForKalaPosition:(int)arg1;
- (void)addMistakeRecord:(id)arg1;
- (id)getMiddleMistakeRecords:(unsigned long long)arg1;
- (void)clearMistakeRecords;
- (void)setContentOffset:(CGPoint)arg1;
- (double)prepareAdvanceTimeOffset;
- (void)setPrepareAdvanceTimeOffset:(double)arg1;
- (id)notesColor;
- (BOOL)hasVisibleNoteLine;
- (void)setHasVisibleNoteLine:(BOOL)arg1;
- (id /* block */)getNextBatchNoteListCallback;
- (void)setGetNextBatchNoteListCallback:(id /* block */)arg1;
- (id /* block */)currMusicNoteChangeCallback;
- (void)setCurrMusicNoteChangeCallback:(id /* block */)arg1;
- (id /* block */)currPositionChangeCallback;
- (void)setCurrPositionChangeCallback:(id /* block */)arg1;
- (id /* block */)getRemoteProgressUpdateIntervalCallback;
- (void)setGetRemoteProgressUpdateIntervalCallback:(id /* block */)arg1;
- (id /* block */)currHasVisibleNoteChangeCallback;
- (void)setCurrHasVisibleNoteChangeCallback:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)isStart;
- (void)setIsStart:(BOOL)arg1;
- (BOOL)singBySelf;
- (void)setSingBySelf:(BOOL)arg1;
- (id)uniqueId;
- (void)setUniqueId:(id)arg1;
- (id)displayMusicNoteLineList;
- (void)setDisplayMusicNoteLineList:(id)arg1;
- (id)currMusicNoteLine;
- (void)setCurrMusicNoteLine:(id)arg1;
- (id)lastMusicNoteLine;
- (void)setLastMusicNoteLine:(id)arg1;
- (double)selfHeight;
- (void)setSelfHeight:(double)arg1;
- (double)afterwardsContentOffsetX;
- (void)setAfterwardsContentOffsetX:(double)arg1;
- (double)advanceContentOffsetX;
- (void)setAdvanceContentOffsetX:(double)arg1;
- (double)currMaxOffsetX;
- (void)setCurrMaxOffsetX:(double)arg1;
- (int)currMaxTimeOffset;
- (void)setCurrMaxTimeOffset:(int)arg1;
- (BOOL)needStartAdjustDisplaylink;
- (void)setNeedStartAdjustDisplaylink:(BOOL)arg1;
- (BOOL)isStartAdjustDisplaylink;
- (void)setIsStartAdjustDisplaylink:(BOOL)arg1;
- (id)adjustDisplayLink;
- (void)setAdjustDisplayLink:(id)arg1;
- (id)displayLinkThread;
- (void)setDisplayLinkThread:(id)arg1;
- (double)currNaturalTime;
- (void)setCurrNaturalTime:(double)arg1;
- (int)currKalaPosition;
- (void)setCurrKalaPosition:(int)arg1;
- (double)adjustNaturalTime;
- (void)setAdjustNaturalTime:(double)arg1;
- (int)adjustKalaPosition;
- (void)setAdjustKalaPosition:(int)arg1;
- (int)currScrollKalaPosition;
- (void)setCurrScrollKalaPosition:(int)arg1;
- (double)unVisibleDistance;
- (void)setUnVisibleDistance:(double)arg1;
- (double)maxAcceptMistake;
- (void)setMaxAcceptMistake:(double)arg1;
- (double)sumMaxAcceptMistake;
- (void)setSumMaxAcceptMistake:(double)arg1;
- (unsigned long long)maxAcceptMistakeUpdateCnt;
- (void)setMaxAcceptMistakeUpdateCnt:(unsigned long long)arg1;
- (double)remotePositionUpdateInterval;
- (void)setRemotePositionUpdateInterval:(double)arg1;
- (double)sumPositionUpdateInterval;
- (void)setSumPositionUpdateInterval:(double)arg1;
- (unsigned long long)positionUpdateIntervalCnt;
- (void)setPositionUpdateIntervalCnt:(unsigned long long)arg1;
- (BOOL)isPause;
- (void)setIsPause:(BOOL)arg1;
- (BOOL)isGoing;
- (void)setIsGoing:(BOOL)arg1;
- (double)advanceTimeOffset;
- (void)setAdvanceTimeOffset:(double)arg1;
- (double)lastCheckRecycleTime;
- (void)setLastCheckRecycleTime:(double)arg1;
- (BOOL)hasDisplayKalaPosition;
- (void)setHasDisplayKalaPosition:(BOOL)arg1;
- (int)currInitialKalaPosition;
- (void)setCurrInitialKalaPosition:(int)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (unsigned long long)sumMistakeCnt;
- (void)setSumMistakeCnt:(unsigned long long)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (id)mistakeRecordList;
- (void)setMistakeRecordList:(id)arg1;
- (long long)fpsCounter;
- (void)setFpsCounter:(long long)arg1;
- (unsigned long long)refreshFrameCnt;
- (void)setRefreshFrameCnt:(unsigned long long)arg1;
- (long long)refreshFps;
- (void)setRefreshFps:(long long)arg1;
- (unsigned long long)refreshFpsStatCnt;
- (void)setRefreshFpsStatCnt:(unsigned long long)arg1;
- (id /* block */)refreshFpsReport;
- (void)setRefreshFpsReport:(id /* block */)arg1;
- (unsigned long long)recvFrameCnt;
- (void)setRecvFrameCnt:(unsigned long long)arg1;
- (long long)recvFps;
- (void)setRecvFps:(long long)arg1;
- (unsigned long long)recvFpsStatCnt;
- (void)setRecvFpsStatCnt:(unsigned long long)arg1;
- (id /* block */)recvFpsReport;
- (void)setRecvFpsReport:(id /* block */)arg1;
- (void).cxx_destruct;
@end
