@interface WCPayAuthenRequestRetryInfo : NSObject
{
    long long _retry_count; // +0x8
    long long _is_last_retry; // +0x10
}
- (long long)retry_count;
- (void)setRetry_count:(long long)arg1;
- (long long)is_last_retry;
- (void)setIs_last_retry:(long long)arg1;
@end

