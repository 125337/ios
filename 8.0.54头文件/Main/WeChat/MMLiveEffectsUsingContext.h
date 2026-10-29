@interface MMLiveEffectsUsingContext : NSObject
{
    MMLiveDecorationDataItem * _currentDecor; // +0x8
    unsigned long long _currentDecorUseTs; // +0x10
    MMLiveVisionEffectDataItem * _currentVisionEffect; // +0x18
    unsigned long long _currentVisionEffectUseTs; // +0x20
}
- (id)currentDecor;
- (void)setCurrentDecor:(id)arg1;
- (unsigned long long)currentDecorUseTs;
- (void)setCurrentDecorUseTs:(unsigned long long)arg1;
- (id)currentVisionEffect;
- (void)setCurrentVisionEffect:(id)arg1;
- (unsigned long long)currentVisionEffectUseTs;
- (void)setCurrentVisionEffectUseTs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

