@interface WCFinderProfilePreloadTask : NSObject
{
    WCFinderProfilePreloadParams * _params; // +0x8
    WCFinderProfilePreloadInfo * _filledPreloadInfo; // +0x10
    long long _state; // +0x18
    unsigned long long _startTime; // +0x20
    NSMutableArray * _pendingFetchCGI; // +0x28
}
- (id)params;
- (void)setParams:(id)arg1;
- (id)filledPreloadInfo;
- (void)setFilledPreloadInfo:(id)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (id)pendingFetchCGI;
- (void)setPendingFetchCGI:(id)arg1;
- (void).cxx_destruct;
@end
