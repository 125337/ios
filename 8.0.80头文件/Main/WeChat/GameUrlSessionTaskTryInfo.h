@interface GameUrlSessionTaskTryInfo : NSObject
{
    BOOL _isUsingSimpleDns; // +0x8
    BOOL _isReqRedirect; // +0x9
    BOOL _forceNoSimpleDns; // +0xa
    unsigned long long _errorType; // +0x10
    long long _tryIndex; // +0x18
    long long _requestTotalCount; // +0x20
    double _startTime; // +0x28
    double _endTime; // +0x30
}
- (unsigned long long)getRttMs;
- (BOOL)isUsingSimpleDns;
- (void)setIsUsingSimpleDns:(BOOL)arg1;
- (BOOL)isReqRedirect;
- (void)setIsReqRedirect:(BOOL)arg1;
- (BOOL)forceNoSimpleDns;
- (void)setForceNoSimpleDns:(BOOL)arg1;
- (unsigned long long)errorType;
- (void)setErrorType:(unsigned long long)arg1;
- (long long)tryIndex;
- (void)setTryIndex:(long long)arg1;
- (long long)requestTotalCount;
- (void)setRequestTotalCount:(long long)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)endTime;
- (void)setEndTime:(double)arg1;
@end
