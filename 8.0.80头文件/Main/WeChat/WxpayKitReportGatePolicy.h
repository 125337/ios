@interface WxpayKitReportGatePolicy : NSObject <NSCopying>
{
    long long _detailDenominator; // +0x8
    long long _baselineModulus; // +0x10
    long long _ringCapacity; // +0x18
    NSSet * _successCodes; // +0x20
    NSDictionary * _slowMs; // +0x28
}
+ (id)defaultPolicy;
- (id)copyWithZone:(_NSZone *)arg1;
- (long long)detailDenominator;
- (void)setDetailDenominator:(long long)arg1;
- (long long)baselineModulus;
- (void)setBaselineModulus:(long long)arg1;
- (long long)ringCapacity;
- (void)setRingCapacity:(long long)arg1;
- (id)successCodes;
- (void)setSuccessCodes:(id)arg1;
- (id)slowMs;
- (void)setSlowMs:(id)arg1;
- (void).cxx_destruct;
@end
