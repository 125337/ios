@interface MMFinderLiveKTVSEIRecvHandler : NSObject
{
    BOOL _seiFreqStable; // +0x8
    double _recentSeiRecvInterval; // +0x10
    MMFinderLiveKTVSEIRecvSession * _currSession; // +0x18
    id /* block */ _recvSessionUpdateCallback; // +0x20
    id <MMLiveUniqueTaskId> _taskId; // +0x28
    NSMutableArray * _recentSeiRecvTimeIntervalRecords; // +0x30
    NSMutableArray * _recentSeiRecvIntervalList; // +0x38
    double _lastSeiRecvTime; // +0x40
    unsigned long long _currMaxRecvSeq; // +0x48
    double _currSessionStartTime; // +0x50
    MMFinderLiveKTVReporter * _reporter; // +0x58
    double _lastUnStickTime; // +0x60
}
- (id)initWithTaskId:(id)arg1;
- (void)initDefaultDatas;
- (void)checkRecvSessionUpdated:(id)arg1;
- (BOOL)isRecvSeqContinuous:(unsigned long long)arg1;
- (BOOL)isRecvSeqStick;
- (BOOL)isRecvSeqValid:(unsigned long long)arg1;
- (BOOL)updateCurrMaxRecvSeq:(unsigned long long)arg1;
- (void)updateRecentUnStickSeiTime;
- (void)onSyncRecv:(id)arg1 continuous:(BOOL)arg2 stick:(BOOL)arg3;
- (void)clearDatas;
- (id)createRecvSessionWithKTVSeiData:(id)arg1;
- (void)updateRecvSession:(id)arg1;
- (void)clearLastSessionRecvDatas;
- (void)notifyRecvKTVSeiData:(id)arg1 continuous:(BOOL)arg2 stick:(BOOL)arg3;
- (id)ktvReporter;
- (void)recordRecvNewSeiKTVInfo;
- (void)checkSeiFreqStableIfNeed;
- (BOOL)isRecvTimeIntervalValid:(double)arg1;
- (double)adjustRecvTimeIntervalIfNeed:(double)arg1;
- (void)clearRecvTimeIntervalRecordsIfOverLimit;
- (void)clearSeiRecvTimeIntervalRecords;
- (unsigned long long)recentRecvTimeRecordCnt;
- (void)clearRecvTimeIntervalNoiseIfNeed;
- (void)analyzeRecentSeiRecvAverTimeInterval;
- (void)updateRecentSeiRecvIntervalIfNeed:(double)arg1;
- (void)recordNewRecvInterval:(double)arg1;
- (void)clearRecentRecvIntervalsIfOverLimit;
- (void)clearRecentRecvIntervals;
- (unsigned long long)recentRecvIntervalRecordCnt;
- (double)getAverRecentRecvInterval;
- (double)recentSeiRecvInterval;
- (void)setRecentSeiRecvInterval:(double)arg1;
- (id)currSession;
- (void)setCurrSession:(id)arg1;
- (id /* block */)recvSessionUpdateCallback;
- (void)setRecvSessionUpdateCallback:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)recentSeiRecvTimeIntervalRecords;
- (void)setRecentSeiRecvTimeIntervalRecords:(id)arg1;
- (id)recentSeiRecvIntervalList;
- (void)setRecentSeiRecvIntervalList:(id)arg1;
- (double)lastSeiRecvTime;
- (void)setLastSeiRecvTime:(double)arg1;
- (unsigned long long)currMaxRecvSeq;
- (void)setCurrMaxRecvSeq:(unsigned long long)arg1;
- (BOOL)seiFreqStable;
- (void)setSeiFreqStable:(BOOL)arg1;
- (double)currSessionStartTime;
- (void)setCurrSessionStartTime:(double)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (double)lastUnStickTime;
- (void)setLastUnStickTime:(double)arg1;
- (void).cxx_destruct;
@end

