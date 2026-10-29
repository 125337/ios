@interface TXCBeautifyFilter : TXCVideoBindableObject
{
    BOOL _enableSharpnessEnhancement; // +0x8
    float _beautyLevel; // +0xc
    float _whitenessLevel; // +0x10
    float _ruddinessLevel; // +0x14
    unsigned long long _beautyStyle; // +0x18
    TXCBeautifyBaseFilter * _beautifyFilterImpl; // +0x20
    id <TXIGlContext> _glContext; // +0x28
}
- (id)initWithContext:(id)arg1;
- (BOOL)isEnabled;
- (void)applyPramas;
- (void)updateBeautifyImplIfNeeded;
- (void)setBeautyLevel:(float)arg1;
- (void)setWhitenessLevel:(float)arg1;
- (void)setRuddinessLevel:(float)arg1;
- (void)setEnableSharpnessEnhancement:(BOOL)arg1;
- (void)processVideoFrame:(id)arg1 onComplete:(id /* block */)arg2;
- (unsigned long long)beautyStyle;
- (void)setBeautyStyle:(unsigned long long)arg1;
- (float)beautyLevel;
- (float)whitenessLevel;
- (float)ruddinessLevel;
- (BOOL)enableSharpnessEnhancement;
- (id)beautifyFilterImpl;
- (void)setBeautifyFilterImpl:(id)arg1;
- (id)glContext;
- (void).cxx_destruct;
@end

