@interface WxpayFrameStallPolicy : NSObject
{
    unsigned long long _resetGeneration; // +0x8
    NSString * _pendingCause; // +0x10
    unsigned long long _reportedMaxUs; // +0x18
}
+ (unsigned long long)thresholdUsForTargetPeriodNs:(unsigned long long)arg1;
- (void)didResetWithGeneration:(unsigned long long)arg1 cause:(id)arg2;
- (unsigned long long)observeWindowResets:(unsigned long long)arg1 graceRemaining:(unsigned long long)arg2 graceTotalMaxUs:(unsigned long long)arg3 totalMaxUs:(unsigned long long)arg4 targetPeriodNs:(unsigned long long)arg5 firstFrameDetail:(id *)arg6;
- (void).cxx_destruct;
@end
