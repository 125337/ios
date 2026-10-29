@interface POPPropertyAnimation : POPAnimation
- (id)copyWithZone:(_NSZone *)arg1;
- (void)_initState;
- (BOOL)isAdditive;
- (void)setAdditive:(BOOL)arg1;
- (double)roundingFactor;
- (void)setRoundingFactor:(double)arg1;
- (unsigned long long)clampMode;
- (void)setClampMode:(unsigned long long)arg1;
- (id)property;
- (void)setProperty:(id)arg1;
- (id)progressMarkers;
- (void)setProgressMarkers:(id)arg1;
- (id)fromValue;
- (void)setFromValue:(id)arg1;
- (id)toValue;
- (void)setToValue:(id)arg1;
- (id)currentValue;
- (void)_appendDescription:(id)arg1 debug:(BOOL)arg2;
@end
