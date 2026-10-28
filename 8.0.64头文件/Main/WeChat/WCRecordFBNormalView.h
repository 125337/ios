@interface WCRecordFBNormalView : WCRecordFDView <CAAnimationDelegate>
{
    NSMutableArray * _arrPillarsA; // +0x8
    NSMutableArray * _arrPillarsB; // +0x10
    NSMutableArray * _arrPillarsC; // +0x18
    NSMutableArray * _arrPillarsD; // +0x20
    NSMutableArray * _arrPillarsE; // +0x28
}
- (void)initPillars;
- (void)configPillarsWithPeakPower:(float)arg1;
- (void)configBorderPillarsWithPeakPower:(float)arg1;
- (void)configCenterPillarsWithPeakPower:(float)arg1;
- (id)arrPillarsA;
- (void)setArrPillarsA:(id)arg1;
- (id)arrPillarsB;
- (void)setArrPillarsB:(id)arg1;
- (id)arrPillarsC;
- (void)setArrPillarsC:(id)arg1;
- (id)arrPillarsD;
- (void)setArrPillarsD:(id)arg1;
- (id)arrPillarsE;
- (void)setArrPillarsE:(id)arg1;
- (void).cxx_destruct;
@end
