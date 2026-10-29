@interface MMLiveBlurPerfStatisticResult : MMLiveUIPerfStatisticResult
{
    double _sumComposeArea; // +0x8
    double _sumComposeAreaPercent; // +0x10
}
- (void)addBlurPerfRecord:(id)arg1;
- (double)sumComposeArea;
- (void)setSumComposeArea:(double)arg1;
- (double)sumComposeAreaPercent;
- (void)setSumComposeAreaPercent:(double)arg1;
@end
