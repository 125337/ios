@interface WAReportMiniGameNavigatePaymentTrace : WAReportBaseItem
{
    unsigned int _step; // +0x8
    unsigned int _paymentChannel; // +0xc
    unsigned int _navigateToPaymentDuration; // +0x10
    unsigned int _blockScene; // +0x14
    NSString * _traceId; // +0x18
    NSString * _sourceGameAppId; // +0x20
    NSString * _targetAppId; // +0x28
    NSString * _clickUrl; // +0x30
    NSString * _payResult; // +0x38
    NSString * _totalFeeString; // +0x40
    NSString * _miniGameName; // +0x48
}
+ (void)reportPaymentInitiationForTask:(id)arg1 paymentChannel:(unsigned int)arg2;
+ (id)navigatePaymentTraceIdForTask:(id)arg1;
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (id)safeReportString:(id)arg1;
- (unsigned int)step;
- (void)setStep:(unsigned int)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)sourceGameAppId;
- (void)setSourceGameAppId:(id)arg1;
- (id)targetAppId;
- (void)setTargetAppId:(id)arg1;
- (unsigned int)paymentChannel;
- (void)setPaymentChannel:(unsigned int)arg1;
- (unsigned int)navigateToPaymentDuration;
- (void)setNavigateToPaymentDuration:(unsigned int)arg1;
- (id)clickUrl;
- (void)setClickUrl:(id)arg1;
- (id)payResult;
- (void)setPayResult:(id)arg1;
- (id)totalFeeString;
- (void)setTotalFeeString:(id)arg1;
- (unsigned int)blockScene;
- (void)setBlockScene:(unsigned int)arg1;
- (id)miniGameName;
- (void)setMiniGameName:(id)arg1;
- (void).cxx_destruct;
@end
