@interface FTSIndexEngine : NSObject
{
    NSMutableArray * _arrIndexingQueue; // +0x8
    BOOL _canceled; // +0x10
    BOOL _pause; // +0x11
    BOOL _isInIndexingLoop; // +0x12
    int _currentPriority; // +0x14
    FTSDB * _ftsDB; // +0x18
    NSMutableArray * _arrTask; // +0x20
    NSMutableDictionary * _dicTask; // +0x28
    NSObject<OS_dispatch_queue> * _taskQueue; // +0x30
}
- (id)init;
- (void)registerIndexingManager:(id)arg1;
- (void)doInitIndexing;
- (void)stopIndexing;
- (void)doIndexingInPriority:(int)arg1;
- (void)doIndexingInPriority:(int)arg1 forIndexType:(unsigned long long)arg2;
- (void)onReceiveMemoryWarning;
- (void)onRecoverFTSDB;
- (void)onRecoverIndexOfMgr:(unsigned long long)arg1 withCallBack:(id /* block */)arg2;
- (void)onReceivePauseBackgroundTask:(unsigned long long)arg1;
- (void)onReceiveResumeBackgroundTask:(unsigned long long)arg1;
- (id)ftsDB;
- (void)setFtsDB:(id)arg1;
- (id)arrTask;
- (void)setArrTask:(id)arg1;
- (id)dicTask;
- (void)setDicTask:(id)arg1;
- (id)taskQueue;
- (void)setTaskQueue:(id)arg1;
- (void).cxx_destruct;
@end

