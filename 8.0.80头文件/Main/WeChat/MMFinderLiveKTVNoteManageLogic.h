@interface MMFinderLiveKTVNoteManageLogic : NSObject <MMFinderLiveKTVSEISyncRecvExt>
{
    BOOL _isNoteDelayIntervalUpdated; // +0x8
    int _lastTargetIndex; // +0xc
    double _predictNoteDelayInterval; // +0x10
    id <MMLiveUniqueTaskId> _taskId; // +0x18
    MMFinderLiveKTVSEIRecvSession * _currRemoteSession; // +0x20
    NSMutableArray * _recentNoteRecordList; // +0x28
    double _lastNoteDelayIntervalUpdateTime; // +0x30
}
+ (int)preferNoteAdjustTimeInterval;
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)initDefaultDatas;
- (void)registerExtensions;
- (id)tryGetSEINoteWithPosition:(int)arg1 maxMistake:(int)arg2;
- (void)onPredictNoteDelayIntervalUpdateAck;
- (void)updateRemoteSession:(id)arg1;
- (void)clearLastSessionRemoteNotes;
- (void)addRecentRemoteNoteRecords:(id)arg1;
- (void)clearRecentRemoteNoteRecords;
- (void)clearNoteRecordsIfOverLimit;
- (BOOL)isPosition:(int)arg1 fitWithNote:(id)arg2;
- (id)checkPosition:(int)arg1 nearestWithLastNote:(id)arg2 orNextNote:(id)arg3;
- (BOOL)isPosition:(int)arg1 mistakeWithNote:(id)arg2 overLimit:(int)arg3;
- (void)updateNoteDelayIntervalIfNeed:(double)arg1;
- (void)updatePredictNoteDelayInterval:(double)arg1;
- (double)maxNoteDelayInterval;
- (double)noteDelayIntervalUpdateMinInterval;
- (void)onLiveSEIKTVNoteListSyncRecv:(id)arg1 session:(id)arg2 taskId:(id)arg3;
- (void)onLiveSEIKTVNoteListExpiredInSession:(id)arg1 taskId:(id)arg2;
- (void)onLiveSEIKTVRecvTimeIntervalUpdate:(double)arg1 taskId:(id)arg2;
- (double)predictNoteDelayInterval;
- (void)setPredictNoteDelayInterval:(double)arg1;
- (BOOL)isNoteDelayIntervalUpdated;
- (void)setIsNoteDelayIntervalUpdated:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)currRemoteSession;
- (void)setCurrRemoteSession:(id)arg1;
- (id)recentNoteRecordList;
- (void)setRecentNoteRecordList:(id)arg1;
- (int)lastTargetIndex;
- (void)setLastTargetIndex:(int)arg1;
- (double)lastNoteDelayIntervalUpdateTime;
- (void)setLastNoteDelayIntervalUpdateTime:(double)arg1;
- (void).cxx_destruct;
@end
