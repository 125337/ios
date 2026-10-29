@interface WCPayPayResponseRetryInfo : NSObject
{
    long long _retry_interval; // +0x8
    long long _max_retry_count; // +0x10
    NSString * _retry_fail_wording; // +0x18
}
+ (id)GenFromDictionary:(id)arg1;
- (void)genFromDic:(id)arg1;
- (long long)retry_interval;
- (void)setRetry_interval:(long long)arg1;
- (long long)max_retry_count;
- (void)setMax_retry_count:(long long)arg1;
- (id)retry_fail_wording;
- (void)setRetry_fail_wording:(id)arg1;
- (void).cxx_destruct;
@end

