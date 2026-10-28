@interface FTSIndexMgr : NSObject
{
    long long m_preThermalState; // +0x8
    BOOL _canceled; // +0x10
    int _currentPriority; // +0x14
    FTSDB * _ftsDB; // +0x18
    unsigned long long _iFTSIndexingType; // +0x20
    NSObject<OS_dispatch_queue> * _taskQueue; // +0x28
}
- (id)initWithFTSDB:(id)arg1;
- (void)setIFTSIndexingType:(unsigned long long)arg1;
- (void)setCurrentPriority:(int)arg1;
- (void)iFTSIndexingInit;
- (void)iFTSIndexingFireTask:(int)arg1;
- (void)iFTSIndexingFinish;
- (void)iFTSIndexingStop;
- (BOOL)iFTSIsCancel;
- (void)iFTSIndexingPrepareSearch;
- (void)iFTSIndexingMemoryWarning;
- (void)iFTSIndexingPauseBackground;
- (void)iFTSIndexingResumeBackground;
- (double)iFTSIndexingInterval;
- (int)iFTSIndexingCount;
- (void)iFTSClearIndex;
- (id)ftsDB;
- (void)setFtsDB:(id)arg1;
- (unsigned long long)iFTSIndexingType;
- (id)taskQueue;
- (void)setTaskQueue:(id)arg1;
- (int)currentPriority;
- (void).cxx_destruct;
@end
