@interface OMCEqualizerPeakingFilterParams : NSObject
{
    float _fc; // +0x8
    float _gain; // +0xc
    float _Q; // +0x10
}
- (id)init;
- (id)description;
- (float)fc;
- (void)setFc:(float)arg1;
- (float)gain;
- (void)setGain:(float)arg1;
- (float)Q;
- (void)setQ:(float)arg1;
@end
