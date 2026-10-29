@interface TPReportStepInner : NSObject
{
    unsigned long long _step; // +0x8
    id <ITPReportParams> _stepParam; // +0x10
}
- (unsigned long long)step;
- (void)setStep:(unsigned long long)arg1;
- (id)stepParam;
- (void)setStepParam:(id)arg1;
- (void).cxx_destruct;
@end

