@interface WCCoinLogger : NSObject
{
    unsigned long long _businessId; // +0x8
    NSString * _buyTingVipSession; // +0x10
    NSString * __reportSessionId; // +0x18
}
+ (void)reportIDKey:(unsigned int)arg1;
+ (void)reportKVKey:(unsigned int)arg1;
+ (void)reportBuyCoinSuccessCostTime:(unsigned long long)arg1;
+ (void)reportBuyCoinSuccess;
+ (void)setupCoinViewReport:(id)arg1;
+ (void)setupConsumeButtonReport:(id)arg1;
+ (void)setupConsumeTipsReport:(id)arg1;
+ (void)setupConsumeHelpReport:(id)arg1;
+ (void)setupConsumeDetaiViewReport:(id)arg1;
- (id)getReportSessionId;
- (void)genReportSessionId;
- (unsigned long long)businessId;
- (void)setBusinessId:(unsigned long long)arg1;
- (id)buyTingVipSession;
- (void)setBuyTingVipSession:(id)arg1;
- (id)_reportSessionId;
- (void)set_reportSessionId:(id)arg1;
- (void).cxx_destruct;
@end

