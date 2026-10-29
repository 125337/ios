@interface WCAdTwistActionResultModel : WCAdChannelReportExtendInfoModel
{
    int _result; // +0x8
    int _triggerByAcceleration; // +0xc
    double _failedMaxDegree; // +0x10
}
- (int)result;
- (void)setResult:(int)arg1;
- (int)triggerByAcceleration;
- (void)setTriggerByAcceleration:(int)arg1;
- (double)failedMaxDegree;
- (void)setFailedMaxDegree:(double)arg1;
@end

