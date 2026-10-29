@interface MMLiveFaceEncodeLogic : NSObject
{
    int _sendFPS; // +0x8
    MMLiveTask * _liveTask; // +0x10
    MMLiveFaceEncodeTask * _currEncodeTask; // +0x18
    NSMutableArray * _encodeTaskList; // +0x20
    NSObject<OS_dispatch_queue> * _encodingQueue; // +0x28
    double _lastSEISendTime; // +0x30
}
- (id)initWithLiveTask:(id)arg1;
- (void)initDefaultData;
- (void)dealloc;
- (void)encodeAlphaBuffer:(char *)arg1 width:(int)arg2 height:(int)arg3;
- (void)stopEncode;
- (void)addEncodeTask:(id)arg1;
- (id)getNextEncodeTask;
- (void)checkEncodeTasksOverMaxLimit;
- (void)clearEncodeTaskList;
- (void)tryEncodeNextTask;
- (BOOL)checkEnableEncodeNext;
- (void)sendSeiWithContentStr:(id)arg1;
- (void)sendSeiWithContentData:(id)arg1;
- (unsigned long long)maxEncodeTaskCnt;
- (double)seiFreqLimitTime;
- (BOOL)isOverFreqLimit;
- (void)runAsyncOnEncodeQueue:(id /* block */)arg1;
- (void)runSyncOnEncodeQueue:(id /* block */)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (id)currEncodeTask;
- (void)setCurrEncodeTask:(id)arg1;
- (id)encodeTaskList;
- (void)setEncodeTaskList:(id)arg1;
- (id)encodingQueue;
- (void)setEncodingQueue:(id)arg1;
- (int)sendFPS;
- (void)setSendFPS:(int)arg1;
- (double)lastSEISendTime;
- (void)setLastSEISendTime:(double)arg1;
- (void).cxx_destruct;
@end

