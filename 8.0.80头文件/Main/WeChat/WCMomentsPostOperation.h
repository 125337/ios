@interface WCMomentsPostOperation : NSObject <NSCopying>
{
    BOOL _isSuccessful; // +0x8
    NSString * _compositionId; // +0x10
    long long _source; // +0x18
    long long _feedType; // +0x20
    double _startTime; // +0x28
    double _finishTime; // +0x30
    long long _failedCount; // +0x38
    NSError * _error; // +0x40
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)compositionId;
- (void)setCompositionId:(id)arg1;
- (long long)source;
- (void)setSource:(long long)arg1;
- (long long)feedType;
- (void)setFeedType:(long long)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)finishTime;
- (void)setFinishTime:(double)arg1;
- (BOOL)isSuccessful;
- (void)setIsSuccessful:(BOOL)arg1;
- (long long)failedCount;
- (void)setFailedCount:(long long)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (void).cxx_destruct;
@end
