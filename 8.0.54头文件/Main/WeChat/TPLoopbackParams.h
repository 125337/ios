@interface TPLoopbackParams : NSObject
{
    BOOL _isLoopback; // +0x8
    long long _startPositionMs; // +0x10
    long long _endPositionMs; // +0x18
}
+ (id)paramsWithIsLoopback:(BOOL)arg1 startPositionMs:(long long)arg2 endPositionMs:(long long)arg3;
- (BOOL)isLoopback;
- (void)setIsLoopback:(BOOL)arg1;
- (long long)startPositionMs;
- (void)setStartPositionMs:(long long)arg1;
- (long long)endPositionMs;
- (void)setEndPositionMs:(long long)arg1;
@end

