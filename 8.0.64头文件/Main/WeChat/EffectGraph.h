@interface EffectGraph : NSObject
{
    EffectContext _context; // +0x8
    EffectGraph<audiobase::fx::EffectGraphImplBeta> _betaGraph; // +0xa0
    EffectGraph<audiobase::fx::EffectGraphImplStable> _stabelGraph; // +0x1d0
    BOOL _isStable; // +0x2d0
    NSString * _currentEffectName; // +0x2d8
}
- (id)init;
- (id)initWithStableEnable:(BOOL)arg1;
- (BOOL)setEffectType:(unsigned long long)arg1 effectSpec:(id)arg2;
- (BOOL)loadEffectConfigParser:(id)arg1 effectSpec:(id)arg2;
- (BOOL)processWithBuffer:(char *)arg1 bufferLen:(unsigned long long *)arg2 stage:(unsigned long long)arg3;
- (void)reset;
- (BOOL)pluggedStageChanged:(BOOL)arg1;
- (BOOL)recordStageChanged:(unsigned long long)arg1;
- (BOOL)updateSliderWithIndex:(unsigned long long)arg1 value:(float)arg2;
- (BOOL)updateVolumeGainWithVocLoudness:(float)arg1 accLoudness:(float)arg2 plugged:(BOOL)arg3;
- (BOOL)updateVolumeGainWithVocLoudness:(float)arg1 accLoudness:(float)arg2 plugged:(BOOL)arg3 isMono:(BOOL)arg4;
- (BOOL)setVocalGainEnable:(BOOL)arg1;
- (BOOL)setAccompanyGainEnable:(BOOL)arg1;
- (BOOL)setBPM:(float)arg1;
- (float)latencyMs:(unsigned long long)arg1;
- (id)currentEffectName;
- (void)setCurrentEffectName:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
