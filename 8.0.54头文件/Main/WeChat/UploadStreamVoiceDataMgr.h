@interface UploadStreamVoiceDataMgr : MMObject <PBMessageObserverDelegate>
{
    unsigned int _addTaskCount; // +0x8
    unsigned int _uploadTaskCount; // +0xc
    NSDate * m_dtStopRecordTime; // +0x10
    NSMutableSet * m_setEndFlagList; // +0x18
    BOOL m_bCheckTransResult; // +0x20
    BOOL m_bReportEnd; // +0x21
    float _transTimeoutInsec; // +0x24
    unsigned int _currentInputId; // +0x28
    unsigned int _maxPacketSize; // +0x2c
    id <UploadStreamVoiceDataMgrDelegate> _delegate; // +0x30
    long long _scene; // +0x38
    MMTimer * _checkUploadQueueTimer; // +0x40
    NSMutableArray * _runningQueue; // +0x48
    NSMutableArray * _waitingQueue; // +0x50
    unsigned long long _nextCheckResultTime; // +0x58
    double _uploadInterval; // +0x60
    NSMutableSet * _processingVoiceIds; // +0x68
    NSMutableDictionary * _sequenceMap; // +0x70
}
- (id)init;
- (void)dealloc;
- (void)Start:(unsigned int)arg1;
- (void)Stop;
- (void)AddNewPart:(id)arg1;
- (void)ClearLastUploadData;
- (void)notifyRecordStop;
- (void)resetUploadTimer;
- (void)safeStopUploadTimer;
- (void)stopUploadTask;
- (BOOL)canMergeItem:(id)arg1 withItem:(id)arg2;
- (void)mergeItem:(id)arg1 withItem:(id)arg2;
- (void)addItem:(id)arg1;
- (void)addVoiceIdToProcessingQueue:(id)arg1;
- (void)checkUploadQueue;
- (void)stopUploadTaskWithErr:(int)arg1;
- (BOOL)tryAddNewUploadTask;
- (BOOL)doUpload:(id)arg1;
- (void)RemoveRequestFromRunningQueue:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)checkUploadResultWithInterval:(int)arg1;
- (void)handleVoiceTransResponse:(id)arg1;
- (unsigned int)genSquenceByVoiceId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (float)transTimeoutInsec;
- (void)setTransTimeoutInsec:(float)arg1;
- (id)checkUploadQueueTimer;
- (void)setCheckUploadQueueTimer:(id)arg1;
- (id)runningQueue;
- (void)setRunningQueue:(id)arg1;
- (id)waitingQueue;
- (void)setWaitingQueue:(id)arg1;
- (unsigned int)currentInputId;
- (void)setCurrentInputId:(unsigned int)arg1;
- (unsigned int)maxPacketSize;
- (void)setMaxPacketSize:(unsigned int)arg1;
- (unsigned long long)nextCheckResultTime;
- (void)setNextCheckResultTime:(unsigned long long)arg1;
- (double)uploadInterval;
- (void)setUploadInterval:(double)arg1;
- (id)processingVoiceIds;
- (void)setProcessingVoiceIds:(id)arg1;
- (id)sequenceMap;
- (void)setSequenceMap:(id)arg1;
- (void).cxx_destruct;
@end

