@interface WCResourceLoaderMoniter : NSObject
{
    unsigned int _currentSameCount; // +0x8
    unsigned int _threshold; // +0xc
    unsigned int _taskId; // +0x10
    long long _currentRequestLength; // +0x18
    WCPlayerReporter * _reporter; // +0x20
}
- (id)init;
- (BOOL)shouldLowerPriorityWithLoadingRequest:(id)arg1;
- (long long)currentRequestLength;
- (void)setCurrentRequestLength:(long long)arg1;
- (unsigned int)currentSameCount;
- (void)setCurrentSameCount:(unsigned int)arg1;
- (unsigned int)threshold;
- (void)setThreshold:(unsigned int)arg1;
- (unsigned int)taskId;
- (void)setTaskId:(unsigned int)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end
