@interface WCRecordFBSmallView : WCRecordFDView <CAAnimationDelegate>
{
    NSMutableArray * _arrPillarsA; // +0x8
    NSMutableArray * _arrPillarsB; // +0x10
}
- (void)initPillars;
- (void)configPillarsWithPeakPower:(float)arg1;
- (id)arrPillarsA;
- (void)setArrPillarsA:(id)arg1;
- (id)arrPillarsB;
- (void)setArrPillarsB:(id)arg1;
- (void).cxx_destruct;
@end
