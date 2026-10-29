@interface WCPayVerifyCreTailInfo : NSObject
{
    long long _is_can_verify_tail; // +0x8
    NSString * _verify_tail_wording; // +0x10
}
+ (id)GenFromDictionary:(id)arg1;
- (void)genFromDic:(id)arg1;
- (long long)is_can_verify_tail;
- (void)setIs_can_verify_tail:(long long)arg1;
- (id)verify_tail_wording;
- (void)setVerify_tail_wording:(id)arg1;
- (void).cxx_destruct;
@end
