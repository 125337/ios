@interface TPStrategyContext : NSObject
{
    long long _playerType; // +0x8
    long long _errorType; // +0x10
}
+ (id)contextWithPlayerType:(long long)arg1 errorType:(long long)arg2;
- (long long)playerType;
- (void)setPlayerType:(long long)arg1;
- (long long)errorType;
- (void)setErrorType:(long long)arg1;
@end
