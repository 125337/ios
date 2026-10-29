@interface QMCWeatherPrefetchEntry : NSObject
{
    BOOL _loading; // +0x8
    NSString * _key; // +0x10
    NSString * _cityKey; // +0x18
    NSDictionary * _params; // +0x20
    NSDictionary * _response; // +0x28
    NSString * _errorReason; // +0x30
    long long _statusCode; // +0x38
    double _startTime; // +0x40
    double _endTime; // +0x48
    NSMutableArray * _waiters; // +0x50
}
- (id)init;
- (id)key;
- (void)setKey:(id)arg1;
- (id)cityKey;
- (void)setCityKey:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)response;
- (void)setResponse:(id)arg1;
- (id)errorReason;
- (void)setErrorReason:(id)arg1;
- (long long)statusCode;
- (void)setStatusCode:(long long)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)endTime;
- (void)setEndTime:(double)arg1;
- (BOOL)loading;
- (void)setLoading:(BOOL)arg1;
- (id)waiters;
- (void)setWaiters:(id)arg1;
- (void).cxx_destruct;
@end
