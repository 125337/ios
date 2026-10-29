@interface WxpayKitReportGateDecision : NSObject
{
    long long _action; // +0x8
    long long _denominator; // +0x10
    NSString * _reason; // +0x18
    long long _tier; // +0x20
}
+ (id)action:(long long)arg1 denominator:(long long)arg2 reason:(id)arg3 tier:(long long)arg4;
- (long long)action;
- (long long)denominator;
- (id)reason;
- (long long)tier;
- (void).cxx_destruct;
@end
