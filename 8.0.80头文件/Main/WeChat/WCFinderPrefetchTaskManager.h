@interface WCFinderPrefetchTaskManager : NSObject
{
    unsigned long long _maxRequestNum; // +0x8
    NSMutableArray * _requestingTaskArray; // +0x10
    NSMutableArray * _waitingTaskArray; // +0x18
}
- (void)safeAddPrefetchTask:(id)arg1;
- (void)requestIfCan;
- (unsigned long long)maxRequestNum;
- (id)requestingTaskArray;
- (id)waitingTaskArray;
- (void)setMaxRequestNum:(unsigned long long)arg1;
- (void)setRequestingTaskArray:(id)arg1;
- (void)setWaitingTaskArray:(id)arg1;
- (void).cxx_destruct;
@end
