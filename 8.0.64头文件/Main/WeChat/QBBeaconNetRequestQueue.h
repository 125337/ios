@interface QBBeaconNetRequestQueue : NSObject
{
    NSLock * _queueLock; // +0x8
    NSMutableArray * _runningQueue; // +0x10
    NSMutableArray * _waitingQueue; // +0x18
    long long _maxConcurrentRequest; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)addOneRequest:(id)arg1;
- (void)requestFinish:(id)arg1;
- (void).cxx_destruct;
@end
