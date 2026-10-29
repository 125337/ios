@interface TXCRetrier : NSObject
{
    long long _retryCount; // +0x8
    long long _limitCount; // +0x10
}
+ (id)retrierWithLimitCount:(long long)arg1;
- (void)retry:(id /* block */)arg1 onReachLimit:(id /* block */)arg2;
- (long long)retryCount;
- (void)setRetryCount:(long long)arg1;
- (long long)limitCount;
- (void)setLimitCount:(long long)arg1;
@end

