@interface MMLiveFaceTracker : NSObject
{
    TrackerManager faceTracker; // +0x8
    XFaceCluster faceCluster; // +0x20
    BOOL _faceTrackModelInitSucc; // +0x28
    BOOL _isTrackBegin; // +0x29
    BOOL _isTrackFinished; // +0x2a
    id /* block */ _faceTrackCompletion; // +0x30
    MMLiveTaskId * _taskId; // +0x38
    NSObject<OS_dispatch_queue> * _faceTrackQueue; // +0x40
    NSDictionary * _faceTrackRulesDict; // +0x48
    double _lastProcessTime; // +0x50
    NSMutableArray * _pendingTaskList; // +0x58
    MMLiveFaceTrackTask * _currRunningTask; // +0x60
    NSMutableArray * _faceTrackResultRecordList; // +0x68
    double _trackBeginTime; // +0x70
    CIContext * _context; // +0x78
}
+ (BOOL)enableFaceTrack;
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (BOOL)checkModelFilesExist;
- (void)initResources;
- (void)initRules;
- (void)initFaceTrackModel;
- (BOOL)checkFaceTrackProcessFrequently;
- (void)processFaceTrack:(id /* block */)arg1;
- (void)runFaceTrack:(id)arg1;
- (id)tryGetMostFitRecordIfCheckFaceTrackFinished:(BOOL *)arg1;
- (void)finishFaceTrack;
- (id)tryGetMostFitResultRecord;
- (void)tagTrackBeginTimeIfNeed;
- (double)getCurrTrackPersistTime;
- (void)notifyMostFitFaceTrackResult:(id)arg1;
- (BOOL)checkIsCurrCanRunning;
- (void)addFaceTrackTask:(id)arg1;
- (void)removeFirstTrackTask;
- (void)clearPendingTasks;
- (void)startFaceTrackRunningIfNeed;
- (void)addFaceTrackResult:(id)arg1;
- (id)_getRootRecordWhereFaceTrackResultBelong:(id)arg1;
- (void)_sortFaceTrackRecordList;
- (void)clearFaceTrackRecords;
- (void)startSurviveCountDown;
- (void)cancelSurviveCountDown;
- (void)onSurviveOverTime;
- (void)beginTrack;
- (void)onLiveCaptureSampleBufferOutput:(opaqueCMSampleBuffer *)arg1;
- (id)context;
- (double)faceTrackProcessInterval;
- (double)minTrackPersistTime;
- (double)maxTrackPersistTime;
- (unsigned long long)limitLeadCount;
- (BOOL)supportTrackFaceFeature;
- (BOOL)supportTrackLandmarks2D;
- (BOOL)supportPoliticalLeaderSearch;
- (id /* block */)faceTrackCompletion;
- (void)setFaceTrackCompletion:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)faceTrackQueue;
- (void)setFaceTrackQueue:(id)arg1;
- (BOOL)faceTrackModelInitSucc;
- (void)setFaceTrackModelInitSucc:(BOOL)arg1;
- (id)faceTrackRulesDict;
- (void)setFaceTrackRulesDict:(id)arg1;
- (double)lastProcessTime;
- (void)setLastProcessTime:(double)arg1;
- (id)pendingTaskList;
- (void)setPendingTaskList:(id)arg1;
- (id)currRunningTask;
- (void)setCurrRunningTask:(id)arg1;
- (id)faceTrackResultRecordList;
- (void)setFaceTrackResultRecordList:(id)arg1;
- (BOOL)isTrackBegin;
- (void)setIsTrackBegin:(BOOL)arg1;
- (BOOL)isTrackFinished;
- (void)setIsTrackFinished:(BOOL)arg1;
- (double)trackBeginTime;
- (void)setTrackBeginTime:(double)arg1;
- (void)setContext:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
