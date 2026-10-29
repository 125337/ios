@interface SKBounceAnimation : CAKeyframeAnimation
{
    BOOL shouldOvershoot; // +0x14
    id fromValue; // +0x18
    id byValue; // +0x20
    id toValue; // +0x28
    unsigned long long numberOfBounces; // +0x30
}
+ (id)animationWithKeyPath:(id)arg1;
- (id)initWithKeyPath:(id)arg1;
- (void)setFromValue:(id)arg1;
- (id)fromValue;
- (void)setToValue:(id)arg1;
- (id)toValue;
- (void)setDuration:(double)arg1;
- (void)setNumberOfBounces:(unsigned long long)arg1;
- (unsigned long long)numberOfBounces;
- (void)setStiffness:(double)arg1;
- (double)stiffness;
- (void)setShouldOvershoot:(BOOL)arg1;
- (BOOL)shouldOvershoot;
- (void)setShake:(BOOL)arg1;
- (BOOL)shake;
- (void)createValueArray;
- (id)createRectArrayFromXValues:(id)arg1 yValues:(id)arg2 widths:(id)arg3 heights:(id)arg4;
- (id)createTransformArrayFromM11:(id)arg1 M12:(id)arg2 M13:(id)arg3 M14:(id)arg4 M21:(id)arg5 M22:(id)arg6 M23:(id)arg7 M24:(id)arg8 M31:(id)arg9 M32:(id)arg10 M33:(id)arg11 M34:(id)arg12 M41:(id)arg13 M42:(id)arg14 M43:(id)arg15 M44:(id)arg16;
- (id)createColorArrayFromRed:(id)arg1 green:(id)arg2 blue:(id)arg3 alpha:(id)arg4;
- (id)valueArrayForStartValue:(double)arg1 endValue:(double)arg2;
- (id)byValue;
- (void)setByValue:(id)arg1;
- (void).cxx_destruct;
@end
